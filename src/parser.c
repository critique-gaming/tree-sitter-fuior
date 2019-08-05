#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 190
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 4
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  sym_comment = 1,
  sym__endl = 2,
  anon_sym_if = 3,
  anon_sym_end = 4,
  anon_sym_elseif = 5,
  anon_sym_else = 6,
  anon_sym_choose = 7,
  anon_sym_STAR = 8,
  anon_sym_PLUS = 9,
  anon_sym_DASH = 10,
  anon_sym_EQ = 11,
  anon_sym_LBRACE = 12,
  anon_sym_RBRACE = 13,
  sym_bare_word = 14,
  anon_sym_COLON = 15,
  anon_sym_LBRACK = 16,
  anon_sym_RBRACK = 17,
  sym_text_copy = 18,
  anon_sym_not = 19,
  anon_sym_SLASH = 20,
  anon_sym_LT = 21,
  anon_sym_GT = 22,
  anon_sym_GT_EQ = 23,
  anon_sym_LT_EQ = 24,
  anon_sym_BANG_EQ = 25,
  anon_sym_and = 26,
  anon_sym_or = 27,
  anon_sym_LPAREN = 28,
  anon_sym_RPAREN = 29,
  sym_identifier = 30,
  sym_number = 31,
  sym_string = 32,
  anon_sym_true = 33,
  anon_sym_false = 34,
  sym_source_file = 35,
  sym__statement = 36,
  sym_if_statement = 37,
  sym_condition = 38,
  sym_if_clause = 39,
  sym_elseif_clause = 40,
  sym_else_clause = 41,
  sym_choose_statement = 42,
  sym_choice = 43,
  sym_stat_operation = 44,
  sym_stat_operator = 45,
  sym_stat_rvalue = 46,
  sym_block = 47,
  sym_command = 48,
  sym_command_arg = 49,
  sym_show_text = 50,
  sym__expression = 51,
  sym__constant = 52,
  sym_unary_expression = 53,
  sym_binary_expression = 54,
  sym_paran_expression = 55,
  sym_boolean = 56,
  aux_sym_source_file_repeat1 = 57,
  aux_sym_if_statement_repeat1 = 58,
  aux_sym_choose_statement_repeat1 = 59,
  aux_sym_command_repeat1 = 60,
  alias_sym_text_animation = 61,
  alias_sym_stat_lvalue = 62,
  alias_sym_command_verb = 63,
  alias_sym_text_actor = 64,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym__endl] = "_endl",
  [anon_sym_if] = "if",
  [anon_sym_end] = "end",
  [anon_sym_elseif] = "elseif",
  [anon_sym_else] = "else",
  [anon_sym_choose] = "choose",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_bare_word] = "bare_word",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_text_copy] = "text_copy",
  [anon_sym_not] = "not",
  [anon_sym_SLASH] = "/",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_string] = "string",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_if_statement] = "if_statement",
  [sym_condition] = "condition",
  [sym_if_clause] = "if_clause",
  [sym_elseif_clause] = "elseif_clause",
  [sym_else_clause] = "else_clause",
  [sym_choose_statement] = "choose_statement",
  [sym_choice] = "choice",
  [sym_stat_operation] = "stat_operation",
  [sym_stat_operator] = "stat_operator",
  [sym_stat_rvalue] = "stat_rvalue",
  [sym_block] = "block",
  [sym_command] = "command",
  [sym_command_arg] = "command_arg",
  [sym_show_text] = "show_text",
  [sym__expression] = "_expression",
  [sym__constant] = "_constant",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_paran_expression] = "paran_expression",
  [sym_boolean] = "boolean",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
  [aux_sym_choose_statement_repeat1] = "choose_statement_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [alias_sym_text_animation] = "text_animation",
  [alias_sym_stat_lvalue] = "stat_lvalue",
  [alias_sym_command_verb] = "command_verb",
  [alias_sym_text_actor] = "text_actor",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__endl] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elseif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_choose] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_bare_word] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_text_copy] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_if_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_elseif_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_else_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_choose_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_choice] = {
    .visible = true,
    .named = true,
  },
  [sym_stat_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_stat_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_stat_rvalue] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_command_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_show_text] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__constant] = {
    .visible = false,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_paran_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_choose_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_text_animation] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_stat_lvalue] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_command_verb] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_text_actor] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[5][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = alias_sym_command_verb,
  },
  [2] = {
    [0] = alias_sym_stat_lvalue,
  },
  [3] = {
    [0] = alias_sym_text_actor,
  },
  [4] = {
    [0] = alias_sym_text_actor,
    [3] = alias_sym_text_animation,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(25);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '+') ADVANCE(39);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == '<') ADVANCE(64);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == ']') ADVANCE(58);
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead == 'c') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == 'f') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(92);
      if (lookahead == 't') ADVANCE(93);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '}') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(25);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '+') ADVANCE(39);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '<') ADVANCE(64);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead == 'c') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(92);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(25);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(82);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '+') ADVANCE(39);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '<') ADVANCE(64);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == '}') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '+') ADVANCE(39);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '<') ADVANCE(64);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead == 'c') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(92);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '+') ADVANCE(39);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '<') ADVANCE(64);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead == 'c') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(92);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '+') ADVANCE(39);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == 'f') ADVANCE(47);
      if (lookahead == 't') ADVANCE(51);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(47);
      if (lookahead == 't') ADVANCE(51);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(45);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == 'c') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(82);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == 'i') ADVANCE(82);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 10:
      if (lookahead == '\r') SKIP(10)
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '' ||
          lookahead == '' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 11:
      if (lookahead == '\r') SKIP(11)
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '' ||
          lookahead == '' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == 'f') ADVANCE(75);
      if (lookahead == 'n') ADVANCE(89);
      if (lookahead == 't') ADVANCE(93);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(103);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(68);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(33);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(23);
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__endl);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_choose);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_bare_word);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '+') ADVANCE(39);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == 'f') ADVANCE(47);
      if (lookahead == 't') ADVANCE(51);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_bare_word);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(47);
      if (lookahead == 't') ADVANCE(51);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(45);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_bare_word);
      if (lookahead == '"') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_bare_word);
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(55);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_bare_word);
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(55);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_bare_word);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(55);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_bare_word);
      if (lookahead == 'l') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(55);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_bare_word);
      if (lookahead == 'r') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(55);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_bare_word);
      if (lookahead == 's') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(55);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_bare_word);
      if (lookahead == 'u') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(55);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_bare_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_bare_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_text_copy);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '' ||
          lookahead == '' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(61);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_text_copy);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '' ||
          lookahead == '' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_text_copy);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(67);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead == 'n') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 12},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 12},
  [36] = {.lex_state = 12},
  [37] = {.lex_state = 12},
  [38] = {.lex_state = 12},
  [39] = {.lex_state = 12},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 12},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 9},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 12},
  [82] = {.lex_state = 12},
  [83] = {.lex_state = 12},
  [84] = {.lex_state = 12},
  [85] = {.lex_state = 12},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 9},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 9},
  [98] = {.lex_state = 9},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 8},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 12},
  [107] = {.lex_state = 12},
  [108] = {.lex_state = 12},
  [109] = {.lex_state = 12},
  [110] = {.lex_state = 12},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 8},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 8},
  [122] = {.lex_state = 8},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 12},
  [126] = {.lex_state = 12},
  [127] = {.lex_state = 12},
  [128] = {.lex_state = 12},
  [129] = {.lex_state = 12},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 12},
  [140] = {.lex_state = 12},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 6},
  [149] = {.lex_state = 7},
  [150] = {.lex_state = 12},
  [151] = {.lex_state = 12},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 3},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 12},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 10},
  [162] = {.lex_state = 12},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 11},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 10},
  [170] = {.lex_state = 12},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 3},
  [175] = {.lex_state = 11},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 12},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 12},
  [186] = {.lex_state = 14},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 12},
  [189] = {.lex_state = 14},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_elseif] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym__endl] = ACTIONS(1),
    [anon_sym_choose] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_stat_operation] = STATE(6),
    [sym_show_text] = STATE(6),
    [sym_source_file] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(6),
    [sym__statement] = STATE(6),
    [sym_if_statement] = STATE(6),
    [sym_choose_statement] = STATE(6),
    [sym_command] = STATE(6),
    [sym__endl] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_choose] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(13),
  },
  [2] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(15),
  },
  [3] = {
    [sym_command_arg] = STATE(14),
    [aux_sym_command_repeat1] = STATE(14),
    [sym__constant] = STATE(13),
    [sym_stat_operator] = STATE(15),
    [sym_boolean] = STATE(13),
    [anon_sym_DASH] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [anon_sym_COLON] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [sym_comment] = ACTIONS(25),
    [anon_sym_EQ] = ACTIONS(17),
    [sym_string] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(23),
    [sym__endl] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(17),
    [sym_bare_word] = ACTIONS(19),
  },
  [4] = {
    [sym_binary_expression] = STATE(19),
    [sym_paran_expression] = STATE(19),
    [sym__constant] = STATE(19),
    [sym_unary_expression] = STATE(19),
    [sym_condition] = STATE(18),
    [sym__expression] = STATE(19),
    [sym_boolean] = STATE(19),
    [anon_sym_DASH] = ACTIONS(31),
    [sym_number] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_identifier] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
  },
  [5] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(43),
  },
  [6] = {
    [aux_sym_source_file_repeat1] = STATE(20),
    [sym_command] = STATE(20),
    [sym_stat_operation] = STATE(20),
    [sym__statement] = STATE(20),
    [sym_if_statement] = STATE(20),
    [sym_choose_statement] = STATE(20),
    [sym_show_text] = STATE(20),
    [sym__endl] = ACTIONS(45),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_choose] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(13),
  },
  [7] = {
    [sym_choice] = STATE(22),
    [aux_sym_choose_statement_repeat1] = STATE(22),
    [sym_comment] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(49),
  },
  [8] = {
    [anon_sym_DASH] = ACTIONS(51),
    [sym_number] = ACTIONS(51),
    [anon_sym_true] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(51),
    [sym_identifier] = ACTIONS(53),
    [anon_sym_not] = ACTIONS(53),
  },
  [9] = {
    [sym_comment] = ACTIONS(25),
    [sym_text_copy] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
  },
  [10] = {
    [sym_number] = ACTIONS(59),
    [anon_sym_true] = ACTIONS(59),
    [sym_comment] = ACTIONS(25),
    [sym_string] = ACTIONS(59),
    [sym__endl] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_bare_word] = ACTIONS(59),
  },
  [11] = {
    [sym__endl] = ACTIONS(61),
    [anon_sym_choose] = ACTIONS(63),
    [ts_builtin_sym_end] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(63),
    [anon_sym_if] = ACTIONS(63),
  },
  [12] = {
    [sym_binary_expression] = STATE(25),
    [sym_paran_expression] = STATE(25),
    [sym__constant] = STATE(25),
    [sym_unary_expression] = STATE(25),
    [sym__expression] = STATE(25),
    [sym_boolean] = STATE(25),
    [anon_sym_DASH] = ACTIONS(31),
    [sym_number] = ACTIONS(65),
    [anon_sym_true] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(65),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_identifier] = ACTIONS(67),
    [anon_sym_not] = ACTIONS(41),
  },
  [13] = {
    [sym_number] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(69),
    [sym_comment] = ACTIONS(25),
    [sym_string] = ACTIONS(69),
    [sym__endl] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(69),
    [sym_bare_word] = ACTIONS(69),
  },
  [14] = {
    [sym_command_arg] = STATE(27),
    [aux_sym_command_repeat1] = STATE(27),
    [sym__constant] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_number] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(23),
    [sym_comment] = ACTIONS(25),
    [sym_string] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(23),
    [sym__endl] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(29),
    [sym_bare_word] = ACTIONS(19),
  },
  [15] = {
    [sym_binary_expression] = STATE(29),
    [sym_paran_expression] = STATE(29),
    [sym__constant] = STATE(29),
    [sym_unary_expression] = STATE(29),
    [sym_stat_rvalue] = STATE(28),
    [sym__expression] = STATE(29),
    [sym_boolean] = STATE(29),
    [anon_sym_DASH] = ACTIONS(73),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(75),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [sym_identifier] = ACTIONS(81),
    [anon_sym_not] = ACTIONS(83),
  },
  [16] = {
    [sym_binary_expression] = STATE(30),
    [sym_paran_expression] = STATE(30),
    [sym__expression] = STATE(30),
    [sym_boolean] = STATE(30),
    [sym__constant] = STATE(30),
    [sym_unary_expression] = STATE(30),
    [anon_sym_DASH] = ACTIONS(31),
    [sym_number] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(85),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_identifier] = ACTIONS(87),
    [anon_sym_not] = ACTIONS(41),
  },
  [17] = {
    [sym_binary_expression] = STATE(31),
    [sym_paran_expression] = STATE(31),
    [sym__expression] = STATE(31),
    [sym_boolean] = STATE(31),
    [sym__constant] = STATE(31),
    [sym_unary_expression] = STATE(31),
    [anon_sym_DASH] = ACTIONS(31),
    [sym_number] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(89),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_identifier] = ACTIONS(91),
    [anon_sym_not] = ACTIONS(41),
  },
  [18] = {
    [sym_block] = STATE(33),
    [sym_if_clause] = STATE(34),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(93),
  },
  [19] = {
    [anon_sym_LT] = ACTIONS(95),
    [anon_sym_and] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(99),
    [anon_sym_SLASH] = ACTIONS(101),
    [anon_sym_LT_EQ] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(95),
    [anon_sym_or] = ACTIONS(105),
    [anon_sym_EQ] = ACTIONS(103),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(107),
    [anon_sym_GT_EQ] = ACTIONS(103),
    [anon_sym_BANG_EQ] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(99),
    [anon_sym_STAR] = ACTIONS(101),
  },
  [20] = {
    [aux_sym_source_file_repeat1] = STATE(20),
    [sym_command] = STATE(20),
    [sym_stat_operation] = STATE(20),
    [sym__statement] = STATE(20),
    [sym_if_statement] = STATE(20),
    [sym_choose_statement] = STATE(20),
    [sym_show_text] = STATE(20),
    [sym__endl] = ACTIONS(109),
    [anon_sym_choose] = ACTIONS(112),
    [ts_builtin_sym_end] = ACTIONS(115),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(117),
    [anon_sym_if] = ACTIONS(120),
  },
  [21] = {
    [sym_comment] = ACTIONS(25),
    [sym_text_copy] = ACTIONS(123),
  },
  [22] = {
    [sym_choice] = STATE(42),
    [aux_sym_choose_statement_repeat1] = STATE(42),
    [anon_sym_STAR] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(125),
  },
  [23] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(127),
  },
  [24] = {
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(129),
  },
  [25] = {
    [anon_sym_LT] = ACTIONS(95),
    [anon_sym_and] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(99),
    [anon_sym_SLASH] = ACTIONS(101),
    [anon_sym_LT_EQ] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(95),
    [anon_sym_or] = ACTIONS(105),
    [anon_sym_EQ] = ACTIONS(103),
    [anon_sym_RBRACE] = ACTIONS(131),
    [sym_comment] = ACTIONS(3),
    [anon_sym_GT_EQ] = ACTIONS(103),
    [anon_sym_BANG_EQ] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(99),
    [anon_sym_STAR] = ACTIONS(101),
  },
  [26] = {
    [sym__endl] = ACTIONS(133),
    [anon_sym_choose] = ACTIONS(135),
    [ts_builtin_sym_end] = ACTIONS(133),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(135),
    [anon_sym_if] = ACTIONS(135),
  },
  [27] = {
    [sym_command_arg] = STATE(27),
    [aux_sym_command_repeat1] = STATE(27),
    [sym__constant] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_number] = ACTIONS(137),
    [anon_sym_true] = ACTIONS(140),
    [sym_comment] = ACTIONS(25),
    [sym_string] = ACTIONS(137),
    [sym__endl] = ACTIONS(143),
    [anon_sym_false] = ACTIONS(140),
    [anon_sym_LBRACE] = ACTIONS(145),
    [sym_bare_word] = ACTIONS(137),
  },
  [28] = {
    [sym__endl] = ACTIONS(148),
    [anon_sym_choose] = ACTIONS(150),
    [ts_builtin_sym_end] = ACTIONS(148),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(150),
    [anon_sym_if] = ACTIONS(150),
  },
  [29] = {
    [anon_sym_LT] = ACTIONS(152),
    [anon_sym_DASH] = ACTIONS(154),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(156),
    [anon_sym_GT_EQ] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(154),
    [anon_sym_if] = ACTIONS(160),
    [anon_sym_STAR] = ACTIONS(162),
    [anon_sym_and] = ACTIONS(164),
    [ts_builtin_sym_end] = ACTIONS(166),
    [anon_sym_SLASH] = ACTIONS(162),
    [anon_sym_GT] = ACTIONS(152),
    [anon_sym_EQ] = ACTIONS(158),
    [sym__endl] = ACTIONS(166),
    [anon_sym_choose] = ACTIONS(160),
    [anon_sym_BANG_EQ] = ACTIONS(158),
    [sym_identifier] = ACTIONS(160),
    [anon_sym_LT_EQ] = ACTIONS(158),
  },
  [30] = {
    [anon_sym_LT] = ACTIONS(168),
    [anon_sym_DASH] = ACTIONS(170),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(170),
    [anon_sym_RPAREN] = ACTIONS(170),
    [anon_sym_GT_EQ] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_and] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(168),
    [anon_sym_EQ] = ACTIONS(170),
    [anon_sym_RBRACE] = ACTIONS(170),
    [sym__endl] = ACTIONS(170),
    [anon_sym_BANG_EQ] = ACTIONS(170),
    [anon_sym_LT_EQ] = ACTIONS(170),
  },
  [31] = {
    [anon_sym_LT] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(105),
    [anon_sym_RPAREN] = ACTIONS(172),
    [anon_sym_GT_EQ] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(99),
    [anon_sym_STAR] = ACTIONS(101),
    [anon_sym_and] = ACTIONS(97),
    [anon_sym_SLASH] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(95),
    [anon_sym_EQ] = ACTIONS(103),
    [anon_sym_BANG_EQ] = ACTIONS(103),
    [anon_sym_LT_EQ] = ACTIONS(103),
  },
  [32] = {
    [aux_sym_source_file_repeat1] = STATE(47),
    [sym_command] = STATE(47),
    [sym_stat_operation] = STATE(47),
    [sym__statement] = STATE(47),
    [sym_if_statement] = STATE(47),
    [sym_choose_statement] = STATE(47),
    [sym_show_text] = STATE(47),
    [anon_sym_elseif] = ACTIONS(174),
    [anon_sym_end] = ACTIONS(174),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(174),
    [sym__endl] = ACTIONS(176),
    [anon_sym_choose] = ACTIONS(178),
    [sym_identifier] = ACTIONS(180),
    [anon_sym_if] = ACTIONS(182),
  },
  [33] = {
    [anon_sym_elseif] = ACTIONS(184),
    [anon_sym_end] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(186),
  },
  [34] = {
    [sym_else_clause] = STATE(51),
    [aux_sym_if_statement_repeat1] = STATE(52),
    [sym_elseif_clause] = STATE(52),
    [anon_sym_elseif] = ACTIONS(188),
    [anon_sym_end] = ACTIONS(190),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(192),
  },
  [35] = {
    [sym_binary_expression] = STATE(53),
    [sym_paran_expression] = STATE(53),
    [sym__expression] = STATE(53),
    [sym_boolean] = STATE(53),
    [sym__constant] = STATE(53),
    [sym_unary_expression] = STATE(53),
    [anon_sym_DASH] = ACTIONS(31),
    [sym_number] = ACTIONS(194),
    [anon_sym_true] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(194),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_identifier] = ACTIONS(196),
    [anon_sym_not] = ACTIONS(41),
  },
  [36] = {
    [sym_binary_expression] = STATE(54),
    [sym_paran_expression] = STATE(54),
    [sym__expression] = STATE(54),
    [sym_boolean] = STATE(54),
    [sym__constant] = STATE(54),
    [sym_unary_expression] = STATE(54),
    [anon_sym_DASH] = ACTIONS(31),
    [sym_number] = ACTIONS(198),
    [anon_sym_true] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(198),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_identifier] = ACTIONS(200),
    [anon_sym_not] = ACTIONS(41),
  },
  [37] = {
    [sym_binary_expression] = STATE(55),
    [sym_paran_expression] = STATE(55),
    [sym__expression] = STATE(55),
    [sym_boolean] = STATE(55),
    [sym__constant] = STATE(55),
    [sym_unary_expression] = STATE(55),
    [anon_sym_DASH] = ACTIONS(31),
    [sym_number] = ACTIONS(202),
    [anon_sym_true] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(202),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_identifier] = ACTIONS(204),
    [anon_sym_not] = ACTIONS(41),
  },
  [38] = {
    [sym_binary_expression] = STATE(56),
    [sym_paran_expression] = STATE(56),
    [sym__expression] = STATE(56),
    [sym_boolean] = STATE(56),
    [sym__constant] = STATE(56),
    [sym_unary_expression] = STATE(56),
    [anon_sym_DASH] = ACTIONS(31),
    [sym_number] = ACTIONS(206),
    [anon_sym_true] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(206),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_identifier] = ACTIONS(208),
    [anon_sym_not] = ACTIONS(41),
  },
  [39] = {
    [sym_binary_expression] = STATE(57),
    [sym_paran_expression] = STATE(57),
    [sym__expression] = STATE(57),
    [sym_boolean] = STATE(57),
    [sym__constant] = STATE(57),
    [sym_unary_expression] = STATE(57),
    [anon_sym_DASH] = ACTIONS(31),
    [sym_number] = ACTIONS(210),
    [anon_sym_true] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(210),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_identifier] = ACTIONS(212),
    [anon_sym_not] = ACTIONS(41),
  },
  [40] = {
    [sym_block] = STATE(58),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(214),
  },
  [41] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(216),
  },
  [42] = {
    [sym_choice] = STATE(42),
    [aux_sym_choose_statement_repeat1] = STATE(42),
    [anon_sym_STAR] = ACTIONS(218),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(221),
  },
  [43] = {
    [sym__endl] = ACTIONS(223),
    [anon_sym_choose] = ACTIONS(225),
    [ts_builtin_sym_end] = ACTIONS(223),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(225),
    [anon_sym_if] = ACTIONS(225),
  },
  [44] = {
    [anon_sym_RBRACK] = ACTIONS(227),
    [sym_comment] = ACTIONS(3),
  },
  [45] = {
    [sym_number] = ACTIONS(229),
    [anon_sym_true] = ACTIONS(229),
    [sym_comment] = ACTIONS(25),
    [sym_string] = ACTIONS(229),
    [sym__endl] = ACTIONS(229),
    [anon_sym_false] = ACTIONS(229),
    [anon_sym_LBRACE] = ACTIONS(229),
    [sym_bare_word] = ACTIONS(229),
  },
  [46] = {
    [anon_sym_LT] = ACTIONS(231),
    [anon_sym_DASH] = ACTIONS(233),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(233),
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_GT_EQ] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(233),
    [anon_sym_STAR] = ACTIONS(233),
    [anon_sym_and] = ACTIONS(233),
    [anon_sym_SLASH] = ACTIONS(233),
    [anon_sym_GT] = ACTIONS(231),
    [anon_sym_EQ] = ACTIONS(233),
    [anon_sym_RBRACE] = ACTIONS(233),
    [sym__endl] = ACTIONS(233),
    [anon_sym_BANG_EQ] = ACTIONS(233),
    [anon_sym_LT_EQ] = ACTIONS(233),
  },
  [47] = {
    [aux_sym_source_file_repeat1] = STATE(75),
    [sym_command] = STATE(75),
    [sym_stat_operation] = STATE(75),
    [sym__statement] = STATE(75),
    [sym_if_statement] = STATE(75),
    [sym_choose_statement] = STATE(75),
    [sym_show_text] = STATE(75),
    [anon_sym_elseif] = ACTIONS(235),
    [anon_sym_end] = ACTIONS(235),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(235),
    [sym__endl] = ACTIONS(237),
    [anon_sym_choose] = ACTIONS(178),
    [sym_identifier] = ACTIONS(180),
    [anon_sym_if] = ACTIONS(182),
  },
  [48] = {
    [sym_binary_expression] = STATE(19),
    [sym_paran_expression] = STATE(19),
    [sym__constant] = STATE(19),
    [sym_unary_expression] = STATE(19),
    [sym_condition] = STATE(61),
    [sym__expression] = STATE(19),
    [sym_boolean] = STATE(19),
    [anon_sym_DASH] = ACTIONS(31),
    [sym_number] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_identifier] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
  },
  [49] = {
    [sym_block] = STATE(62),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(214),
  },
  [50] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(239),
  },
  [51] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(241),
  },
  [52] = {
    [sym_else_clause] = STATE(65),
    [aux_sym_if_statement_repeat1] = STATE(66),
    [sym_elseif_clause] = STATE(66),
    [anon_sym_elseif] = ACTIONS(188),
    [anon_sym_end] = ACTIONS(241),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(192),
  },
  [53] = {
    [anon_sym_LT] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(245),
    [anon_sym_RPAREN] = ACTIONS(245),
    [anon_sym_GT_EQ] = ACTIONS(245),
    [anon_sym_PLUS] = ACTIONS(99),
    [anon_sym_STAR] = ACTIONS(101),
    [anon_sym_and] = ACTIONS(245),
    [anon_sym_SLASH] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_EQ] = ACTIONS(245),
    [anon_sym_RBRACE] = ACTIONS(245),
    [sym__endl] = ACTIONS(245),
    [anon_sym_BANG_EQ] = ACTIONS(245),
    [anon_sym_LT_EQ] = ACTIONS(245),
  },
  [54] = {
    [anon_sym_LT] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(245),
    [anon_sym_RPAREN] = ACTIONS(245),
    [anon_sym_GT_EQ] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(99),
    [anon_sym_STAR] = ACTIONS(101),
    [anon_sym_and] = ACTIONS(245),
    [anon_sym_SLASH] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(95),
    [anon_sym_EQ] = ACTIONS(103),
    [anon_sym_RBRACE] = ACTIONS(245),
    [sym__endl] = ACTIONS(245),
    [anon_sym_BANG_EQ] = ACTIONS(103),
    [anon_sym_LT_EQ] = ACTIONS(103),
  },
  [55] = {
    [anon_sym_LT] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(245),
    [anon_sym_RPAREN] = ACTIONS(245),
    [anon_sym_GT_EQ] = ACTIONS(245),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(101),
    [anon_sym_and] = ACTIONS(245),
    [anon_sym_SLASH] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_EQ] = ACTIONS(245),
    [anon_sym_RBRACE] = ACTIONS(245),
    [sym__endl] = ACTIONS(245),
    [anon_sym_BANG_EQ] = ACTIONS(245),
    [anon_sym_LT_EQ] = ACTIONS(245),
  },
  [56] = {
    [anon_sym_LT] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(245),
    [anon_sym_RPAREN] = ACTIONS(245),
    [anon_sym_GT_EQ] = ACTIONS(245),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(245),
    [anon_sym_and] = ACTIONS(245),
    [anon_sym_SLASH] = ACTIONS(245),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_EQ] = ACTIONS(245),
    [anon_sym_RBRACE] = ACTIONS(245),
    [sym__endl] = ACTIONS(245),
    [anon_sym_BANG_EQ] = ACTIONS(245),
    [anon_sym_LT_EQ] = ACTIONS(245),
  },
  [57] = {
    [anon_sym_LT] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(245),
    [anon_sym_RPAREN] = ACTIONS(245),
    [anon_sym_GT_EQ] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(99),
    [anon_sym_STAR] = ACTIONS(101),
    [anon_sym_and] = ACTIONS(97),
    [anon_sym_SLASH] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(95),
    [anon_sym_EQ] = ACTIONS(103),
    [anon_sym_RBRACE] = ACTIONS(245),
    [sym__endl] = ACTIONS(245),
    [anon_sym_BANG_EQ] = ACTIONS(103),
    [anon_sym_LT_EQ] = ACTIONS(103),
  },
  [58] = {
    [anon_sym_STAR] = ACTIONS(247),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(247),
  },
  [59] = {
    [sym__endl] = ACTIONS(249),
    [anon_sym_choose] = ACTIONS(251),
    [ts_builtin_sym_end] = ACTIONS(249),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(251),
    [anon_sym_if] = ACTIONS(251),
  },
  [60] = {
    [sym_comment] = ACTIONS(25),
    [sym_text_copy] = ACTIONS(253),
  },
  [61] = {
    [sym_block] = STATE(68),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(93),
  },
  [62] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(255),
  },
  [63] = {
    [sym__endl] = ACTIONS(257),
    [anon_sym_choose] = ACTIONS(259),
    [ts_builtin_sym_end] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(259),
    [anon_sym_if] = ACTIONS(259),
  },
  [64] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(261),
  },
  [65] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(263),
  },
  [66] = {
    [aux_sym_if_statement_repeat1] = STATE(66),
    [sym_elseif_clause] = STATE(66),
    [anon_sym_elseif] = ACTIONS(265),
    [anon_sym_end] = ACTIONS(268),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(270),
  },
  [67] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(272),
  },
  [68] = {
    [anon_sym_elseif] = ACTIONS(274),
    [anon_sym_end] = ACTIONS(274),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(276),
  },
  [69] = {
    [sym__endl] = ACTIONS(278),
    [anon_sym_choose] = ACTIONS(280),
    [ts_builtin_sym_end] = ACTIONS(278),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(280),
    [anon_sym_if] = ACTIONS(280),
  },
  [70] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(282),
  },
  [71] = {
    [sym__endl] = ACTIONS(284),
    [anon_sym_choose] = ACTIONS(286),
    [ts_builtin_sym_end] = ACTIONS(284),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(286),
    [anon_sym_if] = ACTIONS(286),
  },
  [72] = {
    [sym__endl] = ACTIONS(288),
    [anon_sym_choose] = ACTIONS(290),
    [ts_builtin_sym_end] = ACTIONS(288),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(290),
    [anon_sym_if] = ACTIONS(290),
  },
  [73] = {
    [anon_sym_LT] = ACTIONS(59),
    [anon_sym_DASH] = ACTIONS(292),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(292),
    [anon_sym_RPAREN] = ACTIONS(292),
    [anon_sym_GT_EQ] = ACTIONS(292),
    [anon_sym_PLUS] = ACTIONS(292),
    [anon_sym_STAR] = ACTIONS(292),
    [anon_sym_and] = ACTIONS(292),
    [anon_sym_SLASH] = ACTIONS(292),
    [anon_sym_GT] = ACTIONS(59),
    [anon_sym_EQ] = ACTIONS(292),
    [anon_sym_RBRACE] = ACTIONS(292),
    [sym__endl] = ACTIONS(292),
    [anon_sym_BANG_EQ] = ACTIONS(292),
    [anon_sym_LT_EQ] = ACTIONS(292),
  },
  [74] = {
    [anon_sym_elseif] = ACTIONS(63),
    [anon_sym_end] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(63),
    [sym__endl] = ACTIONS(61),
    [anon_sym_choose] = ACTIONS(63),
    [sym_identifier] = ACTIONS(63),
    [anon_sym_if] = ACTIONS(63),
  },
  [75] = {
    [aux_sym_source_file_repeat1] = STATE(75),
    [sym_command] = STATE(75),
    [sym_stat_operation] = STATE(75),
    [sym__statement] = STATE(75),
    [sym_if_statement] = STATE(75),
    [sym_choose_statement] = STATE(75),
    [sym_show_text] = STATE(75),
    [anon_sym_elseif] = ACTIONS(294),
    [anon_sym_end] = ACTIONS(294),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(294),
    [sym__endl] = ACTIONS(296),
    [anon_sym_choose] = ACTIONS(299),
    [sym_identifier] = ACTIONS(302),
    [anon_sym_if] = ACTIONS(305),
  },
  [76] = {
    [anon_sym_elseif] = ACTIONS(135),
    [anon_sym_end] = ACTIONS(135),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(135),
    [sym__endl] = ACTIONS(133),
    [anon_sym_choose] = ACTIONS(135),
    [sym_identifier] = ACTIONS(135),
    [anon_sym_if] = ACTIONS(135),
  },
  [77] = {
    [anon_sym_elseif] = ACTIONS(150),
    [anon_sym_end] = ACTIONS(150),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(150),
    [sym__endl] = ACTIONS(148),
    [anon_sym_choose] = ACTIONS(150),
    [sym_identifier] = ACTIONS(150),
    [anon_sym_if] = ACTIONS(150),
  },
  [78] = {
    [anon_sym_LT] = ACTIONS(308),
    [anon_sym_DASH] = ACTIONS(310),
    [anon_sym_end] = ACTIONS(160),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(160),
    [anon_sym_or] = ACTIONS(312),
    [anon_sym_GT_EQ] = ACTIONS(314),
    [anon_sym_PLUS] = ACTIONS(310),
    [anon_sym_if] = ACTIONS(160),
    [anon_sym_STAR] = ACTIONS(316),
    [anon_sym_elseif] = ACTIONS(160),
    [anon_sym_and] = ACTIONS(318),
    [anon_sym_SLASH] = ACTIONS(316),
    [anon_sym_GT] = ACTIONS(308),
    [anon_sym_EQ] = ACTIONS(314),
    [sym__endl] = ACTIONS(166),
    [anon_sym_choose] = ACTIONS(160),
    [anon_sym_BANG_EQ] = ACTIONS(314),
    [sym_identifier] = ACTIONS(160),
    [anon_sym_LT_EQ] = ACTIONS(314),
  },
  [79] = {
    [anon_sym_LT] = ACTIONS(168),
    [anon_sym_DASH] = ACTIONS(170),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(168),
    [anon_sym_GT_EQ] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_if] = ACTIONS(168),
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_and] = ACTIONS(168),
    [ts_builtin_sym_end] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(168),
    [anon_sym_EQ] = ACTIONS(170),
    [sym__endl] = ACTIONS(170),
    [anon_sym_choose] = ACTIONS(168),
    [anon_sym_BANG_EQ] = ACTIONS(170),
    [sym_identifier] = ACTIONS(168),
    [anon_sym_LT_EQ] = ACTIONS(170),
  },
  [80] = {
    [sym_stat_operation] = STATE(88),
    [sym_show_text] = STATE(88),
    [aux_sym_source_file_repeat1] = STATE(88),
    [sym__statement] = STATE(88),
    [sym_if_statement] = STATE(88),
    [sym_choose_statement] = STATE(88),
    [sym_command] = STATE(88),
    [anon_sym_end] = ACTIONS(174),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(320),
    [anon_sym_choose] = ACTIONS(322),
    [sym_identifier] = ACTIONS(324),
    [anon_sym_if] = ACTIONS(326),
    [anon_sym_STAR] = ACTIONS(328),
  },
  [81] = {
    [sym_binary_expression] = STATE(89),
    [sym_paran_expression] = STATE(89),
    [sym__constant] = STATE(89),
    [sym_unary_expression] = STATE(89),
    [sym__expression] = STATE(89),
    [sym_boolean] = STATE(89),
    [anon_sym_DASH] = ACTIONS(73),
    [sym_number] = ACTIONS(330),
    [anon_sym_true] = ACTIONS(77),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(330),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [sym_identifier] = ACTIONS(332),
    [anon_sym_not] = ACTIONS(83),
  },
  [82] = {
    [sym_binary_expression] = STATE(90),
    [sym_paran_expression] = STATE(90),
    [sym__constant] = STATE(90),
    [sym_unary_expression] = STATE(90),
    [sym__expression] = STATE(90),
    [sym_boolean] = STATE(90),
    [anon_sym_DASH] = ACTIONS(73),
    [sym_number] = ACTIONS(334),
    [anon_sym_true] = ACTIONS(77),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(334),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [sym_identifier] = ACTIONS(336),
    [anon_sym_not] = ACTIONS(83),
  },
  [83] = {
    [sym_binary_expression] = STATE(91),
    [sym_paran_expression] = STATE(91),
    [sym__constant] = STATE(91),
    [sym_unary_expression] = STATE(91),
    [sym__expression] = STATE(91),
    [sym_boolean] = STATE(91),
    [anon_sym_DASH] = ACTIONS(73),
    [sym_number] = ACTIONS(338),
    [anon_sym_true] = ACTIONS(77),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(338),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [sym_identifier] = ACTIONS(340),
    [anon_sym_not] = ACTIONS(83),
  },
  [84] = {
    [sym_binary_expression] = STATE(92),
    [sym_paran_expression] = STATE(92),
    [sym__constant] = STATE(92),
    [sym_unary_expression] = STATE(92),
    [sym__expression] = STATE(92),
    [sym_boolean] = STATE(92),
    [anon_sym_DASH] = ACTIONS(73),
    [sym_number] = ACTIONS(342),
    [anon_sym_true] = ACTIONS(77),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(342),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [sym_identifier] = ACTIONS(344),
    [anon_sym_not] = ACTIONS(83),
  },
  [85] = {
    [sym_binary_expression] = STATE(93),
    [sym_paran_expression] = STATE(93),
    [sym__constant] = STATE(93),
    [sym_unary_expression] = STATE(93),
    [sym__expression] = STATE(93),
    [sym_boolean] = STATE(93),
    [anon_sym_DASH] = ACTIONS(73),
    [sym_number] = ACTIONS(346),
    [anon_sym_true] = ACTIONS(77),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(346),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [sym_identifier] = ACTIONS(348),
    [anon_sym_not] = ACTIONS(83),
  },
  [86] = {
    [anon_sym_elseif] = ACTIONS(225),
    [anon_sym_end] = ACTIONS(225),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(225),
    [sym__endl] = ACTIONS(223),
    [anon_sym_choose] = ACTIONS(225),
    [sym_identifier] = ACTIONS(225),
    [anon_sym_if] = ACTIONS(225),
  },
  [87] = {
    [anon_sym_LT] = ACTIONS(231),
    [anon_sym_DASH] = ACTIONS(233),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(231),
    [anon_sym_GT_EQ] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(233),
    [anon_sym_if] = ACTIONS(231),
    [anon_sym_STAR] = ACTIONS(233),
    [anon_sym_and] = ACTIONS(231),
    [ts_builtin_sym_end] = ACTIONS(233),
    [anon_sym_SLASH] = ACTIONS(233),
    [anon_sym_GT] = ACTIONS(231),
    [anon_sym_EQ] = ACTIONS(233),
    [sym__endl] = ACTIONS(233),
    [anon_sym_choose] = ACTIONS(231),
    [anon_sym_BANG_EQ] = ACTIONS(233),
    [sym_identifier] = ACTIONS(231),
    [anon_sym_LT_EQ] = ACTIONS(233),
  },
  [88] = {
    [sym_stat_operation] = STATE(101),
    [sym_show_text] = STATE(101),
    [aux_sym_source_file_repeat1] = STATE(101),
    [sym__statement] = STATE(101),
    [sym_if_statement] = STATE(101),
    [sym_choose_statement] = STATE(101),
    [sym_command] = STATE(101),
    [anon_sym_end] = ACTIONS(235),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(350),
    [anon_sym_choose] = ACTIONS(322),
    [sym_identifier] = ACTIONS(324),
    [anon_sym_if] = ACTIONS(326),
    [anon_sym_STAR] = ACTIONS(352),
  },
  [89] = {
    [anon_sym_LT] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(154),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(245),
    [anon_sym_PLUS] = ACTIONS(154),
    [anon_sym_if] = ACTIONS(243),
    [anon_sym_STAR] = ACTIONS(162),
    [anon_sym_and] = ACTIONS(243),
    [ts_builtin_sym_end] = ACTIONS(245),
    [anon_sym_SLASH] = ACTIONS(162),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_EQ] = ACTIONS(245),
    [sym__endl] = ACTIONS(245),
    [anon_sym_choose] = ACTIONS(243),
    [anon_sym_BANG_EQ] = ACTIONS(245),
    [sym_identifier] = ACTIONS(243),
    [anon_sym_LT_EQ] = ACTIONS(245),
  },
  [90] = {
    [anon_sym_LT] = ACTIONS(152),
    [anon_sym_DASH] = ACTIONS(154),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(154),
    [anon_sym_if] = ACTIONS(243),
    [anon_sym_STAR] = ACTIONS(162),
    [anon_sym_and] = ACTIONS(243),
    [ts_builtin_sym_end] = ACTIONS(245),
    [anon_sym_SLASH] = ACTIONS(162),
    [anon_sym_GT] = ACTIONS(152),
    [anon_sym_EQ] = ACTIONS(158),
    [sym__endl] = ACTIONS(245),
    [anon_sym_choose] = ACTIONS(243),
    [anon_sym_BANG_EQ] = ACTIONS(158),
    [sym_identifier] = ACTIONS(243),
    [anon_sym_LT_EQ] = ACTIONS(158),
  },
  [91] = {
    [anon_sym_LT] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(245),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_if] = ACTIONS(243),
    [anon_sym_STAR] = ACTIONS(162),
    [anon_sym_and] = ACTIONS(243),
    [ts_builtin_sym_end] = ACTIONS(245),
    [anon_sym_SLASH] = ACTIONS(162),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_EQ] = ACTIONS(245),
    [sym__endl] = ACTIONS(245),
    [anon_sym_choose] = ACTIONS(243),
    [anon_sym_BANG_EQ] = ACTIONS(245),
    [sym_identifier] = ACTIONS(243),
    [anon_sym_LT_EQ] = ACTIONS(245),
  },
  [92] = {
    [anon_sym_LT] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(245),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_if] = ACTIONS(243),
    [anon_sym_STAR] = ACTIONS(245),
    [anon_sym_and] = ACTIONS(243),
    [ts_builtin_sym_end] = ACTIONS(245),
    [anon_sym_SLASH] = ACTIONS(245),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_EQ] = ACTIONS(245),
    [sym__endl] = ACTIONS(245),
    [anon_sym_choose] = ACTIONS(243),
    [anon_sym_BANG_EQ] = ACTIONS(245),
    [sym_identifier] = ACTIONS(243),
    [anon_sym_LT_EQ] = ACTIONS(245),
  },
  [93] = {
    [anon_sym_LT] = ACTIONS(152),
    [anon_sym_DASH] = ACTIONS(154),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(154),
    [anon_sym_if] = ACTIONS(243),
    [anon_sym_STAR] = ACTIONS(162),
    [anon_sym_and] = ACTIONS(164),
    [ts_builtin_sym_end] = ACTIONS(245),
    [anon_sym_SLASH] = ACTIONS(162),
    [anon_sym_GT] = ACTIONS(152),
    [anon_sym_EQ] = ACTIONS(158),
    [sym__endl] = ACTIONS(245),
    [anon_sym_choose] = ACTIONS(243),
    [anon_sym_BANG_EQ] = ACTIONS(158),
    [sym_identifier] = ACTIONS(243),
    [anon_sym_LT_EQ] = ACTIONS(158),
  },
  [94] = {
    [anon_sym_elseif] = ACTIONS(251),
    [anon_sym_end] = ACTIONS(251),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(251),
    [sym__endl] = ACTIONS(249),
    [anon_sym_choose] = ACTIONS(251),
    [sym_identifier] = ACTIONS(251),
    [anon_sym_if] = ACTIONS(251),
  },
  [95] = {
    [anon_sym_elseif] = ACTIONS(259),
    [anon_sym_end] = ACTIONS(259),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(259),
    [sym__endl] = ACTIONS(257),
    [anon_sym_choose] = ACTIONS(259),
    [sym_identifier] = ACTIONS(259),
    [anon_sym_if] = ACTIONS(259),
  },
  [96] = {
    [anon_sym_elseif] = ACTIONS(280),
    [anon_sym_end] = ACTIONS(280),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(280),
    [sym__endl] = ACTIONS(278),
    [anon_sym_choose] = ACTIONS(280),
    [sym_identifier] = ACTIONS(280),
    [anon_sym_if] = ACTIONS(280),
  },
  [97] = {
    [anon_sym_elseif] = ACTIONS(286),
    [anon_sym_end] = ACTIONS(286),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(286),
    [sym__endl] = ACTIONS(284),
    [anon_sym_choose] = ACTIONS(286),
    [sym_identifier] = ACTIONS(286),
    [anon_sym_if] = ACTIONS(286),
  },
  [98] = {
    [anon_sym_elseif] = ACTIONS(290),
    [anon_sym_end] = ACTIONS(290),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(290),
    [sym__endl] = ACTIONS(288),
    [anon_sym_choose] = ACTIONS(290),
    [sym_identifier] = ACTIONS(290),
    [anon_sym_if] = ACTIONS(290),
  },
  [99] = {
    [anon_sym_LT] = ACTIONS(59),
    [anon_sym_DASH] = ACTIONS(292),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(59),
    [anon_sym_GT_EQ] = ACTIONS(292),
    [anon_sym_PLUS] = ACTIONS(292),
    [anon_sym_if] = ACTIONS(59),
    [anon_sym_STAR] = ACTIONS(292),
    [anon_sym_and] = ACTIONS(59),
    [ts_builtin_sym_end] = ACTIONS(292),
    [anon_sym_SLASH] = ACTIONS(292),
    [anon_sym_GT] = ACTIONS(59),
    [anon_sym_EQ] = ACTIONS(292),
    [sym__endl] = ACTIONS(292),
    [anon_sym_choose] = ACTIONS(59),
    [anon_sym_BANG_EQ] = ACTIONS(292),
    [sym_identifier] = ACTIONS(59),
    [anon_sym_LT_EQ] = ACTIONS(292),
  },
  [100] = {
    [anon_sym_end] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(61),
    [anon_sym_choose] = ACTIONS(63),
    [sym_identifier] = ACTIONS(63),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(61),
  },
  [101] = {
    [sym_stat_operation] = STATE(101),
    [sym_show_text] = STATE(101),
    [aux_sym_source_file_repeat1] = STATE(101),
    [sym__statement] = STATE(101),
    [sym_if_statement] = STATE(101),
    [sym_choose_statement] = STATE(101),
    [sym_command] = STATE(101),
    [anon_sym_end] = ACTIONS(294),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(354),
    [anon_sym_choose] = ACTIONS(357),
    [sym_identifier] = ACTIONS(360),
    [anon_sym_if] = ACTIONS(363),
    [anon_sym_STAR] = ACTIONS(115),
  },
  [102] = {
    [anon_sym_end] = ACTIONS(135),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(133),
    [anon_sym_choose] = ACTIONS(135),
    [sym_identifier] = ACTIONS(135),
    [anon_sym_if] = ACTIONS(135),
    [anon_sym_STAR] = ACTIONS(133),
  },
  [103] = {
    [anon_sym_end] = ACTIONS(150),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(148),
    [anon_sym_choose] = ACTIONS(150),
    [sym_identifier] = ACTIONS(150),
    [anon_sym_if] = ACTIONS(150),
    [anon_sym_STAR] = ACTIONS(148),
  },
  [104] = {
    [anon_sym_LT] = ACTIONS(366),
    [anon_sym_DASH] = ACTIONS(368),
    [anon_sym_end] = ACTIONS(160),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(370),
    [anon_sym_GT_EQ] = ACTIONS(372),
    [anon_sym_PLUS] = ACTIONS(368),
    [anon_sym_if] = ACTIONS(160),
    [anon_sym_STAR] = ACTIONS(374),
    [anon_sym_and] = ACTIONS(376),
    [anon_sym_SLASH] = ACTIONS(374),
    [anon_sym_GT] = ACTIONS(366),
    [anon_sym_EQ] = ACTIONS(372),
    [sym__endl] = ACTIONS(166),
    [anon_sym_choose] = ACTIONS(160),
    [anon_sym_BANG_EQ] = ACTIONS(372),
    [sym_identifier] = ACTIONS(160),
    [anon_sym_LT_EQ] = ACTIONS(372),
  },
  [105] = {
    [anon_sym_LT] = ACTIONS(168),
    [anon_sym_DASH] = ACTIONS(170),
    [anon_sym_end] = ACTIONS(168),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(168),
    [anon_sym_or] = ACTIONS(168),
    [anon_sym_GT_EQ] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_if] = ACTIONS(168),
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_elseif] = ACTIONS(168),
    [anon_sym_and] = ACTIONS(168),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(168),
    [anon_sym_EQ] = ACTIONS(170),
    [sym__endl] = ACTIONS(170),
    [anon_sym_choose] = ACTIONS(168),
    [anon_sym_BANG_EQ] = ACTIONS(170),
    [sym_identifier] = ACTIONS(168),
    [anon_sym_LT_EQ] = ACTIONS(170),
  },
  [106] = {
    [sym_binary_expression] = STATE(113),
    [sym_paran_expression] = STATE(113),
    [sym__constant] = STATE(113),
    [sym_unary_expression] = STATE(113),
    [sym__expression] = STATE(113),
    [sym_boolean] = STATE(113),
    [anon_sym_DASH] = ACTIONS(378),
    [sym_number] = ACTIONS(380),
    [anon_sym_true] = ACTIONS(382),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(380),
    [anon_sym_false] = ACTIONS(382),
    [anon_sym_LPAREN] = ACTIONS(384),
    [sym_identifier] = ACTIONS(386),
    [anon_sym_not] = ACTIONS(388),
  },
  [107] = {
    [sym_binary_expression] = STATE(114),
    [sym_paran_expression] = STATE(114),
    [sym__constant] = STATE(114),
    [sym_unary_expression] = STATE(114),
    [sym__expression] = STATE(114),
    [sym_boolean] = STATE(114),
    [anon_sym_DASH] = ACTIONS(378),
    [sym_number] = ACTIONS(390),
    [anon_sym_true] = ACTIONS(382),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(390),
    [anon_sym_false] = ACTIONS(382),
    [anon_sym_LPAREN] = ACTIONS(384),
    [sym_identifier] = ACTIONS(392),
    [anon_sym_not] = ACTIONS(388),
  },
  [108] = {
    [sym_binary_expression] = STATE(115),
    [sym_paran_expression] = STATE(115),
    [sym__constant] = STATE(115),
    [sym_unary_expression] = STATE(115),
    [sym__expression] = STATE(115),
    [sym_boolean] = STATE(115),
    [anon_sym_DASH] = ACTIONS(378),
    [sym_number] = ACTIONS(394),
    [anon_sym_true] = ACTIONS(382),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(394),
    [anon_sym_false] = ACTIONS(382),
    [anon_sym_LPAREN] = ACTIONS(384),
    [sym_identifier] = ACTIONS(396),
    [anon_sym_not] = ACTIONS(388),
  },
  [109] = {
    [sym_binary_expression] = STATE(116),
    [sym_paran_expression] = STATE(116),
    [sym__constant] = STATE(116),
    [sym_unary_expression] = STATE(116),
    [sym__expression] = STATE(116),
    [sym_boolean] = STATE(116),
    [anon_sym_DASH] = ACTIONS(378),
    [sym_number] = ACTIONS(398),
    [anon_sym_true] = ACTIONS(382),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(398),
    [anon_sym_false] = ACTIONS(382),
    [anon_sym_LPAREN] = ACTIONS(384),
    [sym_identifier] = ACTIONS(400),
    [anon_sym_not] = ACTIONS(388),
  },
  [110] = {
    [sym_binary_expression] = STATE(117),
    [sym_paran_expression] = STATE(117),
    [sym__constant] = STATE(117),
    [sym_unary_expression] = STATE(117),
    [sym__expression] = STATE(117),
    [sym_boolean] = STATE(117),
    [anon_sym_DASH] = ACTIONS(378),
    [sym_number] = ACTIONS(402),
    [anon_sym_true] = ACTIONS(382),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(402),
    [anon_sym_false] = ACTIONS(382),
    [anon_sym_LPAREN] = ACTIONS(384),
    [sym_identifier] = ACTIONS(404),
    [anon_sym_not] = ACTIONS(388),
  },
  [111] = {
    [anon_sym_end] = ACTIONS(225),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(223),
    [anon_sym_choose] = ACTIONS(225),
    [sym_identifier] = ACTIONS(225),
    [anon_sym_if] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(223),
  },
  [112] = {
    [anon_sym_LT] = ACTIONS(231),
    [anon_sym_DASH] = ACTIONS(233),
    [anon_sym_end] = ACTIONS(231),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(231),
    [anon_sym_or] = ACTIONS(231),
    [anon_sym_GT_EQ] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(233),
    [anon_sym_if] = ACTIONS(231),
    [anon_sym_STAR] = ACTIONS(233),
    [anon_sym_elseif] = ACTIONS(231),
    [anon_sym_and] = ACTIONS(231),
    [anon_sym_SLASH] = ACTIONS(233),
    [anon_sym_GT] = ACTIONS(231),
    [anon_sym_EQ] = ACTIONS(233),
    [sym__endl] = ACTIONS(233),
    [anon_sym_choose] = ACTIONS(231),
    [anon_sym_BANG_EQ] = ACTIONS(233),
    [sym_identifier] = ACTIONS(231),
    [anon_sym_LT_EQ] = ACTIONS(233),
  },
  [113] = {
    [anon_sym_LT] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(310),
    [anon_sym_end] = ACTIONS(243),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(243),
    [anon_sym_or] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(245),
    [anon_sym_PLUS] = ACTIONS(310),
    [anon_sym_if] = ACTIONS(243),
    [anon_sym_STAR] = ACTIONS(316),
    [anon_sym_elseif] = ACTIONS(243),
    [anon_sym_and] = ACTIONS(243),
    [anon_sym_SLASH] = ACTIONS(316),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_EQ] = ACTIONS(245),
    [sym__endl] = ACTIONS(245),
    [anon_sym_choose] = ACTIONS(243),
    [anon_sym_BANG_EQ] = ACTIONS(245),
    [sym_identifier] = ACTIONS(243),
    [anon_sym_LT_EQ] = ACTIONS(245),
  },
  [114] = {
    [anon_sym_LT] = ACTIONS(308),
    [anon_sym_DASH] = ACTIONS(310),
    [anon_sym_end] = ACTIONS(243),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(243),
    [anon_sym_or] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(314),
    [anon_sym_PLUS] = ACTIONS(310),
    [anon_sym_if] = ACTIONS(243),
    [anon_sym_STAR] = ACTIONS(316),
    [anon_sym_elseif] = ACTIONS(243),
    [anon_sym_and] = ACTIONS(243),
    [anon_sym_SLASH] = ACTIONS(316),
    [anon_sym_GT] = ACTIONS(308),
    [anon_sym_EQ] = ACTIONS(314),
    [sym__endl] = ACTIONS(245),
    [anon_sym_choose] = ACTIONS(243),
    [anon_sym_BANG_EQ] = ACTIONS(314),
    [sym_identifier] = ACTIONS(243),
    [anon_sym_LT_EQ] = ACTIONS(314),
  },
  [115] = {
    [anon_sym_LT] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(245),
    [anon_sym_end] = ACTIONS(243),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(243),
    [anon_sym_or] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(245),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_if] = ACTIONS(243),
    [anon_sym_STAR] = ACTIONS(316),
    [anon_sym_elseif] = ACTIONS(243),
    [anon_sym_and] = ACTIONS(243),
    [anon_sym_SLASH] = ACTIONS(316),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_EQ] = ACTIONS(245),
    [sym__endl] = ACTIONS(245),
    [anon_sym_choose] = ACTIONS(243),
    [anon_sym_BANG_EQ] = ACTIONS(245),
    [sym_identifier] = ACTIONS(243),
    [anon_sym_LT_EQ] = ACTIONS(245),
  },
  [116] = {
    [anon_sym_LT] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(245),
    [anon_sym_end] = ACTIONS(243),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(243),
    [anon_sym_or] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(245),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_if] = ACTIONS(243),
    [anon_sym_STAR] = ACTIONS(245),
    [anon_sym_elseif] = ACTIONS(243),
    [anon_sym_and] = ACTIONS(243),
    [anon_sym_SLASH] = ACTIONS(245),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_EQ] = ACTIONS(245),
    [sym__endl] = ACTIONS(245),
    [anon_sym_choose] = ACTIONS(243),
    [anon_sym_BANG_EQ] = ACTIONS(245),
    [sym_identifier] = ACTIONS(243),
    [anon_sym_LT_EQ] = ACTIONS(245),
  },
  [117] = {
    [anon_sym_LT] = ACTIONS(308),
    [anon_sym_DASH] = ACTIONS(310),
    [anon_sym_end] = ACTIONS(243),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(243),
    [anon_sym_or] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(314),
    [anon_sym_PLUS] = ACTIONS(310),
    [anon_sym_if] = ACTIONS(243),
    [anon_sym_STAR] = ACTIONS(316),
    [anon_sym_elseif] = ACTIONS(243),
    [anon_sym_and] = ACTIONS(318),
    [anon_sym_SLASH] = ACTIONS(316),
    [anon_sym_GT] = ACTIONS(308),
    [anon_sym_EQ] = ACTIONS(314),
    [sym__endl] = ACTIONS(245),
    [anon_sym_choose] = ACTIONS(243),
    [anon_sym_BANG_EQ] = ACTIONS(314),
    [sym_identifier] = ACTIONS(243),
    [anon_sym_LT_EQ] = ACTIONS(314),
  },
  [118] = {
    [anon_sym_end] = ACTIONS(251),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(249),
    [anon_sym_choose] = ACTIONS(251),
    [sym_identifier] = ACTIONS(251),
    [anon_sym_if] = ACTIONS(251),
    [anon_sym_STAR] = ACTIONS(249),
  },
  [119] = {
    [anon_sym_end] = ACTIONS(259),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(257),
    [anon_sym_choose] = ACTIONS(259),
    [sym_identifier] = ACTIONS(259),
    [anon_sym_if] = ACTIONS(259),
    [anon_sym_STAR] = ACTIONS(257),
  },
  [120] = {
    [anon_sym_end] = ACTIONS(280),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(278),
    [anon_sym_choose] = ACTIONS(280),
    [sym_identifier] = ACTIONS(280),
    [anon_sym_if] = ACTIONS(280),
    [anon_sym_STAR] = ACTIONS(278),
  },
  [121] = {
    [anon_sym_end] = ACTIONS(286),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(284),
    [anon_sym_choose] = ACTIONS(286),
    [sym_identifier] = ACTIONS(286),
    [anon_sym_if] = ACTIONS(286),
    [anon_sym_STAR] = ACTIONS(284),
  },
  [122] = {
    [anon_sym_end] = ACTIONS(290),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(288),
    [anon_sym_choose] = ACTIONS(290),
    [sym_identifier] = ACTIONS(290),
    [anon_sym_if] = ACTIONS(290),
    [anon_sym_STAR] = ACTIONS(288),
  },
  [123] = {
    [anon_sym_LT] = ACTIONS(59),
    [anon_sym_DASH] = ACTIONS(292),
    [anon_sym_end] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(59),
    [anon_sym_or] = ACTIONS(59),
    [anon_sym_GT_EQ] = ACTIONS(292),
    [anon_sym_PLUS] = ACTIONS(292),
    [anon_sym_if] = ACTIONS(59),
    [anon_sym_STAR] = ACTIONS(292),
    [anon_sym_elseif] = ACTIONS(59),
    [anon_sym_and] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(292),
    [anon_sym_GT] = ACTIONS(59),
    [anon_sym_EQ] = ACTIONS(292),
    [sym__endl] = ACTIONS(292),
    [anon_sym_choose] = ACTIONS(59),
    [anon_sym_BANG_EQ] = ACTIONS(292),
    [sym_identifier] = ACTIONS(59),
    [anon_sym_LT_EQ] = ACTIONS(292),
  },
  [124] = {
    [anon_sym_LT] = ACTIONS(168),
    [anon_sym_DASH] = ACTIONS(170),
    [anon_sym_end] = ACTIONS(168),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(168),
    [anon_sym_GT_EQ] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_if] = ACTIONS(168),
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_and] = ACTIONS(168),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(168),
    [anon_sym_EQ] = ACTIONS(170),
    [sym__endl] = ACTIONS(170),
    [anon_sym_choose] = ACTIONS(168),
    [anon_sym_BANG_EQ] = ACTIONS(170),
    [sym_identifier] = ACTIONS(168),
    [anon_sym_LT_EQ] = ACTIONS(170),
  },
  [125] = {
    [sym_binary_expression] = STATE(131),
    [sym_paran_expression] = STATE(131),
    [sym__constant] = STATE(131),
    [sym_unary_expression] = STATE(131),
    [sym__expression] = STATE(131),
    [sym_boolean] = STATE(131),
    [anon_sym_DASH] = ACTIONS(406),
    [sym_number] = ACTIONS(408),
    [anon_sym_true] = ACTIONS(410),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(408),
    [anon_sym_false] = ACTIONS(410),
    [anon_sym_LPAREN] = ACTIONS(412),
    [sym_identifier] = ACTIONS(414),
    [anon_sym_not] = ACTIONS(416),
  },
  [126] = {
    [sym_binary_expression] = STATE(132),
    [sym_paran_expression] = STATE(132),
    [sym__constant] = STATE(132),
    [sym_unary_expression] = STATE(132),
    [sym__expression] = STATE(132),
    [sym_boolean] = STATE(132),
    [anon_sym_DASH] = ACTIONS(406),
    [sym_number] = ACTIONS(418),
    [anon_sym_true] = ACTIONS(410),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(418),
    [anon_sym_false] = ACTIONS(410),
    [anon_sym_LPAREN] = ACTIONS(412),
    [sym_identifier] = ACTIONS(420),
    [anon_sym_not] = ACTIONS(416),
  },
  [127] = {
    [sym_binary_expression] = STATE(133),
    [sym_paran_expression] = STATE(133),
    [sym__constant] = STATE(133),
    [sym_unary_expression] = STATE(133),
    [sym__expression] = STATE(133),
    [sym_boolean] = STATE(133),
    [anon_sym_DASH] = ACTIONS(406),
    [sym_number] = ACTIONS(422),
    [anon_sym_true] = ACTIONS(410),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(422),
    [anon_sym_false] = ACTIONS(410),
    [anon_sym_LPAREN] = ACTIONS(412),
    [sym_identifier] = ACTIONS(424),
    [anon_sym_not] = ACTIONS(416),
  },
  [128] = {
    [sym_binary_expression] = STATE(134),
    [sym_paran_expression] = STATE(134),
    [sym__constant] = STATE(134),
    [sym_unary_expression] = STATE(134),
    [sym__expression] = STATE(134),
    [sym_boolean] = STATE(134),
    [anon_sym_DASH] = ACTIONS(406),
    [sym_number] = ACTIONS(426),
    [anon_sym_true] = ACTIONS(410),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(426),
    [anon_sym_false] = ACTIONS(410),
    [anon_sym_LPAREN] = ACTIONS(412),
    [sym_identifier] = ACTIONS(428),
    [anon_sym_not] = ACTIONS(416),
  },
  [129] = {
    [sym_binary_expression] = STATE(135),
    [sym_paran_expression] = STATE(135),
    [sym__constant] = STATE(135),
    [sym_unary_expression] = STATE(135),
    [sym__expression] = STATE(135),
    [sym_boolean] = STATE(135),
    [anon_sym_DASH] = ACTIONS(406),
    [sym_number] = ACTIONS(430),
    [anon_sym_true] = ACTIONS(410),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(430),
    [anon_sym_false] = ACTIONS(410),
    [anon_sym_LPAREN] = ACTIONS(412),
    [sym_identifier] = ACTIONS(432),
    [anon_sym_not] = ACTIONS(416),
  },
  [130] = {
    [anon_sym_LT] = ACTIONS(231),
    [anon_sym_DASH] = ACTIONS(233),
    [anon_sym_end] = ACTIONS(231),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(231),
    [anon_sym_GT_EQ] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(233),
    [anon_sym_if] = ACTIONS(231),
    [anon_sym_STAR] = ACTIONS(233),
    [anon_sym_and] = ACTIONS(231),
    [anon_sym_SLASH] = ACTIONS(233),
    [anon_sym_GT] = ACTIONS(231),
    [anon_sym_EQ] = ACTIONS(233),
    [sym__endl] = ACTIONS(233),
    [anon_sym_choose] = ACTIONS(231),
    [anon_sym_BANG_EQ] = ACTIONS(233),
    [sym_identifier] = ACTIONS(231),
    [anon_sym_LT_EQ] = ACTIONS(233),
  },
  [131] = {
    [anon_sym_LT] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(368),
    [anon_sym_end] = ACTIONS(243),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(245),
    [anon_sym_PLUS] = ACTIONS(368),
    [anon_sym_if] = ACTIONS(243),
    [anon_sym_STAR] = ACTIONS(374),
    [anon_sym_and] = ACTIONS(243),
    [anon_sym_SLASH] = ACTIONS(374),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_EQ] = ACTIONS(245),
    [sym__endl] = ACTIONS(245),
    [anon_sym_choose] = ACTIONS(243),
    [anon_sym_BANG_EQ] = ACTIONS(245),
    [sym_identifier] = ACTIONS(243),
    [anon_sym_LT_EQ] = ACTIONS(245),
  },
  [132] = {
    [anon_sym_LT] = ACTIONS(366),
    [anon_sym_DASH] = ACTIONS(368),
    [anon_sym_end] = ACTIONS(243),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(372),
    [anon_sym_PLUS] = ACTIONS(368),
    [anon_sym_if] = ACTIONS(243),
    [anon_sym_STAR] = ACTIONS(374),
    [anon_sym_and] = ACTIONS(243),
    [anon_sym_SLASH] = ACTIONS(374),
    [anon_sym_GT] = ACTIONS(366),
    [anon_sym_EQ] = ACTIONS(372),
    [sym__endl] = ACTIONS(245),
    [anon_sym_choose] = ACTIONS(243),
    [anon_sym_BANG_EQ] = ACTIONS(372),
    [sym_identifier] = ACTIONS(243),
    [anon_sym_LT_EQ] = ACTIONS(372),
  },
  [133] = {
    [anon_sym_LT] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(245),
    [anon_sym_end] = ACTIONS(243),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(245),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_if] = ACTIONS(243),
    [anon_sym_STAR] = ACTIONS(374),
    [anon_sym_and] = ACTIONS(243),
    [anon_sym_SLASH] = ACTIONS(374),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_EQ] = ACTIONS(245),
    [sym__endl] = ACTIONS(245),
    [anon_sym_choose] = ACTIONS(243),
    [anon_sym_BANG_EQ] = ACTIONS(245),
    [sym_identifier] = ACTIONS(243),
    [anon_sym_LT_EQ] = ACTIONS(245),
  },
  [134] = {
    [anon_sym_LT] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(245),
    [anon_sym_end] = ACTIONS(243),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(245),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_if] = ACTIONS(243),
    [anon_sym_STAR] = ACTIONS(245),
    [anon_sym_and] = ACTIONS(243),
    [anon_sym_SLASH] = ACTIONS(245),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_EQ] = ACTIONS(245),
    [sym__endl] = ACTIONS(245),
    [anon_sym_choose] = ACTIONS(243),
    [anon_sym_BANG_EQ] = ACTIONS(245),
    [sym_identifier] = ACTIONS(243),
    [anon_sym_LT_EQ] = ACTIONS(245),
  },
  [135] = {
    [anon_sym_LT] = ACTIONS(366),
    [anon_sym_DASH] = ACTIONS(368),
    [anon_sym_end] = ACTIONS(243),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(372),
    [anon_sym_PLUS] = ACTIONS(368),
    [anon_sym_if] = ACTIONS(243),
    [anon_sym_STAR] = ACTIONS(374),
    [anon_sym_and] = ACTIONS(376),
    [anon_sym_SLASH] = ACTIONS(374),
    [anon_sym_GT] = ACTIONS(366),
    [anon_sym_EQ] = ACTIONS(372),
    [sym__endl] = ACTIONS(245),
    [anon_sym_choose] = ACTIONS(243),
    [anon_sym_BANG_EQ] = ACTIONS(372),
    [sym_identifier] = ACTIONS(243),
    [anon_sym_LT_EQ] = ACTIONS(372),
  },
  [136] = {
    [anon_sym_LT] = ACTIONS(59),
    [anon_sym_DASH] = ACTIONS(292),
    [anon_sym_end] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(59),
    [anon_sym_GT_EQ] = ACTIONS(292),
    [anon_sym_PLUS] = ACTIONS(292),
    [anon_sym_if] = ACTIONS(59),
    [anon_sym_STAR] = ACTIONS(292),
    [anon_sym_and] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(292),
    [anon_sym_GT] = ACTIONS(59),
    [anon_sym_EQ] = ACTIONS(292),
    [sym__endl] = ACTIONS(292),
    [anon_sym_choose] = ACTIONS(59),
    [anon_sym_BANG_EQ] = ACTIONS(292),
    [sym_identifier] = ACTIONS(59),
    [anon_sym_LT_EQ] = ACTIONS(292),
  },
  [137] = {
    [sym_command_arg] = STATE(138),
    [aux_sym_command_repeat1] = STATE(138),
    [sym__constant] = STATE(13),
    [sym_stat_operator] = STATE(139),
    [sym_boolean] = STATE(13),
    [anon_sym_DASH] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [anon_sym_COLON] = ACTIONS(434),
    [anon_sym_true] = ACTIONS(23),
    [sym_comment] = ACTIONS(25),
    [anon_sym_EQ] = ACTIONS(17),
    [sym_string] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(23),
    [sym__endl] = ACTIONS(436),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(17),
    [sym_bare_word] = ACTIONS(19),
  },
  [138] = {
    [sym_command_arg] = STATE(27),
    [aux_sym_command_repeat1] = STATE(27),
    [sym__constant] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_number] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(23),
    [sym_comment] = ACTIONS(25),
    [sym_string] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(23),
    [sym__endl] = ACTIONS(438),
    [anon_sym_LBRACE] = ACTIONS(29),
    [sym_bare_word] = ACTIONS(19),
  },
  [139] = {
    [sym_binary_expression] = STATE(78),
    [sym_paran_expression] = STATE(78),
    [sym__constant] = STATE(78),
    [sym_unary_expression] = STATE(78),
    [sym_stat_rvalue] = STATE(77),
    [sym__expression] = STATE(78),
    [sym_boolean] = STATE(78),
    [anon_sym_DASH] = ACTIONS(378),
    [sym_number] = ACTIONS(440),
    [anon_sym_true] = ACTIONS(382),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(440),
    [anon_sym_false] = ACTIONS(382),
    [anon_sym_LPAREN] = ACTIONS(384),
    [sym_identifier] = ACTIONS(442),
    [anon_sym_not] = ACTIONS(388),
  },
  [140] = {
    [sym_binary_expression] = STATE(79),
    [sym_paran_expression] = STATE(79),
    [sym__constant] = STATE(79),
    [sym_unary_expression] = STATE(79),
    [sym__expression] = STATE(79),
    [sym_boolean] = STATE(79),
    [anon_sym_DASH] = ACTIONS(73),
    [sym_number] = ACTIONS(444),
    [anon_sym_true] = ACTIONS(77),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(444),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [sym_identifier] = ACTIONS(446),
    [anon_sym_not] = ACTIONS(83),
  },
  [141] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(448),
  },
  [142] = {
    [anon_sym_LT] = ACTIONS(95),
    [anon_sym_and] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(99),
    [anon_sym_SLASH] = ACTIONS(101),
    [anon_sym_LT_EQ] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(95),
    [anon_sym_or] = ACTIONS(105),
    [anon_sym_EQ] = ACTIONS(103),
    [anon_sym_RPAREN] = ACTIONS(450),
    [sym_comment] = ACTIONS(3),
    [anon_sym_GT_EQ] = ACTIONS(103),
    [anon_sym_BANG_EQ] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(99),
    [anon_sym_STAR] = ACTIONS(101),
  },
  [143] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(452),
  },
  [144] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(454),
  },
  [145] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(456),
  },
  [146] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(458),
  },
  [147] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(460),
  },
  [148] = {
    [sym_command_arg] = STATE(149),
    [aux_sym_command_repeat1] = STATE(149),
    [sym_stat_operator] = STATE(150),
    [sym_boolean] = STATE(13),
    [sym__constant] = STATE(13),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(462),
    [anon_sym_true] = ACTIONS(23),
    [sym_comment] = ACTIONS(25),
    [sym_string] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(17),
    [sym_bare_word] = ACTIONS(19),
    [sym_number] = ACTIONS(19),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(23),
    [sym__endl] = ACTIONS(464),
  },
  [149] = {
    [sym_command_arg] = STATE(27),
    [aux_sym_command_repeat1] = STATE(27),
    [sym__constant] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_number] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(23),
    [sym_comment] = ACTIONS(25),
    [sym_string] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(23),
    [sym__endl] = ACTIONS(466),
    [anon_sym_LBRACE] = ACTIONS(29),
    [sym_bare_word] = ACTIONS(19),
  },
  [150] = {
    [sym_binary_expression] = STATE(104),
    [sym_paran_expression] = STATE(104),
    [sym__expression] = STATE(104),
    [sym_boolean] = STATE(104),
    [sym_stat_rvalue] = STATE(103),
    [sym__constant] = STATE(104),
    [sym_unary_expression] = STATE(104),
    [anon_sym_DASH] = ACTIONS(406),
    [sym_number] = ACTIONS(468),
    [anon_sym_true] = ACTIONS(410),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(468),
    [anon_sym_false] = ACTIONS(410),
    [anon_sym_LPAREN] = ACTIONS(412),
    [sym_identifier] = ACTIONS(470),
    [anon_sym_not] = ACTIONS(416),
  },
  [151] = {
    [sym_binary_expression] = STATE(105),
    [sym_paran_expression] = STATE(105),
    [sym__constant] = STATE(105),
    [sym_unary_expression] = STATE(105),
    [sym__expression] = STATE(105),
    [sym_boolean] = STATE(105),
    [anon_sym_DASH] = ACTIONS(378),
    [sym_number] = ACTIONS(472),
    [anon_sym_true] = ACTIONS(382),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(472),
    [anon_sym_false] = ACTIONS(382),
    [anon_sym_LPAREN] = ACTIONS(384),
    [sym_identifier] = ACTIONS(474),
    [anon_sym_not] = ACTIONS(388),
  },
  [152] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(476),
  },
  [153] = {
    [anon_sym_LT] = ACTIONS(95),
    [anon_sym_and] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(99),
    [anon_sym_SLASH] = ACTIONS(101),
    [anon_sym_LT_EQ] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(95),
    [anon_sym_or] = ACTIONS(105),
    [anon_sym_EQ] = ACTIONS(103),
    [anon_sym_RPAREN] = ACTIONS(478),
    [sym_comment] = ACTIONS(3),
    [anon_sym_GT_EQ] = ACTIONS(103),
    [anon_sym_BANG_EQ] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(99),
    [anon_sym_STAR] = ACTIONS(101),
  },
  [154] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(480),
  },
  [155] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(482),
  },
  [156] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(484),
  },
  [157] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(486),
  },
  [158] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(488),
  },
  [159] = {
    [sym_binary_expression] = STATE(124),
    [sym_paran_expression] = STATE(124),
    [sym__constant] = STATE(124),
    [sym_unary_expression] = STATE(124),
    [sym__expression] = STATE(124),
    [sym_boolean] = STATE(124),
    [anon_sym_DASH] = ACTIONS(406),
    [sym_number] = ACTIONS(490),
    [anon_sym_true] = ACTIONS(410),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(490),
    [anon_sym_false] = ACTIONS(410),
    [anon_sym_LPAREN] = ACTIONS(412),
    [sym_identifier] = ACTIONS(492),
    [anon_sym_not] = ACTIONS(416),
  },
  [160] = {
    [anon_sym_LT] = ACTIONS(95),
    [anon_sym_and] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(99),
    [anon_sym_SLASH] = ACTIONS(101),
    [anon_sym_LT_EQ] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(95),
    [anon_sym_or] = ACTIONS(105),
    [anon_sym_EQ] = ACTIONS(103),
    [anon_sym_RPAREN] = ACTIONS(494),
    [sym_comment] = ACTIONS(3),
    [anon_sym_GT_EQ] = ACTIONS(103),
    [anon_sym_BANG_EQ] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(99),
    [anon_sym_STAR] = ACTIONS(101),
  },
  [161] = {
    [sym_comment] = ACTIONS(25),
    [sym_text_copy] = ACTIONS(496),
    [anon_sym_LBRACK] = ACTIONS(498),
  },
  [162] = {
    [sym_binary_expression] = STATE(142),
    [sym_paran_expression] = STATE(142),
    [sym__constant] = STATE(142),
    [sym_unary_expression] = STATE(142),
    [sym__expression] = STATE(142),
    [sym_boolean] = STATE(142),
    [anon_sym_DASH] = ACTIONS(31),
    [sym_number] = ACTIONS(500),
    [anon_sym_true] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(500),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_identifier] = ACTIONS(502),
    [anon_sym_not] = ACTIONS(41),
  },
  [163] = {
    [sym_choice] = STATE(42),
    [aux_sym_choose_statement_repeat1] = STATE(42),
    [anon_sym_STAR] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(504),
  },
  [164] = {
    [sym_else_clause] = STATE(165),
    [aux_sym_if_statement_repeat1] = STATE(166),
    [sym_elseif_clause] = STATE(166),
    [anon_sym_elseif] = ACTIONS(188),
    [anon_sym_end] = ACTIONS(506),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(192),
  },
  [165] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(508),
  },
  [166] = {
    [sym_else_clause] = STATE(168),
    [aux_sym_if_statement_repeat1] = STATE(66),
    [sym_elseif_clause] = STATE(66),
    [anon_sym_elseif] = ACTIONS(188),
    [anon_sym_end] = ACTIONS(508),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(192),
  },
  [167] = {
    [sym_comment] = ACTIONS(25),
    [sym_text_copy] = ACTIONS(510),
  },
  [168] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(512),
  },
  [169] = {
    [sym_text_copy] = ACTIONS(514),
    [sym_comment] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(516),
  },
  [170] = {
    [sym_binary_expression] = STATE(153),
    [sym_paran_expression] = STATE(153),
    [sym__constant] = STATE(153),
    [sym_unary_expression] = STATE(153),
    [sym__expression] = STATE(153),
    [sym_boolean] = STATE(153),
    [anon_sym_DASH] = ACTIONS(31),
    [sym_number] = ACTIONS(518),
    [anon_sym_true] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(518),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_identifier] = ACTIONS(520),
    [anon_sym_not] = ACTIONS(41),
  },
  [171] = {
    [sym_choice] = STATE(42),
    [aux_sym_choose_statement_repeat1] = STATE(42),
    [anon_sym_end] = ACTIONS(522),
    [sym_comment] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(49),
  },
  [172] = {
    [sym_else_clause] = STATE(173),
    [aux_sym_if_statement_repeat1] = STATE(174),
    [sym_elseif_clause] = STATE(174),
    [anon_sym_elseif] = ACTIONS(188),
    [anon_sym_end] = ACTIONS(524),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(192),
  },
  [173] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(526),
  },
  [174] = {
    [sym_else_clause] = STATE(176),
    [aux_sym_if_statement_repeat1] = STATE(66),
    [sym_elseif_clause] = STATE(66),
    [anon_sym_elseif] = ACTIONS(188),
    [anon_sym_end] = ACTIONS(526),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(192),
  },
  [175] = {
    [sym_comment] = ACTIONS(25),
    [sym_text_copy] = ACTIONS(528),
  },
  [176] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(530),
  },
  [177] = {
    [sym_binary_expression] = STATE(160),
    [sym_paran_expression] = STATE(160),
    [sym__constant] = STATE(160),
    [sym_unary_expression] = STATE(160),
    [sym__expression] = STATE(160),
    [sym_boolean] = STATE(160),
    [anon_sym_DASH] = ACTIONS(31),
    [sym_number] = ACTIONS(532),
    [anon_sym_true] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(532),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_identifier] = ACTIONS(534),
    [anon_sym_not] = ACTIONS(41),
  },
  [178] = {
    [sym_choice] = STATE(163),
    [aux_sym_choose_statement_repeat1] = STATE(163),
    [sym_comment] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(49),
  },
  [179] = {
    [sym_block] = STATE(33),
    [sym_if_clause] = STATE(164),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(93),
  },
  [180] = {
    [anon_sym_RBRACK] = ACTIONS(536),
    [sym_comment] = ACTIONS(3),
  },
  [181] = {
    [sym_choice] = STATE(171),
    [aux_sym_choose_statement_repeat1] = STATE(171),
    [sym_comment] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(49),
  },
  [182] = {
    [sym_block] = STATE(33),
    [sym_if_clause] = STATE(172),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(93),
  },
  [183] = {
    [anon_sym_RBRACK] = ACTIONS(538),
    [sym_comment] = ACTIONS(3),
  },
  [184] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(540),
  },
  [185] = {
    [sym_binary_expression] = STATE(19),
    [sym_paran_expression] = STATE(19),
    [sym__constant] = STATE(19),
    [sym_unary_expression] = STATE(19),
    [sym_condition] = STATE(179),
    [sym__expression] = STATE(19),
    [sym_boolean] = STATE(19),
    [anon_sym_DASH] = ACTIONS(31),
    [sym_number] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_identifier] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
  },
  [186] = {
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(542),
  },
  [187] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(544),
  },
  [188] = {
    [sym_binary_expression] = STATE(19),
    [sym_paran_expression] = STATE(19),
    [sym_condition] = STATE(182),
    [sym__expression] = STATE(19),
    [sym_boolean] = STATE(19),
    [sym__constant] = STATE(19),
    [sym_unary_expression] = STATE(19),
    [anon_sym_DASH] = ACTIONS(31),
    [sym_number] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_identifier] = ACTIONS(39),
    [anon_sym_not] = ACTIONS(41),
  },
  [189] = {
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(546),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(6),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [9] = {.count = 1, .reusable = false}, SHIFT(2),
  [11] = {.count = 1, .reusable = false}, SHIFT(3),
  [13] = {.count = 1, .reusable = false}, SHIFT(4),
  [15] = {.count = 1, .reusable = true}, SHIFT(7),
  [17] = {.count = 1, .reusable = false}, SHIFT(8),
  [19] = {.count = 1, .reusable = false}, SHIFT(13),
  [21] = {.count = 1, .reusable = false}, SHIFT(9),
  [23] = {.count = 1, .reusable = false}, SHIFT(10),
  [25] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [27] = {.count = 1, .reusable = false}, SHIFT(11),
  [29] = {.count = 1, .reusable = false}, SHIFT(12),
  [31] = {.count = 1, .reusable = true}, SHIFT(16),
  [33] = {.count = 1, .reusable = true}, SHIFT(19),
  [35] = {.count = 1, .reusable = false}, SHIFT(73),
  [37] = {.count = 1, .reusable = true}, SHIFT(17),
  [39] = {.count = 1, .reusable = false}, SHIFT(19),
  [41] = {.count = 1, .reusable = false}, SHIFT(16),
  [43] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [45] = {.count = 1, .reusable = true}, SHIFT(20),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [49] = {.count = 1, .reusable = true}, SHIFT(21),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_stat_operator, 1),
  [53] = {.count = 1, .reusable = false}, REDUCE(sym_stat_operator, 1),
  [55] = {.count = 1, .reusable = false}, SHIFT(23),
  [57] = {.count = 1, .reusable = false}, SHIFT(24),
  [59] = {.count = 1, .reusable = false}, REDUCE(sym_boolean, 1),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_command, 2, .production_id = 1),
  [63] = {.count = 1, .reusable = false}, REDUCE(sym_command, 2, .production_id = 1),
  [65] = {.count = 1, .reusable = true}, SHIFT(25),
  [67] = {.count = 1, .reusable = false}, SHIFT(25),
  [69] = {.count = 1, .reusable = false}, REDUCE(sym_command_arg, 1),
  [71] = {.count = 1, .reusable = false}, SHIFT(26),
  [73] = {.count = 1, .reusable = true}, SHIFT(140),
  [75] = {.count = 1, .reusable = true}, SHIFT(29),
  [77] = {.count = 1, .reusable = false}, SHIFT(99),
  [79] = {.count = 1, .reusable = true}, SHIFT(162),
  [81] = {.count = 1, .reusable = false}, SHIFT(29),
  [83] = {.count = 1, .reusable = false}, SHIFT(140),
  [85] = {.count = 1, .reusable = true}, SHIFT(30),
  [87] = {.count = 1, .reusable = false}, SHIFT(30),
  [89] = {.count = 1, .reusable = true}, SHIFT(31),
  [91] = {.count = 1, .reusable = false}, SHIFT(31),
  [93] = {.count = 1, .reusable = true}, SHIFT(32),
  [95] = {.count = 1, .reusable = false}, SHIFT(35),
  [97] = {.count = 1, .reusable = true}, SHIFT(36),
  [99] = {.count = 1, .reusable = true}, SHIFT(37),
  [101] = {.count = 1, .reusable = true}, SHIFT(38),
  [103] = {.count = 1, .reusable = true}, SHIFT(35),
  [105] = {.count = 1, .reusable = true}, SHIFT(39),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_condition, 1),
  [109] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [112] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [115] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [117] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [120] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [123] = {.count = 1, .reusable = false}, SHIFT(40),
  [125] = {.count = 1, .reusable = true}, SHIFT(41),
  [127] = {.count = 1, .reusable = true}, SHIFT(43),
  [129] = {.count = 1, .reusable = true}, SHIFT(44),
  [131] = {.count = 1, .reusable = true}, SHIFT(45),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_command, 3, .production_id = 1),
  [135] = {.count = 1, .reusable = false}, REDUCE(sym_command, 3, .production_id = 1),
  [137] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(13),
  [140] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(10),
  [143] = {.count = 1, .reusable = false}, REDUCE(aux_sym_command_repeat1, 2),
  [145] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(12),
  [148] = {.count = 1, .reusable = true}, REDUCE(sym_stat_operation, 3, .production_id = 2),
  [150] = {.count = 1, .reusable = false}, REDUCE(sym_stat_operation, 3, .production_id = 2),
  [152] = {.count = 1, .reusable = false}, SHIFT(81),
  [154] = {.count = 1, .reusable = true}, SHIFT(83),
  [156] = {.count = 1, .reusable = false}, SHIFT(85),
  [158] = {.count = 1, .reusable = true}, SHIFT(81),
  [160] = {.count = 1, .reusable = false}, REDUCE(sym_stat_rvalue, 1),
  [162] = {.count = 1, .reusable = true}, SHIFT(84),
  [164] = {.count = 1, .reusable = false}, SHIFT(82),
  [166] = {.count = 1, .reusable = true}, REDUCE(sym_stat_rvalue, 1),
  [168] = {.count = 1, .reusable = false}, REDUCE(sym_unary_expression, 2),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym_unary_expression, 2),
  [172] = {.count = 1, .reusable = true}, SHIFT(46),
  [174] = {.count = 1, .reusable = false}, REDUCE(sym_block, 1),
  [176] = {.count = 1, .reusable = true}, SHIFT(47),
  [178] = {.count = 1, .reusable = false}, SHIFT(184),
  [180] = {.count = 1, .reusable = false}, SHIFT(137),
  [182] = {.count = 1, .reusable = false}, SHIFT(185),
  [184] = {.count = 1, .reusable = true}, REDUCE(sym_if_clause, 1),
  [186] = {.count = 1, .reusable = false}, REDUCE(sym_if_clause, 1),
  [188] = {.count = 1, .reusable = true}, SHIFT(48),
  [190] = {.count = 1, .reusable = true}, SHIFT(50),
  [192] = {.count = 1, .reusable = false}, SHIFT(49),
  [194] = {.count = 1, .reusable = true}, SHIFT(53),
  [196] = {.count = 1, .reusable = false}, SHIFT(53),
  [198] = {.count = 1, .reusable = true}, SHIFT(54),
  [200] = {.count = 1, .reusable = false}, SHIFT(54),
  [202] = {.count = 1, .reusable = true}, SHIFT(55),
  [204] = {.count = 1, .reusable = false}, SHIFT(55),
  [206] = {.count = 1, .reusable = true}, SHIFT(56),
  [208] = {.count = 1, .reusable = false}, SHIFT(56),
  [210] = {.count = 1, .reusable = true}, SHIFT(57),
  [212] = {.count = 1, .reusable = false}, SHIFT(57),
  [214] = {.count = 1, .reusable = true}, SHIFT(80),
  [216] = {.count = 1, .reusable = true}, SHIFT(59),
  [218] = {.count = 2, .reusable = true}, REDUCE(aux_sym_choose_statement_repeat1, 2), SHIFT_REPEAT(21),
  [221] = {.count = 1, .reusable = true}, REDUCE(aux_sym_choose_statement_repeat1, 2),
  [223] = {.count = 1, .reusable = true}, REDUCE(sym_show_text, 4, .production_id = 3),
  [225] = {.count = 1, .reusable = false}, REDUCE(sym_show_text, 4, .production_id = 3),
  [227] = {.count = 1, .reusable = true}, SHIFT(60),
  [229] = {.count = 1, .reusable = false}, REDUCE(sym_command_arg, 3),
  [231] = {.count = 1, .reusable = false}, REDUCE(sym_paran_expression, 3),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym_paran_expression, 3),
  [235] = {.count = 1, .reusable = false}, REDUCE(sym_block, 2),
  [237] = {.count = 1, .reusable = true}, SHIFT(75),
  [239] = {.count = 1, .reusable = true}, SHIFT(63),
  [241] = {.count = 1, .reusable = true}, SHIFT(64),
  [243] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym_choice, 3),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_choose_statement, 5),
  [251] = {.count = 1, .reusable = false}, REDUCE(sym_choose_statement, 5),
  [253] = {.count = 1, .reusable = false}, SHIFT(67),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_else_clause, 2),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 5),
  [259] = {.count = 1, .reusable = false}, REDUCE(sym_if_statement, 5),
  [261] = {.count = 1, .reusable = true}, SHIFT(69),
  [263] = {.count = 1, .reusable = true}, SHIFT(70),
  [265] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(48),
  [268] = {.count = 1, .reusable = true}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [270] = {.count = 1, .reusable = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [272] = {.count = 1, .reusable = true}, SHIFT(71),
  [274] = {.count = 1, .reusable = true}, REDUCE(sym_elseif_clause, 3),
  [276] = {.count = 1, .reusable = false}, REDUCE(sym_elseif_clause, 3),
  [278] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 6),
  [280] = {.count = 1, .reusable = false}, REDUCE(sym_if_statement, 6),
  [282] = {.count = 1, .reusable = true}, SHIFT(72),
  [284] = {.count = 1, .reusable = true}, REDUCE(sym_show_text, 7, .production_id = 4),
  [286] = {.count = 1, .reusable = false}, REDUCE(sym_show_text, 7, .production_id = 4),
  [288] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 7),
  [290] = {.count = 1, .reusable = false}, REDUCE(sym_if_statement, 7),
  [292] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [294] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2),
  [296] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [299] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(184),
  [302] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(137),
  [305] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(185),
  [308] = {.count = 1, .reusable = false}, SHIFT(106),
  [310] = {.count = 1, .reusable = true}, SHIFT(108),
  [312] = {.count = 1, .reusable = false}, SHIFT(110),
  [314] = {.count = 1, .reusable = true}, SHIFT(106),
  [316] = {.count = 1, .reusable = true}, SHIFT(109),
  [318] = {.count = 1, .reusable = false}, SHIFT(107),
  [320] = {.count = 1, .reusable = true}, SHIFT(88),
  [322] = {.count = 1, .reusable = false}, SHIFT(187),
  [324] = {.count = 1, .reusable = false}, SHIFT(148),
  [326] = {.count = 1, .reusable = false}, SHIFT(188),
  [328] = {.count = 1, .reusable = true}, REDUCE(sym_block, 1),
  [330] = {.count = 1, .reusable = true}, SHIFT(89),
  [332] = {.count = 1, .reusable = false}, SHIFT(89),
  [334] = {.count = 1, .reusable = true}, SHIFT(90),
  [336] = {.count = 1, .reusable = false}, SHIFT(90),
  [338] = {.count = 1, .reusable = true}, SHIFT(91),
  [340] = {.count = 1, .reusable = false}, SHIFT(91),
  [342] = {.count = 1, .reusable = true}, SHIFT(92),
  [344] = {.count = 1, .reusable = false}, SHIFT(92),
  [346] = {.count = 1, .reusable = true}, SHIFT(93),
  [348] = {.count = 1, .reusable = false}, SHIFT(93),
  [350] = {.count = 1, .reusable = true}, SHIFT(101),
  [352] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [354] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(101),
  [357] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(187),
  [360] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(148),
  [363] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(188),
  [366] = {.count = 1, .reusable = false}, SHIFT(125),
  [368] = {.count = 1, .reusable = true}, SHIFT(127),
  [370] = {.count = 1, .reusable = false}, SHIFT(129),
  [372] = {.count = 1, .reusable = true}, SHIFT(125),
  [374] = {.count = 1, .reusable = true}, SHIFT(128),
  [376] = {.count = 1, .reusable = false}, SHIFT(126),
  [378] = {.count = 1, .reusable = true}, SHIFT(151),
  [380] = {.count = 1, .reusable = true}, SHIFT(113),
  [382] = {.count = 1, .reusable = false}, SHIFT(123),
  [384] = {.count = 1, .reusable = true}, SHIFT(170),
  [386] = {.count = 1, .reusable = false}, SHIFT(113),
  [388] = {.count = 1, .reusable = false}, SHIFT(151),
  [390] = {.count = 1, .reusable = true}, SHIFT(114),
  [392] = {.count = 1, .reusable = false}, SHIFT(114),
  [394] = {.count = 1, .reusable = true}, SHIFT(115),
  [396] = {.count = 1, .reusable = false}, SHIFT(115),
  [398] = {.count = 1, .reusable = true}, SHIFT(116),
  [400] = {.count = 1, .reusable = false}, SHIFT(116),
  [402] = {.count = 1, .reusable = true}, SHIFT(117),
  [404] = {.count = 1, .reusable = false}, SHIFT(117),
  [406] = {.count = 1, .reusable = true}, SHIFT(159),
  [408] = {.count = 1, .reusable = true}, SHIFT(131),
  [410] = {.count = 1, .reusable = false}, SHIFT(136),
  [412] = {.count = 1, .reusable = true}, SHIFT(177),
  [414] = {.count = 1, .reusable = false}, SHIFT(131),
  [416] = {.count = 1, .reusable = false}, SHIFT(159),
  [418] = {.count = 1, .reusable = true}, SHIFT(132),
  [420] = {.count = 1, .reusable = false}, SHIFT(132),
  [422] = {.count = 1, .reusable = true}, SHIFT(133),
  [424] = {.count = 1, .reusable = false}, SHIFT(133),
  [426] = {.count = 1, .reusable = true}, SHIFT(134),
  [428] = {.count = 1, .reusable = false}, SHIFT(134),
  [430] = {.count = 1, .reusable = true}, SHIFT(135),
  [432] = {.count = 1, .reusable = false}, SHIFT(135),
  [434] = {.count = 1, .reusable = false}, SHIFT(161),
  [436] = {.count = 1, .reusable = false}, SHIFT(74),
  [438] = {.count = 1, .reusable = false}, SHIFT(76),
  [440] = {.count = 1, .reusable = true}, SHIFT(78),
  [442] = {.count = 1, .reusable = false}, SHIFT(78),
  [444] = {.count = 1, .reusable = true}, SHIFT(79),
  [446] = {.count = 1, .reusable = false}, SHIFT(79),
  [448] = {.count = 1, .reusable = true}, SHIFT(86),
  [450] = {.count = 1, .reusable = true}, SHIFT(87),
  [452] = {.count = 1, .reusable = true}, SHIFT(94),
  [454] = {.count = 1, .reusable = true}, SHIFT(95),
  [456] = {.count = 1, .reusable = true}, SHIFT(96),
  [458] = {.count = 1, .reusable = true}, SHIFT(97),
  [460] = {.count = 1, .reusable = true}, SHIFT(98),
  [462] = {.count = 1, .reusable = false}, SHIFT(169),
  [464] = {.count = 1, .reusable = false}, SHIFT(100),
  [466] = {.count = 1, .reusable = false}, SHIFT(102),
  [468] = {.count = 1, .reusable = true}, SHIFT(104),
  [470] = {.count = 1, .reusable = false}, SHIFT(104),
  [472] = {.count = 1, .reusable = true}, SHIFT(105),
  [474] = {.count = 1, .reusable = false}, SHIFT(105),
  [476] = {.count = 1, .reusable = true}, SHIFT(111),
  [478] = {.count = 1, .reusable = true}, SHIFT(112),
  [480] = {.count = 1, .reusable = true}, SHIFT(118),
  [482] = {.count = 1, .reusable = true}, SHIFT(119),
  [484] = {.count = 1, .reusable = true}, SHIFT(120),
  [486] = {.count = 1, .reusable = true}, SHIFT(121),
  [488] = {.count = 1, .reusable = true}, SHIFT(122),
  [490] = {.count = 1, .reusable = true}, SHIFT(124),
  [492] = {.count = 1, .reusable = false}, SHIFT(124),
  [494] = {.count = 1, .reusable = true}, SHIFT(130),
  [496] = {.count = 1, .reusable = false}, SHIFT(141),
  [498] = {.count = 1, .reusable = false}, SHIFT(186),
  [500] = {.count = 1, .reusable = true}, SHIFT(142),
  [502] = {.count = 1, .reusable = false}, SHIFT(142),
  [504] = {.count = 1, .reusable = true}, SHIFT(143),
  [506] = {.count = 1, .reusable = true}, SHIFT(144),
  [508] = {.count = 1, .reusable = true}, SHIFT(145),
  [510] = {.count = 1, .reusable = false}, SHIFT(146),
  [512] = {.count = 1, .reusable = true}, SHIFT(147),
  [514] = {.count = 1, .reusable = false}, SHIFT(152),
  [516] = {.count = 1, .reusable = false}, SHIFT(189),
  [518] = {.count = 1, .reusable = true}, SHIFT(153),
  [520] = {.count = 1, .reusable = false}, SHIFT(153),
  [522] = {.count = 1, .reusable = true}, SHIFT(154),
  [524] = {.count = 1, .reusable = true}, SHIFT(155),
  [526] = {.count = 1, .reusable = true}, SHIFT(156),
  [528] = {.count = 1, .reusable = false}, SHIFT(157),
  [530] = {.count = 1, .reusable = true}, SHIFT(158),
  [532] = {.count = 1, .reusable = true}, SHIFT(160),
  [534] = {.count = 1, .reusable = false}, SHIFT(160),
  [536] = {.count = 1, .reusable = true}, SHIFT(167),
  [538] = {.count = 1, .reusable = true}, SHIFT(175),
  [540] = {.count = 1, .reusable = true}, SHIFT(178),
  [542] = {.count = 1, .reusable = true}, SHIFT(180),
  [544] = {.count = 1, .reusable = true}, SHIFT(181),
  [546] = {.count = 1, .reusable = true}, SHIFT(183),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_fuior(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
