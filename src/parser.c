#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 112
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 3
#define TOKEN_COUNT 17
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
  sym_bare_word = 9,
  anon_sym_COLON = 10,
  anon_sym_LBRACK = 11,
  anon_sym_RBRACK = 12,
  sym_text_copy = 13,
  sym_identifier = 14,
  sym_number = 15,
  sym_string = 16,
  sym_source_file = 17,
  sym__statement = 18,
  sym_if_statement = 19,
  sym_if_clause = 20,
  sym_elseif_clause = 21,
  sym_else_clause = 22,
  sym_choose_statement = 23,
  sym_choice = 24,
  sym_block = 25,
  sym_command = 26,
  sym_command_arg = 27,
  sym_show_text = 28,
  sym_expression = 29,
  aux_sym_source_file_repeat1 = 30,
  aux_sym_if_statement_repeat1 = 31,
  aux_sym_choose_statement_repeat1 = 32,
  aux_sym_command_repeat1 = 33,
  alias_sym_command_verb = 34,
  alias_sym_text_actor = 35,
  alias_sym_text_animation = 36,
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
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == ']') ADVANCE(37);
      if (lookahead == 'c') ADVANCE(46);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(16);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == 'c') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(46);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 5:
      if (lookahead == '\r') SKIP(5)
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '' ||
          lookahead == '' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 6:
      if (lookahead == '\r') SKIP(6)
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '' ||
          lookahead == '' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(57);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(13);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_choose);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_bare_word);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_bare_word);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_bare_word);
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_bare_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_bare_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_text_copy);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '' ||
          lookahead == '' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_text_copy);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '' ||
          lookahead == '' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_text_copy);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(51);
      if (lookahead == 'n') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 57:
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
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 9},
  [108] = {.lex_state = 9},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 9},
  [111] = {.lex_state = 9},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_COLON] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_elseif] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym__endl] = ACTIONS(1),
    [anon_sym_choose] = ACTIONS(1),
  },
  [1] = {
    [sym_choose_statement] = STATE(6),
    [sym_show_text] = STATE(6),
    [sym_command] = STATE(6),
    [sym_if_statement] = STATE(6),
    [sym__statement] = STATE(6),
    [sym_source_file] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(6),
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
    [sym_command_arg] = STATE(11),
    [aux_sym_command_repeat1] = STATE(11),
    [sym__endl] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [anon_sym_COLON] = ACTIONS(21),
    [sym_bare_word] = ACTIONS(19),
    [sym_comment] = ACTIONS(23),
    [sym_string] = ACTIONS(19),
  },
  [4] = {
    [sym_expression] = STATE(13),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(25),
  },
  [5] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(27),
  },
  [6] = {
    [sym_choose_statement] = STATE(14),
    [sym_show_text] = STATE(14),
    [sym_command] = STATE(14),
    [sym_if_statement] = STATE(14),
    [sym__statement] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [sym__endl] = ACTIONS(29),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(13),
  },
  [7] = {
    [sym_choice] = STATE(16),
    [aux_sym_choose_statement_repeat1] = STATE(16),
    [sym_comment] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(33),
  },
  [8] = {
    [sym__endl] = ACTIONS(35),
    [anon_sym_choose] = ACTIONS(37),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(37),
  },
  [9] = {
    [sym__endl] = ACTIONS(39),
    [sym_number] = ACTIONS(39),
    [sym_bare_word] = ACTIONS(39),
    [sym_comment] = ACTIONS(23),
    [sym_string] = ACTIONS(39),
  },
  [10] = {
    [sym_text_copy] = ACTIONS(41),
    [sym_comment] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(43),
  },
  [11] = {
    [sym_command_arg] = STATE(20),
    [aux_sym_command_repeat1] = STATE(20),
    [sym__endl] = ACTIONS(45),
    [sym_number] = ACTIONS(19),
    [sym_bare_word] = ACTIONS(19),
    [sym_comment] = ACTIONS(23),
    [sym_string] = ACTIONS(19),
  },
  [12] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(47),
  },
  [13] = {
    [sym_if_clause] = STATE(22),
    [sym_block] = STATE(23),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(49),
  },
  [14] = {
    [sym_choose_statement] = STATE(14),
    [sym_show_text] = STATE(14),
    [sym_command] = STATE(14),
    [sym_if_statement] = STATE(14),
    [sym__statement] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [sym__endl] = ACTIONS(51),
    [anon_sym_choose] = ACTIONS(54),
    [ts_builtin_sym_end] = ACTIONS(57),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(62),
  },
  [15] = {
    [sym_text_copy] = ACTIONS(65),
    [sym_comment] = ACTIONS(23),
  },
  [16] = {
    [sym_choice] = STATE(26),
    [aux_sym_choose_statement_repeat1] = STATE(26),
    [anon_sym_STAR] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(67),
  },
  [17] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(69),
  },
  [18] = {
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(71),
  },
  [19] = {
    [sym__endl] = ACTIONS(73),
    [anon_sym_choose] = ACTIONS(75),
    [ts_builtin_sym_end] = ACTIONS(73),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(75),
  },
  [20] = {
    [sym_command_arg] = STATE(20),
    [aux_sym_command_repeat1] = STATE(20),
    [sym__endl] = ACTIONS(77),
    [sym_number] = ACTIONS(79),
    [sym_bare_word] = ACTIONS(79),
    [sym_comment] = ACTIONS(23),
    [sym_string] = ACTIONS(79),
  },
  [21] = {
    [sym_choose_statement] = STATE(29),
    [sym_show_text] = STATE(29),
    [sym_command] = STATE(29),
    [sym_if_statement] = STATE(29),
    [sym__statement] = STATE(29),
    [aux_sym_source_file_repeat1] = STATE(29),
    [anon_sym_elseif] = ACTIONS(82),
    [anon_sym_end] = ACTIONS(82),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(82),
    [sym__endl] = ACTIONS(84),
    [anon_sym_choose] = ACTIONS(86),
    [sym_identifier] = ACTIONS(88),
    [anon_sym_if] = ACTIONS(90),
  },
  [22] = {
    [aux_sym_if_statement_repeat1] = STATE(33),
    [sym_elseif_clause] = STATE(33),
    [sym_else_clause] = STATE(34),
    [anon_sym_elseif] = ACTIONS(92),
    [anon_sym_end] = ACTIONS(94),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(96),
  },
  [23] = {
    [anon_sym_elseif] = ACTIONS(98),
    [anon_sym_end] = ACTIONS(98),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(100),
  },
  [24] = {
    [sym_block] = STATE(35),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(102),
  },
  [25] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(104),
  },
  [26] = {
    [sym_choice] = STATE(26),
    [aux_sym_choose_statement_repeat1] = STATE(26),
    [anon_sym_STAR] = ACTIONS(106),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(109),
  },
  [27] = {
    [sym__endl] = ACTIONS(111),
    [anon_sym_choose] = ACTIONS(113),
    [ts_builtin_sym_end] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(113),
    [anon_sym_if] = ACTIONS(113),
  },
  [28] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(115),
  },
  [29] = {
    [sym_choose_statement] = STATE(51),
    [sym_show_text] = STATE(51),
    [sym_command] = STATE(51),
    [sym_if_statement] = STATE(51),
    [sym__statement] = STATE(51),
    [aux_sym_source_file_repeat1] = STATE(51),
    [anon_sym_elseif] = ACTIONS(117),
    [anon_sym_end] = ACTIONS(117),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(117),
    [sym__endl] = ACTIONS(119),
    [anon_sym_choose] = ACTIONS(86),
    [sym_identifier] = ACTIONS(88),
    [anon_sym_if] = ACTIONS(90),
  },
  [30] = {
    [sym_expression] = STATE(38),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(25),
  },
  [31] = {
    [sym_block] = STATE(39),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(102),
  },
  [32] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(121),
  },
  [33] = {
    [aux_sym_if_statement_repeat1] = STATE(42),
    [sym_elseif_clause] = STATE(42),
    [sym_else_clause] = STATE(43),
    [anon_sym_elseif] = ACTIONS(92),
    [anon_sym_end] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(96),
  },
  [34] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(123),
  },
  [35] = {
    [anon_sym_STAR] = ACTIONS(125),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(125),
  },
  [36] = {
    [sym__endl] = ACTIONS(127),
    [anon_sym_choose] = ACTIONS(129),
    [ts_builtin_sym_end] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(129),
    [anon_sym_if] = ACTIONS(129),
  },
  [37] = {
    [sym_text_copy] = ACTIONS(131),
    [sym_comment] = ACTIONS(23),
  },
  [38] = {
    [sym_block] = STATE(45),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(49),
  },
  [39] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(133),
  },
  [40] = {
    [sym__endl] = ACTIONS(135),
    [anon_sym_choose] = ACTIONS(137),
    [ts_builtin_sym_end] = ACTIONS(135),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(137),
    [anon_sym_if] = ACTIONS(137),
  },
  [41] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(139),
  },
  [42] = {
    [aux_sym_if_statement_repeat1] = STATE(42),
    [sym_elseif_clause] = STATE(42),
    [anon_sym_elseif] = ACTIONS(141),
    [anon_sym_end] = ACTIONS(144),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(146),
  },
  [43] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(148),
  },
  [44] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(150),
  },
  [45] = {
    [anon_sym_elseif] = ACTIONS(152),
    [anon_sym_end] = ACTIONS(152),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(154),
  },
  [46] = {
    [sym__endl] = ACTIONS(156),
    [anon_sym_choose] = ACTIONS(158),
    [ts_builtin_sym_end] = ACTIONS(156),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(158),
    [anon_sym_if] = ACTIONS(158),
  },
  [47] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(160),
  },
  [48] = {
    [sym__endl] = ACTIONS(162),
    [anon_sym_choose] = ACTIONS(164),
    [ts_builtin_sym_end] = ACTIONS(162),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(164),
    [anon_sym_if] = ACTIONS(164),
  },
  [49] = {
    [sym__endl] = ACTIONS(166),
    [anon_sym_choose] = ACTIONS(168),
    [ts_builtin_sym_end] = ACTIONS(166),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(168),
    [anon_sym_if] = ACTIONS(168),
  },
  [50] = {
    [anon_sym_elseif] = ACTIONS(37),
    [anon_sym_end] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(37),
    [sym__endl] = ACTIONS(35),
    [anon_sym_choose] = ACTIONS(37),
    [sym_identifier] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(37),
  },
  [51] = {
    [sym_choose_statement] = STATE(51),
    [sym_show_text] = STATE(51),
    [sym_command] = STATE(51),
    [sym_if_statement] = STATE(51),
    [sym__statement] = STATE(51),
    [aux_sym_source_file_repeat1] = STATE(51),
    [anon_sym_elseif] = ACTIONS(170),
    [anon_sym_end] = ACTIONS(170),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(170),
    [sym__endl] = ACTIONS(172),
    [anon_sym_choose] = ACTIONS(175),
    [sym_identifier] = ACTIONS(178),
    [anon_sym_if] = ACTIONS(181),
  },
  [52] = {
    [anon_sym_elseif] = ACTIONS(75),
    [anon_sym_end] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(75),
    [sym__endl] = ACTIONS(73),
    [anon_sym_choose] = ACTIONS(75),
    [sym_identifier] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(75),
  },
  [53] = {
    [sym_command] = STATE(55),
    [sym_choose_statement] = STATE(55),
    [sym_show_text] = STATE(55),
    [sym__statement] = STATE(55),
    [sym_if_statement] = STATE(55),
    [aux_sym_source_file_repeat1] = STATE(55),
    [anon_sym_end] = ACTIONS(82),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(184),
    [anon_sym_choose] = ACTIONS(186),
    [sym_identifier] = ACTIONS(188),
    [anon_sym_if] = ACTIONS(190),
    [anon_sym_STAR] = ACTIONS(192),
  },
  [54] = {
    [anon_sym_elseif] = ACTIONS(113),
    [anon_sym_end] = ACTIONS(113),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(113),
    [sym__endl] = ACTIONS(111),
    [anon_sym_choose] = ACTIONS(113),
    [sym_identifier] = ACTIONS(113),
    [anon_sym_if] = ACTIONS(113),
  },
  [55] = {
    [sym_command] = STATE(62),
    [sym_choose_statement] = STATE(62),
    [sym_show_text] = STATE(62),
    [sym__statement] = STATE(62),
    [sym_if_statement] = STATE(62),
    [aux_sym_source_file_repeat1] = STATE(62),
    [anon_sym_end] = ACTIONS(117),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(194),
    [anon_sym_choose] = ACTIONS(186),
    [sym_identifier] = ACTIONS(188),
    [anon_sym_if] = ACTIONS(190),
    [anon_sym_STAR] = ACTIONS(196),
  },
  [56] = {
    [anon_sym_elseif] = ACTIONS(129),
    [anon_sym_end] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(129),
    [sym__endl] = ACTIONS(127),
    [anon_sym_choose] = ACTIONS(129),
    [sym_identifier] = ACTIONS(129),
    [anon_sym_if] = ACTIONS(129),
  },
  [57] = {
    [anon_sym_elseif] = ACTIONS(137),
    [anon_sym_end] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(137),
    [sym__endl] = ACTIONS(135),
    [anon_sym_choose] = ACTIONS(137),
    [sym_identifier] = ACTIONS(137),
    [anon_sym_if] = ACTIONS(137),
  },
  [58] = {
    [anon_sym_elseif] = ACTIONS(158),
    [anon_sym_end] = ACTIONS(158),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(158),
    [sym__endl] = ACTIONS(156),
    [anon_sym_choose] = ACTIONS(158),
    [sym_identifier] = ACTIONS(158),
    [anon_sym_if] = ACTIONS(158),
  },
  [59] = {
    [anon_sym_elseif] = ACTIONS(164),
    [anon_sym_end] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(164),
    [sym__endl] = ACTIONS(162),
    [anon_sym_choose] = ACTIONS(164),
    [sym_identifier] = ACTIONS(164),
    [anon_sym_if] = ACTIONS(164),
  },
  [60] = {
    [anon_sym_elseif] = ACTIONS(168),
    [anon_sym_end] = ACTIONS(168),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(168),
    [sym__endl] = ACTIONS(166),
    [anon_sym_choose] = ACTIONS(168),
    [sym_identifier] = ACTIONS(168),
    [anon_sym_if] = ACTIONS(168),
  },
  [61] = {
    [anon_sym_end] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(35),
    [anon_sym_choose] = ACTIONS(37),
    [sym_identifier] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(35),
  },
  [62] = {
    [sym_command] = STATE(62),
    [sym_choose_statement] = STATE(62),
    [sym_show_text] = STATE(62),
    [sym__statement] = STATE(62),
    [sym_if_statement] = STATE(62),
    [aux_sym_source_file_repeat1] = STATE(62),
    [anon_sym_end] = ACTIONS(170),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(198),
    [anon_sym_choose] = ACTIONS(201),
    [sym_identifier] = ACTIONS(204),
    [anon_sym_if] = ACTIONS(207),
    [anon_sym_STAR] = ACTIONS(57),
  },
  [63] = {
    [anon_sym_end] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(73),
    [anon_sym_choose] = ACTIONS(75),
    [sym_identifier] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_STAR] = ACTIONS(73),
  },
  [64] = {
    [anon_sym_end] = ACTIONS(113),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(111),
    [anon_sym_choose] = ACTIONS(113),
    [sym_identifier] = ACTIONS(113),
    [anon_sym_if] = ACTIONS(113),
    [anon_sym_STAR] = ACTIONS(111),
  },
  [65] = {
    [anon_sym_end] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(127),
    [anon_sym_choose] = ACTIONS(129),
    [sym_identifier] = ACTIONS(129),
    [anon_sym_if] = ACTIONS(129),
    [anon_sym_STAR] = ACTIONS(127),
  },
  [66] = {
    [anon_sym_end] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(135),
    [anon_sym_choose] = ACTIONS(137),
    [sym_identifier] = ACTIONS(137),
    [anon_sym_if] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(135),
  },
  [67] = {
    [anon_sym_end] = ACTIONS(158),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(156),
    [anon_sym_choose] = ACTIONS(158),
    [sym_identifier] = ACTIONS(158),
    [anon_sym_if] = ACTIONS(158),
    [anon_sym_STAR] = ACTIONS(156),
  },
  [68] = {
    [anon_sym_end] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(162),
    [anon_sym_choose] = ACTIONS(164),
    [sym_identifier] = ACTIONS(164),
    [anon_sym_if] = ACTIONS(164),
    [anon_sym_STAR] = ACTIONS(162),
  },
  [69] = {
    [anon_sym_end] = ACTIONS(168),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(166),
    [anon_sym_choose] = ACTIONS(168),
    [sym_identifier] = ACTIONS(168),
    [anon_sym_if] = ACTIONS(168),
    [anon_sym_STAR] = ACTIONS(166),
  },
  [70] = {
    [sym_command_arg] = STATE(71),
    [aux_sym_command_repeat1] = STATE(71),
    [sym__endl] = ACTIONS(210),
    [sym_number] = ACTIONS(19),
    [anon_sym_COLON] = ACTIONS(212),
    [sym_bare_word] = ACTIONS(19),
    [sym_comment] = ACTIONS(23),
    [sym_string] = ACTIONS(19),
  },
  [71] = {
    [sym_command_arg] = STATE(20),
    [aux_sym_command_repeat1] = STATE(20),
    [sym__endl] = ACTIONS(214),
    [sym_number] = ACTIONS(19),
    [sym_bare_word] = ACTIONS(19),
    [sym_comment] = ACTIONS(23),
    [sym_string] = ACTIONS(19),
  },
  [72] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(216),
  },
  [73] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(218),
  },
  [74] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(220),
  },
  [75] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(222),
  },
  [76] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(224),
  },
  [77] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(226),
  },
  [78] = {
    [sym_command_arg] = STATE(79),
    [aux_sym_command_repeat1] = STATE(79),
    [anon_sym_COLON] = ACTIONS(228),
    [sym_number] = ACTIONS(19),
    [sym_comment] = ACTIONS(23),
    [sym_string] = ACTIONS(19),
    [sym__endl] = ACTIONS(230),
    [sym_bare_word] = ACTIONS(19),
  },
  [79] = {
    [sym_command_arg] = STATE(20),
    [aux_sym_command_repeat1] = STATE(20),
    [sym_number] = ACTIONS(19),
    [sym_comment] = ACTIONS(23),
    [sym_string] = ACTIONS(19),
    [sym__endl] = ACTIONS(232),
    [sym_bare_word] = ACTIONS(19),
  },
  [80] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(234),
  },
  [81] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(236),
  },
  [82] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(238),
  },
  [83] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(240),
  },
  [84] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(242),
  },
  [85] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(244),
  },
  [86] = {
    [sym_text_copy] = ACTIONS(246),
    [sym_comment] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(248),
  },
  [87] = {
    [sym_choice] = STATE(26),
    [aux_sym_choose_statement_repeat1] = STATE(26),
    [anon_sym_STAR] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(250),
  },
  [88] = {
    [aux_sym_if_statement_repeat1] = STATE(89),
    [sym_elseif_clause] = STATE(89),
    [sym_else_clause] = STATE(90),
    [anon_sym_elseif] = ACTIONS(92),
    [anon_sym_end] = ACTIONS(252),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(96),
  },
  [89] = {
    [aux_sym_if_statement_repeat1] = STATE(42),
    [sym_elseif_clause] = STATE(42),
    [sym_else_clause] = STATE(92),
    [anon_sym_elseif] = ACTIONS(92),
    [anon_sym_end] = ACTIONS(254),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(96),
  },
  [90] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(254),
  },
  [91] = {
    [sym_text_copy] = ACTIONS(256),
    [sym_comment] = ACTIONS(23),
  },
  [92] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(258),
  },
  [93] = {
    [sym_text_copy] = ACTIONS(260),
    [sym_comment] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(262),
  },
  [94] = {
    [sym_choice] = STATE(26),
    [aux_sym_choose_statement_repeat1] = STATE(26),
    [anon_sym_end] = ACTIONS(264),
    [sym_comment] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(33),
  },
  [95] = {
    [aux_sym_if_statement_repeat1] = STATE(96),
    [sym_elseif_clause] = STATE(96),
    [sym_else_clause] = STATE(97),
    [anon_sym_elseif] = ACTIONS(92),
    [anon_sym_end] = ACTIONS(266),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(96),
  },
  [96] = {
    [aux_sym_if_statement_repeat1] = STATE(42),
    [sym_elseif_clause] = STATE(42),
    [sym_else_clause] = STATE(99),
    [anon_sym_elseif] = ACTIONS(92),
    [anon_sym_end] = ACTIONS(268),
    [sym_comment] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(96),
  },
  [97] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(268),
  },
  [98] = {
    [sym_text_copy] = ACTIONS(270),
    [sym_comment] = ACTIONS(23),
  },
  [99] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(272),
  },
  [100] = {
    [sym_choice] = STATE(87),
    [aux_sym_choose_statement_repeat1] = STATE(87),
    [sym_comment] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(33),
  },
  [101] = {
    [sym_if_clause] = STATE(88),
    [sym_block] = STATE(23),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(49),
  },
  [102] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(274),
  },
  [103] = {
    [sym_choice] = STATE(94),
    [aux_sym_choose_statement_repeat1] = STATE(94),
    [sym_comment] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(33),
  },
  [104] = {
    [sym_if_clause] = STATE(95),
    [sym_block] = STATE(23),
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(49),
  },
  [105] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(276),
  },
  [106] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(278),
  },
  [107] = {
    [sym_expression] = STATE(101),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(25),
  },
  [108] = {
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(280),
  },
  [109] = {
    [sym_comment] = ACTIONS(3),
    [sym__endl] = ACTIONS(282),
  },
  [110] = {
    [sym_expression] = STATE(104),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(25),
  },
  [111] = {
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(284),
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
  [19] = {.count = 1, .reusable = false}, SHIFT(9),
  [21] = {.count = 1, .reusable = false}, SHIFT(10),
  [23] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [25] = {.count = 1, .reusable = true}, SHIFT(12),
  [27] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [29] = {.count = 1, .reusable = true}, SHIFT(14),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [33] = {.count = 1, .reusable = true}, SHIFT(15),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_command, 2, .production_id = 1),
  [37] = {.count = 1, .reusable = false}, REDUCE(sym_command, 2, .production_id = 1),
  [39] = {.count = 1, .reusable = false}, REDUCE(sym_command_arg, 1),
  [41] = {.count = 1, .reusable = false}, SHIFT(17),
  [43] = {.count = 1, .reusable = false}, SHIFT(18),
  [45] = {.count = 1, .reusable = false}, SHIFT(19),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 1),
  [49] = {.count = 1, .reusable = true}, SHIFT(21),
  [51] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [54] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [57] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [59] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [62] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [65] = {.count = 1, .reusable = false}, SHIFT(24),
  [67] = {.count = 1, .reusable = true}, SHIFT(25),
  [69] = {.count = 1, .reusable = true}, SHIFT(27),
  [71] = {.count = 1, .reusable = true}, SHIFT(28),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_command, 3, .production_id = 1),
  [75] = {.count = 1, .reusable = false}, REDUCE(sym_command, 3, .production_id = 1),
  [77] = {.count = 1, .reusable = false}, REDUCE(aux_sym_command_repeat1, 2),
  [79] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(9),
  [82] = {.count = 1, .reusable = false}, REDUCE(sym_block, 1),
  [84] = {.count = 1, .reusable = true}, SHIFT(29),
  [86] = {.count = 1, .reusable = false}, SHIFT(106),
  [88] = {.count = 1, .reusable = false}, SHIFT(70),
  [90] = {.count = 1, .reusable = false}, SHIFT(107),
  [92] = {.count = 1, .reusable = true}, SHIFT(30),
  [94] = {.count = 1, .reusable = true}, SHIFT(32),
  [96] = {.count = 1, .reusable = false}, SHIFT(31),
  [98] = {.count = 1, .reusable = true}, REDUCE(sym_if_clause, 1),
  [100] = {.count = 1, .reusable = false}, REDUCE(sym_if_clause, 1),
  [102] = {.count = 1, .reusable = true}, SHIFT(53),
  [104] = {.count = 1, .reusable = true}, SHIFT(36),
  [106] = {.count = 2, .reusable = true}, REDUCE(aux_sym_choose_statement_repeat1, 2), SHIFT_REPEAT(15),
  [109] = {.count = 1, .reusable = true}, REDUCE(aux_sym_choose_statement_repeat1, 2),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_show_text, 4, .production_id = 2),
  [113] = {.count = 1, .reusable = false}, REDUCE(sym_show_text, 4, .production_id = 2),
  [115] = {.count = 1, .reusable = true}, SHIFT(37),
  [117] = {.count = 1, .reusable = false}, REDUCE(sym_block, 2),
  [119] = {.count = 1, .reusable = true}, SHIFT(51),
  [121] = {.count = 1, .reusable = true}, SHIFT(40),
  [123] = {.count = 1, .reusable = true}, SHIFT(41),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_choice, 3),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_choose_statement, 5),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym_choose_statement, 5),
  [131] = {.count = 1, .reusable = false}, SHIFT(44),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_else_clause, 2),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 5),
  [137] = {.count = 1, .reusable = false}, REDUCE(sym_if_statement, 5),
  [139] = {.count = 1, .reusable = true}, SHIFT(46),
  [141] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(30),
  [144] = {.count = 1, .reusable = true}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [146] = {.count = 1, .reusable = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [148] = {.count = 1, .reusable = true}, SHIFT(47),
  [150] = {.count = 1, .reusable = true}, SHIFT(48),
  [152] = {.count = 1, .reusable = true}, REDUCE(sym_elseif_clause, 3),
  [154] = {.count = 1, .reusable = false}, REDUCE(sym_elseif_clause, 3),
  [156] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 6),
  [158] = {.count = 1, .reusable = false}, REDUCE(sym_if_statement, 6),
  [160] = {.count = 1, .reusable = true}, SHIFT(49),
  [162] = {.count = 1, .reusable = true}, REDUCE(sym_show_text, 7, .production_id = 3),
  [164] = {.count = 1, .reusable = false}, REDUCE(sym_show_text, 7, .production_id = 3),
  [166] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 7),
  [168] = {.count = 1, .reusable = false}, REDUCE(sym_if_statement, 7),
  [170] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2),
  [172] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [175] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(106),
  [178] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [181] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(107),
  [184] = {.count = 1, .reusable = true}, SHIFT(55),
  [186] = {.count = 1, .reusable = false}, SHIFT(109),
  [188] = {.count = 1, .reusable = false}, SHIFT(78),
  [190] = {.count = 1, .reusable = false}, SHIFT(110),
  [192] = {.count = 1, .reusable = true}, REDUCE(sym_block, 1),
  [194] = {.count = 1, .reusable = true}, SHIFT(62),
  [196] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [198] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [201] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(109),
  [204] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [207] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(110),
  [210] = {.count = 1, .reusable = false}, SHIFT(50),
  [212] = {.count = 1, .reusable = false}, SHIFT(86),
  [214] = {.count = 1, .reusable = false}, SHIFT(52),
  [216] = {.count = 1, .reusable = true}, SHIFT(54),
  [218] = {.count = 1, .reusable = true}, SHIFT(56),
  [220] = {.count = 1, .reusable = true}, SHIFT(57),
  [222] = {.count = 1, .reusable = true}, SHIFT(58),
  [224] = {.count = 1, .reusable = true}, SHIFT(59),
  [226] = {.count = 1, .reusable = true}, SHIFT(60),
  [228] = {.count = 1, .reusable = false}, SHIFT(93),
  [230] = {.count = 1, .reusable = false}, SHIFT(61),
  [232] = {.count = 1, .reusable = false}, SHIFT(63),
  [234] = {.count = 1, .reusable = true}, SHIFT(64),
  [236] = {.count = 1, .reusable = true}, SHIFT(65),
  [238] = {.count = 1, .reusable = true}, SHIFT(66),
  [240] = {.count = 1, .reusable = true}, SHIFT(67),
  [242] = {.count = 1, .reusable = true}, SHIFT(68),
  [244] = {.count = 1, .reusable = true}, SHIFT(69),
  [246] = {.count = 1, .reusable = false}, SHIFT(72),
  [248] = {.count = 1, .reusable = false}, SHIFT(108),
  [250] = {.count = 1, .reusable = true}, SHIFT(73),
  [252] = {.count = 1, .reusable = true}, SHIFT(74),
  [254] = {.count = 1, .reusable = true}, SHIFT(75),
  [256] = {.count = 1, .reusable = false}, SHIFT(76),
  [258] = {.count = 1, .reusable = true}, SHIFT(77),
  [260] = {.count = 1, .reusable = false}, SHIFT(80),
  [262] = {.count = 1, .reusable = false}, SHIFT(111),
  [264] = {.count = 1, .reusable = true}, SHIFT(81),
  [266] = {.count = 1, .reusable = true}, SHIFT(82),
  [268] = {.count = 1, .reusable = true}, SHIFT(83),
  [270] = {.count = 1, .reusable = false}, SHIFT(84),
  [272] = {.count = 1, .reusable = true}, SHIFT(85),
  [274] = {.count = 1, .reusable = true}, SHIFT(91),
  [276] = {.count = 1, .reusable = true}, SHIFT(98),
  [278] = {.count = 1, .reusable = true}, SHIFT(100),
  [280] = {.count = 1, .reusable = true}, SHIFT(102),
  [282] = {.count = 1, .reusable = true}, SHIFT(103),
  [284] = {.count = 1, .reusable = true}, SHIFT(105),
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
