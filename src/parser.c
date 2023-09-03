#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 61
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_LTsequence = 1,
  anon_sym_GT = 2,
  anon_sym_LT_SLASHsequence_GT = 3,
  anon_sym_LTrespond_SLASH_GT = 4,
  anon_sym_LTlog = 5,
  anon_sym_LT_SLASHlog_GT = 6,
  anon_sym_SLASH_GT = 7,
  anon_sym_LTproperty = 8,
  anon_sym_value = 9,
  anon_sym_EQ = 10,
  anon_sym_DQUOTE = 11,
  anon_sym_expression = 12,
  anon_sym_name = 13,
  anon_sym_level = 14,
  anon_sym_full = 15,
  anon_sym_simple = 16,
  anon_sym_custom = 17,
  anon_sym_headers = 18,
  sym_identifier = 19,
  anon_sym_LT_QMARKxml = 20,
  anon_sym_QMARK_GT = 21,
  anon_sym_version = 22,
  sym_version_number = 23,
  anon_sym_encoding = 24,
  sym_encoding = 25,
  sym_source_file = 26,
  sym__definition = 27,
  sym_sequence_definition = 28,
  sym_mediator = 29,
  sym_respond = 30,
  sym_log = 31,
  sym_property = 32,
  sym_value = 33,
  sym_expression = 34,
  sym_name = 35,
  sym_level = 36,
  sym_xml_declaration = 37,
  sym_version_info = 38,
  sym_encoding_declaration = 39,
  aux_sym_source_file_repeat1 = 40,
  aux_sym_sequence_definition_repeat1 = 41,
  aux_sym_log_repeat1 = 42,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LTsequence] = "<sequence",
  [anon_sym_GT] = ">",
  [anon_sym_LT_SLASHsequence_GT] = "</sequence>",
  [anon_sym_LTrespond_SLASH_GT] = "<respond/>",
  [anon_sym_LTlog] = "<log",
  [anon_sym_LT_SLASHlog_GT] = "</log>",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LTproperty] = "<property",
  [anon_sym_value] = "value",
  [anon_sym_EQ] = "=",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_expression] = "expression",
  [anon_sym_name] = "name",
  [anon_sym_level] = "level",
  [anon_sym_full] = "full",
  [anon_sym_simple] = "simple",
  [anon_sym_custom] = "custom",
  [anon_sym_headers] = "headers",
  [sym_identifier] = "identifier",
  [anon_sym_LT_QMARKxml] = "<\?xml",
  [anon_sym_QMARK_GT] = "\?>",
  [anon_sym_version] = "version",
  [sym_version_number] = "version_number",
  [anon_sym_encoding] = "encoding",
  [sym_encoding] = "encoding",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_sequence_definition] = "sequence_definition",
  [sym_mediator] = "mediator",
  [sym_respond] = "respond",
  [sym_log] = "log",
  [sym_property] = "property",
  [sym_value] = "value",
  [sym_expression] = "expression",
  [sym_name] = "name",
  [sym_level] = "level",
  [sym_xml_declaration] = "xml_declaration",
  [sym_version_info] = "version_info",
  [sym_encoding_declaration] = "encoding_declaration",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_sequence_definition_repeat1] = "sequence_definition_repeat1",
  [aux_sym_log_repeat1] = "log_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LTsequence] = anon_sym_LTsequence,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_SLASHsequence_GT] = anon_sym_LT_SLASHsequence_GT,
  [anon_sym_LTrespond_SLASH_GT] = anon_sym_LTrespond_SLASH_GT,
  [anon_sym_LTlog] = anon_sym_LTlog,
  [anon_sym_LT_SLASHlog_GT] = anon_sym_LT_SLASHlog_GT,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LTproperty] = anon_sym_LTproperty,
  [anon_sym_value] = anon_sym_value,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_expression] = anon_sym_expression,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_level] = anon_sym_level,
  [anon_sym_full] = anon_sym_full,
  [anon_sym_simple] = anon_sym_simple,
  [anon_sym_custom] = anon_sym_custom,
  [anon_sym_headers] = anon_sym_headers,
  [sym_identifier] = sym_identifier,
  [anon_sym_LT_QMARKxml] = anon_sym_LT_QMARKxml,
  [anon_sym_QMARK_GT] = anon_sym_QMARK_GT,
  [anon_sym_version] = anon_sym_version,
  [sym_version_number] = sym_version_number,
  [anon_sym_encoding] = anon_sym_encoding,
  [sym_encoding] = sym_encoding,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_sequence_definition] = sym_sequence_definition,
  [sym_mediator] = sym_mediator,
  [sym_respond] = sym_respond,
  [sym_log] = sym_log,
  [sym_property] = sym_property,
  [sym_value] = sym_value,
  [sym_expression] = sym_expression,
  [sym_name] = sym_name,
  [sym_level] = sym_level,
  [sym_xml_declaration] = sym_xml_declaration,
  [sym_version_info] = sym_version_info,
  [sym_encoding_declaration] = sym_encoding_declaration,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_sequence_definition_repeat1] = aux_sym_sequence_definition_repeat1,
  [aux_sym_log_repeat1] = aux_sym_log_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LTsequence] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHsequence_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTrespond_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTlog] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHlog_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTproperty] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_value] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_expression] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_level] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_full] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_simple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_custom] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_headers] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_QMARKxml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_version] = {
    .visible = true,
    .named = false,
  },
  [sym_version_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_encoding] = {
    .visible = true,
    .named = false,
  },
  [sym_encoding] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_sequence_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_mediator] = {
    .visible = true,
    .named = true,
  },
  [sym_respond] = {
    .visible = true,
    .named = true,
  },
  [sym_log] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_level] = {
    .visible = true,
    .named = true,
  },
  [sym_xml_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_version_info] = {
    .visible = true,
    .named = true,
  },
  [sym_encoding_declaration] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sequence_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_log_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_expression = 1,
  field_level = 2,
  field_name = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_expression] = "expression",
  [field_level] = "level",
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_level, 1},
  [2] =
    {field_name, 1},
    {field_value, 2},
  [4] =
    {field_expression, 2},
    {field_name, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(104);
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '<') ADVANCE(7);
      if (lookahead == '=') ADVANCE(115);
      if (lookahead == '>') ADVANCE(106);
      if (lookahead == '?') ADVANCE(12);
      if (lookahead == 'c') ADVANCE(178);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == 'f') ADVANCE(179);
      if (lookahead == 'h') ADVANCE(142);
      if (lookahead == 'l') ADVANCE(138);
      if (lookahead == 'n') ADVANCE(132);
      if (lookahead == 's') ADVANCE(148);
      if (lookahead == 'v') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '>') ADVANCE(106);
      if (lookahead == '?') ADVANCE(12);
      if (lookahead == 'c') ADVANCE(95);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead == 'h') ADVANCE(36);
      if (lookahead == 'l') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 's') ADVANCE(46);
      if (lookahead == 'v') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(190);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(10);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(103);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == '?') ADVANCE(101);
      if (lookahead == 'l') ADVANCE(68);
      if (lookahead == 'p') ADVANCE(83);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == '1') ADVANCE(6);
      if (lookahead == 'U') ADVANCE(17);
      END_STATE();
    case 10:
      if (lookahead == '8') ADVANCE(3);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(111);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(184);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(110);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(108);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(107);
      END_STATE();
    case 16:
      if (lookahead == 'F') ADVANCE(5);
      END_STATE();
    case 17:
      if (lookahead == 'T') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(8);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 43:
      if (lookahead == 'g') ADVANCE(109);
      END_STATE();
    case 44:
      if (lookahead == 'g') ADVANCE(188);
      END_STATE();
    case 45:
      if (lookahead == 'g') ADVANCE(13);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(71);
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 58:
      if (lookahead == 'm') ADVANCE(128);
      END_STATE();
    case 59:
      if (lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 60:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(21);
      if (lookahead == 'x') ADVANCE(78);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 76:
      if (lookahead == 'p') ADVANCE(70);
      END_STATE();
    case 77:
      if (lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 78:
      if (lookahead == 'p') ADVANCE(86);
      END_STATE();
    case 79:
      if (lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 80:
      if (lookahead == 'q') ADVANCE(97);
      END_STATE();
    case 81:
      if (lookahead == 'q') ADVANCE(99);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 87:
      if (lookahead == 's') ADVANCE(130);
      END_STATE();
    case 88:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 89:
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 90:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 91:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 92:
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 95:
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 96:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 97:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 98:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 99:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 100:
      if (lookahead == 'v') ADVANCE(39);
      END_STATE();
    case 101:
      if (lookahead == 'x') ADVANCE(57);
      END_STATE();
    case 102:
      if (lookahead == 'y') ADVANCE(112);
      END_STATE();
    case 103:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LTsequence);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LT_SLASHsequence_GT);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LTrespond_SLASH_GT);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LTlog);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LT_SLASHlog_GT);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LTproperty);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '1') ADVANCE(6);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_expression);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_expression);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_level);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_level);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_full);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_full);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_simple);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_simple);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_custom);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_custom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_headers);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_headers);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 'e') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(135);
      if (lookahead == 'x') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_LT_QMARKxml);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_version);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_version_number);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_encoding);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_encoding);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_encoding);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LTsequence] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHsequence_GT] = ACTIONS(1),
    [anon_sym_LTrespond_SLASH_GT] = ACTIONS(1),
    [anon_sym_LTlog] = ACTIONS(1),
    [anon_sym_LT_SLASHlog_GT] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LTproperty] = ACTIONS(1),
    [anon_sym_value] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_expression] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_level] = ACTIONS(1),
    [anon_sym_full] = ACTIONS(1),
    [anon_sym_simple] = ACTIONS(1),
    [anon_sym_custom] = ACTIONS(1),
    [anon_sym_headers] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LT_QMARKxml] = ACTIONS(1),
    [anon_sym_QMARK_GT] = ACTIONS(1),
    [anon_sym_version] = ACTIONS(1),
    [sym_version_number] = ACTIONS(1),
    [anon_sym_encoding] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(44),
    [sym__definition] = STATE(7),
    [sym_sequence_definition] = STATE(7),
    [sym_xml_declaration] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LTsequence] = ACTIONS(5),
    [anon_sym_LT_QMARKxml] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(9), 1,
      anon_sym_LT_SLASHsequence_GT,
    ACTIONS(11), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(13), 1,
      anon_sym_LTlog,
    STATE(3), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(20), 2,
      sym_respond,
      sym_log,
  [18] = 5,
    ACTIONS(15), 1,
      anon_sym_LT_SLASHsequence_GT,
    ACTIONS(17), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(20), 1,
      anon_sym_LTlog,
    STATE(3), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(20), 2,
      sym_respond,
      sym_log,
  [36] = 5,
    ACTIONS(11), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(13), 1,
      anon_sym_LTlog,
    ACTIONS(23), 1,
      anon_sym_LT_SLASHsequence_GT,
    STATE(2), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(20), 2,
      sym_respond,
      sym_log,
  [54] = 3,
    ACTIONS(5), 1,
      anon_sym_LTsequence,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(8), 3,
      sym__definition,
      sym_sequence_definition,
      aux_sym_source_file_repeat1,
  [66] = 3,
    ACTIONS(5), 1,
      anon_sym_LTsequence,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(5), 3,
      sym__definition,
      sym_sequence_definition,
      aux_sym_source_file_repeat1,
  [78] = 3,
    ACTIONS(5), 1,
      anon_sym_LTsequence,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(8), 3,
      sym__definition,
      sym_sequence_definition,
      aux_sym_source_file_repeat1,
  [90] = 3,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_LTsequence,
    STATE(8), 3,
      sym__definition,
      sym_sequence_definition,
      aux_sym_source_file_repeat1,
  [102] = 3,
    ACTIONS(34), 1,
      anon_sym_LT_SLASHlog_GT,
    ACTIONS(36), 1,
      anon_sym_LTproperty,
    STATE(12), 2,
      sym_property,
      aux_sym_log_repeat1,
  [113] = 3,
    ACTIONS(38), 1,
      anon_sym_LT_SLASHlog_GT,
    ACTIONS(40), 1,
      anon_sym_LTproperty,
    STATE(10), 2,
      sym_property,
      aux_sym_log_repeat1,
  [124] = 1,
    ACTIONS(43), 4,
      anon_sym_full,
      anon_sym_simple,
      anon_sym_custom,
      anon_sym_headers,
  [131] = 3,
    ACTIONS(36), 1,
      anon_sym_LTproperty,
    ACTIONS(45), 1,
      anon_sym_LT_SLASHlog_GT,
    STATE(10), 2,
      sym_property,
      aux_sym_log_repeat1,
  [142] = 4,
    ACTIONS(47), 1,
      anon_sym_value,
    ACTIONS(49), 1,
      anon_sym_expression,
    STATE(49), 1,
      sym_value,
    STATE(50), 1,
      sym_expression,
  [155] = 3,
    ACTIONS(51), 1,
      anon_sym_QMARK_GT,
    ACTIONS(53), 1,
      anon_sym_encoding,
    STATE(60), 1,
      sym_encoding_declaration,
  [165] = 1,
    ACTIONS(55), 3,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
  [171] = 1,
    ACTIONS(57), 3,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
  [177] = 1,
    ACTIONS(59), 3,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
  [183] = 1,
    ACTIONS(61), 3,
      anon_sym_GT,
      anon_sym_value,
      anon_sym_expression,
  [189] = 1,
    ACTIONS(63), 3,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
  [195] = 1,
    ACTIONS(65), 3,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTlog,
  [201] = 1,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      anon_sym_LTsequence,
  [206] = 2,
    ACTIONS(69), 1,
      anon_sym_name,
    STATE(13), 1,
      sym_name,
  [213] = 2,
    ACTIONS(71), 1,
      anon_sym_level,
    STATE(30), 1,
      sym_level,
  [220] = 2,
    ACTIONS(69), 1,
      anon_sym_name,
    STATE(35), 1,
      sym_name,
  [227] = 1,
    ACTIONS(73), 2,
      anon_sym_QMARK_GT,
      anon_sym_encoding,
  [232] = 1,
    ACTIONS(75), 2,
      anon_sym_LT_SLASHlog_GT,
      anon_sym_LTproperty,
  [237] = 1,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      anon_sym_LTsequence,
  [242] = 1,
    ACTIONS(79), 2,
      anon_sym_LT_SLASHlog_GT,
      anon_sym_LTproperty,
  [247] = 1,
    ACTIONS(81), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
  [252] = 2,
    ACTIONS(83), 1,
      anon_sym_GT,
    ACTIONS(85), 1,
      anon_sym_SLASH_GT,
  [259] = 1,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      anon_sym_LTsequence,
  [264] = 2,
    ACTIONS(89), 1,
      anon_sym_version,
    STATE(14), 1,
      sym_version_info,
  [271] = 1,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      anon_sym_LTsequence,
  [276] = 1,
    ACTIONS(93), 1,
      anon_sym_EQ,
  [280] = 1,
    ACTIONS(95), 1,
      anon_sym_GT,
  [284] = 1,
    ACTIONS(97), 1,
      anon_sym_EQ,
  [288] = 1,
    ACTIONS(99), 1,
      sym_version_number,
  [292] = 1,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
  [296] = 1,
    ACTIONS(103), 1,
      anon_sym_EQ,
  [300] = 1,
    ACTIONS(105), 1,
      anon_sym_QMARK_GT,
  [304] = 1,
    ACTIONS(107), 1,
      anon_sym_EQ,
  [308] = 1,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
  [312] = 1,
    ACTIONS(111), 1,
      anon_sym_EQ,
  [316] = 1,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
  [320] = 1,
    ACTIONS(115), 1,
      sym_identifier,
  [324] = 1,
    ACTIONS(117), 1,
      anon_sym_EQ,
  [328] = 1,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
  [332] = 1,
    ACTIONS(121), 1,
      anon_sym_SLASH_GT,
  [336] = 1,
    ACTIONS(123), 1,
      anon_sym_SLASH_GT,
  [340] = 1,
    ACTIONS(125), 1,
      anon_sym_SLASH_GT,
  [344] = 1,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
  [348] = 1,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
  [352] = 1,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
  [356] = 1,
    ACTIONS(133), 1,
      sym_encoding,
  [360] = 1,
    ACTIONS(135), 1,
      sym_identifier,
  [364] = 1,
    ACTIONS(137), 1,
      sym_identifier,
  [368] = 1,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
  [372] = 1,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
  [376] = 1,
    ACTIONS(143), 1,
      anon_sym_SLASH_GT,
  [380] = 1,
    ACTIONS(145), 1,
      anon_sym_QMARK_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 36,
  [SMALL_STATE(5)] = 54,
  [SMALL_STATE(6)] = 66,
  [SMALL_STATE(7)] = 78,
  [SMALL_STATE(8)] = 90,
  [SMALL_STATE(9)] = 102,
  [SMALL_STATE(10)] = 113,
  [SMALL_STATE(11)] = 124,
  [SMALL_STATE(12)] = 131,
  [SMALL_STATE(13)] = 142,
  [SMALL_STATE(14)] = 155,
  [SMALL_STATE(15)] = 165,
  [SMALL_STATE(16)] = 171,
  [SMALL_STATE(17)] = 177,
  [SMALL_STATE(18)] = 183,
  [SMALL_STATE(19)] = 189,
  [SMALL_STATE(20)] = 195,
  [SMALL_STATE(21)] = 201,
  [SMALL_STATE(22)] = 206,
  [SMALL_STATE(23)] = 213,
  [SMALL_STATE(24)] = 220,
  [SMALL_STATE(25)] = 227,
  [SMALL_STATE(26)] = 232,
  [SMALL_STATE(27)] = 237,
  [SMALL_STATE(28)] = 242,
  [SMALL_STATE(29)] = 247,
  [SMALL_STATE(30)] = 252,
  [SMALL_STATE(31)] = 259,
  [SMALL_STATE(32)] = 264,
  [SMALL_STATE(33)] = 271,
  [SMALL_STATE(34)] = 276,
  [SMALL_STATE(35)] = 280,
  [SMALL_STATE(36)] = 284,
  [SMALL_STATE(37)] = 288,
  [SMALL_STATE(38)] = 292,
  [SMALL_STATE(39)] = 296,
  [SMALL_STATE(40)] = 300,
  [SMALL_STATE(41)] = 304,
  [SMALL_STATE(42)] = 308,
  [SMALL_STATE(43)] = 312,
  [SMALL_STATE(44)] = 316,
  [SMALL_STATE(45)] = 320,
  [SMALL_STATE(46)] = 324,
  [SMALL_STATE(47)] = 328,
  [SMALL_STATE(48)] = 332,
  [SMALL_STATE(49)] = 336,
  [SMALL_STATE(50)] = 340,
  [SMALL_STATE(51)] = 344,
  [SMALL_STATE(52)] = 348,
  [SMALL_STATE(53)] = 352,
  [SMALL_STATE(54)] = 356,
  [SMALL_STATE(55)] = 360,
  [SMALL_STATE(56)] = 364,
  [SMALL_STATE(57)] = 368,
  [SMALL_STATE(58)] = 372,
  [SMALL_STATE(59)] = 376,
  [SMALL_STATE(60)] = 380,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(17),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(23),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_log_repeat1, 2),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_repeat1, 2), SHIFT_REPEAT(22),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log, 3, .production_id = 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log, 4, .production_id = 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_respond, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 5),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log, 5, .production_id = 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mediator, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_declaration, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_info, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 4),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_declaration, 4),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_level, 5),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_definition, 5, .production_id = 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_definition, 4, .production_id = 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_encoding_declaration, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [113] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 5),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 5),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_apachesynapse(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
