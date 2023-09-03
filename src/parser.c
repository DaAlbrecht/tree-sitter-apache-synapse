#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 17
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_LTsequence = 1,
  anon_sym_GT = 2,
  anon_sym_LT_SLASHsequence_GT = 3,
  anon_sym_LTlog = 4,
  anon_sym_LTrespond_SLASH_GT = 5,
  sym_identifier = 6,
  sym_source_file = 7,
  sym__definition = 8,
  sym_sequence_definition = 9,
  sym_mediator = 10,
  sym_log = 11,
  sym_respond = 12,
  aux_sym_source_file_repeat1 = 13,
  aux_sym_sequence_definition_repeat1 = 14,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LTsequence] = "<sequence",
  [anon_sym_GT] = ">",
  [anon_sym_LT_SLASHsequence_GT] = "</sequence>",
  [anon_sym_LTlog] = "<log",
  [anon_sym_LTrespond_SLASH_GT] = "<respond/>",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_sequence_definition] = "sequence_definition",
  [sym_mediator] = "mediator",
  [sym_log] = "log",
  [sym_respond] = "respond",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_sequence_definition_repeat1] = "sequence_definition_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LTsequence] = anon_sym_LTsequence,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_SLASHsequence_GT] = anon_sym_LT_SLASHsequence_GT,
  [anon_sym_LTlog] = anon_sym_LTlog,
  [anon_sym_LTrespond_SLASH_GT] = anon_sym_LTrespond_SLASH_GT,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_sequence_definition] = sym_sequence_definition,
  [sym_mediator] = sym_mediator,
  [sym_log] = sym_log,
  [sym_respond] = sym_respond,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_sequence_definition_repeat1] = aux_sym_sequence_definition_repeat1,
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
  [anon_sym_LTlog] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTrespond_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
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
  [sym_log] = {
    .visible = true,
    .named = true,
  },
  [sym_respond] = {
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
};

enum {
  field_level = 1,
  field_name = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_level] = "level",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_level, 1},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(28);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '>') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 1:
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '>') ADVANCE(33);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(31);
      END_STATE();
    case 5:
      if (lookahead == 'c') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(12);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(2);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == 'g') ADVANCE(32);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == 'q') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == 'q') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 26:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LTsequence);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LT_SLASHsequence_GT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LTlog);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LTrespond_SLASH_GT);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
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
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LTsequence] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHsequence_GT] = ACTIONS(1),
    [anon_sym_LTlog] = ACTIONS(1),
    [anon_sym_LTrespond_SLASH_GT] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(13),
    [sym__definition] = STATE(5),
    [sym_sequence_definition] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LTsequence] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(7), 1,
      anon_sym_LT_SLASHsequence_GT,
    ACTIONS(9), 1,
      anon_sym_LTlog,
    ACTIONS(11), 1,
      anon_sym_LTrespond_SLASH_GT,
    STATE(3), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(8), 2,
      sym_log,
      sym_respond,
  [18] = 5,
    ACTIONS(9), 1,
      anon_sym_LTlog,
    ACTIONS(11), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(13), 1,
      anon_sym_LT_SLASHsequence_GT,
    STATE(4), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(8), 2,
      sym_log,
      sym_respond,
  [36] = 5,
    ACTIONS(15), 1,
      anon_sym_LT_SLASHsequence_GT,
    ACTIONS(17), 1,
      anon_sym_LTlog,
    ACTIONS(20), 1,
      anon_sym_LTrespond_SLASH_GT,
    STATE(4), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(8), 2,
      sym_log,
      sym_respond,
  [54] = 3,
    ACTIONS(5), 1,
      anon_sym_LTsequence,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(6), 3,
      sym__definition,
      sym_sequence_definition,
      aux_sym_source_file_repeat1,
  [66] = 3,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      anon_sym_LTsequence,
    STATE(6), 3,
      sym__definition,
      sym_sequence_definition,
      aux_sym_source_file_repeat1,
  [78] = 1,
    ACTIONS(30), 3,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTlog,
      anon_sym_LTrespond_SLASH_GT,
  [84] = 1,
    ACTIONS(32), 3,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTlog,
      anon_sym_LTrespond_SLASH_GT,
  [90] = 1,
    ACTIONS(34), 3,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTlog,
      anon_sym_LTrespond_SLASH_GT,
  [96] = 1,
    ACTIONS(36), 2,
      ts_builtin_sym_end,
      anon_sym_LTsequence,
  [101] = 1,
    ACTIONS(38), 2,
      ts_builtin_sym_end,
      anon_sym_LTsequence,
  [106] = 1,
    ACTIONS(40), 1,
      sym_identifier,
  [110] = 1,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
  [114] = 1,
    ACTIONS(44), 1,
      anon_sym_GT,
  [118] = 1,
    ACTIONS(46), 1,
      sym_identifier,
  [122] = 1,
    ACTIONS(48), 1,
      anon_sym_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 36,
  [SMALL_STATE(5)] = 54,
  [SMALL_STATE(6)] = 66,
  [SMALL_STATE(7)] = 78,
  [SMALL_STATE(8)] = 84,
  [SMALL_STATE(9)] = 90,
  [SMALL_STATE(10)] = 96,
  [SMALL_STATE(11)] = 101,
  [SMALL_STATE(12)] = 106,
  [SMALL_STATE(13)] = 110,
  [SMALL_STATE(14)] = 114,
  [SMALL_STATE(15)] = 118,
  [SMALL_STATE(16)] = 122,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(15),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(7),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_respond, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mediator, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log, 3, .production_id = 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_definition, 4, .production_id = 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_definition, 5, .production_id = 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [42] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
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
