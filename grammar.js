module.exports = grammar({
  name: 'fuior',

  extras: $ => [
    $.comment,
    /[ \t\r\f\v]/, // \s without \n
  ],

  rules: {
    source_file: $ => seq(
      repeat($._statement),
      optional($.return_statement),
    ),

    comment: $ => /\#[^\n]*/,

    _endl: $ => /\n/,
    _statement: $ => choice(
      $._endl,
      $.if_statement,
      $.choose_statement,
      $.assign_statement,
      $.command_statement,
      $.text_statement,
      $.declare_command_statement,
      $.define_command_statement,
      $.declare_var_statement,
    ),

    if_statement: $ => seq(
      'if',
      field('condition', $.condition),
      $.if_clause,
      repeat($.elseif_clause),
      optional($.else_clause),
      'end',
      $._endl,
    ),
    condition: $ => $._expression,
    if_clause: $ => $.block,
    elseif_clause: $ => seq('elseif', $.condition, $.block),
    else_clause: $ => seq('else', $.block),

    choose_statement: $ => seq(
      'choose',
      $._endl,
      repeat1($.choice),
      'end',
      $._endl,
    ),
    choice: $ => seq(
      '*',
      choice(
        seq(
          token(prec(2, '[')), 
          field('condition', $.choice_condition), 
          ']', 
          field('copy', $.text_copy)
        ),
        field('copy', $.text_copy),
      ),
      optional(seq($._endl, field('meta', $.choice_meta))),
      $.block,
    ),
    choice_meta: $ => seq('meta', field('block', $.block), 'end'),
    choice_condition: $ => $._expression,

    assign_statement: $ => seq(
      field('lvalue', alias($.identifier, $.assign_lvalue)),
      field('operator', $.assign_operator),
      field('rvalue', $.assign_rvalue),
    ),
    assign_operator: $ => choice('+', '-', '='),
    assign_rvalue: $ => $._expression,

    return_statement: $ => seq(
      'return',
      optional(field('return_value', alias($._expression, $.return_value))),
      $._endl,
    ),

    block: $ => seq(
      $._endl,
      repeat($._statement),
      optional($.return_statement),
    ),

    vararg_definition: $ => seq(
      '...',
      optional(
        seq(
          ':',
          field('type', alias($._type_expression, $.arg_type)),
        ),
      ),
    ),

    arg_definition: $ => seq(
      field('name', alias($.identifier, $.arg_name)),
      optional(
        seq(
          ':',
          field('type', alias($._type_expression, $.arg_type)),
        ),
      ),
    ),

    arg_definition_list: $ => seq(
      '(',
      optional(
        choice(
          field('vararg', $.vararg_definition),
          seq(
            $.arg_definition,
            repeat(seq(',', $.arg_definition)),
            optional(seq(',', field('vararg', $.vararg_definition))),
          ),
        ),
      ),
      ')',
    ),

    command_signature: $ => seq(
      field('name', alias($.identifier, $.command_name)),
      field('arguments', $.arg_definition_list),
      optional(seq(
        ':',
        field('return_type', alias($._type_expression, $.return_type))
      ))
    ),

    declare_command_statement: $ => seq(
      'declare',
      'command',
      field('signature', $.command_signature),
      $._endl,
    ),

    define_command_statement: $ => seq(
      'command',
      field('signature', $.command_signature),
      field('body', $.block),
      'end',
      $._endl,
    ),

    arg_list: $ => seq('(', optional(seq(
      $._expression,
      repeat(seq(
        ',',
        $._expression,
      )),
    )), ')'),

    declare_var_decorator: $ => seq(
      '@',
      field('name', alias($.identifier, $.decorator_name)),
      optional(field('arg_list', $.arg_list)),
    ),

    declare_var_statement: $ => seq(
      'var',
      field('name', alias($.identifier, $.var_name)),
      optional(seq(
        ':',
        field('type', alias($._type_expression, $.var_type)),
      )),
      repeat($.declare_var_decorator),
      optional(seq(
        '=',
        field('default_value', alias($._expression, $.var_default_value))
      )),
      $._endl,
    ),

    command_statement: $ => seq(
      field('verb', alias($.identifier, $.command_verb)),
      repeat($.command_arg),
      $._endl,
    ),
    command_arg: $ => choice(
      $._literal,
      $.bare_word,
      seq('{', $._expression, '}'),
    ),
    bare_word: $ => token(prec(-1, /[^\s]+/)),

    text_statement: $ => seq(
      field('actor', alias($.identifier, $.text_actor)),
      ':',
      choice(
        seq(
          token(prec(2, '[')),
          field('animation', alias($.identifier, $.text_animation)),
          ']',
          field('copy', $.text_copy),
        ),
        field('copy', $.text_copy),
      ),
      $._endl
    ),
    string_interpolation: $ => seq('${', field('value', $._expression), '}'),
    _string_interpolation_immediate: $ => seq(token.immediate('${'), field('value', $._expression), '}'),
    text_copy: $ => seq(
      choice(
        $.string_interpolation,
        /[^$\r\n\s]+/,
        '$',
      ),
      repeat(
        seq(
          optional(token.immediate(/[ \t\r\f\v]+/)),
          choice(
            alias($._string_interpolation_immediate, $.string_interpolation),
            token.immediate(/[^$\r\n\s]+/),
            token.immediate('$'),
          ),
        )
      ),
    ),

    _type_expression: $ => choice(
      $.string,
      $.number,
      $.boolean,
      alias($.identifier, $.type_identifier),
      $.binary_type_expression,
      $.unary_type_expression,
      $.paran_type_expression,
    ),

    unary_type_expression: $ => prec(10, choice(
      seq('?', $._type_expression),
    )),

    binary_type_expression: $ => choice(
      prec.left(5, seq($._type_expression, '|', $._type_expression)),
      prec.left(5, seq($._type_expression, '&', $._type_expression)),
    ),

    paran_type_expression: $ => seq('(', $._type_expression, ')'),

    _expression: $ => choice(
      $.identifier,
      $.function_call,
      $._literal,
      $.unary_expression,
      $.binary_expression,
      $.paran_expression,
    ),

    _literal: $ => choice(
      $.number,
      $.intl_string,
      $.string,
      $.boolean,
    ),

    function_call: $ => seq(
      field('name', $.identifier),
      field('arg_list', $.arg_list),
    ),

    unary_expression: $ => prec(10, choice(
      seq('-', $._expression),
      seq('not', $._expression),
    )),

    binary_expression: $ => choice(
      prec.left(5, seq($._expression, '*', $._expression)),
      prec.left(5, seq($._expression, '/', $._expression)),
      prec.left(4, seq($._expression, '+', $._expression)),
      prec.left(4, seq($._expression, '-', $._expression)),
      prec.left(3, seq($._expression, '<', $._expression)),
      prec.left(3, seq($._expression, '>', $._expression)),
      prec.left(3, seq($._expression, '>=', $._expression)),
      prec.left(3, seq($._expression, '<=', $._expression)),
      prec.left(3, seq($._expression, '=', $._expression)),
      prec.left(3, seq($._expression, '!=', $._expression)),
      prec.left(2, seq($._expression, 'and', $._expression)),
      prec.left(1, seq($._expression, 'or', $._expression)),
    ),

    paran_expression: $ => seq('(', $._expression, ')'),

    identifier: $ => /[a-z_][a-z0-9_]*/,
    number: $ => /[0-9]+(\.[0-9]+)?/,
    string: $ => /"[^"]*"/,
    boolean: $ => choice('true', 'false'),

    intl_string: $ => seq(
      'i"',
      repeat(choice(
        alias($._string_interpolation_immediate, $.string_interpolation),
        token.immediate(/[^"$]+/),
        token.immediate('$'),
      )),
      '"',
    ),
  }
});
