module.exports = grammar({
  name: 'fuior',

  extras: $ => [
    $.comment,
    /[ \t\r\f\v]/, // \s without \n
  ],

  rules: {
    source_file: $ => repeat($._statement),

    comment: $ => /\#[^\n]*/,

    _endl: $ => /\n/,
    _statement: $ => choice(
      $._endl,
      $.if_statement,
      $.choose_statement,
      $.stat_operation,
      $.command,
      $.show_text,
    ),

    if_statement: $ => seq(
      'if',
      $.condition,
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
      $.text_copy,
      $.block,
    ),

    stat_operation: $ => seq(
      alias($.identifier, $.stat_lvalue),
      $.stat_operator,
      $.stat_rvalue,
    ),
    stat_operator: $ => choice('+', '-', '='),
    stat_rvalue: $ => $._expression,

    block: $ => seq(
      $._endl,
      repeat($._statement),
    ),

    command: $ => seq(
      alias($.identifier, $.command_verb),
      repeat($.command_arg),
      $._endl,
    ),
    command_arg: $ => choice(
      $._constant,
      $.bare_word,
      seq('{', $._expression, '}'),
    ),
    bare_word: $ => token(prec(-1, /[^\s]+/)),

    show_text: $ => seq(
      alias($.identifier, $.text_actor),
      ':',
      choice(
        seq(token(prec(2, '[')), alias($.identifier, $.text_animation), ']', $.text_copy),
        $.text_copy,
      ),
      $._endl
    ),
    text_copy: $ => /[^\r\n]+/,

    _expression: $ => choice(
      $.identifier,
      $._constant,
      $.unary_expression,
      $.binary_expression,
      $.paran_expression,
    ),

    _constant: $ => choice(
      $.number,
      $.string,
      $.boolean,
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
  }
});