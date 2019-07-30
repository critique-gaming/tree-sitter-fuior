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
      $.expression,
      $.if_clause,
      repeat($.elseif_clause),
      optional($.else_clause),
      'end',
      $._endl,
    ),
    if_clause: $ => $.block,
    elseif_clause: $ => seq('elseif', $.expression, $.block),
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
      $.identifier,
      $.stat_operand,
      $.expression,
    ),
    stat_operand: $ => choice('+', '-', '='),

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
      $.string,
      $.number,
      $.bare_word,
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

    expression: $ => choice(
      $.identifier,
      $.number,
      $.string,
    ),

    identifier: $ => /[a-z_][a-z0-9_]*/,
    number: $ => /[0-9]+(\.[0-9]+)?/,
    string: $ => /"[^"]*"/,
  }
});