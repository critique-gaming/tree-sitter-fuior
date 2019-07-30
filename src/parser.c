#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 121
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 3
#define TOKEN_COUNT 20
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
  sym_bare_word = 12,
  anon_sym_COLON = 13,
  anon_sym_LBRACK = 14,
  anon_sym_RBRACK = 15,
  sym_text_copy = 16,
  sym_identifier = 17,
  sym_number = 18,
  sym_string = 19,
  sym_source_file = 20,
  sym__statement = 21,
  sym_if_statement = 22,
  sym_if_clause = 23,
  sym_elseif_clause = 24,
  sym_else_clause = 25,
  sym_choose_statement = 26,
  sym_choice = 27,
  sym_stat_operation = 28,
  sym_stat_operand = 29,
  sym_block = 30,
  sym_command = 31,
  sym_command_arg = 32,
  sym_show_text = 33,
  sym_expression = 34,
  aux_sym_source_file_repeat1 = 35,
  aux_sym_if_statement_repeat1 = 36,
  aux_sym_choose_statement_repeat1 = 37,
  aux_sym_command_repeat1 = 38,
  alias_sym_command_verb = 39,
  alias_sym_text_actor = 40,
  alias_sym_text_animation = 41,
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
  [sym_bare_word] = "bare_word",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_text_copy] = "text_copy",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_if_statement] = "if_statement",
  [sym_if_clause] = "if_clause",
  [sym_elseif_clause] = "elseif_clause",
  [sym_else_clause] = "else_clause",
  [sym_choose_statement] = "choose_statement",
  [sym_choice] = "choice",
  [sym_stat_operation] = "stat_operation",
  [sym_stat_operand] = "stat_operand",
  [sym_block] = "block",
  [sym_command] = "command",
  [sym_command_arg] = "command_arg",
  [sym_show_text] = "show_text",
  [sym_expression] = "expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
  [aux_sym_choose_statement_repeat1] = "choose_statement_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [alias_sym_command_verb] = "command_verb",
  [alias_sym_text_actor] = "text_actor",
  [alias_sym_text_animation] = "text_animation",
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
  [sym_stat_operand] = {
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
  [sym_expression] = {
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
  [alias_sym_command_verb] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_text_actor] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_text_animation] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[4][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = alias_sym_command_verb,
  },
  [2] = {
    [0] = alias_sym_text_actor,
  },
  [3] = {
    [0] = alias_sym_text_actor,
    [3] = alias_sym_text_animation,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(16);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '+') ADVANCE(30);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '[') ADVANCE(39);
      if (lookahead == ']') ADVANCE(40);
      if (lookahead == 'c') ADVANCE(49);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(16);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == 'c') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '"') ADVANCE(35);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '+') ADVANCE(30);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '"') ADVANCE(35);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(49);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'i') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 5:
      if (lookahead == '\r') SKIP(5)
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '[') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '' ||
          lookahead == '' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 6:
      if (lookahead == '\r') SKIP(6)
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '' ||
          lookahead == '' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(60);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(13);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == 'f') ADVANCE(24);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__endl);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_choose);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_bare_word);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '"') ADVANCE(35);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '+') ADVANCE(30);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_bare_word);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '"') ADVANCE(35);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_bare_word);
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_bare_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_bare_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_text_copy);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '[') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '' ||
          lookahead == '' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(43);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_text_copy);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '' ||
          lookahead == '' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_text_copy);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(54);
      if (lookahead == 'n') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 9},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 9},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 9},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 7},
  [120] = {.lex_state = 7},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_elseif] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym__endl] = ACTIONS(1),
    [anon_sym_choose] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [aux_sym_source_file_repeat1] = STATE(5),
    [sym_source_file] = STATE(6),
    [sym_choose_statement] = STATE(5),
    [sym_command] = STATE(5),
    [sym__statement] = STATE(5),
    [sym_if_statement] = STATE(5),
    [sym_stat_operation] = STATE(5),
    [sym_show_text] = STATE(5),
    [sym__endl] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_choose] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(13),
  },
  [2] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(15),
  },
  [3] = {
    [aux_sym_command_repeat1] = STATE(12),
    [sym_command_arg] = STATE(12),
    [sym_stat_operand] = STATE(13),
    [anon_sym_DASH] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [sym__endl] = ACTIONS(25),
    [sym_bare_word] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(17),
    [sym_string] = ACTIONS(23),
  },
  [4] = {
    [sym_expression] = STATE(15),
    [sym_number] = ACTIONS(27),
    [sym_identifier] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(27),
  },
  [5] = {
    [sym_choose_statement] = STATE(16),
    [sym_command] = STATE(16),
    [sym__statement] = STATE(16),
    [sym_if_statement] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(16),
    [sym_stat_operation] = STATE(16),
    [sym_show_text] = STATE(16),
    [sym__endl] = ACTIONS(29),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(13),
  },
  [6] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(33),
  },
  [7] = {
    [sym_choice] = STATE(18),
    [aux_sym_choose_statement_repeat1] = STATE(18),
    [sym_comment] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(35),
  },
  [8] = {
    [sym_number] = ACTIONS(37),
    [sym_identifier] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(37),
  },
  [9] = {
    [sym_comment] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_text_copy] = ACTIONS(41),
  },
  [10] = {
    [sym__endl] = ACTIONS(43),
    [sym_number] = ACTIONS(43),
    [sym_bare_word] = ACTIONS(43),
    [sym_comment] = ACTIONS(19),
    [sym_string] = ACTIONS(43),
  },
  [11] = {
    [sym__endl] = ACTIONS(45),
    [anon_sym_choose] = ACTIONS(47),
    [ts_builtin_sym_end] = ACTIONS(45),
    [sym_identifier] = ACTIONS(47),
    [sym_comment] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(47),
  },
  [12] = {
    [aux_sym_command_repeat1] = STATE(22),
    [sym_command_arg] = STATE(22),
    [sym_number] = ACTIONS(23),
    [sym__endl] = ACTIONS(49),
    [sym_bare_word] = ACTIONS(23),
    [sym_comment] = ACTIONS(19),
    [sym_string] = ACTIONS(23),
  },
  [13] = {
    [sym_expression] = STATE(23),
    [sym_number] = ACTIONS(27),
    [sym_identifier] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(27),
  },
  [14] = {
    [sym__endl] = ACTIONS(51),
    [anon_sym_choose] = ACTIONS(53),
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(53),
    [anon_sym_if] = ACTIONS(53),
  },
  [15] = {
    [sym_block] = STATE(25),
    [sym_if_clause] = STATE(26),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(55),
  },
  [16] = {
    [sym_choose_statement] = STATE(16),
    [sym_command] = STATE(16),
    [sym__statement] = STATE(16),
    [sym_if_statement] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(16),
    [sym_stat_operation] = STATE(16),
    [sym_show_text] = STATE(16),
    [sym__endl] = ACTIONS(57),
    [anon_sym_choose] = ACTIONS(60),
    [ts_builtin_sym_end] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(68),
  },
  [17] = {
    [sym_comment] = ACTIONS(19),
    [sym_text_copy] = ACTIONS(71),
  },
  [18] = {
    [sym_choice] = STATE(29),
    [aux_sym_choose_statement_repeat1] = STATE(29),
    [anon_sym_STAR] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(73),
  },
  [19] = {
    [sym_identifier] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(77),
  },
  [21] = {
    [sym__endl] = ACTIONS(79),
    [anon_sym_choose] = ACTIONS(81),
    [ts_builtin_sym_end] = ACTIONS(79),
    [sym_identifier] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(81),
  },
  [22] = {
    [aux_sym_command_repeat1] = STATE(22),
    [sym_command_arg] = STATE(22),
    [sym__endl] = ACTIONS(83),
    [sym_number] = ACTIONS(85),
    [sym_bare_word] = ACTIONS(85),
    [sym_comment] = ACTIONS(19),
    [sym_string] = ACTIONS(85),
  },
  [23] = {
    [sym__endl] = ACTIONS(88),
    [anon_sym_choose] = ACTIONS(90),
    [ts_builtin_sym_end] = ACTIONS(88),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(90),
  },
  [24] = {
    [sym_choose_statement] = STATE(32),
    [sym_command] = STATE(32),
    [sym__statement] = STATE(32),
    [sym_if_statement] = STATE(32),
    [aux_sym_source_file_repeat1] = STATE(32),
    [sym_stat_operation] = STATE(32),
    [sym_show_text] = STATE(32),
    [anon_sym_elseif] = ACTIONS(92),
    [anon_sym_end] = ACTIONS(92),
    [sym_identifier] = ACTIONS(94),
    [anon_sym_else] = ACTIONS(92),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(96),
    [anon_sym_choose] = ACTIONS(98),
    [anon_sym_if] = ACTIONS(100),
  },
  [25] = {
    [anon_sym_elseif] = ACTIONS(102),
    [anon_sym_end] = ACTIONS(102),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(104),
  },
  [26] = {
    [aux_sym_if_statement_repeat1] = STATE(37),
    [sym_elseif_clause] = STATE(37),
    [sym_else_clause] = STATE(36),
    [anon_sym_elseif] = ACTIONS(106),
    [anon_sym_end] = ACTIONS(108),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(110),
  },
  [27] = {
    [sym_block] = STATE(38),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(112),
  },
  [28] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(114),
  },
  [29] = {
    [sym_choice] = STATE(29),
    [aux_sym_choose_statement_repeat1] = STATE(29),
    [anon_sym_STAR] = ACTIONS(116),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(119),
  },
  [30] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(121),
  },
  [31] = {
    [sym__endl] = ACTIONS(123),
    [anon_sym_choose] = ACTIONS(125),
    [ts_builtin_sym_end] = ACTIONS(123),
    [sym_identifier] = ACTIONS(125),
    [sym_comment] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(125),
  },
  [32] = {
    [sym_choose_statement] = STATE(55),
    [sym_command] = STATE(55),
    [sym__statement] = STATE(55),
    [sym_if_statement] = STATE(55),
    [aux_sym_source_file_repeat1] = STATE(55),
    [sym_stat_operation] = STATE(55),
    [sym_show_text] = STATE(55),
    [anon_sym_elseif] = ACTIONS(127),
    [anon_sym_end] = ACTIONS(127),
    [sym_identifier] = ACTIONS(94),
    [anon_sym_else] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(129),
    [anon_sym_choose] = ACTIONS(98),
    [anon_sym_if] = ACTIONS(100),
  },
  [33] = {
    [sym_expression] = STATE(41),
    [sym_number] = ACTIONS(27),
    [sym_identifier] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(27),
  },
  [34] = {
    [sym_block] = STATE(42),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(112),
  },
  [35] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(131),
  },
  [36] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(133),
  },
  [37] = {
    [aux_sym_if_statement_repeat1] = STATE(46),
    [sym_elseif_clause] = STATE(46),
    [sym_else_clause] = STATE(45),
    [anon_sym_elseif] = ACTIONS(106),
    [anon_sym_end] = ACTIONS(133),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(110),
  },
  [38] = {
    [anon_sym_STAR] = ACTIONS(135),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(135),
  },
  [39] = {
    [sym__endl] = ACTIONS(137),
    [anon_sym_choose] = ACTIONS(139),
    [ts_builtin_sym_end] = ACTIONS(137),
    [sym_identifier] = ACTIONS(139),
    [sym_comment] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(139),
  },
  [40] = {
    [sym_comment] = ACTIONS(19),
    [sym_text_copy] = ACTIONS(141),
  },
  [41] = {
    [sym_block] = STATE(48),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(55),
  },
  [42] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(143),
  },
  [43] = {
    [sym__endl] = ACTIONS(145),
    [anon_sym_choose] = ACTIONS(147),
    [ts_builtin_sym_end] = ACTIONS(145),
    [sym_identifier] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(147),
  },
  [44] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(149),
  },
  [45] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(151),
  },
  [46] = {
    [sym_elseif_clause] = STATE(46),
    [aux_sym_if_statement_repeat1] = STATE(46),
    [anon_sym_elseif] = ACTIONS(153),
    [anon_sym_end] = ACTIONS(156),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(158),
  },
  [47] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(160),
  },
  [48] = {
    [anon_sym_elseif] = ACTIONS(162),
    [anon_sym_end] = ACTIONS(162),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(164),
  },
  [49] = {
    [sym__endl] = ACTIONS(166),
    [anon_sym_choose] = ACTIONS(168),
    [ts_builtin_sym_end] = ACTIONS(166),
    [sym_identifier] = ACTIONS(168),
    [sym_comment] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(168),
  },
  [50] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(170),
  },
  [51] = {
    [sym__endl] = ACTIONS(172),
    [anon_sym_choose] = ACTIONS(174),
    [ts_builtin_sym_end] = ACTIONS(172),
    [sym_identifier] = ACTIONS(174),
    [sym_comment] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(174),
  },
  [52] = {
    [sym__endl] = ACTIONS(176),
    [anon_sym_choose] = ACTIONS(178),
    [ts_builtin_sym_end] = ACTIONS(176),
    [sym_identifier] = ACTIONS(178),
    [sym_comment] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(178),
  },
  [53] = {
    [anon_sym_elseif] = ACTIONS(47),
    [anon_sym_end] = ACTIONS(47),
    [sym_identifier] = ACTIONS(47),
    [anon_sym_else] = ACTIONS(47),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(45),
    [anon_sym_choose] = ACTIONS(47),
    [anon_sym_if] = ACTIONS(47),
  },
  [54] = {
    [anon_sym_elseif] = ACTIONS(53),
    [anon_sym_end] = ACTIONS(53),
    [sym_identifier] = ACTIONS(53),
    [anon_sym_else] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(51),
    [anon_sym_choose] = ACTIONS(53),
    [anon_sym_if] = ACTIONS(53),
  },
  [55] = {
    [sym_choose_statement] = STATE(55),
    [sym_command] = STATE(55),
    [sym__statement] = STATE(55),
    [sym_if_statement] = STATE(55),
    [aux_sym_source_file_repeat1] = STATE(55),
    [sym_stat_operation] = STATE(55),
    [sym_show_text] = STATE(55),
    [anon_sym_elseif] = ACTIONS(180),
    [anon_sym_end] = ACTIONS(180),
    [sym_identifier] = ACTIONS(182),
    [anon_sym_else] = ACTIONS(180),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(185),
    [anon_sym_choose] = ACTIONS(188),
    [anon_sym_if] = ACTIONS(191),
  },
  [56] = {
    [anon_sym_elseif] = ACTIONS(81),
    [anon_sym_end] = ACTIONS(81),
    [sym_identifier] = ACTIONS(81),
    [anon_sym_else] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(79),
    [anon_sym_choose] = ACTIONS(81),
    [anon_sym_if] = ACTIONS(81),
  },
  [57] = {
    [anon_sym_elseif] = ACTIONS(90),
    [anon_sym_end] = ACTIONS(90),
    [sym_identifier] = ACTIONS(90),
    [anon_sym_else] = ACTIONS(90),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(88),
    [anon_sym_choose] = ACTIONS(90),
    [anon_sym_if] = ACTIONS(90),
  },
  [58] = {
    [aux_sym_source_file_repeat1] = STATE(60),
    [sym_choose_statement] = STATE(60),
    [sym_command] = STATE(60),
    [sym__statement] = STATE(60),
    [sym_if_statement] = STATE(60),
    [sym_stat_operation] = STATE(60),
    [sym_show_text] = STATE(60),
    [anon_sym_end] = ACTIONS(92),
    [sym_identifier] = ACTIONS(194),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(196),
    [anon_sym_choose] = ACTIONS(198),
    [anon_sym_if] = ACTIONS(200),
    [anon_sym_STAR] = ACTIONS(202),
  },
  [59] = {
    [anon_sym_elseif] = ACTIONS(125),
    [anon_sym_end] = ACTIONS(125),
    [sym_identifier] = ACTIONS(125),
    [anon_sym_else] = ACTIONS(125),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(123),
    [anon_sym_choose] = ACTIONS(125),
    [anon_sym_if] = ACTIONS(125),
  },
  [60] = {
    [aux_sym_source_file_repeat1] = STATE(68),
    [sym_choose_statement] = STATE(68),
    [sym_command] = STATE(68),
    [sym__statement] = STATE(68),
    [sym_if_statement] = STATE(68),
    [sym_stat_operation] = STATE(68),
    [sym_show_text] = STATE(68),
    [anon_sym_end] = ACTIONS(127),
    [sym_identifier] = ACTIONS(194),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(204),
    [anon_sym_choose] = ACTIONS(198),
    [anon_sym_if] = ACTIONS(200),
    [anon_sym_STAR] = ACTIONS(206),
  },
  [61] = {
    [anon_sym_elseif] = ACTIONS(139),
    [anon_sym_end] = ACTIONS(139),
    [sym_identifier] = ACTIONS(139),
    [anon_sym_else] = ACTIONS(139),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(137),
    [anon_sym_choose] = ACTIONS(139),
    [anon_sym_if] = ACTIONS(139),
  },
  [62] = {
    [anon_sym_elseif] = ACTIONS(147),
    [anon_sym_end] = ACTIONS(147),
    [sym_identifier] = ACTIONS(147),
    [anon_sym_else] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(145),
    [anon_sym_choose] = ACTIONS(147),
    [anon_sym_if] = ACTIONS(147),
  },
  [63] = {
    [anon_sym_elseif] = ACTIONS(168),
    [anon_sym_end] = ACTIONS(168),
    [sym_identifier] = ACTIONS(168),
    [anon_sym_else] = ACTIONS(168),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(166),
    [anon_sym_choose] = ACTIONS(168),
    [anon_sym_if] = ACTIONS(168),
  },
  [64] = {
    [anon_sym_elseif] = ACTIONS(174),
    [anon_sym_end] = ACTIONS(174),
    [sym_identifier] = ACTIONS(174),
    [anon_sym_else] = ACTIONS(174),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(172),
    [anon_sym_choose] = ACTIONS(174),
    [anon_sym_if] = ACTIONS(174),
  },
  [65] = {
    [anon_sym_elseif] = ACTIONS(178),
    [anon_sym_end] = ACTIONS(178),
    [sym_identifier] = ACTIONS(178),
    [anon_sym_else] = ACTIONS(178),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(176),
    [anon_sym_choose] = ACTIONS(178),
    [anon_sym_if] = ACTIONS(178),
  },
  [66] = {
    [anon_sym_end] = ACTIONS(47),
    [sym_identifier] = ACTIONS(47),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(45),
    [anon_sym_choose] = ACTIONS(47),
    [anon_sym_if] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(45),
  },
  [67] = {
    [anon_sym_end] = ACTIONS(53),
    [sym_identifier] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(51),
    [anon_sym_choose] = ACTIONS(53),
    [anon_sym_if] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(51),
  },
  [68] = {
    [aux_sym_source_file_repeat1] = STATE(68),
    [sym_choose_statement] = STATE(68),
    [sym_command] = STATE(68),
    [sym__statement] = STATE(68),
    [sym_if_statement] = STATE(68),
    [sym_stat_operation] = STATE(68),
    [sym_show_text] = STATE(68),
    [anon_sym_end] = ACTIONS(180),
    [sym_identifier] = ACTIONS(208),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(211),
    [anon_sym_choose] = ACTIONS(214),
    [anon_sym_if] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(63),
  },
  [69] = {
    [anon_sym_end] = ACTIONS(81),
    [sym_identifier] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(79),
    [anon_sym_choose] = ACTIONS(81),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(79),
  },
  [70] = {
    [anon_sym_end] = ACTIONS(90),
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(88),
    [anon_sym_choose] = ACTIONS(90),
    [anon_sym_if] = ACTIONS(90),
    [anon_sym_STAR] = ACTIONS(88),
  },
  [71] = {
    [anon_sym_end] = ACTIONS(125),
    [sym_identifier] = ACTIONS(125),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(123),
    [anon_sym_choose] = ACTIONS(125),
    [anon_sym_if] = ACTIONS(125),
    [anon_sym_STAR] = ACTIONS(123),
  },
  [72] = {
    [anon_sym_end] = ACTIONS(139),
    [sym_identifier] = ACTIONS(139),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(137),
    [anon_sym_choose] = ACTIONS(139),
    [anon_sym_if] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(137),
  },
  [73] = {
    [anon_sym_end] = ACTIONS(147),
    [sym_identifier] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(145),
    [anon_sym_choose] = ACTIONS(147),
    [anon_sym_if] = ACTIONS(147),
    [anon_sym_STAR] = ACTIONS(145),
  },
  [74] = {
    [anon_sym_end] = ACTIONS(168),
    [sym_identifier] = ACTIONS(168),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(166),
    [anon_sym_choose] = ACTIONS(168),
    [anon_sym_if] = ACTIONS(168),
    [anon_sym_STAR] = ACTIONS(166),
  },
  [75] = {
    [anon_sym_end] = ACTIONS(174),
    [sym_identifier] = ACTIONS(174),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(172),
    [anon_sym_choose] = ACTIONS(174),
    [anon_sym_if] = ACTIONS(174),
    [anon_sym_STAR] = ACTIONS(172),
  },
  [76] = {
    [anon_sym_end] = ACTIONS(178),
    [sym_identifier] = ACTIONS(178),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(176),
    [anon_sym_choose] = ACTIONS(178),
    [anon_sym_if] = ACTIONS(178),
    [anon_sym_STAR] = ACTIONS(176),
  },
  [77] = {
    [aux_sym_command_repeat1] = STATE(78),
    [sym_command_arg] = STATE(78),
    [sym_stat_operand] = STATE(79),
    [anon_sym_DASH] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(220),
    [sym_number] = ACTIONS(23),
    [sym__endl] = ACTIONS(222),
    [sym_bare_word] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(17),
    [sym_string] = ACTIONS(23),
  },
  [78] = {
    [aux_sym_command_repeat1] = STATE(22),
    [sym_command_arg] = STATE(22),
    [sym_number] = ACTIONS(23),
    [sym__endl] = ACTIONS(224),
    [sym_bare_word] = ACTIONS(23),
    [sym_comment] = ACTIONS(19),
    [sym_string] = ACTIONS(23),
  },
  [79] = {
    [sym_expression] = STATE(57),
    [sym_number] = ACTIONS(226),
    [sym_identifier] = ACTIONS(226),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(226),
  },
  [80] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(228),
  },
  [81] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(230),
  },
  [82] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(232),
  },
  [83] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(234),
  },
  [84] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(236),
  },
  [85] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(238),
  },
  [86] = {
    [sym_command_arg] = STATE(87),
    [sym_stat_operand] = STATE(88),
    [aux_sym_command_repeat1] = STATE(87),
    [anon_sym_DASH] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(240),
    [sym_number] = ACTIONS(23),
    [sym__endl] = ACTIONS(242),
    [sym_bare_word] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(17),
    [sym_string] = ACTIONS(23),
  },
  [87] = {
    [aux_sym_command_repeat1] = STATE(22),
    [sym_command_arg] = STATE(22),
    [sym_comment] = ACTIONS(19),
    [sym_number] = ACTIONS(23),
    [sym__endl] = ACTIONS(244),
    [sym_bare_word] = ACTIONS(23),
    [sym_string] = ACTIONS(23),
  },
  [88] = {
    [sym_expression] = STATE(70),
    [sym_number] = ACTIONS(246),
    [sym_identifier] = ACTIONS(246),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(246),
  },
  [89] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(248),
  },
  [90] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(250),
  },
  [91] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(252),
  },
  [92] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(254),
  },
  [93] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(256),
  },
  [94] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(258),
  },
  [95] = {
    [sym_comment] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(260),
    [sym_text_copy] = ACTIONS(262),
  },
  [96] = {
    [sym_choice] = STATE(29),
    [aux_sym_choose_statement_repeat1] = STATE(29),
    [anon_sym_STAR] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(264),
  },
  [97] = {
    [aux_sym_if_statement_repeat1] = STATE(99),
    [sym_elseif_clause] = STATE(99),
    [sym_else_clause] = STATE(98),
    [anon_sym_elseif] = ACTIONS(106),
    [anon_sym_end] = ACTIONS(266),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(110),
  },
  [98] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(268),
  },
  [99] = {
    [aux_sym_if_statement_repeat1] = STATE(46),
    [sym_elseif_clause] = STATE(46),
    [sym_else_clause] = STATE(101),
    [anon_sym_elseif] = ACTIONS(106),
    [anon_sym_end] = ACTIONS(268),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(110),
  },
  [100] = {
    [sym_comment] = ACTIONS(19),
    [sym_text_copy] = ACTIONS(270),
  },
  [101] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(272),
  },
  [102] = {
    [sym_comment] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(274),
    [sym_text_copy] = ACTIONS(276),
  },
  [103] = {
    [sym_choice] = STATE(29),
    [aux_sym_choose_statement_repeat1] = STATE(29),
    [anon_sym_end] = ACTIONS(278),
    [sym_comment] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(35),
  },
  [104] = {
    [sym_elseif_clause] = STATE(106),
    [aux_sym_if_statement_repeat1] = STATE(106),
    [sym_else_clause] = STATE(105),
    [anon_sym_elseif] = ACTIONS(106),
    [anon_sym_end] = ACTIONS(280),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(110),
  },
  [105] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(282),
  },
  [106] = {
    [sym_elseif_clause] = STATE(46),
    [aux_sym_if_statement_repeat1] = STATE(46),
    [sym_else_clause] = STATE(108),
    [anon_sym_elseif] = ACTIONS(106),
    [anon_sym_end] = ACTIONS(282),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(110),
  },
  [107] = {
    [sym_comment] = ACTIONS(19),
    [sym_text_copy] = ACTIONS(284),
  },
  [108] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(286),
  },
  [109] = {
    [sym_choice] = STATE(96),
    [aux_sym_choose_statement_repeat1] = STATE(96),
    [sym_comment] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(35),
  },
  [110] = {
    [sym_block] = STATE(25),
    [sym_if_clause] = STATE(97),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(55),
  },
  [111] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(288),
  },
  [112] = {
    [sym_choice] = STATE(103),
    [aux_sym_choose_statement_repeat1] = STATE(103),
    [sym_comment] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(35),
  },
  [113] = {
    [sym_block] = STATE(25),
    [sym_if_clause] = STATE(104),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(55),
  },
  [114] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(290),
  },
  [115] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(292),
  },
  [116] = {
    [sym_expression] = STATE(110),
    [sym_number] = ACTIONS(27),
    [sym_identifier] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(27),
  },
  [117] = {
    [sym_identifier] = ACTIONS(294),
    [sym_comment] = ACTIONS(3),
  },
  [118] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(296),
  },
  [119] = {
    [sym_expression] = STATE(113),
    [sym_number] = ACTIONS(27),
    [sym_identifier] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(27),
  },
  [120] = {
    [sym_identifier] = ACTIONS(298),
    [sym_comment] = ACTIONS(3),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(5),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [9] = {.count = 1, .reusable = false}, SHIFT(2),
  [11] = {.count = 1, .reusable = false}, SHIFT(3),
  [13] = {.count = 1, .reusable = false}, SHIFT(4),
  [15] = {.count = 1, .reusable = true}, SHIFT(7),
  [17] = {.count = 1, .reusable = false}, SHIFT(8),
  [19] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [21] = {.count = 1, .reusable = false}, SHIFT(9),
  [23] = {.count = 1, .reusable = false}, SHIFT(10),
  [25] = {.count = 1, .reusable = false}, SHIFT(11),
  [27] = {.count = 1, .reusable = true}, SHIFT(14),
  [29] = {.count = 1, .reusable = true}, SHIFT(16),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [33] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [35] = {.count = 1, .reusable = true}, SHIFT(17),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_stat_operand, 1),
  [39] = {.count = 1, .reusable = false}, SHIFT(19),
  [41] = {.count = 1, .reusable = false}, SHIFT(20),
  [43] = {.count = 1, .reusable = false}, REDUCE(sym_command_arg, 1),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_command, 2, .production_id = 1),
  [47] = {.count = 1, .reusable = false}, REDUCE(sym_command, 2, .production_id = 1),
  [49] = {.count = 1, .reusable = false}, SHIFT(21),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 1),
  [53] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 1),
  [55] = {.count = 1, .reusable = true}, SHIFT(24),
  [57] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [60] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [63] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [65] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [68] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [71] = {.count = 1, .reusable = false}, SHIFT(27),
  [73] = {.count = 1, .reusable = true}, SHIFT(28),
  [75] = {.count = 1, .reusable = true}, SHIFT(30),
  [77] = {.count = 1, .reusable = true}, SHIFT(31),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_command, 3, .production_id = 1),
  [81] = {.count = 1, .reusable = false}, REDUCE(sym_command, 3, .production_id = 1),
  [83] = {.count = 1, .reusable = false}, REDUCE(aux_sym_command_repeat1, 2),
  [85] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(10),
  [88] = {.count = 1, .reusable = true}, REDUCE(sym_stat_operation, 3),
  [90] = {.count = 1, .reusable = false}, REDUCE(sym_stat_operation, 3),
  [92] = {.count = 1, .reusable = false}, REDUCE(sym_block, 1),
  [94] = {.count = 1, .reusable = false}, SHIFT(77),
  [96] = {.count = 1, .reusable = true}, SHIFT(32),
  [98] = {.count = 1, .reusable = false}, SHIFT(115),
  [100] = {.count = 1, .reusable = false}, SHIFT(116),
  [102] = {.count = 1, .reusable = true}, REDUCE(sym_if_clause, 1),
  [104] = {.count = 1, .reusable = false}, REDUCE(sym_if_clause, 1),
  [106] = {.count = 1, .reusable = true}, SHIFT(33),
  [108] = {.count = 1, .reusable = true}, SHIFT(35),
  [110] = {.count = 1, .reusable = false}, SHIFT(34),
  [112] = {.count = 1, .reusable = true}, SHIFT(58),
  [114] = {.count = 1, .reusable = true}, SHIFT(39),
  [116] = {.count = 2, .reusable = true}, REDUCE(aux_sym_choose_statement_repeat1, 2), SHIFT_REPEAT(17),
  [119] = {.count = 1, .reusable = true}, REDUCE(aux_sym_choose_statement_repeat1, 2),
  [121] = {.count = 1, .reusable = true}, SHIFT(40),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_show_text, 4, .production_id = 2),
  [125] = {.count = 1, .reusable = false}, REDUCE(sym_show_text, 4, .production_id = 2),
  [127] = {.count = 1, .reusable = false}, REDUCE(sym_block, 2),
  [129] = {.count = 1, .reusable = true}, SHIFT(55),
  [131] = {.count = 1, .reusable = true}, SHIFT(43),
  [133] = {.count = 1, .reusable = true}, SHIFT(44),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_choice, 3),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_choose_statement, 5),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym_choose_statement, 5),
  [141] = {.count = 1, .reusable = false}, SHIFT(47),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_else_clause, 2),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 5),
  [147] = {.count = 1, .reusable = false}, REDUCE(sym_if_statement, 5),
  [149] = {.count = 1, .reusable = true}, SHIFT(49),
  [151] = {.count = 1, .reusable = true}, SHIFT(50),
  [153] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(33),
  [156] = {.count = 1, .reusable = true}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [158] = {.count = 1, .reusable = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [160] = {.count = 1, .reusable = true}, SHIFT(51),
  [162] = {.count = 1, .reusable = true}, REDUCE(sym_elseif_clause, 3),
  [164] = {.count = 1, .reusable = false}, REDUCE(sym_elseif_clause, 3),
  [166] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 6),
  [168] = {.count = 1, .reusable = false}, REDUCE(sym_if_statement, 6),
  [170] = {.count = 1, .reusable = true}, SHIFT(52),
  [172] = {.count = 1, .reusable = true}, REDUCE(sym_show_text, 7, .production_id = 3),
  [174] = {.count = 1, .reusable = false}, REDUCE(sym_show_text, 7, .production_id = 3),
  [176] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 7),
  [178] = {.count = 1, .reusable = false}, REDUCE(sym_if_statement, 7),
  [180] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2),
  [182] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [185] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [188] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(115),
  [191] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(116),
  [194] = {.count = 1, .reusable = false}, SHIFT(86),
  [196] = {.count = 1, .reusable = true}, SHIFT(60),
  [198] = {.count = 1, .reusable = false}, SHIFT(118),
  [200] = {.count = 1, .reusable = false}, SHIFT(119),
  [202] = {.count = 1, .reusable = true}, REDUCE(sym_block, 1),
  [204] = {.count = 1, .reusable = true}, SHIFT(68),
  [206] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [208] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [211] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [214] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(118),
  [217] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(119),
  [220] = {.count = 1, .reusable = false}, SHIFT(95),
  [222] = {.count = 1, .reusable = false}, SHIFT(53),
  [224] = {.count = 1, .reusable = false}, SHIFT(56),
  [226] = {.count = 1, .reusable = true}, SHIFT(54),
  [228] = {.count = 1, .reusable = true}, SHIFT(59),
  [230] = {.count = 1, .reusable = true}, SHIFT(61),
  [232] = {.count = 1, .reusable = true}, SHIFT(62),
  [234] = {.count = 1, .reusable = true}, SHIFT(63),
  [236] = {.count = 1, .reusable = true}, SHIFT(64),
  [238] = {.count = 1, .reusable = true}, SHIFT(65),
  [240] = {.count = 1, .reusable = false}, SHIFT(102),
  [242] = {.count = 1, .reusable = false}, SHIFT(66),
  [244] = {.count = 1, .reusable = false}, SHIFT(69),
  [246] = {.count = 1, .reusable = true}, SHIFT(67),
  [248] = {.count = 1, .reusable = true}, SHIFT(71),
  [250] = {.count = 1, .reusable = true}, SHIFT(72),
  [252] = {.count = 1, .reusable = true}, SHIFT(73),
  [254] = {.count = 1, .reusable = true}, SHIFT(74),
  [256] = {.count = 1, .reusable = true}, SHIFT(75),
  [258] = {.count = 1, .reusable = true}, SHIFT(76),
  [260] = {.count = 1, .reusable = false}, SHIFT(117),
  [262] = {.count = 1, .reusable = false}, SHIFT(80),
  [264] = {.count = 1, .reusable = true}, SHIFT(81),
  [266] = {.count = 1, .reusable = true}, SHIFT(82),
  [268] = {.count = 1, .reusable = true}, SHIFT(83),
  [270] = {.count = 1, .reusable = false}, SHIFT(84),
  [272] = {.count = 1, .reusable = true}, SHIFT(85),
  [274] = {.count = 1, .reusable = false}, SHIFT(120),
  [276] = {.count = 1, .reusable = false}, SHIFT(89),
  [278] = {.count = 1, .reusable = true}, SHIFT(90),
  [280] = {.count = 1, .reusable = true}, SHIFT(91),
  [282] = {.count = 1, .reusable = true}, SHIFT(92),
  [284] = {.count = 1, .reusable = false}, SHIFT(93),
  [286] = {.count = 1, .reusable = true}, SHIFT(94),
  [288] = {.count = 1, .reusable = true}, SHIFT(100),
  [290] = {.count = 1, .reusable = true}, SHIFT(107),
  [292] = {.count = 1, .reusable = true}, SHIFT(109),
  [294] = {.count = 1, .reusable = true}, SHIFT(111),
  [296] = {.count = 1, .reusable = true}, SHIFT(112),
  [298] = {.count = 1, .reusable = true}, SHIFT(114),
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
