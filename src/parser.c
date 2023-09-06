#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 694
#define LARGE_STATE_COUNT 47
#define SYMBOL_COUNT 332
#define ALIAS_COUNT 0
#define TOKEN_COUNT 204
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 30
#define MAX_ALIAS_SEQUENCE_LENGTH 24
#define PRODUCTION_ID_COUNT 72

enum {
  anon_sym_LTsequence = 1,
  anon_sym_GT = 2,
  anon_sym_LT_SLASHsequence_GT = 3,
  anon_sym_LTrespond_SLASH_GT = 4,
  anon_sym_LTsend_SLASH_GT = 5,
  anon_sym_LTsend = 6,
  anon_sym_LT_SLASHsend_GT = 7,
  anon_sym_LTlog = 8,
  anon_sym_LT_SLASHlog_GT = 9,
  anon_sym_SLASH_GT = 10,
  anon_sym_LTproperty = 11,
  anon_sym_scope = 12,
  anon_sym_EQ = 13,
  anon_sym_DQUOTE = 14,
  anon_sym_default = 15,
  anon_sym_axis2 = 16,
  anon_sym_axis2_DASHclient = 17,
  anon_sym_operation = 18,
  anon_sym_transport = 19,
  anon_sym_registry = 20,
  anon_sym_synapse = 21,
  anon_sym_system = 22,
  anon_sym_env = 23,
  anon_sym_file = 24,
  anon_sym_action = 25,
  anon_sym_set = 26,
  anon_sym_remove = 27,
  anon_sym_type = 28,
  anon_sym_STRING = 29,
  anon_sym_INTEGER = 30,
  anon_sym_BOOLEAN = 31,
  anon_sym_DOUBLE = 32,
  anon_sym_FLOAT = 33,
  anon_sym_LONG = 34,
  anon_sym_SHORT = 35,
  anon_sym_OM = 36,
  anon_sym_pattern = 37,
  anon_sym_group = 38,
  anon_sym_LTcall = 39,
  anon_sym_LT_SLASHcall_GT = 40,
  anon_sym_LTforeach = 41,
  anon_sym_sequence = 42,
  anon_sym_LT_SLASHforeach_GT = 43,
  anon_sym_LTfilter = 44,
  anon_sym_xpath = 45,
  anon_sym_LT_SLASHfilter_GT = 46,
  anon_sym_LTaggregate_GT = 47,
  anon_sym_LTaggregate = 48,
  anon_sym_LT_SLASHaggregate_GT = 49,
  anon_sym_LTiterate = 50,
  anon_sym_LT_SLASHiterate_GT = 51,
  anon_sym_sequential = 52,
  anon_sym_continueParent = 53,
  anon_sym_preservePayload = 54,
  anon_sym_attachPath = 55,
  anon_sym_LTtarget = 56,
  anon_sym_to = 57,
  anon_sym_soapAction = 58,
  anon_sym_endpoint = 59,
  anon_sym_LT_SLASHtarget_GT = 60,
  anon_sym_LTcorrelateOn = 61,
  anon_sym_LTcompleteCondition = 62,
  anon_sym_LT_SLASHcompleteCondition_GT = 63,
  anon_sym_LTonComplete = 64,
  anon_sym_LT_SLASHonComplete_GT = 65,
  anon_sym_LTmessageCount = 66,
  anon_sym_min = 67,
  anon_sym_max = 68,
  anon_sym_key = 69,
  anon_sym_LTthen_GT = 70,
  anon_sym_LT_SLASHthen_GT = 71,
  anon_sym_LTelse_GT = 72,
  anon_sym_LT_SLASHelse_GT = 73,
  anon_sym_source = 74,
  anon_sym_regex = 75,
  anon_sym_LTendpoint = 76,
  anon_sym_LT_SLASHendpoint_GT = 77,
  anon_sym_LThttp = 78,
  anon_sym_LT_SLASHhttp_GT = 79,
  anon_sym_uri_DASHtemplate = 80,
  anon_sym_method = 81,
  anon_sym_GET = 82,
  anon_sym_POST = 83,
  anon_sym_PUT = 84,
  anon_sym_DELETE = 85,
  anon_sym_HEAD = 86,
  anon_sym_OPTIONS = 87,
  anon_sym_PATCH = 88,
  anon_sym_get = 89,
  anon_sym_post = 90,
  anon_sym_put = 91,
  anon_sym_delete = 92,
  anon_sym_head = 93,
  anon_sym_options = 94,
  anon_sym_patch = 95,
  anon_sym_LTtimeout_GT = 96,
  anon_sym_LT_SLASHtimeout_GT = 97,
  anon_sym_LTmarkForSuspension_GT = 98,
  anon_sym_LT_SLASHmarkForSuspension_GT = 99,
  anon_sym_LTretriesBeforeSuspension_GT = 100,
  anon_sym_LT_SLASHretriesBeforeSuspension_GT = 101,
  anon_sym_LTretryDelay_GT = 102,
  anon_sym_LT_SLASHretryDelay_GT = 103,
  anon_sym_LTsuspendOnFailure_GT = 104,
  anon_sym_LT_SLASHsuspendOnFailure_GT = 105,
  anon_sym_LTinitialDuration_GT = 106,
  anon_sym_LT_SLASHinitialDuration_GT = 107,
  anon_sym_LTprogressionFactor_GT = 108,
  anon_sym_LT_SLASHprogressionFactor_GT = 109,
  anon_sym_LTmaximumDuration_GT = 110,
  anon_sym_LT_SLASHmaximumDuration_GT = 111,
  anon_sym_LTerrorCodes_GT = 112,
  anon_sym_COMMA = 113,
  anon_sym_LT_SLASHerrorCodes_GT = 114,
  anon_sym_LTduration_GT = 115,
  anon_sym_LT_SLASHduration_GT = 116,
  anon_sym_LTresponseAction_GT = 117,
  anon_sym_never = 118,
  anon_sym_discard = 119,
  anon_sym_fault = 120,
  anon_sym_LT_SLASHresponseAction_GT = 121,
  anon_sym_LTkey = 122,
  anon_sym_blocking = 123,
  anon_sym_true = 124,
  anon_sym_false = 125,
  anon_sym_value = 126,
  aux_sym_value_token1 = 127,
  anon_sym_expression = 128,
  anon_sym_json_DASHeval_LPAREN = 129,
  anon_sym_RPAREN = 130,
  anon_sym_name = 131,
  anon_sym_id = 132,
  anon_sym_level = 133,
  anon_sym_full = 134,
  anon_sym_simple = 135,
  anon_sym_custom = 136,
  anon_sym_headers = 137,
  aux_sym_identifier_token1 = 138,
  sym__float = 139,
  sym__unsigned_int = 140,
  sym__int = 141,
  anon_sym_LT_QMARKxml = 142,
  anon_sym_QMARK_GT = 143,
  anon_sym_version = 144,
  sym_version_number = 145,
  anon_sym_encoding = 146,
  sym_encoding = 147,
  sym_comment = 148,
  sym__xpath_node = 149,
  anon_sym_SLASH = 150,
  anon_sym_SLASH_SLASH = 151,
  anon_sym_DOT_DOT = 152,
  anon_sym_DOT = 153,
  anon_sym_AT = 154,
  anon_sym_boolean = 155,
  anon_sym_LPAREN = 156,
  anon_sym_ceiling = 157,
  anon_sym_choose = 158,
  anon_sym_concat = 159,
  anon_sym_contains = 160,
  anon_sym_count = 161,
  anon_sym_current = 162,
  anon_sym_document = 163,
  anon_sym_element_DASHavailable = 164,
  anon_sym_floor = 165,
  anon_sym_format_DASHnumber = 166,
  anon_sym_function_DASHavailable = 167,
  anon_sym_generate_DASHid = 168,
  anon_sym_lang = 169,
  anon_sym_last = 170,
  anon_sym_local_DASHname = 171,
  anon_sym_namespace_DASHuri = 172,
  anon_sym_normalize_DASHspace = 173,
  anon_sym_not = 174,
  anon_sym_number = 175,
  anon_sym_position = 176,
  anon_sym_round = 177,
  anon_sym_starts_DASHwith = 178,
  anon_sym_string = 179,
  anon_sym_string_DASHlength = 180,
  anon_sym_substring = 181,
  anon_sym_substring_DASHafter = 182,
  anon_sym_substring_DASHbefore = 183,
  anon_sym_sum = 184,
  anon_sym_system_DASHproperty = 185,
  anon_sym_translate = 186,
  anon_sym_unparsed_DASHentity_DASHurl = 187,
  anon_sym_base64Encode = 188,
  anon_sym_base64Decode = 189,
  anon_sym_get_DASHproperty_LPAREN = 190,
  anon_sym_SQUOTE = 191,
  anon_sym_DOLLARbody = 192,
  anon_sym_DOLLARheader = 193,
  anon_sym_DOLLARaxis2 = 194,
  anon_sym_ctx = 195,
  anon_sym_DOLLARtrp = 196,
  anon_sym_DOLLARurl = 197,
  anon_sym_DOLLARfunc = 198,
  anon_sym_DOLLARenv = 199,
  anon_sym_COLON = 200,
  anon_sym_DOLLAR_DOT = 201,
  anon_sym_LBRACK = 202,
  anon_sym_RBRACK = 203,
  sym_source_file = 204,
  sym__definition = 205,
  sym_sequence_definition = 206,
  sym_mediator = 207,
  sym_respond = 208,
  sym_send = 209,
  sym_log = 210,
  sym_property = 211,
  sym__property_attribute = 212,
  sym_call = 213,
  sym_foreach = 214,
  sym_filter = 215,
  sym_aggregate = 216,
  sym_iterate = 217,
  sym_sequential = 218,
  sym_continueParent = 219,
  sym_preservePayload = 220,
  sym_attachPath = 221,
  sym_sequence = 222,
  sym_target = 223,
  sym_correlateOn = 224,
  sym_complete_condition = 225,
  sym_on_complete = 226,
  sym_message_count = 227,
  sym_min = 228,
  sym_max = 229,
  sym_key = 230,
  sym_then = 231,
  sym_else = 232,
  sym_source = 233,
  sym_regex = 234,
  sym_endpoint = 235,
  sym__endpoint_type = 236,
  sym_http_endpoint = 237,
  sym__endpoint_attribute = 238,
  sym_method = 239,
  sym_endpoint_error_property = 240,
  sym_timeout = 241,
  sym_mark_for_suspending = 242,
  sym__mark_for_suspending_property = 243,
  sym_retries_before_suspending = 244,
  sym_retry_delay = 245,
  sym_suspend_on_failure = 246,
  sym__suspend_on_failure_property = 247,
  sym_initial_duration = 248,
  sym_progression_factor = 249,
  sym_maximum_duration = 250,
  sym_error_codes = 251,
  sym__timeout_property = 252,
  sym_duration = 253,
  sym_response_action = 254,
  sym_endpoint_reference = 255,
  sym_blocking = 256,
  sym_value = 257,
  sym_expression = 258,
  sym_json_eval = 259,
  sym_name = 260,
  sym_id = 261,
  sym_level = 262,
  sym_identifier = 263,
  sym_number = 264,
  sym_boolean = 265,
  sym_expression_string = 266,
  sym_xml_declaration = 267,
  sym_version_info = 268,
  sym_encoding_declaration = 269,
  sym_xpath = 270,
  sym__xpath_selectors = 271,
  sym__xPath_extension_functions = 272,
  sym__xpath_function = 273,
  sym_boolean_function = 274,
  sym_ceiling_function = 275,
  sym_choose_function = 276,
  sym_concat_function = 277,
  sym_contains_function = 278,
  sym_count_function = 279,
  sym_current_function = 280,
  sym_document_function = 281,
  sym_element_available_function = 282,
  sym_false_function = 283,
  sym_floor_function = 284,
  sym_format_number_function = 285,
  sym_function_available_function = 286,
  sym_generate_id_function = 287,
  sym_id_function = 288,
  sym_key_function = 289,
  sym_lang_function = 290,
  sym_last_function = 291,
  sym_local_name_function = 292,
  sym_name_function = 293,
  sym_namespace_uri_function = 294,
  sym_normalize_space_function = 295,
  sym_not_function = 296,
  sym_number_function = 297,
  sym_position_function = 298,
  sym_round_function = 299,
  sym_starts_with_function = 300,
  sym_string_function = 301,
  sym_string_length_function = 302,
  sym_substring_function = 303,
  sym_substring_after_function = 304,
  sym_substring_before_function = 305,
  sym_sum_function = 306,
  sym_system_property_function = 307,
  sym_translate_function = 308,
  sym_true_function = 309,
  sym_unparsed_entity_url_function = 310,
  sym_base64_encode = 311,
  sym_base64_decode = 312,
  sym_get_property = 313,
  sym__xpath_string = 314,
  sym_synapse_xpath_property = 315,
  sym_json_path = 316,
  sym_json_path_array = 317,
  sym_json_path_object = 318,
  aux_sym_source_file_repeat1 = 319,
  aux_sym_sequence_definition_repeat1 = 320,
  aux_sym_log_repeat1 = 321,
  aux_sym_property_repeat1 = 322,
  aux_sym_iterate_repeat1 = 323,
  aux_sym_http_endpoint_repeat1 = 324,
  aux_sym_http_endpoint_repeat2 = 325,
  aux_sym_timeout_repeat1 = 326,
  aux_sym_mark_for_suspending_repeat1 = 327,
  aux_sym_suspend_on_failure_repeat1 = 328,
  aux_sym_error_codes_repeat1 = 329,
  aux_sym_xpath_repeat1 = 330,
  aux_sym_json_path_repeat1 = 331,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LTsequence] = "<sequence",
  [anon_sym_GT] = ">",
  [anon_sym_LT_SLASHsequence_GT] = "</sequence>",
  [anon_sym_LTrespond_SLASH_GT] = "<respond/>",
  [anon_sym_LTsend_SLASH_GT] = "<send/>",
  [anon_sym_LTsend] = "<send",
  [anon_sym_LT_SLASHsend_GT] = "</send>",
  [anon_sym_LTlog] = "<log",
  [anon_sym_LT_SLASHlog_GT] = "</log>",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LTproperty] = "<property",
  [anon_sym_scope] = "scope",
  [anon_sym_EQ] = "=",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_default] = "default",
  [anon_sym_axis2] = "axis2",
  [anon_sym_axis2_DASHclient] = "axis2-client",
  [anon_sym_operation] = "operation",
  [anon_sym_transport] = "transport",
  [anon_sym_registry] = "registry",
  [anon_sym_synapse] = "synapse",
  [anon_sym_system] = "system",
  [anon_sym_env] = "env",
  [anon_sym_file] = "file",
  [anon_sym_action] = "action",
  [anon_sym_set] = "set",
  [anon_sym_remove] = "remove",
  [anon_sym_type] = "type",
  [anon_sym_STRING] = "STRING",
  [anon_sym_INTEGER] = "INTEGER",
  [anon_sym_BOOLEAN] = "BOOLEAN",
  [anon_sym_DOUBLE] = "DOUBLE",
  [anon_sym_FLOAT] = "FLOAT",
  [anon_sym_LONG] = "LONG",
  [anon_sym_SHORT] = "SHORT",
  [anon_sym_OM] = "OM",
  [anon_sym_pattern] = "pattern",
  [anon_sym_group] = "group",
  [anon_sym_LTcall] = "<call",
  [anon_sym_LT_SLASHcall_GT] = "</call>",
  [anon_sym_LTforeach] = "<foreach",
  [anon_sym_sequence] = "sequence",
  [anon_sym_LT_SLASHforeach_GT] = "</foreach>",
  [anon_sym_LTfilter] = "<filter",
  [anon_sym_xpath] = "xpath",
  [anon_sym_LT_SLASHfilter_GT] = "</filter>",
  [anon_sym_LTaggregate_GT] = "<aggregate>",
  [anon_sym_LTaggregate] = "<aggregate",
  [anon_sym_LT_SLASHaggregate_GT] = "</aggregate>",
  [anon_sym_LTiterate] = "<iterate",
  [anon_sym_LT_SLASHiterate_GT] = "</iterate>",
  [anon_sym_sequential] = "sequential",
  [anon_sym_continueParent] = "continueParent",
  [anon_sym_preservePayload] = "preservePayload",
  [anon_sym_attachPath] = "attachPath",
  [anon_sym_LTtarget] = "<target",
  [anon_sym_to] = "to",
  [anon_sym_soapAction] = "soapAction",
  [anon_sym_endpoint] = "endpoint",
  [anon_sym_LT_SLASHtarget_GT] = "</target>",
  [anon_sym_LTcorrelateOn] = "<correlateOn",
  [anon_sym_LTcompleteCondition] = "<completeCondition",
  [anon_sym_LT_SLASHcompleteCondition_GT] = "</completeCondition>",
  [anon_sym_LTonComplete] = "<onComplete",
  [anon_sym_LT_SLASHonComplete_GT] = "</onComplete>",
  [anon_sym_LTmessageCount] = "<messageCount",
  [anon_sym_min] = "min",
  [anon_sym_max] = "max",
  [anon_sym_key] = "key",
  [anon_sym_LTthen_GT] = "<then>",
  [anon_sym_LT_SLASHthen_GT] = "</then>",
  [anon_sym_LTelse_GT] = "<else>",
  [anon_sym_LT_SLASHelse_GT] = "</else>",
  [anon_sym_source] = "source",
  [anon_sym_regex] = "regex",
  [anon_sym_LTendpoint] = "<endpoint",
  [anon_sym_LT_SLASHendpoint_GT] = "</endpoint>",
  [anon_sym_LThttp] = "<http",
  [anon_sym_LT_SLASHhttp_GT] = "</http>",
  [anon_sym_uri_DASHtemplate] = "uri-template",
  [anon_sym_method] = "method",
  [anon_sym_GET] = "GET",
  [anon_sym_POST] = "POST",
  [anon_sym_PUT] = "PUT",
  [anon_sym_DELETE] = "DELETE",
  [anon_sym_HEAD] = "HEAD",
  [anon_sym_OPTIONS] = "OPTIONS",
  [anon_sym_PATCH] = "PATCH",
  [anon_sym_get] = "get",
  [anon_sym_post] = "post",
  [anon_sym_put] = "put",
  [anon_sym_delete] = "delete",
  [anon_sym_head] = "head",
  [anon_sym_options] = "options",
  [anon_sym_patch] = "patch",
  [anon_sym_LTtimeout_GT] = "<timeout>",
  [anon_sym_LT_SLASHtimeout_GT] = "</timeout>",
  [anon_sym_LTmarkForSuspension_GT] = "<markForSuspension>",
  [anon_sym_LT_SLASHmarkForSuspension_GT] = "</markForSuspension>",
  [anon_sym_LTretriesBeforeSuspension_GT] = "<retriesBeforeSuspension>",
  [anon_sym_LT_SLASHretriesBeforeSuspension_GT] = "</retriesBeforeSuspension>",
  [anon_sym_LTretryDelay_GT] = "<retryDelay>",
  [anon_sym_LT_SLASHretryDelay_GT] = "</retryDelay>",
  [anon_sym_LTsuspendOnFailure_GT] = "<suspendOnFailure>",
  [anon_sym_LT_SLASHsuspendOnFailure_GT] = "</suspendOnFailure>",
  [anon_sym_LTinitialDuration_GT] = "<initialDuration>",
  [anon_sym_LT_SLASHinitialDuration_GT] = "</initialDuration>",
  [anon_sym_LTprogressionFactor_GT] = "<progressionFactor>",
  [anon_sym_LT_SLASHprogressionFactor_GT] = "</progressionFactor>",
  [anon_sym_LTmaximumDuration_GT] = "<maximumDuration>",
  [anon_sym_LT_SLASHmaximumDuration_GT] = "</maximumDuration>",
  [anon_sym_LTerrorCodes_GT] = "<errorCodes>",
  [anon_sym_COMMA] = ",",
  [anon_sym_LT_SLASHerrorCodes_GT] = "</errorCodes>",
  [anon_sym_LTduration_GT] = "<duration>",
  [anon_sym_LT_SLASHduration_GT] = "</duration>",
  [anon_sym_LTresponseAction_GT] = "<responseAction>",
  [anon_sym_never] = "never",
  [anon_sym_discard] = "discard",
  [anon_sym_fault] = "fault",
  [anon_sym_LT_SLASHresponseAction_GT] = "</responseAction>",
  [anon_sym_LTkey] = "<key",
  [anon_sym_blocking] = "blocking",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_value] = "value",
  [aux_sym_value_token1] = "value_token1",
  [anon_sym_expression] = "expression",
  [anon_sym_json_DASHeval_LPAREN] = "json-eval(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_name] = "name",
  [anon_sym_id] = "id",
  [anon_sym_level] = "level",
  [anon_sym_full] = "full",
  [anon_sym_simple] = "simple",
  [anon_sym_custom] = "custom",
  [anon_sym_headers] = "headers",
  [aux_sym_identifier_token1] = "identifier_token1",
  [sym__float] = "_float",
  [sym__unsigned_int] = "_unsigned_int",
  [sym__int] = "_int",
  [anon_sym_LT_QMARKxml] = "<\?xml",
  [anon_sym_QMARK_GT] = "\?>",
  [anon_sym_version] = "version",
  [sym_version_number] = "version_number",
  [anon_sym_encoding] = "encoding",
  [sym_encoding] = "encoding",
  [sym_comment] = "comment",
  [sym__xpath_node] = "_xpath_node",
  [anon_sym_SLASH] = "/",
  [anon_sym_SLASH_SLASH] = "//",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_DOT] = ".",
  [anon_sym_AT] = "@",
  [anon_sym_boolean] = "boolean",
  [anon_sym_LPAREN] = "(",
  [anon_sym_ceiling] = "ceiling",
  [anon_sym_choose] = "choose",
  [anon_sym_concat] = "concat",
  [anon_sym_contains] = "contains",
  [anon_sym_count] = "count",
  [anon_sym_current] = "current",
  [anon_sym_document] = "document",
  [anon_sym_element_DASHavailable] = "element-available",
  [anon_sym_floor] = "floor",
  [anon_sym_format_DASHnumber] = "format-number",
  [anon_sym_function_DASHavailable] = "function-available",
  [anon_sym_generate_DASHid] = "generate-id",
  [anon_sym_lang] = "lang",
  [anon_sym_last] = "last",
  [anon_sym_local_DASHname] = "local-name",
  [anon_sym_namespace_DASHuri] = "namespace-uri",
  [anon_sym_normalize_DASHspace] = "normalize-space",
  [anon_sym_not] = "not",
  [anon_sym_number] = "number",
  [anon_sym_position] = "position",
  [anon_sym_round] = "round",
  [anon_sym_starts_DASHwith] = "starts-with",
  [anon_sym_string] = "string",
  [anon_sym_string_DASHlength] = "string-length",
  [anon_sym_substring] = "substring",
  [anon_sym_substring_DASHafter] = "substring-after",
  [anon_sym_substring_DASHbefore] = "substring-before",
  [anon_sym_sum] = "sum",
  [anon_sym_system_DASHproperty] = "system-property",
  [anon_sym_translate] = "translate",
  [anon_sym_unparsed_DASHentity_DASHurl] = "unparsed-entity-url",
  [anon_sym_base64Encode] = "base64Encode",
  [anon_sym_base64Decode] = "base64Decode",
  [anon_sym_get_DASHproperty_LPAREN] = "get-property(",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DOLLARbody] = "$body",
  [anon_sym_DOLLARheader] = "$header",
  [anon_sym_DOLLARaxis2] = "$axis2",
  [anon_sym_ctx] = "ctx",
  [anon_sym_DOLLARtrp] = "$trp",
  [anon_sym_DOLLARurl] = "$url",
  [anon_sym_DOLLARfunc] = "$func",
  [anon_sym_DOLLARenv] = "$env",
  [anon_sym_COLON] = ":",
  [anon_sym_DOLLAR_DOT] = "$.",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_sequence_definition] = "sequence_definition",
  [sym_mediator] = "mediator",
  [sym_respond] = "respond",
  [sym_send] = "send",
  [sym_log] = "log",
  [sym_property] = "property",
  [sym__property_attribute] = "_property_attribute",
  [sym_call] = "call",
  [sym_foreach] = "foreach",
  [sym_filter] = "filter",
  [sym_aggregate] = "aggregate",
  [sym_iterate] = "iterate",
  [sym_sequential] = "sequential",
  [sym_continueParent] = "continueParent",
  [sym_preservePayload] = "preservePayload",
  [sym_attachPath] = "attachPath",
  [sym_sequence] = "sequence",
  [sym_target] = "target",
  [sym_correlateOn] = "correlateOn",
  [sym_complete_condition] = "complete_condition",
  [sym_on_complete] = "on_complete",
  [sym_message_count] = "message_count",
  [sym_min] = "min",
  [sym_max] = "max",
  [sym_key] = "key",
  [sym_then] = "then",
  [sym_else] = "else",
  [sym_source] = "source",
  [sym_regex] = "regex",
  [sym_endpoint] = "endpoint",
  [sym__endpoint_type] = "_endpoint_type",
  [sym_http_endpoint] = "http_endpoint",
  [sym__endpoint_attribute] = "_endpoint_attribute",
  [sym_method] = "method",
  [sym_endpoint_error_property] = "endpoint_error_property",
  [sym_timeout] = "timeout",
  [sym_mark_for_suspending] = "mark_for_suspending",
  [sym__mark_for_suspending_property] = "_mark_for_suspending_property",
  [sym_retries_before_suspending] = "retries_before_suspending",
  [sym_retry_delay] = "retry_delay",
  [sym_suspend_on_failure] = "suspend_on_failure",
  [sym__suspend_on_failure_property] = "_suspend_on_failure_property",
  [sym_initial_duration] = "initial_duration",
  [sym_progression_factor] = "progression_factor",
  [sym_maximum_duration] = "maximum_duration",
  [sym_error_codes] = "error_codes",
  [sym__timeout_property] = "_timeout_property",
  [sym_duration] = "duration",
  [sym_response_action] = "response_action",
  [sym_endpoint_reference] = "endpoint_reference",
  [sym_blocking] = "blocking",
  [sym_value] = "value",
  [sym_expression] = "expression",
  [sym_json_eval] = "json_eval",
  [sym_name] = "name",
  [sym_id] = "id",
  [sym_level] = "level",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_boolean] = "boolean",
  [sym_expression_string] = "expression_string",
  [sym_xml_declaration] = "xml_declaration",
  [sym_version_info] = "version_info",
  [sym_encoding_declaration] = "encoding_declaration",
  [sym_xpath] = "xpath",
  [sym__xpath_selectors] = "_xpath_selectors",
  [sym__xPath_extension_functions] = "_xPath_extension_functions",
  [sym__xpath_function] = "_xpath_function",
  [sym_boolean_function] = "boolean_function",
  [sym_ceiling_function] = "ceiling_function",
  [sym_choose_function] = "choose_function",
  [sym_concat_function] = "concat_function",
  [sym_contains_function] = "contains_function",
  [sym_count_function] = "count_function",
  [sym_current_function] = "current_function",
  [sym_document_function] = "document_function",
  [sym_element_available_function] = "element_available_function",
  [sym_false_function] = "false_function",
  [sym_floor_function] = "floor_function",
  [sym_format_number_function] = "format_number_function",
  [sym_function_available_function] = "function_available_function",
  [sym_generate_id_function] = "generate_id_function",
  [sym_id_function] = "id_function",
  [sym_key_function] = "key_function",
  [sym_lang_function] = "lang_function",
  [sym_last_function] = "last_function",
  [sym_local_name_function] = "local_name_function",
  [sym_name_function] = "name_function",
  [sym_namespace_uri_function] = "namespace_uri_function",
  [sym_normalize_space_function] = "normalize_space_function",
  [sym_not_function] = "not_function",
  [sym_number_function] = "number_function",
  [sym_position_function] = "position_function",
  [sym_round_function] = "round_function",
  [sym_starts_with_function] = "starts_with_function",
  [sym_string_function] = "string_function",
  [sym_string_length_function] = "string_length_function",
  [sym_substring_function] = "substring_function",
  [sym_substring_after_function] = "substring_after_function",
  [sym_substring_before_function] = "substring_before_function",
  [sym_sum_function] = "sum_function",
  [sym_system_property_function] = "system_property_function",
  [sym_translate_function] = "translate_function",
  [sym_true_function] = "true_function",
  [sym_unparsed_entity_url_function] = "unparsed_entity_url_function",
  [sym_base64_encode] = "base64_encode",
  [sym_base64_decode] = "base64_decode",
  [sym_get_property] = "get_property",
  [sym__xpath_string] = "_xpath_string",
  [sym_synapse_xpath_property] = "synapse_xpath_property",
  [sym_json_path] = "json_path",
  [sym_json_path_array] = "json_path_array",
  [sym_json_path_object] = "json_path_object",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_sequence_definition_repeat1] = "sequence_definition_repeat1",
  [aux_sym_log_repeat1] = "log_repeat1",
  [aux_sym_property_repeat1] = "property_repeat1",
  [aux_sym_iterate_repeat1] = "iterate_repeat1",
  [aux_sym_http_endpoint_repeat1] = "http_endpoint_repeat1",
  [aux_sym_http_endpoint_repeat2] = "http_endpoint_repeat2",
  [aux_sym_timeout_repeat1] = "timeout_repeat1",
  [aux_sym_mark_for_suspending_repeat1] = "mark_for_suspending_repeat1",
  [aux_sym_suspend_on_failure_repeat1] = "suspend_on_failure_repeat1",
  [aux_sym_error_codes_repeat1] = "error_codes_repeat1",
  [aux_sym_xpath_repeat1] = "xpath_repeat1",
  [aux_sym_json_path_repeat1] = "json_path_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LTsequence] = anon_sym_LTsequence,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_SLASHsequence_GT] = anon_sym_LT_SLASHsequence_GT,
  [anon_sym_LTrespond_SLASH_GT] = anon_sym_LTrespond_SLASH_GT,
  [anon_sym_LTsend_SLASH_GT] = anon_sym_LTsend_SLASH_GT,
  [anon_sym_LTsend] = anon_sym_LTsend,
  [anon_sym_LT_SLASHsend_GT] = anon_sym_LT_SLASHsend_GT,
  [anon_sym_LTlog] = anon_sym_LTlog,
  [anon_sym_LT_SLASHlog_GT] = anon_sym_LT_SLASHlog_GT,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LTproperty] = anon_sym_LTproperty,
  [anon_sym_scope] = anon_sym_scope,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_axis2] = anon_sym_axis2,
  [anon_sym_axis2_DASHclient] = anon_sym_axis2_DASHclient,
  [anon_sym_operation] = anon_sym_operation,
  [anon_sym_transport] = anon_sym_transport,
  [anon_sym_registry] = anon_sym_registry,
  [anon_sym_synapse] = anon_sym_synapse,
  [anon_sym_system] = anon_sym_system,
  [anon_sym_env] = anon_sym_env,
  [anon_sym_file] = anon_sym_file,
  [anon_sym_action] = anon_sym_action,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_remove] = anon_sym_remove,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_STRING] = anon_sym_STRING,
  [anon_sym_INTEGER] = anon_sym_INTEGER,
  [anon_sym_BOOLEAN] = anon_sym_BOOLEAN,
  [anon_sym_DOUBLE] = anon_sym_DOUBLE,
  [anon_sym_FLOAT] = anon_sym_FLOAT,
  [anon_sym_LONG] = anon_sym_LONG,
  [anon_sym_SHORT] = anon_sym_SHORT,
  [anon_sym_OM] = anon_sym_OM,
  [anon_sym_pattern] = anon_sym_pattern,
  [anon_sym_group] = anon_sym_group,
  [anon_sym_LTcall] = anon_sym_LTcall,
  [anon_sym_LT_SLASHcall_GT] = anon_sym_LT_SLASHcall_GT,
  [anon_sym_LTforeach] = anon_sym_LTforeach,
  [anon_sym_sequence] = anon_sym_sequence,
  [anon_sym_LT_SLASHforeach_GT] = anon_sym_LT_SLASHforeach_GT,
  [anon_sym_LTfilter] = anon_sym_LTfilter,
  [anon_sym_xpath] = anon_sym_xpath,
  [anon_sym_LT_SLASHfilter_GT] = anon_sym_LT_SLASHfilter_GT,
  [anon_sym_LTaggregate_GT] = anon_sym_LTaggregate_GT,
  [anon_sym_LTaggregate] = anon_sym_LTaggregate,
  [anon_sym_LT_SLASHaggregate_GT] = anon_sym_LT_SLASHaggregate_GT,
  [anon_sym_LTiterate] = anon_sym_LTiterate,
  [anon_sym_LT_SLASHiterate_GT] = anon_sym_LT_SLASHiterate_GT,
  [anon_sym_sequential] = anon_sym_sequential,
  [anon_sym_continueParent] = anon_sym_continueParent,
  [anon_sym_preservePayload] = anon_sym_preservePayload,
  [anon_sym_attachPath] = anon_sym_attachPath,
  [anon_sym_LTtarget] = anon_sym_LTtarget,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_soapAction] = anon_sym_soapAction,
  [anon_sym_endpoint] = anon_sym_endpoint,
  [anon_sym_LT_SLASHtarget_GT] = anon_sym_LT_SLASHtarget_GT,
  [anon_sym_LTcorrelateOn] = anon_sym_LTcorrelateOn,
  [anon_sym_LTcompleteCondition] = anon_sym_LTcompleteCondition,
  [anon_sym_LT_SLASHcompleteCondition_GT] = anon_sym_LT_SLASHcompleteCondition_GT,
  [anon_sym_LTonComplete] = anon_sym_LTonComplete,
  [anon_sym_LT_SLASHonComplete_GT] = anon_sym_LT_SLASHonComplete_GT,
  [anon_sym_LTmessageCount] = anon_sym_LTmessageCount,
  [anon_sym_min] = anon_sym_min,
  [anon_sym_max] = anon_sym_max,
  [anon_sym_key] = anon_sym_key,
  [anon_sym_LTthen_GT] = anon_sym_LTthen_GT,
  [anon_sym_LT_SLASHthen_GT] = anon_sym_LT_SLASHthen_GT,
  [anon_sym_LTelse_GT] = anon_sym_LTelse_GT,
  [anon_sym_LT_SLASHelse_GT] = anon_sym_LT_SLASHelse_GT,
  [anon_sym_source] = anon_sym_source,
  [anon_sym_regex] = anon_sym_regex,
  [anon_sym_LTendpoint] = anon_sym_LTendpoint,
  [anon_sym_LT_SLASHendpoint_GT] = anon_sym_LT_SLASHendpoint_GT,
  [anon_sym_LThttp] = anon_sym_LThttp,
  [anon_sym_LT_SLASHhttp_GT] = anon_sym_LT_SLASHhttp_GT,
  [anon_sym_uri_DASHtemplate] = anon_sym_uri_DASHtemplate,
  [anon_sym_method] = anon_sym_method,
  [anon_sym_GET] = anon_sym_GET,
  [anon_sym_POST] = anon_sym_POST,
  [anon_sym_PUT] = anon_sym_PUT,
  [anon_sym_DELETE] = anon_sym_DELETE,
  [anon_sym_HEAD] = anon_sym_HEAD,
  [anon_sym_OPTIONS] = anon_sym_OPTIONS,
  [anon_sym_PATCH] = anon_sym_PATCH,
  [anon_sym_get] = anon_sym_get,
  [anon_sym_post] = anon_sym_post,
  [anon_sym_put] = anon_sym_put,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_head] = anon_sym_head,
  [anon_sym_options] = anon_sym_options,
  [anon_sym_patch] = anon_sym_patch,
  [anon_sym_LTtimeout_GT] = anon_sym_LTtimeout_GT,
  [anon_sym_LT_SLASHtimeout_GT] = anon_sym_LT_SLASHtimeout_GT,
  [anon_sym_LTmarkForSuspension_GT] = anon_sym_LTmarkForSuspension_GT,
  [anon_sym_LT_SLASHmarkForSuspension_GT] = anon_sym_LT_SLASHmarkForSuspension_GT,
  [anon_sym_LTretriesBeforeSuspension_GT] = anon_sym_LTretriesBeforeSuspension_GT,
  [anon_sym_LT_SLASHretriesBeforeSuspension_GT] = anon_sym_LT_SLASHretriesBeforeSuspension_GT,
  [anon_sym_LTretryDelay_GT] = anon_sym_LTretryDelay_GT,
  [anon_sym_LT_SLASHretryDelay_GT] = anon_sym_LT_SLASHretryDelay_GT,
  [anon_sym_LTsuspendOnFailure_GT] = anon_sym_LTsuspendOnFailure_GT,
  [anon_sym_LT_SLASHsuspendOnFailure_GT] = anon_sym_LT_SLASHsuspendOnFailure_GT,
  [anon_sym_LTinitialDuration_GT] = anon_sym_LTinitialDuration_GT,
  [anon_sym_LT_SLASHinitialDuration_GT] = anon_sym_LT_SLASHinitialDuration_GT,
  [anon_sym_LTprogressionFactor_GT] = anon_sym_LTprogressionFactor_GT,
  [anon_sym_LT_SLASHprogressionFactor_GT] = anon_sym_LT_SLASHprogressionFactor_GT,
  [anon_sym_LTmaximumDuration_GT] = anon_sym_LTmaximumDuration_GT,
  [anon_sym_LT_SLASHmaximumDuration_GT] = anon_sym_LT_SLASHmaximumDuration_GT,
  [anon_sym_LTerrorCodes_GT] = anon_sym_LTerrorCodes_GT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LT_SLASHerrorCodes_GT] = anon_sym_LT_SLASHerrorCodes_GT,
  [anon_sym_LTduration_GT] = anon_sym_LTduration_GT,
  [anon_sym_LT_SLASHduration_GT] = anon_sym_LT_SLASHduration_GT,
  [anon_sym_LTresponseAction_GT] = anon_sym_LTresponseAction_GT,
  [anon_sym_never] = anon_sym_never,
  [anon_sym_discard] = anon_sym_discard,
  [anon_sym_fault] = anon_sym_fault,
  [anon_sym_LT_SLASHresponseAction_GT] = anon_sym_LT_SLASHresponseAction_GT,
  [anon_sym_LTkey] = anon_sym_LTkey,
  [anon_sym_blocking] = anon_sym_blocking,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_value] = anon_sym_value,
  [aux_sym_value_token1] = aux_sym_value_token1,
  [anon_sym_expression] = anon_sym_expression,
  [anon_sym_json_DASHeval_LPAREN] = anon_sym_json_DASHeval_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_id] = anon_sym_id,
  [anon_sym_level] = anon_sym_level,
  [anon_sym_full] = anon_sym_full,
  [anon_sym_simple] = anon_sym_simple,
  [anon_sym_custom] = anon_sym_custom,
  [anon_sym_headers] = anon_sym_headers,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [sym__float] = sym__float,
  [sym__unsigned_int] = sym__unsigned_int,
  [sym__int] = sym__int,
  [anon_sym_LT_QMARKxml] = anon_sym_LT_QMARKxml,
  [anon_sym_QMARK_GT] = anon_sym_QMARK_GT,
  [anon_sym_version] = anon_sym_version,
  [sym_version_number] = sym_version_number,
  [anon_sym_encoding] = anon_sym_encoding,
  [sym_encoding] = sym_encoding,
  [sym_comment] = sym_comment,
  [sym__xpath_node] = sym__xpath_node,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_ceiling] = anon_sym_ceiling,
  [anon_sym_choose] = anon_sym_choose,
  [anon_sym_concat] = anon_sym_concat,
  [anon_sym_contains] = anon_sym_contains,
  [anon_sym_count] = anon_sym_count,
  [anon_sym_current] = anon_sym_current,
  [anon_sym_document] = anon_sym_document,
  [anon_sym_element_DASHavailable] = anon_sym_element_DASHavailable,
  [anon_sym_floor] = anon_sym_floor,
  [anon_sym_format_DASHnumber] = anon_sym_format_DASHnumber,
  [anon_sym_function_DASHavailable] = anon_sym_function_DASHavailable,
  [anon_sym_generate_DASHid] = anon_sym_generate_DASHid,
  [anon_sym_lang] = anon_sym_lang,
  [anon_sym_last] = anon_sym_last,
  [anon_sym_local_DASHname] = anon_sym_local_DASHname,
  [anon_sym_namespace_DASHuri] = anon_sym_namespace_DASHuri,
  [anon_sym_normalize_DASHspace] = anon_sym_normalize_DASHspace,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_number] = anon_sym_number,
  [anon_sym_position] = anon_sym_position,
  [anon_sym_round] = anon_sym_round,
  [anon_sym_starts_DASHwith] = anon_sym_starts_DASHwith,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_string_DASHlength] = anon_sym_string_DASHlength,
  [anon_sym_substring] = anon_sym_substring,
  [anon_sym_substring_DASHafter] = anon_sym_substring_DASHafter,
  [anon_sym_substring_DASHbefore] = anon_sym_substring_DASHbefore,
  [anon_sym_sum] = anon_sym_sum,
  [anon_sym_system_DASHproperty] = anon_sym_system_DASHproperty,
  [anon_sym_translate] = anon_sym_translate,
  [anon_sym_unparsed_DASHentity_DASHurl] = anon_sym_unparsed_DASHentity_DASHurl,
  [anon_sym_base64Encode] = anon_sym_base64Encode,
  [anon_sym_base64Decode] = anon_sym_base64Decode,
  [anon_sym_get_DASHproperty_LPAREN] = anon_sym_get_DASHproperty_LPAREN,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DOLLARbody] = anon_sym_DOLLARbody,
  [anon_sym_DOLLARheader] = anon_sym_DOLLARheader,
  [anon_sym_DOLLARaxis2] = anon_sym_DOLLARaxis2,
  [anon_sym_ctx] = anon_sym_ctx,
  [anon_sym_DOLLARtrp] = anon_sym_DOLLARtrp,
  [anon_sym_DOLLARurl] = anon_sym_DOLLARurl,
  [anon_sym_DOLLARfunc] = anon_sym_DOLLARfunc,
  [anon_sym_DOLLARenv] = anon_sym_DOLLARenv,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DOLLAR_DOT] = anon_sym_DOLLAR_DOT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_sequence_definition] = sym_sequence_definition,
  [sym_mediator] = sym_mediator,
  [sym_respond] = sym_respond,
  [sym_send] = sym_send,
  [sym_log] = sym_log,
  [sym_property] = sym_property,
  [sym__property_attribute] = sym__property_attribute,
  [sym_call] = sym_call,
  [sym_foreach] = sym_foreach,
  [sym_filter] = sym_filter,
  [sym_aggregate] = sym_aggregate,
  [sym_iterate] = sym_iterate,
  [sym_sequential] = sym_sequential,
  [sym_continueParent] = sym_continueParent,
  [sym_preservePayload] = sym_preservePayload,
  [sym_attachPath] = sym_attachPath,
  [sym_sequence] = sym_sequence,
  [sym_target] = sym_target,
  [sym_correlateOn] = sym_correlateOn,
  [sym_complete_condition] = sym_complete_condition,
  [sym_on_complete] = sym_on_complete,
  [sym_message_count] = sym_message_count,
  [sym_min] = sym_min,
  [sym_max] = sym_max,
  [sym_key] = sym_key,
  [sym_then] = sym_then,
  [sym_else] = sym_else,
  [sym_source] = sym_source,
  [sym_regex] = sym_regex,
  [sym_endpoint] = sym_endpoint,
  [sym__endpoint_type] = sym__endpoint_type,
  [sym_http_endpoint] = sym_http_endpoint,
  [sym__endpoint_attribute] = sym__endpoint_attribute,
  [sym_method] = sym_method,
  [sym_endpoint_error_property] = sym_endpoint_error_property,
  [sym_timeout] = sym_timeout,
  [sym_mark_for_suspending] = sym_mark_for_suspending,
  [sym__mark_for_suspending_property] = sym__mark_for_suspending_property,
  [sym_retries_before_suspending] = sym_retries_before_suspending,
  [sym_retry_delay] = sym_retry_delay,
  [sym_suspend_on_failure] = sym_suspend_on_failure,
  [sym__suspend_on_failure_property] = sym__suspend_on_failure_property,
  [sym_initial_duration] = sym_initial_duration,
  [sym_progression_factor] = sym_progression_factor,
  [sym_maximum_duration] = sym_maximum_duration,
  [sym_error_codes] = sym_error_codes,
  [sym__timeout_property] = sym__timeout_property,
  [sym_duration] = sym_duration,
  [sym_response_action] = sym_response_action,
  [sym_endpoint_reference] = sym_endpoint_reference,
  [sym_blocking] = sym_blocking,
  [sym_value] = sym_value,
  [sym_expression] = sym_expression,
  [sym_json_eval] = sym_json_eval,
  [sym_name] = sym_name,
  [sym_id] = sym_id,
  [sym_level] = sym_level,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_boolean] = sym_boolean,
  [sym_expression_string] = sym_expression_string,
  [sym_xml_declaration] = sym_xml_declaration,
  [sym_version_info] = sym_version_info,
  [sym_encoding_declaration] = sym_encoding_declaration,
  [sym_xpath] = sym_xpath,
  [sym__xpath_selectors] = sym__xpath_selectors,
  [sym__xPath_extension_functions] = sym__xPath_extension_functions,
  [sym__xpath_function] = sym__xpath_function,
  [sym_boolean_function] = sym_boolean_function,
  [sym_ceiling_function] = sym_ceiling_function,
  [sym_choose_function] = sym_choose_function,
  [sym_concat_function] = sym_concat_function,
  [sym_contains_function] = sym_contains_function,
  [sym_count_function] = sym_count_function,
  [sym_current_function] = sym_current_function,
  [sym_document_function] = sym_document_function,
  [sym_element_available_function] = sym_element_available_function,
  [sym_false_function] = sym_false_function,
  [sym_floor_function] = sym_floor_function,
  [sym_format_number_function] = sym_format_number_function,
  [sym_function_available_function] = sym_function_available_function,
  [sym_generate_id_function] = sym_generate_id_function,
  [sym_id_function] = sym_id_function,
  [sym_key_function] = sym_key_function,
  [sym_lang_function] = sym_lang_function,
  [sym_last_function] = sym_last_function,
  [sym_local_name_function] = sym_local_name_function,
  [sym_name_function] = sym_name_function,
  [sym_namespace_uri_function] = sym_namespace_uri_function,
  [sym_normalize_space_function] = sym_normalize_space_function,
  [sym_not_function] = sym_not_function,
  [sym_number_function] = sym_number_function,
  [sym_position_function] = sym_position_function,
  [sym_round_function] = sym_round_function,
  [sym_starts_with_function] = sym_starts_with_function,
  [sym_string_function] = sym_string_function,
  [sym_string_length_function] = sym_string_length_function,
  [sym_substring_function] = sym_substring_function,
  [sym_substring_after_function] = sym_substring_after_function,
  [sym_substring_before_function] = sym_substring_before_function,
  [sym_sum_function] = sym_sum_function,
  [sym_system_property_function] = sym_system_property_function,
  [sym_translate_function] = sym_translate_function,
  [sym_true_function] = sym_true_function,
  [sym_unparsed_entity_url_function] = sym_unparsed_entity_url_function,
  [sym_base64_encode] = sym_base64_encode,
  [sym_base64_decode] = sym_base64_decode,
  [sym_get_property] = sym_get_property,
  [sym__xpath_string] = sym__xpath_string,
  [sym_synapse_xpath_property] = sym_synapse_xpath_property,
  [sym_json_path] = sym_json_path,
  [sym_json_path_array] = sym_json_path_array,
  [sym_json_path_object] = sym_json_path_object,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_sequence_definition_repeat1] = aux_sym_sequence_definition_repeat1,
  [aux_sym_log_repeat1] = aux_sym_log_repeat1,
  [aux_sym_property_repeat1] = aux_sym_property_repeat1,
  [aux_sym_iterate_repeat1] = aux_sym_iterate_repeat1,
  [aux_sym_http_endpoint_repeat1] = aux_sym_http_endpoint_repeat1,
  [aux_sym_http_endpoint_repeat2] = aux_sym_http_endpoint_repeat2,
  [aux_sym_timeout_repeat1] = aux_sym_timeout_repeat1,
  [aux_sym_mark_for_suspending_repeat1] = aux_sym_mark_for_suspending_repeat1,
  [aux_sym_suspend_on_failure_repeat1] = aux_sym_suspend_on_failure_repeat1,
  [aux_sym_error_codes_repeat1] = aux_sym_error_codes_repeat1,
  [aux_sym_xpath_repeat1] = aux_sym_xpath_repeat1,
  [aux_sym_json_path_repeat1] = aux_sym_json_path_repeat1,
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
  [anon_sym_LTsend_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTsend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHsend_GT] = {
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
  [anon_sym_scope] = {
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
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_axis2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_axis2_DASHclient] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_operation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_transport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_registry] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_synapse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_system] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_env] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_action] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_remove] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STRING] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INTEGER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BOOLEAN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOUBLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FLOAT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LONG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SHORT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pattern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_group] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTcall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHcall_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTforeach] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sequence] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHforeach_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTfilter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xpath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHfilter_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTaggregate_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTaggregate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHaggregate_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTiterate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHiterate_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sequential] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continueParent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_preservePayload] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_attachPath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTtarget] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_soapAction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endpoint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHtarget_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTcorrelateOn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTcompleteCondition] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHcompleteCondition_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTonComplete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHonComplete_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTmessageCount] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_min] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_key] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTthen_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHthen_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTelse_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHelse_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_source] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_regex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTendpoint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHendpoint_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LThttp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHhttp_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uri_DASHtemplate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_method] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POST] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PUT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DELETE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HEAD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OPTIONS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PATCH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_post] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_put] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_head] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_options] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_patch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTtimeout_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHtimeout_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTmarkForSuspension_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHmarkForSuspension_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTretriesBeforeSuspension_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHretriesBeforeSuspension_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTretryDelay_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHretryDelay_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTsuspendOnFailure_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHsuspendOnFailure_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTinitialDuration_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHinitialDuration_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTprogressionFactor_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHprogressionFactor_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTmaximumDuration_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHmaximumDuration_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTerrorCodes_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHerrorCodes_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTduration_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHduration_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTresponseAction_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_never] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_discard] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fault] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHresponseAction_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTkey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blocking] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_value] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_expression] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_json_DASHeval_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_id] = {
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
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__float] = {
    .visible = false,
    .named = true,
  },
  [sym__unsigned_int] = {
    .visible = false,
    .named = true,
  },
  [sym__int] = {
    .visible = false,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__xpath_node] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ceiling] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_choose] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_concat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contains] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_count] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_current] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_document] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_element_DASHavailable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_floor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_format_DASHnumber] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function_DASHavailable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_generate_DASHid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lang] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_last] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_local_DASHname] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_namespace_DASHuri] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_normalize_DASHspace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_number] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_position] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_round] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_starts_DASHwith] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string_DASHlength] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_substring] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_substring_DASHafter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_substring_DASHbefore] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_system_DASHproperty] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_translate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unparsed_DASHentity_DASHurl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_base64Encode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_base64Decode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get_DASHproperty_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARbody] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARheader] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARaxis2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ctx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARtrp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARurl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARfunc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARenv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_DOT] = {
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
  [sym_send] = {
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
  [sym__property_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_foreach] = {
    .visible = true,
    .named = true,
  },
  [sym_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_aggregate] = {
    .visible = true,
    .named = true,
  },
  [sym_iterate] = {
    .visible = true,
    .named = true,
  },
  [sym_sequential] = {
    .visible = true,
    .named = true,
  },
  [sym_continueParent] = {
    .visible = true,
    .named = true,
  },
  [sym_preservePayload] = {
    .visible = true,
    .named = true,
  },
  [sym_attachPath] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_target] = {
    .visible = true,
    .named = true,
  },
  [sym_correlateOn] = {
    .visible = true,
    .named = true,
  },
  [sym_complete_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_on_complete] = {
    .visible = true,
    .named = true,
  },
  [sym_message_count] = {
    .visible = true,
    .named = true,
  },
  [sym_min] = {
    .visible = true,
    .named = true,
  },
  [sym_max] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_then] = {
    .visible = true,
    .named = true,
  },
  [sym_else] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_regex] = {
    .visible = true,
    .named = true,
  },
  [sym_endpoint] = {
    .visible = true,
    .named = true,
  },
  [sym__endpoint_type] = {
    .visible = false,
    .named = true,
  },
  [sym_http_endpoint] = {
    .visible = true,
    .named = true,
  },
  [sym__endpoint_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym_method] = {
    .visible = true,
    .named = true,
  },
  [sym_endpoint_error_property] = {
    .visible = true,
    .named = true,
  },
  [sym_timeout] = {
    .visible = true,
    .named = true,
  },
  [sym_mark_for_suspending] = {
    .visible = true,
    .named = true,
  },
  [sym__mark_for_suspending_property] = {
    .visible = false,
    .named = true,
  },
  [sym_retries_before_suspending] = {
    .visible = true,
    .named = true,
  },
  [sym_retry_delay] = {
    .visible = true,
    .named = true,
  },
  [sym_suspend_on_failure] = {
    .visible = true,
    .named = true,
  },
  [sym__suspend_on_failure_property] = {
    .visible = false,
    .named = true,
  },
  [sym_initial_duration] = {
    .visible = true,
    .named = true,
  },
  [sym_progression_factor] = {
    .visible = true,
    .named = true,
  },
  [sym_maximum_duration] = {
    .visible = true,
    .named = true,
  },
  [sym_error_codes] = {
    .visible = true,
    .named = true,
  },
  [sym__timeout_property] = {
    .visible = false,
    .named = true,
  },
  [sym_duration] = {
    .visible = true,
    .named = true,
  },
  [sym_response_action] = {
    .visible = true,
    .named = true,
  },
  [sym_endpoint_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_blocking] = {
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
  [sym_json_eval] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [sym_level] = {
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
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_string] = {
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
  [sym_xpath] = {
    .visible = true,
    .named = true,
  },
  [sym__xpath_selectors] = {
    .visible = false,
    .named = true,
  },
  [sym__xPath_extension_functions] = {
    .visible = false,
    .named = true,
  },
  [sym__xpath_function] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean_function] = {
    .visible = true,
    .named = true,
  },
  [sym_ceiling_function] = {
    .visible = true,
    .named = true,
  },
  [sym_choose_function] = {
    .visible = true,
    .named = true,
  },
  [sym_concat_function] = {
    .visible = true,
    .named = true,
  },
  [sym_contains_function] = {
    .visible = true,
    .named = true,
  },
  [sym_count_function] = {
    .visible = true,
    .named = true,
  },
  [sym_current_function] = {
    .visible = true,
    .named = true,
  },
  [sym_document_function] = {
    .visible = true,
    .named = true,
  },
  [sym_element_available_function] = {
    .visible = true,
    .named = true,
  },
  [sym_false_function] = {
    .visible = true,
    .named = true,
  },
  [sym_floor_function] = {
    .visible = true,
    .named = true,
  },
  [sym_format_number_function] = {
    .visible = true,
    .named = true,
  },
  [sym_function_available_function] = {
    .visible = true,
    .named = true,
  },
  [sym_generate_id_function] = {
    .visible = true,
    .named = true,
  },
  [sym_id_function] = {
    .visible = true,
    .named = true,
  },
  [sym_key_function] = {
    .visible = true,
    .named = true,
  },
  [sym_lang_function] = {
    .visible = true,
    .named = true,
  },
  [sym_last_function] = {
    .visible = true,
    .named = true,
  },
  [sym_local_name_function] = {
    .visible = true,
    .named = true,
  },
  [sym_name_function] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_uri_function] = {
    .visible = true,
    .named = true,
  },
  [sym_normalize_space_function] = {
    .visible = true,
    .named = true,
  },
  [sym_not_function] = {
    .visible = true,
    .named = true,
  },
  [sym_number_function] = {
    .visible = true,
    .named = true,
  },
  [sym_position_function] = {
    .visible = true,
    .named = true,
  },
  [sym_round_function] = {
    .visible = true,
    .named = true,
  },
  [sym_starts_with_function] = {
    .visible = true,
    .named = true,
  },
  [sym_string_function] = {
    .visible = true,
    .named = true,
  },
  [sym_string_length_function] = {
    .visible = true,
    .named = true,
  },
  [sym_substring_function] = {
    .visible = true,
    .named = true,
  },
  [sym_substring_after_function] = {
    .visible = true,
    .named = true,
  },
  [sym_substring_before_function] = {
    .visible = true,
    .named = true,
  },
  [sym_sum_function] = {
    .visible = true,
    .named = true,
  },
  [sym_system_property_function] = {
    .visible = true,
    .named = true,
  },
  [sym_translate_function] = {
    .visible = true,
    .named = true,
  },
  [sym_true_function] = {
    .visible = true,
    .named = true,
  },
  [sym_unparsed_entity_url_function] = {
    .visible = true,
    .named = true,
  },
  [sym_base64_encode] = {
    .visible = true,
    .named = true,
  },
  [sym_base64_decode] = {
    .visible = true,
    .named = true,
  },
  [sym_get_property] = {
    .visible = true,
    .named = true,
  },
  [sym__xpath_string] = {
    .visible = false,
    .named = true,
  },
  [sym_synapse_xpath_property] = {
    .visible = true,
    .named = true,
  },
  [sym_json_path] = {
    .visible = true,
    .named = true,
  },
  [sym_json_path_array] = {
    .visible = true,
    .named = true,
  },
  [sym_json_path_object] = {
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
  [aux_sym_property_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_iterate_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_http_endpoint_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_http_endpoint_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_timeout_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mark_for_suspending_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_suspend_on_failure_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_error_codes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_xpath_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_path_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_attachPath = 1,
  field_blocking = 2,
  field_complete_condition = 3,
  field_continueParent = 4,
  field_correlateOn = 5,
  field_else = 6,
  field_endpoint = 7,
  field_endpoint_reference = 8,
  field_endpoint_type = 9,
  field_expression = 10,
  field_id = 11,
  field_key = 12,
  field_level = 13,
  field_max = 14,
  field_message_count = 15,
  field_min = 16,
  field_name = 17,
  field_number = 18,
  field_on_complete = 19,
  field_preservePayload = 20,
  field_regex = 21,
  field_sequence = 22,
  field_sequential = 23,
  field_soapAction = 24,
  field_source = 25,
  field_target = 26,
  field_then = 27,
  field_timeout = 28,
  field_to = 29,
  field_value = 30,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_attachPath] = "attachPath",
  [field_blocking] = "blocking",
  [field_complete_condition] = "complete_condition",
  [field_continueParent] = "continueParent",
  [field_correlateOn] = "correlateOn",
  [field_else] = "else",
  [field_endpoint] = "endpoint",
  [field_endpoint_reference] = "endpoint_reference",
  [field_endpoint_type] = "endpoint_type",
  [field_expression] = "expression",
  [field_id] = "id",
  [field_key] = "key",
  [field_level] = "level",
  [field_max] = "max",
  [field_message_count] = "message_count",
  [field_min] = "min",
  [field_name] = "name",
  [field_number] = "number",
  [field_on_complete] = "on_complete",
  [field_preservePayload] = "preservePayload",
  [field_regex] = "regex",
  [field_sequence] = "sequence",
  [field_sequential] = "sequential",
  [field_soapAction] = "soapAction",
  [field_source] = "source",
  [field_target] = "target",
  [field_then] = "then",
  [field_timeout] = "timeout",
  [field_to] = "to",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 2},
  [9] = {.index = 9, .length = 1},
  [10] = {.index = 10, .length = 1},
  [11] = {.index = 11, .length = 1},
  [12] = {.index = 12, .length = 1},
  [13] = {.index = 13, .length = 10},
  [14] = {.index = 23, .length = 1},
  [15] = {.index = 24, .length = 1},
  [16] = {.index = 25, .length = 3},
  [17] = {.index = 28, .length = 4},
  [18] = {.index = 32, .length = 1},
  [19] = {.index = 33, .length = 1},
  [20] = {.index = 34, .length = 2},
  [21] = {.index = 36, .length = 2},
  [22] = {.index = 38, .length = 2},
  [23] = {.index = 40, .length = 1},
  [24] = {.index = 41, .length = 2},
  [25] = {.index = 43, .length = 2},
  [26] = {.index = 45, .length = 2},
  [27] = {.index = 47, .length = 2},
  [28] = {.index = 49, .length = 2},
  [29] = {.index = 51, .length = 2},
  [30] = {.index = 53, .length = 1},
  [31] = {.index = 54, .length = 1},
  [32] = {.index = 55, .length = 3},
  [33] = {.index = 58, .length = 2},
  [34] = {.index = 60, .length = 2},
  [35] = {.index = 62, .length = 2},
  [36] = {.index = 64, .length = 6},
  [37] = {.index = 70, .length = 1},
  [38] = {.index = 71, .length = 3},
  [39] = {.index = 74, .length = 3},
  [40] = {.index = 77, .length = 3},
  [41] = {.index = 80, .length = 3},
  [42] = {.index = 83, .length = 1},
  [43] = {.index = 84, .length = 2},
  [44] = {.index = 86, .length = 3},
  [45] = {.index = 89, .length = 3},
  [46] = {.index = 92, .length = 3},
  [47] = {.index = 95, .length = 2},
  [48] = {.index = 97, .length = 1},
  [49] = {.index = 98, .length = 2},
  [50] = {.index = 100, .length = 4},
  [51] = {.index = 104, .length = 1},
  [52] = {.index = 105, .length = 1},
  [53] = {.index = 106, .length = 7},
  [54] = {.index = 113, .length = 2},
  [55] = {.index = 115, .length = 6},
  [56] = {.index = 121, .length = 8},
  [57] = {.index = 129, .length = 6},
  [58] = {.index = 135, .length = 6},
  [59] = {.index = 141, .length = 6},
  [60] = {.index = 147, .length = 6},
  [61] = {.index = 153, .length = 11},
  [62] = {.index = 164, .length = 11},
  [63] = {.index = 175, .length = 11},
  [64] = {.index = 186, .length = 11},
  [65] = {.index = 197, .length = 11},
  [66] = {.index = 208, .length = 11},
  [67] = {.index = 219, .length = 16},
  [68] = {.index = 235, .length = 16},
  [69] = {.index = 251, .length = 16},
  [70] = {.index = 267, .length = 16},
  [71] = {.index = 283, .length = 21},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_sequential, 0},
  [2] =
    {field_continueParent, 0},
  [3] =
    {field_preservePayload, 0},
  [4] =
    {field_attachPath, 0},
  [5] =
    {field_expression, 0},
  [6] =
    {field_level, 1},
  [7] =
    {field_expression, 0, .inherited = true},
    {field_value, 0, .inherited = true},
  [9] =
    {field_value, 0},
  [10] =
    {field_correlateOn, 1},
  [11] =
    {field_complete_condition, 1},
  [12] =
    {field_on_complete, 1},
  [13] =
    {field_attachPath, 0, .inherited = true},
    {field_attachPath, 1, .inherited = true},
    {field_continueParent, 0, .inherited = true},
    {field_continueParent, 1, .inherited = true},
    {field_expression, 0, .inherited = true},
    {field_expression, 1, .inherited = true},
    {field_preservePayload, 0, .inherited = true},
    {field_preservePayload, 1, .inherited = true},
    {field_sequential, 0, .inherited = true},
    {field_sequential, 1, .inherited = true},
  [23] =
    {field_key, 1},
  [24] =
    {field_endpoint, 2},
  [25] =
    {field_expression, 2, .inherited = true},
    {field_name, 1},
    {field_value, 2, .inherited = true},
  [28] =
    {field_expression, 0, .inherited = true},
    {field_expression, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [32] =
    {field_endpoint_reference, 2},
  [33] =
    {field_expression, 1},
  [34] =
    {field_complete_condition, 2},
    {field_correlateOn, 1},
  [36] =
    {field_correlateOn, 1},
    {field_on_complete, 2},
  [38] =
    {field_complete_condition, 1},
    {field_on_complete, 2},
  [40] =
    {field_id, 1},
  [41] =
    {field_blocking, 1},
    {field_endpoint, 3},
  [43] =
    {field_blocking, 1},
    {field_endpoint_reference, 3},
  [45] =
    {field_endpoint, 3},
    {field_name, 1},
  [47] =
    {field_endpoint_reference, 3},
    {field_name, 1},
  [49] =
    {field_expression, 1},
    {field_sequence, 3},
  [51] =
    {field_source, 1},
    {field_then, 3},
  [53] =
    {field_message_count, 2},
  [54] =
    {field_timeout, 1},
  [55] =
    {field_complete_condition, 2},
    {field_correlateOn, 1},
    {field_on_complete, 3},
  [58] =
    {field_correlateOn, 3},
    {field_id, 1},
  [60] =
    {field_complete_condition, 3},
    {field_id, 1},
  [62] =
    {field_id, 1},
    {field_on_complete, 3},
  [64] =
    {field_attachPath, 1, .inherited = true},
    {field_continueParent, 1, .inherited = true},
    {field_expression, 1, .inherited = true},
    {field_preservePayload, 1, .inherited = true},
    {field_sequential, 1, .inherited = true},
    {field_target, 3},
  [70] =
    {field_endpoint_type, 2},
  [71] =
    {field_blocking, 2},
    {field_endpoint, 4},
    {field_name, 1},
  [74] =
    {field_blocking, 2},
    {field_endpoint_reference, 4},
    {field_name, 1},
  [77] =
    {field_expression, 1},
    {field_id, 2},
    {field_sequence, 4},
  [80] =
    {field_else, 4},
    {field_source, 1},
    {field_then, 3},
  [83] =
    {field_number, 1},
  [84] =
    {field_message_count, 3},
    {field_timeout, 1},
  [86] =
    {field_complete_condition, 4},
    {field_correlateOn, 3},
    {field_id, 1},
  [89] =
    {field_correlateOn, 3},
    {field_id, 1},
    {field_on_complete, 4},
  [92] =
    {field_complete_condition, 3},
    {field_id, 1},
    {field_on_complete, 4},
  [95] =
    {field_endpoint_type, 3},
    {field_name, 1},
  [97] =
    {field_regex, 5},
  [98] =
    {field_max, 2},
    {field_min, 1},
  [100] =
    {field_complete_condition, 4},
    {field_correlateOn, 3},
    {field_id, 1},
    {field_on_complete, 5},
  [104] =
    {field_sequence, 2},
  [105] =
    {field_then, 7},
  [106] =
    {field_expression, 1},
    {field_sequence, 2},
    {field_sequence, 3},
    {field_sequence, 4},
    {field_sequence, 5},
    {field_sequence, 6},
    {field_sequence, 8},
  [113] =
    {field_else, 8},
    {field_then, 7},
  [115] =
    {field_expression, 1},
    {field_sequence, 2},
    {field_sequence, 3},
    {field_sequence, 4},
    {field_sequence, 5},
    {field_sequence, 6},
  [121] =
    {field_expression, 1},
    {field_id, 2},
    {field_sequence, 3},
    {field_sequence, 4},
    {field_sequence, 5},
    {field_sequence, 6},
    {field_sequence, 7},
    {field_sequence, 9},
  [129] =
    {field_sequence, 1},
    {field_sequence, 2},
    {field_sequence, 3},
    {field_sequence, 4},
    {field_sequence, 5},
    {field_sequence, 7},
  [135] =
    {field_sequence, 7},
    {field_to, 1},
    {field_to, 2},
    {field_to, 3},
    {field_to, 4},
    {field_to, 5},
  [141] =
    {field_sequence, 7},
    {field_soapAction, 1},
    {field_soapAction, 2},
    {field_soapAction, 3},
    {field_soapAction, 4},
    {field_soapAction, 5},
  [147] =
    {field_endpoint, 1},
    {field_endpoint, 2},
    {field_endpoint, 3},
    {field_endpoint, 4},
    {field_endpoint, 5},
    {field_sequence, 7},
  [153] =
    {field_endpoint, 6},
    {field_endpoint, 7},
    {field_endpoint, 8},
    {field_endpoint, 9},
    {field_endpoint, 10},
    {field_sequence, 1},
    {field_sequence, 2},
    {field_sequence, 3},
    {field_sequence, 4},
    {field_sequence, 5},
    {field_sequence, 12},
  [164] =
    {field_sequence, 6},
    {field_sequence, 7},
    {field_sequence, 8},
    {field_sequence, 9},
    {field_sequence, 10},
    {field_sequence, 12},
    {field_to, 1},
    {field_to, 2},
    {field_to, 3},
    {field_to, 4},
    {field_to, 5},
  [175] =
    {field_sequence, 12},
    {field_soapAction, 6},
    {field_soapAction, 7},
    {field_soapAction, 8},
    {field_soapAction, 9},
    {field_soapAction, 10},
    {field_to, 1},
    {field_to, 2},
    {field_to, 3},
    {field_to, 4},
    {field_to, 5},
  [186] =
    {field_endpoint, 6},
    {field_endpoint, 7},
    {field_endpoint, 8},
    {field_endpoint, 9},
    {field_endpoint, 10},
    {field_sequence, 12},
    {field_to, 1},
    {field_to, 2},
    {field_to, 3},
    {field_to, 4},
    {field_to, 5},
  [197] =
    {field_sequence, 6},
    {field_sequence, 7},
    {field_sequence, 8},
    {field_sequence, 9},
    {field_sequence, 10},
    {field_sequence, 12},
    {field_soapAction, 1},
    {field_soapAction, 2},
    {field_soapAction, 3},
    {field_soapAction, 4},
    {field_soapAction, 5},
  [208] =
    {field_endpoint, 6},
    {field_endpoint, 7},
    {field_endpoint, 8},
    {field_endpoint, 9},
    {field_endpoint, 10},
    {field_sequence, 12},
    {field_soapAction, 1},
    {field_soapAction, 2},
    {field_soapAction, 3},
    {field_soapAction, 4},
    {field_soapAction, 5},
  [219] =
    {field_endpoint, 11},
    {field_endpoint, 12},
    {field_endpoint, 13},
    {field_endpoint, 14},
    {field_endpoint, 15},
    {field_sequence, 6},
    {field_sequence, 7},
    {field_sequence, 8},
    {field_sequence, 9},
    {field_sequence, 10},
    {field_sequence, 17},
    {field_to, 1},
    {field_to, 2},
    {field_to, 3},
    {field_to, 4},
    {field_to, 5},
  [235] =
    {field_sequence, 11},
    {field_sequence, 12},
    {field_sequence, 13},
    {field_sequence, 14},
    {field_sequence, 15},
    {field_sequence, 17},
    {field_soapAction, 6},
    {field_soapAction, 7},
    {field_soapAction, 8},
    {field_soapAction, 9},
    {field_soapAction, 10},
    {field_to, 1},
    {field_to, 2},
    {field_to, 3},
    {field_to, 4},
    {field_to, 5},
  [251] =
    {field_endpoint, 11},
    {field_endpoint, 12},
    {field_endpoint, 13},
    {field_endpoint, 14},
    {field_endpoint, 15},
    {field_sequence, 17},
    {field_soapAction, 6},
    {field_soapAction, 7},
    {field_soapAction, 8},
    {field_soapAction, 9},
    {field_soapAction, 10},
    {field_to, 1},
    {field_to, 2},
    {field_to, 3},
    {field_to, 4},
    {field_to, 5},
  [267] =
    {field_endpoint, 11},
    {field_endpoint, 12},
    {field_endpoint, 13},
    {field_endpoint, 14},
    {field_endpoint, 15},
    {field_sequence, 6},
    {field_sequence, 7},
    {field_sequence, 8},
    {field_sequence, 9},
    {field_sequence, 10},
    {field_sequence, 17},
    {field_soapAction, 1},
    {field_soapAction, 2},
    {field_soapAction, 3},
    {field_soapAction, 4},
    {field_soapAction, 5},
  [283] =
    {field_endpoint, 16},
    {field_endpoint, 17},
    {field_endpoint, 18},
    {field_endpoint, 19},
    {field_endpoint, 20},
    {field_sequence, 11},
    {field_sequence, 12},
    {field_sequence, 13},
    {field_sequence, 14},
    {field_sequence, 15},
    {field_sequence, 22},
    {field_soapAction, 6},
    {field_soapAction, 7},
    {field_soapAction, 8},
    {field_soapAction, 9},
    {field_soapAction, 10},
    {field_to, 1},
    {field_to, 2},
    {field_to, 3},
    {field_to, 4},
    {field_to, 5},
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
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 50,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 566,
  [567] = 567,
  [568] = 568,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 576,
  [577] = 577,
  [578] = 578,
  [579] = 579,
  [580] = 580,
  [581] = 581,
  [582] = 582,
  [583] = 583,
  [584] = 584,
  [585] = 585,
  [586] = 586,
  [587] = 587,
  [588] = 588,
  [589] = 589,
  [590] = 590,
  [591] = 591,
  [592] = 592,
  [593] = 593,
  [594] = 594,
  [595] = 595,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 599,
  [600] = 600,
  [601] = 601,
  [602] = 602,
  [603] = 603,
  [604] = 604,
  [605] = 605,
  [606] = 606,
  [607] = 607,
  [608] = 608,
  [609] = 609,
  [610] = 610,
  [611] = 611,
  [612] = 612,
  [613] = 613,
  [614] = 614,
  [615] = 615,
  [616] = 616,
  [617] = 617,
  [618] = 618,
  [619] = 619,
  [620] = 620,
  [621] = 621,
  [622] = 622,
  [623] = 623,
  [624] = 624,
  [625] = 625,
  [626] = 626,
  [627] = 627,
  [628] = 628,
  [629] = 629,
  [630] = 630,
  [631] = 631,
  [632] = 632,
  [633] = 633,
  [634] = 634,
  [635] = 635,
  [636] = 636,
  [637] = 637,
  [638] = 638,
  [639] = 639,
  [640] = 640,
  [641] = 641,
  [642] = 642,
  [643] = 643,
  [644] = 644,
  [645] = 645,
  [646] = 646,
  [647] = 647,
  [648] = 648,
  [649] = 649,
  [650] = 650,
  [651] = 651,
  [652] = 652,
  [653] = 653,
  [654] = 654,
  [655] = 655,
  [656] = 656,
  [657] = 657,
  [658] = 658,
  [659] = 659,
  [660] = 660,
  [661] = 661,
  [662] = 662,
  [663] = 663,
  [664] = 664,
  [665] = 665,
  [666] = 666,
  [667] = 667,
  [668] = 668,
  [669] = 669,
  [670] = 670,
  [671] = 671,
  [672] = 672,
  [673] = 673,
  [674] = 674,
  [675] = 675,
  [676] = 676,
  [677] = 677,
  [678] = 678,
  [679] = 679,
  [680] = 680,
  [681] = 681,
  [682] = 682,
  [683] = 683,
  [684] = 684,
  [685] = 685,
  [686] = 686,
  [687] = 687,
  [688] = 688,
  [689] = 689,
  [690] = 690,
  [691] = 691,
  [692] = 692,
  [693] = 693,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(920);
      if (lookahead == '"') ADVANCE(935);
      if (lookahead == '$') ADVANCE(17);
      if (lookahead == '\'') ADVANCE(1630);
      if (lookahead == '(') ADVANCE(1595);
      if (lookahead == ')') ADVANCE(1116);
      if (lookahead == ',') ADVANCE(1085);
      if (lookahead == '-') ADVANCE(916);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == '/') ADVANCE(1588);
      if (lookahead == ':') ADVANCE(1639);
      if (lookahead == '<') ADVANCE(2);
      if (lookahead == '=') ADVANCE(934);
      if (lookahead == '>') ADVANCE(922);
      if (lookahead == '?') ADVANCE(26);
      if (lookahead == '@') ADVANCE(1593);
      if (lookahead == 'B') ADVANCE(1185);
      if (lookahead == 'D') ADVANCE(1160);
      if (lookahead == 'F') ADVANCE(1172);
      if (lookahead == 'G') ADVANCE(1156);
      if (lookahead == 'H') ADVANCE(1157);
      if (lookahead == 'I') ADVANCE(1179);
      if (lookahead == 'L') ADVANCE(1182);
      if (lookahead == 'O') ADVANCE(1176);
      if (lookahead == 'P') ADVANCE(1148);
      if (lookahead == 'S') ADVANCE(1169);
      if (lookahead == '[') ADVANCE(1641);
      if (lookahead == ']') ADVANCE(1642);
      if (lookahead == 'a') ADVANCE(1246);
      if (lookahead == 'b') ADVANCE(1212);
      if (lookahead == 'c') ADVANCE(1297);
      if (lookahead == 'd') ADVANCE(1274);
      if (lookahead == 'e') ADVANCE(1366);
      if (lookahead == 'f') ADVANCE(1206);
      if (lookahead == 'g') ADVANCE(1275);
      if (lookahead == 'h') ADVANCE(1276);
      if (lookahead == 'i') ADVANCE(1264);
      if (lookahead == 'j') ADVANCE(1507);
      if (lookahead == 'k') ADVANCE(1277);
      if (lookahead == 'l') ADVANCE(1207);
      if (lookahead == 'm') ADVANCE(1214);
      if (lookahead == 'n') ADVANCE(1209);
      if (lookahead == 'o') ADVANCE(1462);
      if (lookahead == 'p') ADVANCE(1217);
      if (lookahead == 'r') ADVANCE(1278);
      if (lookahead == 's') ADVANCE(1252);
      if (lookahead == 't') ADVANCE(1434);
      if (lookahead == 'u') ADVANCE(1427);
      if (lookahead == 'v') ADVANCE(1215);
      if (lookahead == 'x') ADVANCE(1464);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1576);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '/') ADVANCE(218);
      if (lookahead == '?') ADVANCE(903);
      if (lookahead == 'a') ADVANCE(388);
      if (lookahead == 'c') ADVANCE(161);
      if (lookahead == 'd') ADVANCE(863);
      if (lookahead == 'e') ADVANCE(467);
      if (lookahead == 'f') ADVANCE(411);
      if (lookahead == 'h') ADVANCE(807);
      if (lookahead == 'i') ADVANCE(540);
      if (lookahead == 'k') ADVANCE(267);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == 'm') ADVANCE(160);
      if (lookahead == 'o') ADVANCE(527);
      if (lookahead == 'p') ADVANCE(702);
      if (lookahead == 'r') ADVANCE(268);
      if (lookahead == 's') ADVANCE(269);
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(935);
      if (lookahead == '$') ADVANCE(159);
      if (lookahead == ')') ADVANCE(1116);
      if (lookahead == '.') ADVANCE(1592);
      if (lookahead == '/') ADVANCE(1587);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '@') ADVANCE(1593);
      if (lookahead == 'b') ADVANCE(1213);
      if (lookahead == 'c') ADVANCE(1298);
      if (lookahead == 'd') ADVANCE(1432);
      if (lookahead == 'e') ADVANCE(1367);
      if (lookahead == 'f') ADVANCE(1229);
      if (lookahead == 'g') ADVANCE(1299);
      if (lookahead == 'i') ADVANCE(1264);
      if (lookahead == 'j') ADVANCE(1507);
      if (lookahead == 'k') ADVANCE(1277);
      if (lookahead == 'l') ADVANCE(1208);
      if (lookahead == 'n') ADVANCE(1210);
      if (lookahead == 'p') ADVANCE(1448);
      if (lookahead == 'r') ADVANCE(1433);
      if (lookahead == 's') ADVANCE(1522);
      if (lookahead == 't') ADVANCE(1497);
      if (lookahead == 'u') ADVANCE(1428);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(935);
      if (lookahead == '\'') ADVANCE(1630);
      if (lookahead == ')') ADVANCE(1116);
      if (lookahead == '.') ADVANCE(1591);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '>') ADVANCE(922);
      if (lookahead == '?') ADVANCE(26);
      if (lookahead == 'B') ADVANCE(131);
      if (lookahead == 'D') ADVANCE(98);
      if (lookahead == 'F') ADVANCE(118);
      if (lookahead == 'G') ADVANCE(94);
      if (lookahead == 'H') ADVANCE(97);
      if (lookahead == 'I') ADVANCE(124);
      if (lookahead == 'L') ADVANCE(127);
      if (lookahead == 'O') ADVANCE(121);
      if (lookahead == 'P') ADVANCE(70);
      if (lookahead == 'S') ADVANCE(114);
      if (lookahead == '[') ADVANCE(1641);
      if (lookahead == 'a') ADVANCE(241);
      if (lookahead == 'b') ADVANCE(483);
      if (lookahead == 'c') ADVANCE(612);
      if (lookahead == 'd') ADVANCE(282);
      if (lookahead == 'e') ADVANCE(532);
      if (lookahead == 'f') ADVANCE(169);
      if (lookahead == 'g') ADVANCE(325);
      if (lookahead == 'h') ADVANCE(342);
      if (lookahead == 'i') ADVANCE(249);
      if (lookahead == 'l') ADVANCE(297);
      if (lookahead == 'm') ADVANCE(165);
      if (lookahead == 'n') ADVANCE(195);
      if (lookahead == 'o') ADVANCE(658);
      if (lookahead == 'p') ADVANCE(183);
      if (lookahead == 'r') ADVANCE(283);
      if (lookahead == 's') ADVANCE(231);
      if (lookahead == 't') ADVANCE(595);
      if (lookahead == 'u') ADVANCE(714);
      if (lookahead == 'v') ADVANCE(181);
      if (lookahead == 'x') ADVANCE(671);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(880);
      if (lookahead == 'f') ADVANCE(878);
      if (lookahead == 'h') ADVANCE(363);
      if (lookahead == 's') ADVANCE(443);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(1582);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(1585);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(1115);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(1629);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(919);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(14);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(36);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(823);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(871);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(1640);
      if (lookahead == 'a') ADVANCE(902);
      if (lookahead == 'b') ADVANCE(593);
      if (lookahead == 'e') ADVANCE(526);
      if (lookahead == 'f') ADVANCE(862);
      if (lookahead == 'h') ADVANCE(266);
      if (lookahead == 't') ADVANCE(691);
      if (lookahead == 'u') ADVANCE(692);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(918);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(44);
      END_STATE();
    case 20:
      if (lookahead == '1') ADVANCE(18);
      if (lookahead == 'U') ADVANCE(155);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(1633);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(938);
      END_STATE();
    case 23:
      if (lookahead == '8') ADVANCE(7);
      END_STATE();
    case 24:
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1574);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(930);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(1579);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(929);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(1027);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(1025);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(984);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(1028);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(1036);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(927);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(1026);
      END_STATE();
    case 35:
      if (lookahead == '>') ADVANCE(925);
      END_STATE();
    case 36:
      if (lookahead == '>') ADVANCE(1586);
      END_STATE();
    case 37:
      if (lookahead == '>') ADVANCE(992);
      END_STATE();
    case 38:
      if (lookahead == '>') ADVANCE(1013);
      END_STATE();
    case 39:
      if (lookahead == '>') ADVANCE(1068);
      END_STATE();
    case 40:
      if (lookahead == '>') ADVANCE(988);
      END_STATE();
    case 41:
      if (lookahead == '>') ADVANCE(997);
      END_STATE();
    case 42:
      if (lookahead == '>') ADVANCE(1069);
      END_STATE();
    case 43:
      if (lookahead == '>') ADVANCE(1087);
      END_STATE();
    case 44:
      if (lookahead == '>') ADVANCE(924);
      END_STATE();
    case 45:
      if (lookahead == '>') ADVANCE(1088);
      END_STATE();
    case 46:
      if (lookahead == '>') ADVANCE(1034);
      END_STATE();
    case 47:
      if (lookahead == '>') ADVANCE(923);
      END_STATE();
    case 48:
      if (lookahead == '>') ADVANCE(995);
      END_STATE();
    case 49:
      if (lookahead == '>') ADVANCE(1084);
      END_STATE();
    case 50:
      if (lookahead == '>') ADVANCE(1074);
      END_STATE();
    case 51:
      if (lookahead == '>') ADVANCE(1086);
      END_STATE();
    case 52:
      if (lookahead == '>') ADVANCE(1018);
      END_STATE();
    case 53:
      if (lookahead == '>') ADVANCE(1075);
      END_STATE();
    case 54:
      if (lookahead == '>') ADVANCE(1089);
      END_STATE();
    case 55:
      if (lookahead == '>') ADVANCE(1096);
      END_STATE();
    case 56:
      if (lookahead == '>') ADVANCE(1078);
      END_STATE();
    case 57:
      if (lookahead == '>') ADVANCE(1082);
      END_STATE();
    case 58:
      if (lookahead == '>') ADVANCE(1079);
      END_STATE();
    case 59:
      if (lookahead == '>') ADVANCE(1083);
      END_STATE();
    case 60:
      if (lookahead == '>') ADVANCE(1076);
      END_STATE();
    case 61:
      if (lookahead == '>') ADVANCE(1077);
      END_STATE();
    case 62:
      if (lookahead == '>') ADVANCE(1070);
      END_STATE();
    case 63:
      if (lookahead == '>') ADVANCE(1080);
      END_STATE();
    case 64:
      if (lookahead == '>') ADVANCE(1016);
      END_STATE();
    case 65:
      if (lookahead == '>') ADVANCE(1071);
      END_STATE();
    case 66:
      if (lookahead == '>') ADVANCE(1081);
      END_STATE();
    case 67:
      if (lookahead == '>') ADVANCE(1072);
      END_STATE();
    case 68:
      if (lookahead == '>') ADVANCE(1073);
      END_STATE();
    case 69:
      if (lookahead == 'A') ADVANCE(87);
      END_STATE();
    case 70:
      if (lookahead == 'A') ADVANCE(154);
      if (lookahead == 'O') ADVANCE(144);
      if (lookahead == 'U') ADVANCE(150);
      END_STATE();
    case 71:
      if (lookahead == 'A') ADVANCE(123);
      END_STATE();
    case 72:
      if (lookahead == 'A') ADVANCE(242);
      END_STATE();
    case 73:
      if (lookahead == 'A') ADVANCE(152);
      END_STATE();
    case 74:
      if (lookahead == 'A') ADVANCE(244);
      END_STATE();
    case 75:
      if (lookahead == 'A') ADVANCE(243);
      END_STATE();
    case 76:
      if (lookahead == 'B') ADVANCE(274);
      END_STATE();
    case 77:
      if (lookahead == 'B') ADVANCE(119);
      END_STATE();
    case 78:
      if (lookahead == 'B') ADVANCE(377);
      END_STATE();
    case 79:
      if (lookahead == 'C') ADVANCE(113);
      END_STATE();
    case 80:
      if (lookahead == 'C') ADVANCE(652);
      END_STATE();
    case 81:
      if (lookahead == 'C') ADVANCE(621);
      END_STATE();
    case 82:
      if (lookahead == 'C') ADVANCE(622);
      END_STATE();
    case 83:
      if (lookahead == 'C') ADVANCE(609);
      END_STATE();
    case 84:
      if (lookahead == 'C') ADVANCE(628);
      END_STATE();
    case 85:
      if (lookahead == 'C') ADVANCE(650);
      END_STATE();
    case 86:
      if (lookahead == 'C') ADVANCE(653);
      END_STATE();
    case 87:
      if (lookahead == 'D') ADVANCE(1048);
      END_STATE();
    case 88:
      if (lookahead == 'D') ADVANCE(315);
      END_STATE();
    case 89:
      if (lookahead == 'D') ADVANCE(351);
      END_STATE();
    case 90:
      if (lookahead == 'D') ADVANCE(885);
      END_STATE();
    case 91:
      if (lookahead == 'D') ADVANCE(886);
      END_STATE();
    case 92:
      if (lookahead == 'D') ADVANCE(887);
      END_STATE();
    case 93:
      if (lookahead == 'D') ADVANCE(888);
      END_STATE();
    case 94:
      if (lookahead == 'E') ADVANCE(148);
      END_STATE();
    case 95:
      if (lookahead == 'E') ADVANCE(1046);
      END_STATE();
    case 96:
      if (lookahead == 'E') ADVANCE(969);
      END_STATE();
    case 97:
      if (lookahead == 'E') ADVANCE(69);
      END_STATE();
    case 98:
      if (lookahead == 'E') ADVANCE(120);
      if (lookahead == 'O') ADVANCE(158);
      END_STATE();
    case 99:
      if (lookahead == 'E') ADVANCE(112);
      END_STATE();
    case 100:
      if (lookahead == 'E') ADVANCE(139);
      END_STATE();
    case 101:
      if (lookahead == 'E') ADVANCE(71);
      END_STATE();
    case 102:
      if (lookahead == 'E') ADVANCE(157);
      END_STATE();
    case 103:
      if (lookahead == 'F') ADVANCE(11);
      END_STATE();
    case 104:
      if (lookahead == 'F') ADVANCE(170);
      END_STATE();
    case 105:
      if (lookahead == 'F') ADVANCE(610);
      END_STATE();
    case 106:
      if (lookahead == 'F') ADVANCE(194);
      END_STATE();
    case 107:
      if (lookahead == 'F') ADVANCE(208);
      END_STATE();
    case 108:
      if (lookahead == 'F') ADVANCE(210);
      END_STATE();
    case 109:
      if (lookahead == 'F') ADVANCE(654);
      END_STATE();
    case 110:
      if (lookahead == 'G') ADVANCE(973);
      END_STATE();
    case 111:
      if (lookahead == 'G') ADVANCE(963);
      END_STATE();
    case 112:
      if (lookahead == 'G') ADVANCE(100);
      END_STATE();
    case 113:
      if (lookahead == 'H') ADVANCE(1052);
      END_STATE();
    case 114:
      if (lookahead == 'H') ADVANCE(128);
      if (lookahead == 'T') ADVANCE(140);
      END_STATE();
    case 115:
      if (lookahead == 'I') ADVANCE(126);
      END_STATE();
    case 116:
      if (lookahead == 'I') ADVANCE(132);
      END_STATE();
    case 117:
      if (lookahead == 'L') ADVANCE(101);
      END_STATE();
    case 118:
      if (lookahead == 'L') ADVANCE(129);
      END_STATE();
    case 119:
      if (lookahead == 'L') ADVANCE(96);
      END_STATE();
    case 120:
      if (lookahead == 'L') ADVANCE(102);
      END_STATE();
    case 121:
      if (lookahead == 'M') ADVANCE(977);
      if (lookahead == 'P') ADVANCE(149);
      END_STATE();
    case 122:
      if (lookahead == 'N') ADVANCE(110);
      END_STATE();
    case 123:
      if (lookahead == 'N') ADVANCE(967);
      END_STATE();
    case 124:
      if (lookahead == 'N') ADVANCE(156);
      END_STATE();
    case 125:
      if (lookahead == 'N') ADVANCE(142);
      END_STATE();
    case 126:
      if (lookahead == 'N') ADVANCE(111);
      END_STATE();
    case 127:
      if (lookahead == 'O') ADVANCE(122);
      END_STATE();
    case 128:
      if (lookahead == 'O') ADVANCE(141);
      END_STATE();
    case 129:
      if (lookahead == 'O') ADVANCE(73);
      END_STATE();
    case 130:
      if (lookahead == 'O') ADVANCE(117);
      END_STATE();
    case 131:
      if (lookahead == 'O') ADVANCE(130);
      END_STATE();
    case 132:
      if (lookahead == 'O') ADVANCE(125);
      END_STATE();
    case 133:
      if (lookahead == 'O') ADVANCE(541);
      END_STATE();
    case 134:
      if (lookahead == 'O') ADVANCE(530);
      END_STATE();
    case 135:
      if (lookahead == 'O') ADVANCE(586);
      END_STATE();
    case 136:
      if (lookahead == 'P') ADVANCE(203);
      END_STATE();
    case 137:
      if (lookahead == 'P') ADVANCE(174);
      END_STATE();
    case 138:
      if (lookahead == 'P') ADVANCE(186);
      END_STATE();
    case 139:
      if (lookahead == 'R') ADVANCE(965);
      END_STATE();
    case 140:
      if (lookahead == 'R') ADVANCE(115);
      END_STATE();
    case 141:
      if (lookahead == 'R') ADVANCE(153);
      END_STATE();
    case 142:
      if (lookahead == 'S') ADVANCE(1050);
      END_STATE();
    case 143:
      if (lookahead == 'S') ADVANCE(883);
      END_STATE();
    case 144:
      if (lookahead == 'S') ADVANCE(151);
      END_STATE();
    case 145:
      if (lookahead == 'S') ADVANCE(889);
      END_STATE();
    case 146:
      if (lookahead == 'S') ADVANCE(890);
      END_STATE();
    case 147:
      if (lookahead == 'S') ADVANCE(891);
      END_STATE();
    case 148:
      if (lookahead == 'T') ADVANCE(1040);
      END_STATE();
    case 149:
      if (lookahead == 'T') ADVANCE(116);
      END_STATE();
    case 150:
      if (lookahead == 'T') ADVANCE(1044);
      END_STATE();
    case 151:
      if (lookahead == 'T') ADVANCE(1042);
      END_STATE();
    case 152:
      if (lookahead == 'T') ADVANCE(971);
      END_STATE();
    case 153:
      if (lookahead == 'T') ADVANCE(975);
      END_STATE();
    case 154:
      if (lookahead == 'T') ADVANCE(79);
      END_STATE();
    case 155:
      if (lookahead == 'T') ADVANCE(103);
      END_STATE();
    case 156:
      if (lookahead == 'T') ADVANCE(99);
      END_STATE();
    case 157:
      if (lookahead == 'T') ADVANCE(95);
      END_STATE();
    case 158:
      if (lookahead == 'U') ADVANCE(77);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(902);
      if (lookahead == 'b') ADVANCE(593);
      if (lookahead == 'e') ADVANCE(526);
      if (lookahead == 'f') ADVANCE(862);
      if (lookahead == 'h') ADVANCE(266);
      if (lookahead == 't') ADVANCE(691);
      if (lookahead == 'u') ADVANCE(692);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(693);
      if (lookahead == 'e') ADVANCE(760);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(479);
      if (lookahead == 'o') ADVANCE(511);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(382);
      if (lookahead == 'b') ADVANCE(364);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(904);
      if (lookahead == 'e') ADVANCE(815);
      if (lookahead == 'i') ADVANCE(533);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(258);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(914);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(227);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(868);
      if (lookahead == 'i') ADVANCE(493);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(232);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(705);
      if (lookahead == 'h') ADVANCE(299);
      if (lookahead == 'i') ADVANCE(514);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(423);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(476);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(913);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(250);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(229);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(680);
      if (lookahead == 'u') ADVANCE(735);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(471);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(253);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(672);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(498);
      if (lookahead == 'e') ADVANCE(741);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(474);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(799);
      if (lookahead == 'o') ADVANCE(767);
      if (lookahead == 'r') ADVANCE(354);
      if (lookahead == 'u') ADVANCE(800);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(819);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(556);
      END_STATE();
    case 186:
      if (lookahead == 'a') ADVANCE(820);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(716);
      END_STATE();
    case 188:
      if (lookahead == 'a') ADVANCE(894);
      END_STATE();
    case 189:
      if (lookahead == 'a') ADVANCE(480);
      if (lookahead == 'o') ADVANCE(524);
      END_STATE();
    case 190:
      if (lookahead == 'a') ADVANCE(515);
      END_STATE();
    case 191:
      if (lookahead == 'a') ADVANCE(813);
      END_STATE();
    case 192:
      if (lookahead == 'a') ADVANCE(915);
      END_STATE();
    case 193:
      if (lookahead == 'a') ADVANCE(731);
      if (lookahead == 'h') ADVANCE(301);
      if (lookahead == 'i') ADVANCE(519);
      END_STATE();
    case 194:
      if (lookahead == 'a') ADVANCE(424);
      END_STATE();
    case 195:
      if (lookahead == 'a') ADVANCE(516);
      if (lookahead == 'e') ADVANCE(898);
      END_STATE();
    case 196:
      if (lookahead == 'a') ADVANCE(828);
      END_STATE();
    case 197:
      if (lookahead == 'a') ADVANCE(394);
      END_STATE();
    case 198:
      if (lookahead == 'a') ADVANCE(236);
      END_STATE();
    case 199:
      if (lookahead == 'a') ADVANCE(829);
      END_STATE();
    case 200:
      if (lookahead == 'a') ADVANCE(830);
      END_STATE();
    case 201:
      if (lookahead == 'a') ADVANCE(831);
      END_STATE();
    case 202:
      if (lookahead == 'a') ADVANCE(833);
      END_STATE();
    case 203:
      if (lookahead == 'a') ADVANCE(729);
      END_STATE();
    case 204:
      if (lookahead == 'a') ADVANCE(836);
      END_STATE();
    case 205:
      if (lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 206:
      if (lookahead == 'a') ADVANCE(261);
      END_STATE();
    case 207:
      if (lookahead == 'a') ADVANCE(877);
      END_STATE();
    case 208:
      if (lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 209:
      if (lookahead == 'a') ADVANCE(852);
      END_STATE();
    case 210:
      if (lookahead == 'a') ADVANCE(457);
      END_STATE();
    case 211:
      if (lookahead == 'a') ADVANCE(850);
      END_STATE();
    case 212:
      if (lookahead == 'a') ADVANCE(856);
      END_STATE();
    case 213:
      if (lookahead == 'a') ADVANCE(857);
      END_STATE();
    case 214:
      if (lookahead == 'a') ADVANCE(858);
      END_STATE();
    case 215:
      if (lookahead == 'a') ADVANCE(859);
      END_STATE();
    case 216:
      if (lookahead == 'a') ADVANCE(456);
      END_STATE();
    case 217:
      if (lookahead == 'a') ADVANCE(900);
      END_STATE();
    case 218:
      if (lookahead == 'a') ADVANCE(399);
      if (lookahead == 'c') ADVANCE(189);
      if (lookahead == 'd') ADVANCE(884);
      if (lookahead == 'e') ADVANCE(495);
      if (lookahead == 'f') ADVANCE(442);
      if (lookahead == 'h') ADVANCE(839);
      if (lookahead == 'i') ADVANCE(592);
      if (lookahead == 'l') ADVANCE(597);
      if (lookahead == 'm') ADVANCE(220);
      if (lookahead == 'o') ADVANCE(591);
      if (lookahead == 'p') ADVANCE(733);
      if (lookahead == 'r') ADVANCE(359);
      if (lookahead == 's') ADVANCE(344);
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 219:
      if (lookahead == 'a') ADVANCE(507);
      END_STATE();
    case 220:
      if (lookahead == 'a') ADVANCE(753);
      END_STATE();
    case 221:
      if (lookahead == 'b') ADVANCE(491);
      END_STATE();
    case 222:
      if (lookahead == 'b') ADVANCE(492);
      END_STATE();
    case 223:
      if (lookahead == 'b') ADVANCE(328);
      END_STATE();
    case 224:
      if (lookahead == 'c') ADVANCE(1637);
      END_STATE();
    case 225:
      if (lookahead == 'c') ADVANCE(401);
      END_STATE();
    case 226:
      if (lookahead == 'c') ADVANCE(465);
      END_STATE();
    case 227:
      if (lookahead == 'c') ADVANCE(408);
      END_STATE();
    case 228:
      if (lookahead == 'c') ADVANCE(404);
      if (lookahead == 't') ADVANCE(336);
      END_STATE();
    case 229:
      if (lookahead == 'c') ADVANCE(406);
      END_STATE();
    case 230:
      if (lookahead == 'c') ADVANCE(481);
      END_STATE();
    case 231:
      if (lookahead == 'c') ADVANCE(632);
      if (lookahead == 'e') ADVANCE(690);
      if (lookahead == 'o') ADVANCE(177);
      if (lookahead == 'y') ADVANCE(561);
      END_STATE();
    case 232:
      if (lookahead == 'c') ADVANCE(843);
      END_STATE();
    case 233:
      if (lookahead == 'c') ADVANCE(187);
      END_STATE();
    case 234:
      if (lookahead == 'c') ADVANCE(272);
      END_STATE();
    case 235:
      if (lookahead == 'c') ADVANCE(329);
      END_STATE();
    case 236:
      if (lookahead == 'c') ADVANCE(278);
      END_STATE();
    case 237:
      if (lookahead == 'c') ADVANCE(291);
      END_STATE();
    case 238:
      if (lookahead == 'c') ADVANCE(293);
      if (lookahead == 't') ADVANCE(433);
      END_STATE();
    case 239:
      if (lookahead == 'c') ADVANCE(606);
      if (lookahead == 'd') ADVANCE(679);
      if (lookahead == 'v') ADVANCE(951);
      END_STATE();
    case 240:
      if (lookahead == 'c') ADVANCE(844);
      END_STATE();
    case 241:
      if (lookahead == 'c') ADVANCE(849);
      if (lookahead == 't') ADVANCE(825);
      if (lookahead == 'x') ADVANCE(421);
      END_STATE();
    case 242:
      if (lookahead == 'c') ADVANCE(854);
      END_STATE();
    case 243:
      if (lookahead == 'c') ADVANCE(855);
      END_STATE();
    case 244:
      if (lookahead == 'c') ADVANCE(851);
      END_STATE();
    case 245:
      if (lookahead == 'd') ADVANCE(926);
      END_STATE();
    case 246:
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == 's') ADVANCE(271);
      END_STATE();
    case 247:
      if (lookahead == 'd') ADVANCE(133);
      END_STATE();
    case 248:
      if (lookahead == 'd') ADVANCE(1607);
      END_STATE();
    case 249:
      if (lookahead == 'd') ADVANCE(1119);
      END_STATE();
    case 250:
      if (lookahead == 'd') ADVANCE(1062);
      END_STATE();
    case 251:
      if (lookahead == 'd') ADVANCE(1038);
      END_STATE();
    case 252:
      if (lookahead == 'd') ADVANCE(1092);
      END_STATE();
    case 253:
      if (lookahead == 'd') ADVANCE(1002);
      END_STATE();
    case 254:
      if (lookahead == 'd') ADVANCE(907);
      END_STATE();
    case 255:
      if (lookahead == 'd') ADVANCE(660);
      END_STATE();
    case 256:
      if (lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 257:
      if (lookahead == 'd') ADVANCE(313);
      END_STATE();
    case 258:
      if (lookahead == 'd') ADVANCE(316);
      END_STATE();
    case 259:
      if (lookahead == 'd') ADVANCE(350);
      END_STATE();
    case 260:
      if (lookahead == 'd') ADVANCE(429);
      END_STATE();
    case 261:
      if (lookahead == 'd') ADVANCE(339);
      END_STATE();
    case 262:
      if (lookahead == 'd') ADVANCE(432);
      END_STATE();
    case 263:
      if (lookahead == 'd') ADVANCE(459);
      END_STATE();
    case 264:
      if (lookahead == 'd') ADVANCE(677);
      END_STATE();
    case 265:
      if (lookahead == 'd') ADVANCE(135);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(906);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(773);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(544);
      if (lookahead == 'u') ADVANCE(759);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(996);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(921);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(994);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(1610);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(1017);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(1037);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(1612);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(1622);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(1603);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(1606);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(379);
      if (lookahead == 'i') ADVANCE(766);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(953);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(1117);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(961);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(932);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(1102);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(1060);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(959);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(1029);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(947);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(986);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(1125);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(897);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(895);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(905);
      if (lookahead == 'i') ADVANCE(770);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(543);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(552);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(794);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(821);
      END_STATE();
    case 306:
      if (lookahead == 'e') ADVANCE(755);
      END_STATE();
    case 307:
      if (lookahead == 'e') ADVANCE(546);
      END_STATE();
    case 308:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 309:
      if (lookahead == 'e') ADVANCE(509);
      END_STATE();
    case 310:
      if (lookahead == 'e') ADVANCE(598);
      END_STATE();
    case 311:
      if (lookahead == 'e') ADVANCE(547);
      END_STATE();
    case 312:
      if (lookahead == 'e') ADVANCE(504);
      END_STATE();
    case 313:
      if (lookahead == 'e') ADVANCE(768);
      END_STATE();
    case 314:
      if (lookahead == 'e') ADVANCE(706);
      END_STATE();
    case 315:
      if (lookahead == 'e') ADVANCE(482);
      END_STATE();
    case 316:
      if (lookahead == 'e') ADVANCE(695);
      END_STATE();
    case 317:
      if (lookahead == 'e') ADVANCE(548);
      END_STATE();
    case 318:
      if (lookahead == 'e') ADVANCE(696);
      END_STATE();
    case 319:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 320:
      if (lookahead == 'e') ADVANCE(555);
      END_STATE();
    case 321:
      if (lookahead == 'e') ADVANCE(707);
      END_STATE();
    case 322:
      if (lookahead == 'e') ADVANCE(557);
      END_STATE();
    case 323:
      if (lookahead == 'e') ADVANCE(715);
      END_STATE();
    case 324:
      if (lookahead == 'e') ADVANCE(711);
      END_STATE();
    case 325:
      if (lookahead == 'e') ADVANCE(798);
      if (lookahead == 'r') ADVANCE(601);
      END_STATE();
    case 326:
      if (lookahead == 'e') ADVANCE(473);
      END_STATE();
    case 327:
      if (lookahead == 'e') ADVANCE(579);
      END_STATE();
    case 328:
      if (lookahead == 'e') ADVANCE(698);
      END_STATE();
    case 329:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 330:
      if (lookahead == 'e') ADVANCE(718);
      END_STATE();
    case 331:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 332:
      if (lookahead == 'e') ADVANCE(699);
      END_STATE();
    case 333:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 334:
      if (lookahead == 'e') ADVANCE(542);
      END_STATE();
    case 335:
      if (lookahead == 'e') ADVANCE(700);
      END_STATE();
    case 336:
      if (lookahead == 'e') ADVANCE(722);
      END_STATE();
    case 337:
      if (lookahead == 'e') ADVANCE(734);
      END_STATE();
    case 338:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 339:
      if (lookahead == 'e') ADVANCE(717);
      END_STATE();
    case 340:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 341:
      if (lookahead == 'e') ADVANCE(567);
      END_STATE();
    case 342:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 343:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 344:
      if (lookahead == 'e') ADVANCE(545);
      if (lookahead == 'u') ADVANCE(792);
      END_STATE();
    case 345:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 346:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 347:
      if (lookahead == 'e') ADVANCE(763);
      END_STATE();
    case 348:
      if (lookahead == 'e') ADVANCE(517);
      END_STATE();
    case 349:
      if (lookahead == 'e') ADVANCE(578);
      END_STATE();
    case 350:
      if (lookahead == 'e') ADVANCE(769);
      END_STATE();
    case 351:
      if (lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 352:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 353:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 354:
      if (lookahead == 'e') ADVANCE(778);
      END_STATE();
    case 355:
      if (lookahead == 'e') ADVANCE(847);
      END_STATE();
    case 356:
      if (lookahead == 'e') ADVANCE(834);
      END_STATE();
    case 357:
      if (lookahead == 'e') ADVANCE(835);
      END_STATE();
    case 358:
      if (lookahead == 'e') ADVANCE(838);
      END_STATE();
    case 359:
      if (lookahead == 'e') ADVANCE(776);
      END_STATE();
    case 360:
      if (lookahead == 'e') ADVANCE(736);
      if (lookahead == 't') ADVANCE(437);
      END_STATE();
    case 361:
      if (lookahead == 'e') ADVANCE(647);
      END_STATE();
    case 362:
      if (lookahead == 'e') ADVANCE(737);
      END_STATE();
    case 363:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 364:
      if (lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 365:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 366:
      if (lookahead == 'e') ADVANCE(781);
      END_STATE();
    case 367:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 368:
      if (lookahead == 'e') ADVANCE(853);
      END_STATE();
    case 369:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 370:
      if (lookahead == 'e') ADVANCE(590);
      END_STATE();
    case 371:
      if (lookahead == 'e') ADVANCE(587);
      END_STATE();
    case 372:
      if (lookahead == 'e') ADVANCE(787);
      END_STATE();
    case 373:
      if (lookahead == 'e') ADVANCE(588);
      END_STATE();
    case 374:
      if (lookahead == 'e') ADVANCE(589);
      END_STATE();
    case 375:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 376:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 377:
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 378:
      if (lookahead == 'e') ADVANCE(793);
      END_STATE();
    case 379:
      if (lookahead == 'f') ADVANCE(207);
      if (lookahead == 'l') ADVANCE(358);
      END_STATE();
    case 380:
      if (lookahead == 'f') ADVANCE(633);
      END_STATE();
    case 381:
      if (lookahead == 'f') ADVANCE(635);
      END_STATE();
    case 382:
      if (lookahead == 'f') ADVANCE(846);
      END_STATE();
    case 383:
      if (lookahead == 'f') ADVANCE(655);
      END_STATE();
    case 384:
      if (lookahead == 'g') ADVANCE(928);
      END_STATE();
    case 385:
      if (lookahead == 'g') ADVANCE(1098);
      END_STATE();
    case 386:
      if (lookahead == 'g') ADVANCE(1583);
      END_STATE();
    case 387:
      if (lookahead == 'g') ADVANCE(27);
      END_STATE();
    case 388:
      if (lookahead == 'g') ADVANCE(390);
      END_STATE();
    case 389:
      if (lookahead == 'g') ADVANCE(298);
      if (lookahead == 'm') ADVANCE(629);
      END_STATE();
    case 390:
      if (lookahead == 'g') ADVANCE(710);
      END_STATE();
    case 391:
      if (lookahead == 'g') ADVANCE(812);
      END_STATE();
    case 392:
      if (lookahead == 'g') ADVANCE(302);
      END_STATE();
    case 393:
      if (lookahead == 'g') ADVANCE(305);
      END_STATE();
    case 394:
      if (lookahead == 'g') ADVANCE(343);
      END_STATE();
    case 395:
      if (lookahead == 'g') ADVANCE(720);
      if (lookahead == 'p') ADVANCE(321);
      END_STATE();
    case 396:
      if (lookahead == 'g') ADVANCE(200);
      END_STATE();
    case 397:
      if (lookahead == 'g') ADVANCE(202);
      END_STATE();
    case 398:
      if (lookahead == 'g') ADVANCE(742);
      END_STATE();
    case 399:
      if (lookahead == 'g') ADVANCE(398);
      END_STATE();
    case 400:
      if (lookahead == 'g') ADVANCE(750);
      END_STATE();
    case 401:
      if (lookahead == 'h') ADVANCE(985);
      END_STATE();
    case 402:
      if (lookahead == 'h') ADVANCE(1617);
      END_STATE();
    case 403:
      if (lookahead == 'h') ADVANCE(1619);
      END_STATE();
    case 404:
      if (lookahead == 'h') ADVANCE(1066);
      END_STATE();
    case 405:
      if (lookahead == 'h') ADVANCE(990);
      END_STATE();
    case 406:
      if (lookahead == 'h') ADVANCE(138);
      END_STATE();
    case 407:
      if (lookahead == 'h') ADVANCE(1004);
      END_STATE();
    case 408:
      if (lookahead == 'h') ADVANCE(40);
      END_STATE();
    case 409:
      if (lookahead == 'h') ADVANCE(608);
      END_STATE();
    case 410:
      if (lookahead == 'i') ADVANCE(1611);
      END_STATE();
    case 411:
      if (lookahead == 'i') ADVANCE(477);
      if (lookahead == 'o') ADVANCE(730);
      END_STATE();
    case 412:
      if (lookahead == 'i') ADVANCE(810);
      END_STATE();
    case 413:
      if (lookahead == 'i') ADVANCE(512);
      END_STATE();
    case 414:
      if (lookahead == 'i') ADVANCE(754);
      END_STATE();
    case 415:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 416:
      if (lookahead == 'i') ADVANCE(248);
      END_STATE();
    case 417:
      if (lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 418:
      if (lookahead == 'i') ADVANCE(809);
      END_STATE();
    case 419:
      if (lookahead == 'i') ADVANCE(623);
      END_STATE();
    case 420:
      if (lookahead == 'i') ADVANCE(550);
      END_STATE();
    case 421:
      if (lookahead == 'i') ADVANCE(758);
      END_STATE();
    case 422:
      if (lookahead == 'i') ADVANCE(583);
      END_STATE();
    case 423:
      if (lookahead == 'i') ADVANCE(484);
      END_STATE();
    case 424:
      if (lookahead == 'i') ADVANCE(497);
      END_STATE();
    case 425:
      if (lookahead == 'i') ADVANCE(818);
      END_STATE();
    case 426:
      if (lookahead == 'i') ADVANCE(306);
      if (lookahead == 'y') ADVANCE(88);
      END_STATE();
    case 427:
      if (lookahead == 'i') ADVANCE(581);
      END_STATE();
    case 428:
      if (lookahead == 'i') ADVANCE(549);
      END_STATE();
    case 429:
      if (lookahead == 'i') ADVANCE(553);
      END_STATE();
    case 430:
      if (lookahead == 'i') ADVANCE(563);
      END_STATE();
    case 431:
      if (lookahead == 'i') ADVANCE(320);
      END_STATE();
    case 432:
      if (lookahead == 'i') ADVANCE(848);
      END_STATE();
    case 433:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 434:
      if (lookahead == 'i') ADVANCE(625);
      END_STATE();
    case 435:
      if (lookahead == 'i') ADVANCE(611);
      END_STATE();
    case 436:
      if (lookahead == 'i') ADVANCE(614);
      END_STATE();
    case 437:
      if (lookahead == 'i') ADVANCE(615);
      END_STATE();
    case 438:
      if (lookahead == 'i') ADVANCE(616);
      END_STATE();
    case 439:
      if (lookahead == 'i') ADVANCE(618);
      END_STATE();
    case 440:
      if (lookahead == 'i') ADVANCE(619);
      END_STATE();
    case 441:
      if (lookahead == 'i') ADVANCE(620);
      END_STATE();
    case 442:
      if (lookahead == 'i') ADVANCE(499);
      if (lookahead == 'o') ADVANCE(732);
      END_STATE();
    case 443:
      if (lookahead == 'i') ADVANCE(518);
      END_STATE();
    case 444:
      if (lookahead == 'i') ADVANCE(630);
      END_STATE();
    case 445:
      if (lookahead == 'i') ADVANCE(631);
      END_STATE();
    case 446:
      if (lookahead == 'i') ADVANCE(634);
      END_STATE();
    case 447:
      if (lookahead == 'i') ADVANCE(636);
      END_STATE();
    case 448:
      if (lookahead == 'i') ADVANCE(638);
      END_STATE();
    case 449:
      if (lookahead == 'i') ADVANCE(639);
      END_STATE();
    case 450:
      if (lookahead == 'i') ADVANCE(640);
      END_STATE();
    case 451:
      if (lookahead == 'i') ADVANCE(641);
      END_STATE();
    case 452:
      if (lookahead == 'i') ADVANCE(642);
      END_STATE();
    case 453:
      if (lookahead == 'i') ADVANCE(643);
      END_STATE();
    case 454:
      if (lookahead == 'i') ADVANCE(644);
      END_STATE();
    case 455:
      if (lookahead == 'i') ADVANCE(645);
      END_STATE();
    case 456:
      if (lookahead == 'i') ADVANCE(500);
      END_STATE();
    case 457:
      if (lookahead == 'i') ADVANCE(502);
      END_STATE();
    case 458:
      if (lookahead == 'i') ADVANCE(651);
      END_STATE();
    case 459:
      if (lookahead == 'i') ADVANCE(860);
      END_STATE();
    case 460:
      if (lookahead == 'i') ADVANCE(219);
      END_STATE();
    case 461:
      if (lookahead == 'i') ADVANCE(525);
      END_STATE();
    case 462:
      if (lookahead == 'i') ADVANCE(861);
      END_STATE();
    case 463:
      if (lookahead == 'i') ADVANCE(378);
      if (lookahead == 'y') ADVANCE(89);
      END_STATE();
    case 464:
      if (lookahead == 'k') ADVANCE(105);
      END_STATE();
    case 465:
      if (lookahead == 'k') ADVANCE(428);
      END_STATE();
    case 466:
      if (lookahead == 'k') ADVANCE(109);
      END_STATE();
    case 467:
      if (lookahead == 'l') ADVANCE(762);
      if (lookahead == 'n') ADVANCE(255);
      if (lookahead == 'r') ADVANCE(704);
      END_STATE();
    case 468:
      if (lookahead == 'l') ADVANCE(1636);
      END_STATE();
    case 469:
      if (lookahead == 'l') ADVANCE(1578);
      END_STATE();
    case 470:
      if (lookahead == 'l') ADVANCE(983);
      END_STATE();
    case 471:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 472:
      if (lookahead == 'l') ADVANCE(1626);
      END_STATE();
    case 473:
      if (lookahead == 'l') ADVANCE(1121);
      END_STATE();
    case 474:
      if (lookahead == 'l') ADVANCE(998);
      END_STATE();
    case 475:
      if (lookahead == 'l') ADVANCE(1123);
      END_STATE();
    case 476:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 477:
      if (lookahead == 'l') ADVANCE(841);
      END_STATE();
    case 478:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 479:
      if (lookahead == 'l') ADVANCE(470);
      END_STATE();
    case 480:
      if (lookahead == 'l') ADVANCE(478);
      END_STATE();
    case 481:
      if (lookahead == 'l') ADVANCE(431);
      END_STATE();
    case 482:
      if (lookahead == 'l') ADVANCE(167);
      END_STATE();
    case 483:
      if (lookahead == 'l') ADVANCE(604);
      END_STATE();
    case 484:
      if (lookahead == 'l') ADVANCE(164);
      END_STATE();
    case 485:
      if (lookahead == 'l') ADVANCE(627);
      END_STATE();
    case 486:
      if (lookahead == 'l') ADVANCE(355);
      END_STATE();
    case 487:
      if (lookahead == 'l') ADVANCE(475);
      END_STATE();
    case 488:
      if (lookahead == 'l') ADVANCE(802);
      END_STATE();
    case 489:
      if (lookahead == 'l') ADVANCE(317);
      END_STATE();
    case 490:
      if (lookahead == 'l') ADVANCE(803);
      END_STATE();
    case 491:
      if (lookahead == 'l') ADVANCE(280);
      END_STATE();
    case 492:
      if (lookahead == 'l') ADVANCE(281);
      END_STATE();
    case 493:
      if (lookahead == 'l') ADVANCE(284);
      END_STATE();
    case 494:
      if (lookahead == 'l') ADVANCE(294);
      END_STATE();
    case 495:
      if (lookahead == 'l') ADVANCE(764);
      if (lookahead == 'n') ADVANCE(264);
      if (lookahead == 'r') ADVANCE(744);
      END_STATE();
    case 496:
      if (lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 497:
      if (lookahead == 'l') ADVANCE(881);
      END_STATE();
    case 498:
      if (lookahead == 'l') ADVANCE(873);
      END_STATE();
    case 499:
      if (lookahead == 'l') ADVANCE(845);
      END_STATE();
    case 500:
      if (lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 501:
      if (lookahead == 'l') ADVANCE(356);
      END_STATE();
    case 502:
      if (lookahead == 'l') ADVANCE(882);
      END_STATE();
    case 503:
      if (lookahead == 'l') ADVANCE(357);
      END_STATE();
    case 504:
      if (lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 505:
      if (lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 506:
      if (lookahead == 'l') ADVANCE(368);
      END_STATE();
    case 507:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 508:
      if (lookahead == 'm') ADVANCE(223);
      END_STATE();
    case 509:
      if (lookahead == 'm') ADVANCE(949);
      END_STATE();
    case 510:
      if (lookahead == 'm') ADVANCE(1127);
      END_STATE();
    case 511:
      if (lookahead == 'm') ADVANCE(663);
      if (lookahead == 'r') ADVANCE(713);
      END_STATE();
    case 512:
      if (lookahead == 'm') ADVANCE(864);
      END_STATE();
    case 513:
      if (lookahead == 'm') ADVANCE(469);
      END_STATE();
    case 514:
      if (lookahead == 'm') ADVANCE(310);
      END_STATE();
    case 515:
      if (lookahead == 'm') ADVANCE(275);
      END_STATE();
    case 516:
      if (lookahead == 'm') ADVANCE(285);
      END_STATE();
    case 517:
      if (lookahead == 'm') ADVANCE(682);
      END_STATE();
    case 518:
      if (lookahead == 'm') ADVANCE(675);
      END_STATE();
    case 519:
      if (lookahead == 'm') ADVANCE(361);
      END_STATE();
    case 520:
      if (lookahead == 'm') ADVANCE(681);
      END_STATE();
    case 521:
      if (lookahead == 'm') ADVANCE(683);
      END_STATE();
    case 522:
      if (lookahead == 'm') ADVANCE(91);
      END_STATE();
    case 523:
      if (lookahead == 'm') ADVANCE(93);
      END_STATE();
    case 524:
      if (lookahead == 'm') ADVANCE(689);
      END_STATE();
    case 525:
      if (lookahead == 'm') ADVANCE(892);
      END_STATE();
    case 526:
      if (lookahead == 'n') ADVANCE(893);
      END_STATE();
    case 527:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 528:
      if (lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 529:
      if (lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 530:
      if (lookahead == 'n') ADVANCE(1014);
      END_STATE();
    case 531:
      if (lookahead == 'n') ADVANCE(1015);
      END_STATE();
    case 532:
      if (lookahead == 'n') ADVANCE(239);
      if (lookahead == 'x') ADVANCE(684);
      END_STATE();
    case 533:
      if (lookahead == 'n') ADVANCE(1020);
      END_STATE();
    case 534:
      if (lookahead == 'n') ADVANCE(955);
      END_STATE();
    case 535:
      if (lookahead == 'n') ADVANCE(979);
      END_STATE();
    case 536:
      if (lookahead == 'n') ADVANCE(1580);
      END_STATE();
    case 537:
      if (lookahead == 'n') ADVANCE(941);
      END_STATE();
    case 538:
      if (lookahead == 'n') ADVANCE(1113);
      END_STATE();
    case 539:
      if (lookahead == 'n') ADVANCE(1009);
      END_STATE();
    case 540:
      if (lookahead == 'n') ADVANCE(412);
      if (lookahead == 't') ADVANCE(314);
      END_STATE();
    case 541:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 542:
      if (lookahead == 'n') ADVANCE(238);
      END_STATE();
    case 543:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 544:
      if (lookahead == 'n') ADVANCE(245);
      if (lookahead == 'q') ADVANCE(866);
      END_STATE();
    case 545:
      if (lookahead == 'n') ADVANCE(256);
      if (lookahead == 'q') ADVANCE(876);
      END_STATE();
    case 546:
      if (lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 547:
      if (lookahead == 'n') ADVANCE(247);
      END_STATE();
    case 548:
      if (lookahead == 'n') ADVANCE(391);
      END_STATE();
    case 549:
      if (lookahead == 'n') ADVANCE(385);
      END_STATE();
    case 550:
      if (lookahead == 'n') ADVANCE(795);
      END_STATE();
    case 551:
      if (lookahead == 'n') ADVANCE(262);
      END_STATE();
    case 552:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 553:
      if (lookahead == 'n') ADVANCE(386);
      END_STATE();
    case 554:
      if (lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 555:
      if (lookahead == 'n') ADVANCE(796);
      END_STATE();
    case 556:
      if (lookahead == 'n') ADVANCE(777);
      END_STATE();
    case 557:
      if (lookahead == 'n') ADVANCE(840);
      END_STATE();
    case 558:
      if (lookahead == 'n') ADVANCE(756);
      END_STATE();
    case 559:
      if (lookahead == 'n') ADVANCE(797);
      END_STATE();
    case 560:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 561:
      if (lookahead == 'n') ADVANCE(180);
      if (lookahead == 's') ADVANCE(837);
      END_STATE();
    case 562:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 563:
      if (lookahead == 'n') ADVANCE(804);
      END_STATE();
    case 564:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 565:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 566:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 567:
      if (lookahead == 'n') ADVANCE(806);
      END_STATE();
    case 568:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 569:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 570:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 571:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 572:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 573:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 574:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 575:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 576:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 577:
      if (lookahead == 'n') ADVANCE(865);
      END_STATE();
    case 578:
      if (lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 579:
      if (lookahead == 'n') ADVANCE(782);
      END_STATE();
    case 580:
      if (lookahead == 'n') ADVANCE(788);
      END_STATE();
    case 581:
      if (lookahead == 'n') ADVANCE(874);
      END_STATE();
    case 582:
      if (lookahead == 'n') ADVANCE(842);
      END_STATE();
    case 583:
      if (lookahead == 'n') ADVANCE(827);
      END_STATE();
    case 584:
      if (lookahead == 'n') ADVANCE(263);
      END_STATE();
    case 585:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 586:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 587:
      if (lookahead == 'n') ADVANCE(783);
      END_STATE();
    case 588:
      if (lookahead == 'n') ADVANCE(784);
      END_STATE();
    case 589:
      if (lookahead == 'n') ADVANCE(785);
      END_STATE();
    case 590:
      if (lookahead == 'n') ADVANCE(265);
      END_STATE();
    case 591:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 592:
      if (lookahead == 'n') ADVANCE(462);
      if (lookahead == 't') ADVANCE(362);
      END_STATE();
    case 593:
      if (lookahead == 'o') ADVANCE(254);
      END_STATE();
    case 594:
      if (lookahead == 'o') ADVANCE(395);
      END_STATE();
    case 595:
      if (lookahead == 'o') ADVANCE(1007);
      if (lookahead == 'r') ADVANCE(185);
      if (lookahead == 'y') ADVANCE(669);
      END_STATE();
    case 596:
      if (lookahead == 'o') ADVANCE(384);
      END_STATE();
    case 597:
      if (lookahead == 'o') ADVANCE(387);
      END_STATE();
    case 598:
      if (lookahead == 'o') ADVANCE(875);
      END_STATE();
    case 599:
      if (lookahead == 'o') ADVANCE(529);
      END_STATE();
    case 600:
      if (lookahead == 'o') ADVANCE(420);
      END_STATE();
    case 601:
      if (lookahead == 'o') ADVANCE(867);
      END_STATE();
    case 602:
      if (lookahead == 'o') ADVANCE(674);
      END_STATE();
    case 603:
      if (lookahead == 'o') ADVANCE(510);
      END_STATE();
    case 604:
      if (lookahead == 'o') ADVANCE(226);
      END_STATE();
    case 605:
      if (lookahead == 'o') ADVANCE(580);
      END_STATE();
    case 606:
      if (lookahead == 'o') ADVANCE(260);
      END_STATE();
    case 607:
      if (lookahead == 'o') ADVANCE(701);
      END_STATE();
    case 608:
      if (lookahead == 'o') ADVANCE(251);
      END_STATE();
    case 609:
      if (lookahead == 'o') ADVANCE(551);
      END_STATE();
    case 610:
      if (lookahead == 'o') ADVANCE(697);
      END_STATE();
    case 611:
      if (lookahead == 'o') ADVANCE(531);
      END_STATE();
    case 612:
      if (lookahead == 'o') ADVANCE(582);
      END_STATE();
    case 613:
      if (lookahead == 'o') ADVANCE(723);
      END_STATE();
    case 614:
      if (lookahead == 'o') ADVANCE(534);
      END_STATE();
    case 615:
      if (lookahead == 'o') ADVANCE(558);
      END_STATE();
    case 616:
      if (lookahead == 'o') ADVANCE(536);
      END_STATE();
    case 617:
      if (lookahead == 'o') ADVANCE(721);
      END_STATE();
    case 618:
      if (lookahead == 'o') ADVANCE(537);
      END_STATE();
    case 619:
      if (lookahead == 'o') ADVANCE(538);
      END_STATE();
    case 620:
      if (lookahead == 'o') ADVANCE(539);
      END_STATE();
    case 621:
      if (lookahead == 'o') ADVANCE(869);
      END_STATE();
    case 622:
      if (lookahead == 'o') ADVANCE(257);
      END_STATE();
    case 623:
      if (lookahead == 'o') ADVANCE(560);
      END_STATE();
    case 624:
      if (lookahead == 'o') ADVANCE(422);
      END_STATE();
    case 625:
      if (lookahead == 'o') ADVANCE(576);
      END_STATE();
    case 626:
      if (lookahead == 'o') ADVANCE(724);
      END_STATE();
    case 627:
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 628:
      if (lookahead == 'o') ADVANCE(259);
      END_STATE();
    case 629:
      if (lookahead == 'o') ADVANCE(896);
      END_STATE();
    case 630:
      if (lookahead == 'o') ADVANCE(562);
      END_STATE();
    case 631:
      if (lookahead == 'o') ADVANCE(564);
      END_STATE();
    case 632:
      if (lookahead == 'o') ADVANCE(670);
      END_STATE();
    case 633:
      if (lookahead == 'o') ADVANCE(725);
      END_STATE();
    case 634:
      if (lookahead == 'o') ADVANCE(565);
      END_STATE();
    case 635:
      if (lookahead == 'o') ADVANCE(726);
      END_STATE();
    case 636:
      if (lookahead == 'o') ADVANCE(566);
      END_STATE();
    case 637:
      if (lookahead == 'o') ADVANCE(430);
      END_STATE();
    case 638:
      if (lookahead == 'o') ADVANCE(568);
      END_STATE();
    case 639:
      if (lookahead == 'o') ADVANCE(569);
      END_STATE();
    case 640:
      if (lookahead == 'o') ADVANCE(570);
      END_STATE();
    case 641:
      if (lookahead == 'o') ADVANCE(571);
      END_STATE();
    case 642:
      if (lookahead == 'o') ADVANCE(572);
      END_STATE();
    case 643:
      if (lookahead == 'o') ADVANCE(573);
      END_STATE();
    case 644:
      if (lookahead == 'o') ADVANCE(574);
      END_STATE();
    case 645:
      if (lookahead == 'o') ADVANCE(575);
      END_STATE();
    case 646:
      if (lookahead == 'o') ADVANCE(400);
      END_STATE();
    case 647:
      if (lookahead == 'o') ADVANCE(879);
      END_STATE();
    case 648:
      if (lookahead == 'o') ADVANCE(676);
      END_STATE();
    case 649:
      if (lookahead == 'o') ADVANCE(740);
      END_STATE();
    case 650:
      if (lookahead == 'o') ADVANCE(584);
      END_STATE();
    case 651:
      if (lookahead == 'o') ADVANCE(585);
      END_STATE();
    case 652:
      if (lookahead == 'o') ADVANCE(520);
      END_STATE();
    case 653:
      if (lookahead == 'o') ADVANCE(521);
      END_STATE();
    case 654:
      if (lookahead == 'o') ADVANCE(751);
      END_STATE();
    case 655:
      if (lookahead == 'o') ADVANCE(752);
      END_STATE();
    case 656:
      if (lookahead == 'p') ADVANCE(1635);
      END_STATE();
    case 657:
      if (lookahead == 'p') ADVANCE(1035);
      END_STATE();
    case 658:
      if (lookahead == 'p') ADVANCE(360);
      END_STATE();
    case 659:
      if (lookahead == 'p') ADVANCE(981);
      END_STATE();
    case 660:
      if (lookahead == 'p') ADVANCE(600);
      END_STATE();
    case 661:
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 662:
      if (lookahead == 'p') ADVANCE(599);
      END_STATE();
    case 663:
      if (lookahead == 'p') ADVANCE(486);
      END_STATE();
    case 664:
      if (lookahead == 'p') ADVANCE(605);
      END_STATE();
    case 665:
      if (lookahead == 'p') ADVANCE(311);
      END_STATE();
    case 666:
      if (lookahead == 'p') ADVANCE(709);
      END_STATE();
    case 667:
      if (lookahead == 'p') ADVANCE(198);
      END_STATE();
    case 668:
      if (lookahead == 'p') ADVANCE(327);
      END_STATE();
    case 669:
      if (lookahead == 'p') ADVANCE(286);
      END_STATE();
    case 670:
      if (lookahead == 'p') ADVANCE(287);
      END_STATE();
    case 671:
      if (lookahead == 'p') ADVANCE(184);
      END_STATE();
    case 672:
      if (lookahead == 'p') ADVANCE(772);
      END_STATE();
    case 673:
      if (lookahead == 'p') ADVANCE(617);
      END_STATE();
    case 674:
      if (lookahead == 'p') ADVANCE(324);
      END_STATE();
    case 675:
      if (lookahead == 'p') ADVANCE(494);
      END_STATE();
    case 676:
      if (lookahead == 'p') ADVANCE(330);
      END_STATE();
    case 677:
      if (lookahead == 'p') ADVANCE(624);
      END_STATE();
    case 678:
      if (lookahead == 'p') ADVANCE(738);
      END_STATE();
    case 679:
      if (lookahead == 'p') ADVANCE(637);
      END_STATE();
    case 680:
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 681:
      if (lookahead == 'p') ADVANCE(501);
      END_STATE();
    case 682:
      if (lookahead == 'p') ADVANCE(505);
      END_STATE();
    case 683:
      if (lookahead == 'p') ADVANCE(503);
      END_STATE();
    case 684:
      if (lookahead == 'p') ADVANCE(745);
      END_STATE();
    case 685:
      if (lookahead == 'p') ADVANCE(370);
      END_STATE();
    case 686:
      if (lookahead == 'p') ADVANCE(371);
      END_STATE();
    case 687:
      if (lookahead == 'p') ADVANCE(373);
      END_STATE();
    case 688:
      if (lookahead == 'p') ADVANCE(374);
      END_STATE();
    case 689:
      if (lookahead == 'p') ADVANCE(506);
      END_STATE();
    case 690:
      if (lookahead == 'q') ADVANCE(872);
      if (lookahead == 't') ADVANCE(957);
      END_STATE();
    case 691:
      if (lookahead == 'r') ADVANCE(656);
      END_STATE();
    case 692:
      if (lookahead == 'r') ADVANCE(468);
      END_STATE();
    case 693:
      if (lookahead == 'r') ADVANCE(464);
      if (lookahead == 'x') ADVANCE(413);
      END_STATE();
    case 694:
      if (lookahead == 'r') ADVANCE(426);
      END_STATE();
    case 695:
      if (lookahead == 'r') ADVANCE(1632);
      END_STATE();
    case 696:
      if (lookahead == 'r') ADVANCE(989);
      END_STATE();
    case 697:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 698:
      if (lookahead == 'r') ADVANCE(1605);
      END_STATE();
    case 699:
      if (lookahead == 'r') ADVANCE(1621);
      END_STATE();
    case 700:
      if (lookahead == 'r') ADVANCE(1090);
      END_STATE();
    case 701:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 702:
      if (lookahead == 'r') ADVANCE(594);
      END_STATE();
    case 703:
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 704:
      if (lookahead == 'r') ADVANCE(607);
      END_STATE();
    case 705:
      if (lookahead == 'r') ADVANCE(392);
      END_STATE();
    case 706:
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 707:
      if (lookahead == 'r') ADVANCE(808);
      END_STATE();
    case 708:
      if (lookahead == 'r') ADVANCE(910);
      END_STATE();
    case 709:
      if (lookahead == 'r') ADVANCE(602);
      END_STATE();
    case 710:
      if (lookahead == 'r') ADVANCE(304);
      END_STATE();
    case 711:
      if (lookahead == 'r') ADVANCE(814);
      END_STATE();
    case 712:
      if (lookahead == 'r') ADVANCE(410);
      END_STATE();
    case 713:
      if (lookahead == 'r') ADVANCE(312);
      END_STATE();
    case 714:
      if (lookahead == 'r') ADVANCE(415);
      END_STATE();
    case 715:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 716:
      if (lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 717:
      if (lookahead == 'r') ADVANCE(757);
      END_STATE();
    case 718:
      if (lookahead == 'r') ADVANCE(816);
      END_STATE();
    case 719:
      if (lookahead == 'r') ADVANCE(472);
      END_STATE();
    case 720:
      if (lookahead == 'r') ADVANCE(347);
      END_STATE();
    case 721:
      if (lookahead == 'r') ADVANCE(805);
      END_STATE();
    case 722:
      if (lookahead == 'r') ADVANCE(535);
      END_STATE();
    case 723:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 724:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 725:
      if (lookahead == 'r') ADVANCE(375);
      END_STATE();
    case 726:
      if (lookahead == 'r') ADVANCE(279);
      END_STATE();
    case 727:
      if (lookahead == 'r') ADVANCE(338);
      END_STATE();
    case 728:
      if (lookahead == 'r') ADVANCE(340);
      END_STATE();
    case 729:
      if (lookahead == 'r') ADVANCE(341);
      END_STATE();
    case 730:
      if (lookahead == 'r') ADVANCE(300);
      END_STATE();
    case 731:
      if (lookahead == 'r') ADVANCE(393);
      END_STATE();
    case 732:
      if (lookahead == 'r') ADVANCE(308);
      END_STATE();
    case 733:
      if (lookahead == 'r') ADVANCE(646);
      END_STATE();
    case 734:
      if (lookahead == 'r') ADVANCE(899);
      END_STATE();
    case 735:
      if (lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 736:
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 737:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 738:
      if (lookahead == 'r') ADVANCE(648);
      END_STATE();
    case 739:
      if (lookahead == 'r') ADVANCE(463);
      END_STATE();
    case 740:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 741:
      if (lookahead == 'r') ADVANCE(779);
      END_STATE();
    case 742:
      if (lookahead == 'r') ADVANCE(365);
      END_STATE();
    case 743:
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 744:
      if (lookahead == 'r') ADVANCE(649);
      END_STATE();
    case 745:
      if (lookahead == 'r') ADVANCE(366);
      END_STATE();
    case 746:
      if (lookahead == 'r') ADVANCE(212);
      END_STATE();
    case 747:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 748:
      if (lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 749:
      if (lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 750:
      if (lookahead == 'r') ADVANCE(372);
      END_STATE();
    case 751:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 752:
      if (lookahead == 'r') ADVANCE(376);
      END_STATE();
    case 753:
      if (lookahead == 'r') ADVANCE(466);
      if (lookahead == 'x') ADVANCE(461);
      END_STATE();
    case 754:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 755:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 756:
      if (lookahead == 's') ADVANCE(1064);
      END_STATE();
    case 757:
      if (lookahead == 's') ADVANCE(1129);
      END_STATE();
    case 758:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 759:
      if (lookahead == 's') ADVANCE(665);
      END_STATE();
    case 760:
      if (lookahead == 's') ADVANCE(761);
      END_STATE();
    case 761:
      if (lookahead == 's') ADVANCE(197);
      END_STATE();
    case 762:
      if (lookahead == 's') ADVANCE(296);
      END_STATE();
    case 763:
      if (lookahead == 's') ADVANCE(774);
      END_STATE();
    case 764:
      if (lookahead == 's') ADVANCE(303);
      END_STATE();
    case 765:
      if (lookahead == 's') ADVANCE(667);
      END_STATE();
    case 766:
      if (lookahead == 's') ADVANCE(233);
      END_STATE();
    case 767:
      if (lookahead == 's') ADVANCE(801);
      END_STATE();
    case 768:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 769:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 770:
      if (lookahead == 's') ADVANCE(832);
      END_STATE();
    case 771:
      if (lookahead == 's') ADVANCE(826);
      END_STATE();
    case 772:
      if (lookahead == 's') ADVANCE(292);
      END_STATE();
    case 773:
      if (lookahead == 's') ADVANCE(662);
      if (lookahead == 't') ADVANCE(694);
      END_STATE();
    case 774:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 775:
      if (lookahead == 's') ADVANCE(668);
      END_STATE();
    case 776:
      if (lookahead == 's') ADVANCE(664);
      if (lookahead == 't') ADVANCE(739);
      END_STATE();
    case 777:
      if (lookahead == 's') ADVANCE(673);
      END_STATE();
    case 778:
      if (lookahead == 's') ADVANCE(337);
      END_STATE();
    case 779:
      if (lookahead == 's') ADVANCE(438);
      END_STATE();
    case 780:
      if (lookahead == 's') ADVANCE(440);
      END_STATE();
    case 781:
      if (lookahead == 's') ADVANCE(780);
      END_STATE();
    case 782:
      if (lookahead == 's') ADVANCE(451);
      END_STATE();
    case 783:
      if (lookahead == 's') ADVANCE(453);
      END_STATE();
    case 784:
      if (lookahead == 's') ADVANCE(454);
      END_STATE();
    case 785:
      if (lookahead == 's') ADVANCE(455);
      END_STATE();
    case 786:
      if (lookahead == 's') ADVANCE(458);
      END_STATE();
    case 787:
      if (lookahead == 's') ADVANCE(786);
      END_STATE();
    case 788:
      if (lookahead == 's') ADVANCE(369);
      END_STATE();
    case 789:
      if (lookahead == 's') ADVANCE(686);
      END_STATE();
    case 790:
      if (lookahead == 's') ADVANCE(687);
      END_STATE();
    case 791:
      if (lookahead == 's') ADVANCE(688);
      END_STATE();
    case 792:
      if (lookahead == 's') ADVANCE(685);
      END_STATE();
    case 793:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 794:
      if (lookahead == 't') ADVANCE(1006);
      END_STATE();
    case 795:
      if (lookahead == 't') ADVANCE(1033);
      END_STATE();
    case 796:
      if (lookahead == 't') ADVANCE(940);
      END_STATE();
    case 797:
      if (lookahead == 't') ADVANCE(1019);
      END_STATE();
    case 798:
      if (lookahead == 't') ADVANCE(1054);
      END_STATE();
    case 799:
      if (lookahead == 't') ADVANCE(228);
      END_STATE();
    case 800:
      if (lookahead == 't') ADVANCE(1058);
      END_STATE();
    case 801:
      if (lookahead == 't') ADVANCE(1056);
      END_STATE();
    case 802:
      if (lookahead == 't') ADVANCE(1094);
      END_STATE();
    case 803:
      if (lookahead == 't') ADVANCE(936);
      END_STATE();
    case 804:
      if (lookahead == 't') ADVANCE(1011);
      END_STATE();
    case 805:
      if (lookahead == 't') ADVANCE(943);
      END_STATE();
    case 806:
      if (lookahead == 't') ADVANCE(1000);
      END_STATE();
    case 807:
      if (lookahead == 't') ADVANCE(811);
      END_STATE();
    case 808:
      if (lookahead == 't') ADVANCE(908);
      END_STATE();
    case 809:
      if (lookahead == 't') ADVANCE(402);
      END_STATE();
    case 810:
      if (lookahead == 't') ADVANCE(417);
      END_STATE();
    case 811:
      if (lookahead == 't') ADVANCE(657);
      END_STATE();
    case 812:
      if (lookahead == 't') ADVANCE(403);
      END_STATE();
    case 813:
      if (lookahead == 't') ADVANCE(419);
      END_STATE();
    case 814:
      if (lookahead == 't') ADVANCE(911);
      END_STATE();
    case 815:
      if (lookahead == 't') ADVANCE(409);
      END_STATE();
    case 816:
      if (lookahead == 't') ADVANCE(909);
      END_STATE();
    case 817:
      if (lookahead == 't') ADVANCE(661);
      END_STATE();
    case 818:
      if (lookahead == 't') ADVANCE(912);
      END_STATE();
    case 819:
      if (lookahead == 't') ADVANCE(405);
      END_STATE();
    case 820:
      if (lookahead == 't') ADVANCE(407);
      END_STATE();
    case 821:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 822:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 823:
      if (lookahead == 't') ADVANCE(348);
      END_STATE();
    case 824:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 825:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 826:
      if (lookahead == 't') ADVANCE(603);
      END_STATE();
    case 827:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 828:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 829:
      if (lookahead == 't') ADVANCE(319);
      END_STATE();
    case 830:
      if (lookahead == 't') ADVANCE(273);
      END_STATE();
    case 831:
      if (lookahead == 't') ADVANCE(345);
      END_STATE();
    case 832:
      if (lookahead == 't') ADVANCE(708);
      END_STATE();
    case 833:
      if (lookahead == 't') ADVANCE(331);
      END_STATE();
    case 834:
      if (lookahead == 't') ADVANCE(276);
      END_STATE();
    case 835:
      if (lookahead == 't') ADVANCE(333);
      END_STATE();
    case 836:
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 837:
      if (lookahead == 't') ADVANCE(309);
      END_STATE();
    case 838:
      if (lookahead == 't') ADVANCE(289);
      END_STATE();
    case 839:
      if (lookahead == 't') ADVANCE(817);
      END_STATE();
    case 840:
      if (lookahead == 't') ADVANCE(425);
      END_STATE();
    case 841:
      if (lookahead == 't') ADVANCE(318);
      END_STATE();
    case 842:
      if (lookahead == 't') ADVANCE(427);
      END_STATE();
    case 843:
      if (lookahead == 't') ADVANCE(613);
      END_STATE();
    case 844:
      if (lookahead == 't') ADVANCE(626);
      END_STATE();
    case 845:
      if (lookahead == 't') ADVANCE(323);
      END_STATE();
    case 846:
      if (lookahead == 't') ADVANCE(332);
      END_STATE();
    case 847:
      if (lookahead == 't') ADVANCE(352);
      END_STATE();
    case 848:
      if (lookahead == 't') ADVANCE(435);
      END_STATE();
    case 849:
      if (lookahead == 't') ADVANCE(436);
      END_STATE();
    case 850:
      if (lookahead == 't') ADVANCE(439);
      END_STATE();
    case 851:
      if (lookahead == 't') ADVANCE(441);
      END_STATE();
    case 852:
      if (lookahead == 't') ADVANCE(444);
      END_STATE();
    case 853:
      if (lookahead == 't') ADVANCE(367);
      END_STATE();
    case 854:
      if (lookahead == 't') ADVANCE(445);
      END_STATE();
    case 855:
      if (lookahead == 't') ADVANCE(446);
      END_STATE();
    case 856:
      if (lookahead == 't') ADVANCE(447);
      END_STATE();
    case 857:
      if (lookahead == 't') ADVANCE(448);
      END_STATE();
    case 858:
      if (lookahead == 't') ADVANCE(449);
      END_STATE();
    case 859:
      if (lookahead == 't') ADVANCE(450);
      END_STATE();
    case 860:
      if (lookahead == 't') ADVANCE(452);
      END_STATE();
    case 861:
      if (lookahead == 't') ADVANCE(460);
      END_STATE();
    case 862:
      if (lookahead == 'u') ADVANCE(528);
      END_STATE();
    case 863:
      if (lookahead == 'u') ADVANCE(703);
      END_STATE();
    case 864:
      if (lookahead == 'u') ADVANCE(522);
      END_STATE();
    case 865:
      if (lookahead == 'u') ADVANCE(508);
      END_STATE();
    case 866:
      if (lookahead == 'u') ADVANCE(307);
      END_STATE();
    case 867:
      if (lookahead == 'u') ADVANCE(659);
      END_STATE();
    case 868:
      if (lookahead == 'u') ADVANCE(488);
      END_STATE();
    case 869:
      if (lookahead == 'u') ADVANCE(559);
      END_STATE();
    case 870:
      if (lookahead == 'u') ADVANCE(712);
      END_STATE();
    case 871:
      if (lookahead == 'u') ADVANCE(719);
      END_STATE();
    case 872:
      if (lookahead == 'u') ADVANCE(334);
      END_STATE();
    case 873:
      if (lookahead == 'u') ADVANCE(288);
      END_STATE();
    case 874:
      if (lookahead == 'u') ADVANCE(346);
      END_STATE();
    case 875:
      if (lookahead == 'u') ADVANCE(822);
      END_STATE();
    case 876:
      if (lookahead == 'u') ADVANCE(349);
      END_STATE();
    case 877:
      if (lookahead == 'u') ADVANCE(490);
      END_STATE();
    case 878:
      if (lookahead == 'u') ADVANCE(487);
      END_STATE();
    case 879:
      if (lookahead == 'u') ADVANCE(824);
      END_STATE();
    case 880:
      if (lookahead == 'u') ADVANCE(771);
      END_STATE();
    case 881:
      if (lookahead == 'u') ADVANCE(727);
      END_STATE();
    case 882:
      if (lookahead == 'u') ADVANCE(728);
      END_STATE();
    case 883:
      if (lookahead == 'u') ADVANCE(775);
      END_STATE();
    case 884:
      if (lookahead == 'u') ADVANCE(743);
      END_STATE();
    case 885:
      if (lookahead == 'u') ADVANCE(746);
      END_STATE();
    case 886:
      if (lookahead == 'u') ADVANCE(747);
      END_STATE();
    case 887:
      if (lookahead == 'u') ADVANCE(748);
      END_STATE();
    case 888:
      if (lookahead == 'u') ADVANCE(749);
      END_STATE();
    case 889:
      if (lookahead == 'u') ADVANCE(789);
      END_STATE();
    case 890:
      if (lookahead == 'u') ADVANCE(790);
      END_STATE();
    case 891:
      if (lookahead == 'u') ADVANCE(791);
      END_STATE();
    case 892:
      if (lookahead == 'u') ADVANCE(523);
      END_STATE();
    case 893:
      if (lookahead == 'v') ADVANCE(1638);
      END_STATE();
    case 894:
      if (lookahead == 'v') ADVANCE(172);
      END_STATE();
    case 895:
      if (lookahead == 'v') ADVANCE(326);
      END_STATE();
    case 896:
      if (lookahead == 'v') ADVANCE(290);
      END_STATE();
    case 897:
      if (lookahead == 'v') ADVANCE(178);
      END_STATE();
    case 898:
      if (lookahead == 'v') ADVANCE(335);
      END_STATE();
    case 899:
      if (lookahead == 'v') ADVANCE(353);
      END_STATE();
    case 900:
      if (lookahead == 'v') ADVANCE(216);
      END_STATE();
    case 901:
      if (lookahead == 'w') ADVANCE(418);
      END_STATE();
    case 902:
      if (lookahead == 'x') ADVANCE(414);
      END_STATE();
    case 903:
      if (lookahead == 'x') ADVANCE(513);
      END_STATE();
    case 904:
      if (lookahead == 'x') ADVANCE(1022);
      END_STATE();
    case 905:
      if (lookahead == 'x') ADVANCE(1031);
      END_STATE();
    case 906:
      if (lookahead == 'y') ADVANCE(1097);
      END_STATE();
    case 907:
      if (lookahead == 'y') ADVANCE(1631);
      END_STATE();
    case 908:
      if (lookahead == 'y') ADVANCE(931);
      END_STATE();
    case 909:
      if (lookahead == 'y') ADVANCE(1624);
      END_STATE();
    case 910:
      if (lookahead == 'y') ADVANCE(945);
      END_STATE();
    case 911:
      if (lookahead == 'y') ADVANCE(9);
      END_STATE();
    case 912:
      if (lookahead == 'y') ADVANCE(16);
      END_STATE();
    case 913:
      if (lookahead == 'y') ADVANCE(485);
      END_STATE();
    case 914:
      if (lookahead == 'y') ADVANCE(50);
      END_STATE();
    case 915:
      if (lookahead == 'y') ADVANCE(53);
      END_STATE();
    case 916:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1577);
      END_STATE();
    case 917:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1575);
      END_STATE();
    case 918:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 919:
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(13);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(anon_sym_LTsequence);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_LT_SLASHsequence_GT);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_LTrespond_SLASH_GT);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(anon_sym_LTsend_SLASH_GT);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_LTsend);
      if (lookahead == '/') ADVANCE(35);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(anon_sym_LT_SLASHsend_GT);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(anon_sym_LTlog);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(anon_sym_LT_SLASHlog_GT);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(anon_sym_LTproperty);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(anon_sym_scope);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(anon_sym_scope);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(anon_sym_axis2);
      if (lookahead == '-') ADVANCE(230);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_axis2);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(anon_sym_axis2_DASHclient);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(anon_sym_operation);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(anon_sym_operation);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(anon_sym_transport);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(anon_sym_transport);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(anon_sym_registry);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(anon_sym_registry);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(anon_sym_synapse);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(anon_sym_synapse);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(anon_sym_system);
      if (lookahead == '-') ADVANCE(678);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(anon_sym_env);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(anon_sym_env);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(anon_sym_file);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(anon_sym_action);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(anon_sym_action);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(anon_sym_remove);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(anon_sym_remove);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(anon_sym_STRING);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(anon_sym_STRING);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(anon_sym_INTEGER);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(anon_sym_INTEGER);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(anon_sym_BOOLEAN);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(anon_sym_BOOLEAN);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(anon_sym_DOUBLE);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(anon_sym_DOUBLE);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(anon_sym_FLOAT);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(anon_sym_FLOAT);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(anon_sym_LONG);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(anon_sym_LONG);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(anon_sym_SHORT);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(anon_sym_SHORT);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(anon_sym_OM);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(anon_sym_OM);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(anon_sym_pattern);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(anon_sym_pattern);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(anon_sym_group);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(anon_sym_LTcall);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(anon_sym_LT_SLASHcall_GT);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(anon_sym_LTforeach);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(anon_sym_sequence);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(anon_sym_sequence);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(anon_sym_LT_SLASHforeach_GT);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(anon_sym_LTfilter);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(anon_sym_xpath);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(anon_sym_xpath);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(anon_sym_LT_SLASHfilter_GT);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(anon_sym_LTaggregate_GT);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(anon_sym_LTaggregate);
      if (lookahead == '>') ADVANCE(993);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(anon_sym_LT_SLASHaggregate_GT);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(anon_sym_LTiterate);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(anon_sym_LT_SLASHiterate_GT);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(anon_sym_sequential);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(anon_sym_sequential);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(anon_sym_continueParent);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(anon_sym_continueParent);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(anon_sym_preservePayload);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(anon_sym_preservePayload);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(anon_sym_attachPath);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(anon_sym_attachPath);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(anon_sym_LTtarget);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(anon_sym_to);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(anon_sym_soapAction);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(anon_sym_soapAction);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(anon_sym_endpoint);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(anon_sym_endpoint);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(anon_sym_LT_SLASHtarget_GT);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(anon_sym_LTcorrelateOn);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(anon_sym_LTcompleteCondition);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(anon_sym_LT_SLASHcompleteCondition_GT);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(anon_sym_LTonComplete);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(anon_sym_LT_SLASHonComplete_GT);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(anon_sym_LTmessageCount);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(anon_sym_min);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(anon_sym_max);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(anon_sym_key);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(anon_sym_LTthen_GT);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(anon_sym_LT_SLASHthen_GT);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(anon_sym_LTelse_GT);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(anon_sym_LT_SLASHelse_GT);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(anon_sym_source);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(anon_sym_source);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(anon_sym_regex);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(anon_sym_regex);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(anon_sym_LTendpoint);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(anon_sym_LT_SLASHendpoint_GT);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(anon_sym_LThttp);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(anon_sym_LT_SLASHhttp_GT);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(anon_sym_uri_DASHtemplate);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(anon_sym_method);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(anon_sym_get);
      if (lookahead == '-') ADVANCE(666);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(anon_sym_post);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(anon_sym_post);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(anon_sym_put);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(anon_sym_put);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(anon_sym_head);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(anon_sym_head);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(anon_sym_options);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(anon_sym_options);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(anon_sym_patch);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(anon_sym_patch);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(anon_sym_LTtimeout_GT);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(anon_sym_LT_SLASHtimeout_GT);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(anon_sym_LTmarkForSuspension_GT);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmarkForSuspension_GT);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(anon_sym_LTretriesBeforeSuspension_GT);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(anon_sym_LT_SLASHretriesBeforeSuspension_GT);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(anon_sym_LTretryDelay_GT);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(anon_sym_LT_SLASHretryDelay_GT);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(anon_sym_LTsuspendOnFailure_GT);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(anon_sym_LT_SLASHsuspendOnFailure_GT);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(anon_sym_LTinitialDuration_GT);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(anon_sym_LT_SLASHinitialDuration_GT);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(anon_sym_LTprogressionFactor_GT);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(anon_sym_LT_SLASHprogressionFactor_GT);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(anon_sym_LTmaximumDuration_GT);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmaximumDuration_GT);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(anon_sym_LTerrorCodes_GT);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(anon_sym_LT_SLASHerrorCodes_GT);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(anon_sym_LTduration_GT);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(anon_sym_LT_SLASHduration_GT);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(anon_sym_LTresponseAction_GT);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(anon_sym_never);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(anon_sym_never);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(anon_sym_discard);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(anon_sym_discard);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(anon_sym_fault);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(anon_sym_fault);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(anon_sym_LT_SLASHresponseAction_GT);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(anon_sym_LTkey);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(anon_sym_blocking);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(anon_sym_blocking);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(anon_sym_value);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '!') ADVANCE(1109);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1112);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '-') ADVANCE(1112);
      if (lookahead != 0) ADVANCE(1106);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '-') ADVANCE(1108);
      if (lookahead != 0) ADVANCE(1106);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '-') ADVANCE(1105);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1112);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '-') ADVANCE(1111);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1112);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '-') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1112);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '<') ADVANCE(1104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1110);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1112);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '>') ADVANCE(1112);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1112);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1112);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(anon_sym_expression);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(anon_sym_expression);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(anon_sym_json_DASHeval_LPAREN);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(anon_sym_name);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(anon_sym_id);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(anon_sym_id);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(anon_sym_level);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(anon_sym_level);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(anon_sym_full);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(anon_sym_full);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(anon_sym_simple);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(anon_sym_simple);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(anon_sym_custom);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(anon_sym_custom);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(anon_sym_headers);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(anon_sym_headers);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(901);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(666);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(416);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(554);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(577);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(295);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(322);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(870);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(823);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(765);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(678);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(217);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == '2') ADVANCE(939);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == '4') ADVANCE(1155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == '6') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'A') ADVANCE(1154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'A') ADVANCE(1198);
      if (lookahead == 'O') ADVANCE(1195);
      if (lookahead == 'U') ADVANCE(1199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'A') ADVANCE(1178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'A') ADVANCE(1201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'A') ADVANCE(1263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'B') ADVANCE(1174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'C') ADVANCE(1168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'D') ADVANCE(1049);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'D') ADVANCE(1304);
      if (lookahead == 'E') ADVANCE(1430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'E') ADVANCE(1196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'E') ADVANCE(1147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'E') ADVANCE(1047);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'E') ADVANCE(970);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'E') ADVANCE(1175);
      if (lookahead == 'O') ADVANCE(1205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'E') ADVANCE(1167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'E') ADVANCE(1191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'E') ADVANCE(1149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'E') ADVANCE(1204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'G') ADVANCE(974);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'G') ADVANCE(964);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'G') ADVANCE(1162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'H') ADVANCE(1053);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'H') ADVANCE(1184);
      if (lookahead == 'T') ADVANCE(1192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'I') ADVANCE(1181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'I') ADVANCE(1187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'L') ADVANCE(1183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'L') ADVANCE(1163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'L') ADVANCE(1159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'L') ADVANCE(1164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'M') ADVANCE(978);
      if (lookahead == 'P') ADVANCE(1197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'N') ADVANCE(1165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'N') ADVANCE(968);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'N') ADVANCE(1203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'N') ADVANCE(1194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'N') ADVANCE(1166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'O') ADVANCE(1177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'O') ADVANCE(1150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'O') ADVANCE(1193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'O') ADVANCE(1186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'O') ADVANCE(1173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'O') ADVANCE(1180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'P') ADVANCE(1243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'P') ADVANCE(1216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'P') ADVANCE(1234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'R') ADVANCE(966);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'R') ADVANCE(1170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'R') ADVANCE(1202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'S') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'S') ADVANCE(1200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'T') ADVANCE(1041);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'T') ADVANCE(1171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'T') ADVANCE(1153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'T') ADVANCE(1045);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'T') ADVANCE(1043);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'T') ADVANCE(972);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'T') ADVANCE(976);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'T') ADVANCE(1161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'T') ADVANCE(1158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'U') ADVANCE(1152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1377);
      if (lookahead == 'i') ADVANCE(1370);
      if (lookahead == 'l') ADVANCE(1447);
      if (lookahead == 'o') ADVANCE(1481);
      if (lookahead == 'u') ADVANCE(1369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1394);
      if (lookahead == 'e') ADVANCE(1562);
      if (lookahead == 'o') ADVANCE(1251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1394);
      if (lookahead == 'o') ADVANCE(1251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1388);
      if (lookahead == 'e') ADVANCE(1564);
      if (lookahead == 'o') ADVANCE(1482);
      if (lookahead == 'u') ADVANCE(1383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1388);
      if (lookahead == 'o') ADVANCE(1482);
      if (lookahead == 'u') ADVANCE(1383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1506);
      if (lookahead == 'l') ADVANCE(1436);
      if (lookahead == 'o') ADVANCE(1437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1506);
      if (lookahead == 'o') ADVANCE(1437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1567);
      if (lookahead == 'e') ADVANCE(1523);
      if (lookahead == 'i') ADVANCE(1395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1379);
      if (lookahead == 'e') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1535);
      if (lookahead == 'o') ADVANCE(1499);
      if (lookahead == 'r') ADVANCE(1323);
      if (lookahead == 'u') ADVANCE(1524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1417);
      if (lookahead == 'u') ADVANCE(1282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1488);
      if (lookahead == 'r') ADVANCE(1344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1465);
      if (lookahead == 'u') ADVANCE(1484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1378);
      if (lookahead == 'l') ADVANCE(1447);
      if (lookahead == 'o') ADVANCE(1481);
      if (lookahead == 'u') ADVANCE(1409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1355);
      if (lookahead == 'i') ADVANCE(1429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1421);
      if (lookahead == 'u') ADVANCE(1282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'a') ADVANCE(1498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'b') ADVANCE(1510);
      if (lookahead == 'm') ADVANCE(1623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'b') ADVANCE(1315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1538);
      if (lookahead == 't') ADVANCE(1536);
      if (lookahead == 'x') ADVANCE(1343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1335);
      if (lookahead == 't') ADVANCE(1316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1456);
      if (lookahead == 'e') ADVANCE(1474);
      if (lookahead == 'i') ADVANCE(1386);
      if (lookahead == 'o') ADVANCE(1222);
      if (lookahead == 't') ADVANCE(1221);
      if (lookahead == 'u') ADVANCE(1244);
      if (lookahead == 'y') ADVANCE(1413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1435);
      if (lookahead == 'd') ADVANCE(1468);
      if (lookahead == 'v') ADVANCE(952);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1293);
      if (lookahead == 't') ADVANCE(1353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1232);
      if (lookahead == 't') ADVANCE(1238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1232);
      if (lookahead == 't') ADVANCE(1239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(1554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(1120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(1063);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(1616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(1039);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(1093);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(1003);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(1295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(1296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(1138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'd') ADVANCE(1348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1327);
      if (lookahead == 'i') ADVANCE(1515);
      if (lookahead == 'o') ADVANCE(1248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1415);
      if (lookahead == 'r') ADVANCE(1439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1328);
      if (lookahead == 'o') ADVANCE(1555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(954);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(962);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(933);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1061);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(960);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1030);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(948);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(987);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1342);
      if (lookahead == 'h') ADVANCE(1443);
      if (lookahead == 'o') ADVANCE(1393);
      if (lookahead == 't') ADVANCE(1566);
      if (lookahead == 'u') ADVANCE(1479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1342);
      if (lookahead == 'h') ADVANCE(1443);
      if (lookahead == 'o') ADVANCE(1410);
      if (lookahead == 't') ADVANCE(1566);
      if (lookahead == 'u') ADVANCE(1480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1568);
      if (lookahead == 'i') ADVANCE(1516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1486);
      if (lookahead == 't') ADVANCE(1349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'e') ADVANCE(1426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'f') ADVANCE(1220);
      if (lookahead == 'l') ADVANCE(1321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'g') ADVANCE(1300);
      if (lookahead == 'm') ADVANCE(1460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'g') ADVANCE(1608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'g') ADVANCE(1618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'g') ADVANCE(1596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'g') ADVANCE(1099);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'g') ADVANCE(1584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'g') ADVANCE(1620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'h') ADVANCE(1067);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'h') ADVANCE(991);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'h') ADVANCE(1190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'h') ADVANCE(1005);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'h') ADVANCE(1440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1552);
      if (lookahead == 't') ADVANCE(1057);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'i') ADVANCE(1552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'k') ADVANCE(1347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(999);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1318);
      if (lookahead == 'n') ADVANCE(1253);
      if (lookahead == 'x') ADVANCE(1471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1363);
      if (lookahead == 'n') ADVANCE(1262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1511);
      if (lookahead == 'u') ADVANCE(1372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1241);
      if (lookahead == 'p') ADVANCE(1458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'l') ADVANCE(1241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'm') ADVANCE(1245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'm') ADVANCE(1128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'm') ADVANCE(950);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'm') ADVANCE(1470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'm') ADVANCE(1235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'm') ADVANCE(1281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'm') ADVANCE(1233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'm') ADVANCE(1324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'm') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'm') ADVANCE(1142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1258);
      if (lookahead == 'u') ADVANCE(1418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1329);
      if (lookahead == 's') ADVANCE(1525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1021);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(956);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(980);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(942);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1010);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1259);
      if (lookahead == 'u') ADVANCE(1418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1225);
      if (lookahead == 's') ADVANCE(1545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1308);
      if (lookahead == 't') ADVANCE(1055);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1308);
      if (lookahead == 't') ADVANCE(1132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1466);
      if (lookahead == 'r') ADVANCE(1340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'n') ADVANCE(1143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(1248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(1555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(1008);
      if (lookahead == 'r') ADVANCE(1219);
      if (lookahead == 'y') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(1273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(1247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(1376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(1405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(1556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(1267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(1358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(1384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(1461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(1475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(1396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(1270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(1444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(1508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(1399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(1431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(1400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(1401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(1402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(1224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(1469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(1419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(1492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(1271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(1563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'o') ADVANCE(1512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'p') ADVANCE(1301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'p') ADVANCE(982);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'p') ADVANCE(1226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'p') ADVANCE(1151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'p') ADVANCE(1228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'p') ADVANCE(1283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'p') ADVANCE(1441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'p') ADVANCE(1285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'p') ADVANCE(1375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'p') ADVANCE(1490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'p') ADVANCE(1236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'p') ADVANCE(1513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'q') ADVANCE(1557);
      if (lookahead == 't') ADVANCE(958);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1091);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1489);
      if (lookahead == 's') ADVANCE(1542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1387);
      if (lookahead == 't') ADVANCE(1613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'r') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1065);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 's') ADVANCE(1520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1221);
      if (lookahead == 'u') ADVANCE(1244);
      if (lookahead == 'y') ADVANCE(1519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1059);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1095);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(937);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1012);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(944);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1001);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 't') ADVANCE(1359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'u') ADVANCE(1408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'u') ADVANCE(1463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'u') ADVANCE(1314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'u') ADVANCE(1286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'u') ADVANCE(1319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'u') ADVANCE(1373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'u') ADVANCE(1391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'v') ADVANCE(1305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'v') ADVANCE(1289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'v') ADVANCE(1312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'v') ADVANCE(1322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'x') ADVANCE(1634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'x') ADVANCE(1023);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'x') ADVANCE(1032);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'y') ADVANCE(1024);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'y') ADVANCE(946);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'y') ADVANCE(1374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (lookahead == 'z') ADVANCE(1310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1573);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1574:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1574);
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(sym__float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1575);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(sym__unsigned_int);
      if (lookahead == '.') ADVANCE(917);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1576);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(sym__int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1577);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(anon_sym_LT_QMARKxml);
      END_STATE();
    case 1579:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 1580:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 1581:
      ACCEPT_TOKEN(anon_sym_version);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(sym_version_number);
      END_STATE();
    case 1583:
      ACCEPT_TOKEN(anon_sym_encoding);
      END_STATE();
    case 1584:
      ACCEPT_TOKEN(anon_sym_encoding);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1585:
      ACCEPT_TOKEN(sym_encoding);
      END_STATE();
    case 1586:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 1587:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(1589);
      END_STATE();
    case 1588:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(1589);
      if (lookahead == '>') ADVANCE(930);
      END_STATE();
    case 1589:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 1590:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 1591:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(1590);
      END_STATE();
    case 1593:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 1594:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1595:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 1596:
      ACCEPT_TOKEN(anon_sym_ceiling);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1597:
      ACCEPT_TOKEN(anon_sym_choose);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1598:
      ACCEPT_TOKEN(anon_sym_concat);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1599:
      ACCEPT_TOKEN(anon_sym_contains);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1600:
      ACCEPT_TOKEN(anon_sym_count);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1601:
      ACCEPT_TOKEN(anon_sym_current);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1602:
      ACCEPT_TOKEN(anon_sym_document);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1603:
      ACCEPT_TOKEN(anon_sym_element_DASHavailable);
      END_STATE();
    case 1604:
      ACCEPT_TOKEN(anon_sym_floor);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1605:
      ACCEPT_TOKEN(anon_sym_format_DASHnumber);
      END_STATE();
    case 1606:
      ACCEPT_TOKEN(anon_sym_function_DASHavailable);
      END_STATE();
    case 1607:
      ACCEPT_TOKEN(anon_sym_generate_DASHid);
      END_STATE();
    case 1608:
      ACCEPT_TOKEN(anon_sym_lang);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1609:
      ACCEPT_TOKEN(anon_sym_last);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1610:
      ACCEPT_TOKEN(anon_sym_local_DASHname);
      END_STATE();
    case 1611:
      ACCEPT_TOKEN(anon_sym_namespace_DASHuri);
      END_STATE();
    case 1612:
      ACCEPT_TOKEN(anon_sym_normalize_DASHspace);
      END_STATE();
    case 1613:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1614:
      ACCEPT_TOKEN(anon_sym_number);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1615:
      ACCEPT_TOKEN(anon_sym_position);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1616:
      ACCEPT_TOKEN(anon_sym_round);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1617:
      ACCEPT_TOKEN(anon_sym_starts_DASHwith);
      END_STATE();
    case 1618:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1619:
      ACCEPT_TOKEN(anon_sym_string_DASHlength);
      END_STATE();
    case 1620:
      ACCEPT_TOKEN(anon_sym_substring);
      if (lookahead == '-') ADVANCE(163);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1621:
      ACCEPT_TOKEN(anon_sym_substring_DASHafter);
      END_STATE();
    case 1622:
      ACCEPT_TOKEN(anon_sym_substring_DASHbefore);
      END_STATE();
    case 1623:
      ACCEPT_TOKEN(anon_sym_sum);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1624:
      ACCEPT_TOKEN(anon_sym_system_DASHproperty);
      END_STATE();
    case 1625:
      ACCEPT_TOKEN(anon_sym_translate);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1626:
      ACCEPT_TOKEN(anon_sym_unparsed_DASHentity_DASHurl);
      END_STATE();
    case 1627:
      ACCEPT_TOKEN(anon_sym_base64Encode);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1628:
      ACCEPT_TOKEN(anon_sym_base64Decode);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1629:
      ACCEPT_TOKEN(anon_sym_get_DASHproperty_LPAREN);
      END_STATE();
    case 1630:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 1631:
      ACCEPT_TOKEN(anon_sym_DOLLARbody);
      END_STATE();
    case 1632:
      ACCEPT_TOKEN(anon_sym_DOLLARheader);
      END_STATE();
    case 1633:
      ACCEPT_TOKEN(anon_sym_DOLLARaxis2);
      END_STATE();
    case 1634:
      ACCEPT_TOKEN(anon_sym_ctx);
      if (lookahead == '.') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1573);
      END_STATE();
    case 1635:
      ACCEPT_TOKEN(anon_sym_DOLLARtrp);
      END_STATE();
    case 1636:
      ACCEPT_TOKEN(anon_sym_DOLLARurl);
      END_STATE();
    case 1637:
      ACCEPT_TOKEN(anon_sym_DOLLARfunc);
      END_STATE();
    case 1638:
      ACCEPT_TOKEN(anon_sym_DOLLARenv);
      END_STATE();
    case 1639:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 1640:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOT);
      END_STATE();
    case 1641:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 1642:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 4},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 4},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 4},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 4},
  [189] = {.lex_state = 4},
  [190] = {.lex_state = 4},
  [191] = {.lex_state = 4},
  [192] = {.lex_state = 4},
  [193] = {.lex_state = 4},
  [194] = {.lex_state = 4},
  [195] = {.lex_state = 4},
  [196] = {.lex_state = 4},
  [197] = {.lex_state = 4},
  [198] = {.lex_state = 4},
  [199] = {.lex_state = 4},
  [200] = {.lex_state = 4},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 4},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 4},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 4},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 4},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 4},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 5},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 4},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 4},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 4},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 4},
  [263] = {.lex_state = 4},
  [264] = {.lex_state = 4},
  [265] = {.lex_state = 4},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 4},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 4},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 4},
  [275] = {.lex_state = 4},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 4},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 24},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 4},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 4},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 24},
  [291] = {.lex_state = 24},
  [292] = {.lex_state = 24},
  [293] = {.lex_state = 24},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 4},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 4},
  [303] = {.lex_state = 24},
  [304] = {.lex_state = 24},
  [305] = {.lex_state = 24},
  [306] = {.lex_state = 24},
  [307] = {.lex_state = 24},
  [308] = {.lex_state = 24},
  [309] = {.lex_state = 24},
  [310] = {.lex_state = 4},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 4},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 4},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 4},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 4},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 4},
  [325] = {.lex_state = 24},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 4},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 4},
  [333] = {.lex_state = 4},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 24},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 4},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 4},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 4},
  [345] = {.lex_state = 24},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 24},
  [349] = {.lex_state = 24},
  [350] = {.lex_state = 1110},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 24},
  [353] = {.lex_state = 24},
  [354] = {.lex_state = 4},
  [355] = {.lex_state = 4},
  [356] = {.lex_state = 24},
  [357] = {.lex_state = 24},
  [358] = {.lex_state = 24},
  [359] = {.lex_state = 24},
  [360] = {.lex_state = 24},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 24},
  [364] = {.lex_state = 24},
  [365] = {.lex_state = 24},
  [366] = {.lex_state = 4},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 4},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 4},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 1110},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 5},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 4},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 5},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 4},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 4},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LTsequence] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHsequence_GT] = ACTIONS(1),
    [anon_sym_LTrespond_SLASH_GT] = ACTIONS(1),
    [anon_sym_LTsend_SLASH_GT] = ACTIONS(1),
    [anon_sym_LTsend] = ACTIONS(1),
    [anon_sym_LT_SLASHsend_GT] = ACTIONS(1),
    [anon_sym_LTlog] = ACTIONS(1),
    [anon_sym_LT_SLASHlog_GT] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LTproperty] = ACTIONS(1),
    [anon_sym_scope] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_axis2] = ACTIONS(1),
    [anon_sym_axis2_DASHclient] = ACTIONS(1),
    [anon_sym_operation] = ACTIONS(1),
    [anon_sym_transport] = ACTIONS(1),
    [anon_sym_registry] = ACTIONS(1),
    [anon_sym_synapse] = ACTIONS(1),
    [anon_sym_system] = ACTIONS(1),
    [anon_sym_env] = ACTIONS(1),
    [anon_sym_file] = ACTIONS(1),
    [anon_sym_action] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_remove] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_STRING] = ACTIONS(1),
    [anon_sym_INTEGER] = ACTIONS(1),
    [anon_sym_BOOLEAN] = ACTIONS(1),
    [anon_sym_DOUBLE] = ACTIONS(1),
    [anon_sym_FLOAT] = ACTIONS(1),
    [anon_sym_LONG] = ACTIONS(1),
    [anon_sym_SHORT] = ACTIONS(1),
    [anon_sym_OM] = ACTIONS(1),
    [anon_sym_pattern] = ACTIONS(1),
    [anon_sym_group] = ACTIONS(1),
    [anon_sym_LTcall] = ACTIONS(1),
    [anon_sym_LT_SLASHcall_GT] = ACTIONS(1),
    [anon_sym_LTforeach] = ACTIONS(1),
    [anon_sym_sequence] = ACTIONS(1),
    [anon_sym_LT_SLASHforeach_GT] = ACTIONS(1),
    [anon_sym_LTfilter] = ACTIONS(1),
    [anon_sym_xpath] = ACTIONS(1),
    [anon_sym_LT_SLASHfilter_GT] = ACTIONS(1),
    [anon_sym_LTaggregate_GT] = ACTIONS(1),
    [anon_sym_LTaggregate] = ACTIONS(1),
    [anon_sym_LT_SLASHaggregate_GT] = ACTIONS(1),
    [anon_sym_LTiterate] = ACTIONS(1),
    [anon_sym_LT_SLASHiterate_GT] = ACTIONS(1),
    [anon_sym_sequential] = ACTIONS(1),
    [anon_sym_continueParent] = ACTIONS(1),
    [anon_sym_preservePayload] = ACTIONS(1),
    [anon_sym_attachPath] = ACTIONS(1),
    [anon_sym_LTtarget] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_soapAction] = ACTIONS(1),
    [anon_sym_endpoint] = ACTIONS(1),
    [anon_sym_LT_SLASHtarget_GT] = ACTIONS(1),
    [anon_sym_LTcorrelateOn] = ACTIONS(1),
    [anon_sym_LTcompleteCondition] = ACTIONS(1),
    [anon_sym_LT_SLASHcompleteCondition_GT] = ACTIONS(1),
    [anon_sym_LTonComplete] = ACTIONS(1),
    [anon_sym_LT_SLASHonComplete_GT] = ACTIONS(1),
    [anon_sym_LTmessageCount] = ACTIONS(1),
    [anon_sym_min] = ACTIONS(1),
    [anon_sym_max] = ACTIONS(1),
    [anon_sym_key] = ACTIONS(1),
    [anon_sym_LTthen_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHthen_GT] = ACTIONS(1),
    [anon_sym_LTelse_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHelse_GT] = ACTIONS(1),
    [anon_sym_source] = ACTIONS(1),
    [anon_sym_regex] = ACTIONS(1),
    [anon_sym_LTendpoint] = ACTIONS(1),
    [anon_sym_LT_SLASHendpoint_GT] = ACTIONS(1),
    [anon_sym_LThttp] = ACTIONS(1),
    [anon_sym_LT_SLASHhttp_GT] = ACTIONS(1),
    [anon_sym_uri_DASHtemplate] = ACTIONS(1),
    [anon_sym_method] = ACTIONS(1),
    [anon_sym_GET] = ACTIONS(1),
    [anon_sym_POST] = ACTIONS(1),
    [anon_sym_PUT] = ACTIONS(1),
    [anon_sym_DELETE] = ACTIONS(1),
    [anon_sym_HEAD] = ACTIONS(1),
    [anon_sym_OPTIONS] = ACTIONS(1),
    [anon_sym_PATCH] = ACTIONS(1),
    [anon_sym_get] = ACTIONS(1),
    [anon_sym_post] = ACTIONS(1),
    [anon_sym_put] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_head] = ACTIONS(1),
    [anon_sym_options] = ACTIONS(1),
    [anon_sym_patch] = ACTIONS(1),
    [anon_sym_LTtimeout_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHtimeout_GT] = ACTIONS(1),
    [anon_sym_LTmarkForSuspension_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHmarkForSuspension_GT] = ACTIONS(1),
    [anon_sym_LTretriesBeforeSuspension_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHretriesBeforeSuspension_GT] = ACTIONS(1),
    [anon_sym_LTretryDelay_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHretryDelay_GT] = ACTIONS(1),
    [anon_sym_LTsuspendOnFailure_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHsuspendOnFailure_GT] = ACTIONS(1),
    [anon_sym_LTinitialDuration_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHinitialDuration_GT] = ACTIONS(1),
    [anon_sym_LTprogressionFactor_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHprogressionFactor_GT] = ACTIONS(1),
    [anon_sym_LTmaximumDuration_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHmaximumDuration_GT] = ACTIONS(1),
    [anon_sym_LTerrorCodes_GT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LT_SLASHerrorCodes_GT] = ACTIONS(1),
    [anon_sym_LTduration_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHduration_GT] = ACTIONS(1),
    [anon_sym_LTresponseAction_GT] = ACTIONS(1),
    [anon_sym_never] = ACTIONS(1),
    [anon_sym_discard] = ACTIONS(1),
    [anon_sym_fault] = ACTIONS(1),
    [anon_sym_LT_SLASHresponseAction_GT] = ACTIONS(1),
    [anon_sym_LTkey] = ACTIONS(1),
    [anon_sym_blocking] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_value] = ACTIONS(1),
    [anon_sym_expression] = ACTIONS(1),
    [anon_sym_json_DASHeval_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_id] = ACTIONS(1),
    [anon_sym_level] = ACTIONS(1),
    [anon_sym_full] = ACTIONS(1),
    [anon_sym_simple] = ACTIONS(1),
    [anon_sym_custom] = ACTIONS(1),
    [anon_sym_headers] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [sym__float] = ACTIONS(1),
    [sym__unsigned_int] = ACTIONS(1),
    [sym__int] = ACTIONS(1),
    [anon_sym_LT_QMARKxml] = ACTIONS(1),
    [anon_sym_QMARK_GT] = ACTIONS(1),
    [anon_sym_version] = ACTIONS(1),
    [anon_sym_encoding] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_ceiling] = ACTIONS(1),
    [anon_sym_choose] = ACTIONS(1),
    [anon_sym_concat] = ACTIONS(1),
    [anon_sym_contains] = ACTIONS(1),
    [anon_sym_count] = ACTIONS(1),
    [anon_sym_current] = ACTIONS(1),
    [anon_sym_document] = ACTIONS(1),
    [anon_sym_element_DASHavailable] = ACTIONS(1),
    [anon_sym_floor] = ACTIONS(1),
    [anon_sym_format_DASHnumber] = ACTIONS(1),
    [anon_sym_function_DASHavailable] = ACTIONS(1),
    [anon_sym_generate_DASHid] = ACTIONS(1),
    [anon_sym_lang] = ACTIONS(1),
    [anon_sym_last] = ACTIONS(1),
    [anon_sym_local_DASHname] = ACTIONS(1),
    [anon_sym_namespace_DASHuri] = ACTIONS(1),
    [anon_sym_normalize_DASHspace] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_number] = ACTIONS(1),
    [anon_sym_position] = ACTIONS(1),
    [anon_sym_round] = ACTIONS(1),
    [anon_sym_starts_DASHwith] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_string_DASHlength] = ACTIONS(1),
    [anon_sym_substring] = ACTIONS(1),
    [anon_sym_substring_DASHafter] = ACTIONS(1),
    [anon_sym_substring_DASHbefore] = ACTIONS(1),
    [anon_sym_sum] = ACTIONS(1),
    [anon_sym_system_DASHproperty] = ACTIONS(1),
    [anon_sym_translate] = ACTIONS(1),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(1),
    [anon_sym_base64Encode] = ACTIONS(1),
    [anon_sym_base64Decode] = ACTIONS(1),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DOLLARbody] = ACTIONS(1),
    [anon_sym_DOLLARheader] = ACTIONS(1),
    [anon_sym_DOLLARaxis2] = ACTIONS(1),
    [anon_sym_ctx] = ACTIONS(1),
    [anon_sym_DOLLARtrp] = ACTIONS(1),
    [anon_sym_DOLLARurl] = ACTIONS(1),
    [anon_sym_DOLLARfunc] = ACTIONS(1),
    [anon_sym_DOLLARenv] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOLLAR_DOT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(371),
    [sym__definition] = STATE(205),
    [sym_sequence_definition] = STATE(205),
    [sym_xml_declaration] = STATE(204),
    [aux_sym_source_file_repeat1] = STATE(205),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LTsequence] = ACTIONS(7),
    [anon_sym_LT_QMARKxml] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_json_eval] = STATE(580),
    [sym_xpath] = STATE(580),
    [sym__xpath_selectors] = STATE(6),
    [sym__xPath_extension_functions] = STATE(6),
    [sym__xpath_function] = STATE(6),
    [sym_boolean_function] = STATE(6),
    [sym_ceiling_function] = STATE(6),
    [sym_choose_function] = STATE(6),
    [sym_concat_function] = STATE(6),
    [sym_contains_function] = STATE(6),
    [sym_count_function] = STATE(6),
    [sym_current_function] = STATE(6),
    [sym_document_function] = STATE(6),
    [sym_element_available_function] = STATE(6),
    [sym_false_function] = STATE(6),
    [sym_floor_function] = STATE(6),
    [sym_format_number_function] = STATE(6),
    [sym_function_available_function] = STATE(6),
    [sym_generate_id_function] = STATE(6),
    [sym_id_function] = STATE(6),
    [sym_key_function] = STATE(6),
    [sym_lang_function] = STATE(6),
    [sym_last_function] = STATE(6),
    [sym_local_name_function] = STATE(6),
    [sym_name_function] = STATE(6),
    [sym_namespace_uri_function] = STATE(6),
    [sym_normalize_space_function] = STATE(6),
    [sym_not_function] = STATE(6),
    [sym_number_function] = STATE(6),
    [sym_position_function] = STATE(6),
    [sym_round_function] = STATE(6),
    [sym_starts_with_function] = STATE(6),
    [sym_string_function] = STATE(6),
    [sym_string_length_function] = STATE(6),
    [sym_substring_function] = STATE(6),
    [sym_substring_after_function] = STATE(6),
    [sym_substring_before_function] = STATE(6),
    [sym_sum_function] = STATE(6),
    [sym_system_property_function] = STATE(6),
    [sym_translate_function] = STATE(6),
    [sym_true_function] = STATE(6),
    [sym_unparsed_entity_url_function] = STATE(6),
    [sym_base64_encode] = STATE(6),
    [sym_base64_decode] = STATE(6),
    [sym_get_property] = STATE(6),
    [sym__xpath_string] = STATE(6),
    [sym_synapse_xpath_property] = STATE(6),
    [aux_sym_xpath_repeat1] = STATE(6),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_json_DASHeval_LPAREN] = ACTIONS(17),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_boolean] = ACTIONS(27),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_concat] = ACTIONS(33),
    [anon_sym_contains] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [anon_sym_current] = ACTIONS(39),
    [anon_sym_document] = ACTIONS(41),
    [anon_sym_element_DASHavailable] = ACTIONS(43),
    [anon_sym_floor] = ACTIONS(45),
    [anon_sym_format_DASHnumber] = ACTIONS(47),
    [anon_sym_function_DASHavailable] = ACTIONS(49),
    [anon_sym_generate_DASHid] = ACTIONS(51),
    [anon_sym_lang] = ACTIONS(53),
    [anon_sym_last] = ACTIONS(55),
    [anon_sym_local_DASHname] = ACTIONS(57),
    [anon_sym_namespace_DASHuri] = ACTIONS(59),
    [anon_sym_normalize_DASHspace] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_number] = ACTIONS(65),
    [anon_sym_position] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(69),
    [anon_sym_starts_DASHwith] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(73),
    [anon_sym_string_DASHlength] = ACTIONS(75),
    [anon_sym_substring] = ACTIONS(77),
    [anon_sym_substring_DASHafter] = ACTIONS(79),
    [anon_sym_substring_DASHbefore] = ACTIONS(81),
    [anon_sym_sum] = ACTIONS(83),
    [anon_sym_system_DASHproperty] = ACTIONS(85),
    [anon_sym_translate] = ACTIONS(87),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(89),
    [anon_sym_base64Encode] = ACTIONS(91),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(95),
    [anon_sym_DOLLARbody] = ACTIONS(97),
    [anon_sym_DOLLARheader] = ACTIONS(97),
    [anon_sym_DOLLARaxis2] = ACTIONS(97),
    [anon_sym_ctx] = ACTIONS(99),
    [anon_sym_DOLLARtrp] = ACTIONS(97),
    [anon_sym_DOLLARurl] = ACTIONS(97),
    [anon_sym_DOLLARfunc] = ACTIONS(97),
    [anon_sym_DOLLARenv] = ACTIONS(97),
  },
  [3] = {
    [sym_json_eval] = STATE(685),
    [sym_xpath] = STATE(685),
    [sym__xpath_selectors] = STATE(6),
    [sym__xPath_extension_functions] = STATE(6),
    [sym__xpath_function] = STATE(6),
    [sym_boolean_function] = STATE(6),
    [sym_ceiling_function] = STATE(6),
    [sym_choose_function] = STATE(6),
    [sym_concat_function] = STATE(6),
    [sym_contains_function] = STATE(6),
    [sym_count_function] = STATE(6),
    [sym_current_function] = STATE(6),
    [sym_document_function] = STATE(6),
    [sym_element_available_function] = STATE(6),
    [sym_false_function] = STATE(6),
    [sym_floor_function] = STATE(6),
    [sym_format_number_function] = STATE(6),
    [sym_function_available_function] = STATE(6),
    [sym_generate_id_function] = STATE(6),
    [sym_id_function] = STATE(6),
    [sym_key_function] = STATE(6),
    [sym_lang_function] = STATE(6),
    [sym_last_function] = STATE(6),
    [sym_local_name_function] = STATE(6),
    [sym_name_function] = STATE(6),
    [sym_namespace_uri_function] = STATE(6),
    [sym_normalize_space_function] = STATE(6),
    [sym_not_function] = STATE(6),
    [sym_number_function] = STATE(6),
    [sym_position_function] = STATE(6),
    [sym_round_function] = STATE(6),
    [sym_starts_with_function] = STATE(6),
    [sym_string_function] = STATE(6),
    [sym_string_length_function] = STATE(6),
    [sym_substring_function] = STATE(6),
    [sym_substring_after_function] = STATE(6),
    [sym_substring_before_function] = STATE(6),
    [sym_sum_function] = STATE(6),
    [sym_system_property_function] = STATE(6),
    [sym_translate_function] = STATE(6),
    [sym_true_function] = STATE(6),
    [sym_unparsed_entity_url_function] = STATE(6),
    [sym_base64_encode] = STATE(6),
    [sym_base64_decode] = STATE(6),
    [sym_get_property] = STATE(6),
    [sym__xpath_string] = STATE(6),
    [sym_synapse_xpath_property] = STATE(6),
    [aux_sym_xpath_repeat1] = STATE(6),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_json_DASHeval_LPAREN] = ACTIONS(17),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_boolean] = ACTIONS(27),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_concat] = ACTIONS(33),
    [anon_sym_contains] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [anon_sym_current] = ACTIONS(39),
    [anon_sym_document] = ACTIONS(41),
    [anon_sym_element_DASHavailable] = ACTIONS(43),
    [anon_sym_floor] = ACTIONS(45),
    [anon_sym_format_DASHnumber] = ACTIONS(47),
    [anon_sym_function_DASHavailable] = ACTIONS(49),
    [anon_sym_generate_DASHid] = ACTIONS(51),
    [anon_sym_lang] = ACTIONS(53),
    [anon_sym_last] = ACTIONS(55),
    [anon_sym_local_DASHname] = ACTIONS(57),
    [anon_sym_namespace_DASHuri] = ACTIONS(59),
    [anon_sym_normalize_DASHspace] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_number] = ACTIONS(65),
    [anon_sym_position] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(69),
    [anon_sym_starts_DASHwith] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(73),
    [anon_sym_string_DASHlength] = ACTIONS(75),
    [anon_sym_substring] = ACTIONS(77),
    [anon_sym_substring_DASHafter] = ACTIONS(79),
    [anon_sym_substring_DASHbefore] = ACTIONS(81),
    [anon_sym_sum] = ACTIONS(83),
    [anon_sym_system_DASHproperty] = ACTIONS(85),
    [anon_sym_translate] = ACTIONS(87),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(89),
    [anon_sym_base64Encode] = ACTIONS(91),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(95),
    [anon_sym_DOLLARbody] = ACTIONS(97),
    [anon_sym_DOLLARheader] = ACTIONS(97),
    [anon_sym_DOLLARaxis2] = ACTIONS(97),
    [anon_sym_ctx] = ACTIONS(99),
    [anon_sym_DOLLARtrp] = ACTIONS(97),
    [anon_sym_DOLLARurl] = ACTIONS(97),
    [anon_sym_DOLLARfunc] = ACTIONS(97),
    [anon_sym_DOLLARenv] = ACTIONS(97),
  },
  [4] = {
    [sym_json_eval] = STATE(635),
    [sym_xpath] = STATE(635),
    [sym__xpath_selectors] = STATE(6),
    [sym__xPath_extension_functions] = STATE(6),
    [sym__xpath_function] = STATE(6),
    [sym_boolean_function] = STATE(6),
    [sym_ceiling_function] = STATE(6),
    [sym_choose_function] = STATE(6),
    [sym_concat_function] = STATE(6),
    [sym_contains_function] = STATE(6),
    [sym_count_function] = STATE(6),
    [sym_current_function] = STATE(6),
    [sym_document_function] = STATE(6),
    [sym_element_available_function] = STATE(6),
    [sym_false_function] = STATE(6),
    [sym_floor_function] = STATE(6),
    [sym_format_number_function] = STATE(6),
    [sym_function_available_function] = STATE(6),
    [sym_generate_id_function] = STATE(6),
    [sym_id_function] = STATE(6),
    [sym_key_function] = STATE(6),
    [sym_lang_function] = STATE(6),
    [sym_last_function] = STATE(6),
    [sym_local_name_function] = STATE(6),
    [sym_name_function] = STATE(6),
    [sym_namespace_uri_function] = STATE(6),
    [sym_normalize_space_function] = STATE(6),
    [sym_not_function] = STATE(6),
    [sym_number_function] = STATE(6),
    [sym_position_function] = STATE(6),
    [sym_round_function] = STATE(6),
    [sym_starts_with_function] = STATE(6),
    [sym_string_function] = STATE(6),
    [sym_string_length_function] = STATE(6),
    [sym_substring_function] = STATE(6),
    [sym_substring_after_function] = STATE(6),
    [sym_substring_before_function] = STATE(6),
    [sym_sum_function] = STATE(6),
    [sym_system_property_function] = STATE(6),
    [sym_translate_function] = STATE(6),
    [sym_true_function] = STATE(6),
    [sym_unparsed_entity_url_function] = STATE(6),
    [sym_base64_encode] = STATE(6),
    [sym_base64_decode] = STATE(6),
    [sym_get_property] = STATE(6),
    [sym__xpath_string] = STATE(6),
    [sym_synapse_xpath_property] = STATE(6),
    [aux_sym_xpath_repeat1] = STATE(6),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_json_DASHeval_LPAREN] = ACTIONS(17),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_boolean] = ACTIONS(27),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_concat] = ACTIONS(33),
    [anon_sym_contains] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [anon_sym_current] = ACTIONS(39),
    [anon_sym_document] = ACTIONS(41),
    [anon_sym_element_DASHavailable] = ACTIONS(43),
    [anon_sym_floor] = ACTIONS(45),
    [anon_sym_format_DASHnumber] = ACTIONS(47),
    [anon_sym_function_DASHavailable] = ACTIONS(49),
    [anon_sym_generate_DASHid] = ACTIONS(51),
    [anon_sym_lang] = ACTIONS(53),
    [anon_sym_last] = ACTIONS(55),
    [anon_sym_local_DASHname] = ACTIONS(57),
    [anon_sym_namespace_DASHuri] = ACTIONS(59),
    [anon_sym_normalize_DASHspace] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_number] = ACTIONS(65),
    [anon_sym_position] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(69),
    [anon_sym_starts_DASHwith] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(73),
    [anon_sym_string_DASHlength] = ACTIONS(75),
    [anon_sym_substring] = ACTIONS(77),
    [anon_sym_substring_DASHafter] = ACTIONS(79),
    [anon_sym_substring_DASHbefore] = ACTIONS(81),
    [anon_sym_sum] = ACTIONS(83),
    [anon_sym_system_DASHproperty] = ACTIONS(85),
    [anon_sym_translate] = ACTIONS(87),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(89),
    [anon_sym_base64Encode] = ACTIONS(91),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(95),
    [anon_sym_DOLLARbody] = ACTIONS(97),
    [anon_sym_DOLLARheader] = ACTIONS(97),
    [anon_sym_DOLLARaxis2] = ACTIONS(97),
    [anon_sym_ctx] = ACTIONS(99),
    [anon_sym_DOLLARtrp] = ACTIONS(97),
    [anon_sym_DOLLARurl] = ACTIONS(97),
    [anon_sym_DOLLARfunc] = ACTIONS(97),
    [anon_sym_DOLLARenv] = ACTIONS(97),
  },
  [5] = {
    [sym__xpath_selectors] = STATE(5),
    [sym__xPath_extension_functions] = STATE(5),
    [sym__xpath_function] = STATE(5),
    [sym_boolean_function] = STATE(5),
    [sym_ceiling_function] = STATE(5),
    [sym_choose_function] = STATE(5),
    [sym_concat_function] = STATE(5),
    [sym_contains_function] = STATE(5),
    [sym_count_function] = STATE(5),
    [sym_current_function] = STATE(5),
    [sym_document_function] = STATE(5),
    [sym_element_available_function] = STATE(5),
    [sym_false_function] = STATE(5),
    [sym_floor_function] = STATE(5),
    [sym_format_number_function] = STATE(5),
    [sym_function_available_function] = STATE(5),
    [sym_generate_id_function] = STATE(5),
    [sym_id_function] = STATE(5),
    [sym_key_function] = STATE(5),
    [sym_lang_function] = STATE(5),
    [sym_last_function] = STATE(5),
    [sym_local_name_function] = STATE(5),
    [sym_name_function] = STATE(5),
    [sym_namespace_uri_function] = STATE(5),
    [sym_normalize_space_function] = STATE(5),
    [sym_not_function] = STATE(5),
    [sym_number_function] = STATE(5),
    [sym_position_function] = STATE(5),
    [sym_round_function] = STATE(5),
    [sym_starts_with_function] = STATE(5),
    [sym_string_function] = STATE(5),
    [sym_string_length_function] = STATE(5),
    [sym_substring_function] = STATE(5),
    [sym_substring_after_function] = STATE(5),
    [sym_substring_before_function] = STATE(5),
    [sym_sum_function] = STATE(5),
    [sym_system_property_function] = STATE(5),
    [sym_translate_function] = STATE(5),
    [sym_true_function] = STATE(5),
    [sym_unparsed_entity_url_function] = STATE(5),
    [sym_base64_encode] = STATE(5),
    [sym_base64_decode] = STATE(5),
    [sym_get_property] = STATE(5),
    [sym__xpath_string] = STATE(5),
    [sym_synapse_xpath_property] = STATE(5),
    [aux_sym_xpath_repeat1] = STATE(5),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [anon_sym_key] = ACTIONS(103),
    [anon_sym_true] = ACTIONS(106),
    [anon_sym_false] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(101),
    [anon_sym_name] = ACTIONS(112),
    [anon_sym_id] = ACTIONS(115),
    [aux_sym_identifier_token1] = ACTIONS(118),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(118),
    [anon_sym_SLASH] = ACTIONS(118),
    [anon_sym_SLASH_SLASH] = ACTIONS(121),
    [anon_sym_DOT_DOT] = ACTIONS(121),
    [anon_sym_DOT] = ACTIONS(118),
    [anon_sym_AT] = ACTIONS(121),
    [anon_sym_boolean] = ACTIONS(124),
    [anon_sym_ceiling] = ACTIONS(127),
    [anon_sym_choose] = ACTIONS(130),
    [anon_sym_concat] = ACTIONS(133),
    [anon_sym_contains] = ACTIONS(136),
    [anon_sym_count] = ACTIONS(139),
    [anon_sym_current] = ACTIONS(142),
    [anon_sym_document] = ACTIONS(145),
    [anon_sym_element_DASHavailable] = ACTIONS(148),
    [anon_sym_floor] = ACTIONS(151),
    [anon_sym_format_DASHnumber] = ACTIONS(154),
    [anon_sym_function_DASHavailable] = ACTIONS(157),
    [anon_sym_generate_DASHid] = ACTIONS(160),
    [anon_sym_lang] = ACTIONS(163),
    [anon_sym_last] = ACTIONS(166),
    [anon_sym_local_DASHname] = ACTIONS(169),
    [anon_sym_namespace_DASHuri] = ACTIONS(172),
    [anon_sym_normalize_DASHspace] = ACTIONS(175),
    [anon_sym_not] = ACTIONS(178),
    [anon_sym_number] = ACTIONS(181),
    [anon_sym_position] = ACTIONS(184),
    [anon_sym_round] = ACTIONS(187),
    [anon_sym_starts_DASHwith] = ACTIONS(190),
    [anon_sym_string] = ACTIONS(193),
    [anon_sym_string_DASHlength] = ACTIONS(196),
    [anon_sym_substring] = ACTIONS(199),
    [anon_sym_substring_DASHafter] = ACTIONS(202),
    [anon_sym_substring_DASHbefore] = ACTIONS(205),
    [anon_sym_sum] = ACTIONS(208),
    [anon_sym_system_DASHproperty] = ACTIONS(211),
    [anon_sym_translate] = ACTIONS(214),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(217),
    [anon_sym_base64Encode] = ACTIONS(220),
    [anon_sym_base64Decode] = ACTIONS(223),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(226),
    [anon_sym_DOLLARbody] = ACTIONS(229),
    [anon_sym_DOLLARheader] = ACTIONS(229),
    [anon_sym_DOLLARaxis2] = ACTIONS(229),
    [anon_sym_ctx] = ACTIONS(232),
    [anon_sym_DOLLARtrp] = ACTIONS(229),
    [anon_sym_DOLLARurl] = ACTIONS(229),
    [anon_sym_DOLLARfunc] = ACTIONS(229),
    [anon_sym_DOLLARenv] = ACTIONS(229),
  },
  [6] = {
    [sym__xpath_selectors] = STATE(5),
    [sym__xPath_extension_functions] = STATE(5),
    [sym__xpath_function] = STATE(5),
    [sym_boolean_function] = STATE(5),
    [sym_ceiling_function] = STATE(5),
    [sym_choose_function] = STATE(5),
    [sym_concat_function] = STATE(5),
    [sym_contains_function] = STATE(5),
    [sym_count_function] = STATE(5),
    [sym_current_function] = STATE(5),
    [sym_document_function] = STATE(5),
    [sym_element_available_function] = STATE(5),
    [sym_false_function] = STATE(5),
    [sym_floor_function] = STATE(5),
    [sym_format_number_function] = STATE(5),
    [sym_function_available_function] = STATE(5),
    [sym_generate_id_function] = STATE(5),
    [sym_id_function] = STATE(5),
    [sym_key_function] = STATE(5),
    [sym_lang_function] = STATE(5),
    [sym_last_function] = STATE(5),
    [sym_local_name_function] = STATE(5),
    [sym_name_function] = STATE(5),
    [sym_namespace_uri_function] = STATE(5),
    [sym_normalize_space_function] = STATE(5),
    [sym_not_function] = STATE(5),
    [sym_number_function] = STATE(5),
    [sym_position_function] = STATE(5),
    [sym_round_function] = STATE(5),
    [sym_starts_with_function] = STATE(5),
    [sym_string_function] = STATE(5),
    [sym_string_length_function] = STATE(5),
    [sym_substring_function] = STATE(5),
    [sym_substring_after_function] = STATE(5),
    [sym_substring_before_function] = STATE(5),
    [sym_sum_function] = STATE(5),
    [sym_system_property_function] = STATE(5),
    [sym_translate_function] = STATE(5),
    [sym_true_function] = STATE(5),
    [sym_unparsed_entity_url_function] = STATE(5),
    [sym_base64_encode] = STATE(5),
    [sym_base64_decode] = STATE(5),
    [sym_get_property] = STATE(5),
    [sym__xpath_string] = STATE(5),
    [sym_synapse_xpath_property] = STATE(5),
    [aux_sym_xpath_repeat1] = STATE(5),
    [anon_sym_DQUOTE] = ACTIONS(235),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(235),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(237),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(237),
    [anon_sym_SLASH] = ACTIONS(237),
    [anon_sym_SLASH_SLASH] = ACTIONS(239),
    [anon_sym_DOT_DOT] = ACTIONS(239),
    [anon_sym_DOT] = ACTIONS(237),
    [anon_sym_AT] = ACTIONS(239),
    [anon_sym_boolean] = ACTIONS(27),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_concat] = ACTIONS(33),
    [anon_sym_contains] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [anon_sym_current] = ACTIONS(39),
    [anon_sym_document] = ACTIONS(41),
    [anon_sym_element_DASHavailable] = ACTIONS(43),
    [anon_sym_floor] = ACTIONS(45),
    [anon_sym_format_DASHnumber] = ACTIONS(47),
    [anon_sym_function_DASHavailable] = ACTIONS(49),
    [anon_sym_generate_DASHid] = ACTIONS(51),
    [anon_sym_lang] = ACTIONS(53),
    [anon_sym_last] = ACTIONS(55),
    [anon_sym_local_DASHname] = ACTIONS(57),
    [anon_sym_namespace_DASHuri] = ACTIONS(59),
    [anon_sym_normalize_DASHspace] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_number] = ACTIONS(65),
    [anon_sym_position] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(69),
    [anon_sym_starts_DASHwith] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(73),
    [anon_sym_string_DASHlength] = ACTIONS(75),
    [anon_sym_substring] = ACTIONS(77),
    [anon_sym_substring_DASHafter] = ACTIONS(79),
    [anon_sym_substring_DASHbefore] = ACTIONS(81),
    [anon_sym_sum] = ACTIONS(83),
    [anon_sym_system_DASHproperty] = ACTIONS(85),
    [anon_sym_translate] = ACTIONS(87),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(89),
    [anon_sym_base64Encode] = ACTIONS(91),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(95),
    [anon_sym_DOLLARbody] = ACTIONS(97),
    [anon_sym_DOLLARheader] = ACTIONS(97),
    [anon_sym_DOLLARaxis2] = ACTIONS(97),
    [anon_sym_ctx] = ACTIONS(99),
    [anon_sym_DOLLARtrp] = ACTIONS(97),
    [anon_sym_DOLLARurl] = ACTIONS(97),
    [anon_sym_DOLLARfunc] = ACTIONS(97),
    [anon_sym_DOLLARenv] = ACTIONS(97),
  },
  [7] = {
    [sym_xpath] = STATE(434),
    [sym__xpath_selectors] = STATE(6),
    [sym__xPath_extension_functions] = STATE(6),
    [sym__xpath_function] = STATE(6),
    [sym_boolean_function] = STATE(6),
    [sym_ceiling_function] = STATE(6),
    [sym_choose_function] = STATE(6),
    [sym_concat_function] = STATE(6),
    [sym_contains_function] = STATE(6),
    [sym_count_function] = STATE(6),
    [sym_current_function] = STATE(6),
    [sym_document_function] = STATE(6),
    [sym_element_available_function] = STATE(6),
    [sym_false_function] = STATE(6),
    [sym_floor_function] = STATE(6),
    [sym_format_number_function] = STATE(6),
    [sym_function_available_function] = STATE(6),
    [sym_generate_id_function] = STATE(6),
    [sym_id_function] = STATE(6),
    [sym_key_function] = STATE(6),
    [sym_lang_function] = STATE(6),
    [sym_last_function] = STATE(6),
    [sym_local_name_function] = STATE(6),
    [sym_name_function] = STATE(6),
    [sym_namespace_uri_function] = STATE(6),
    [sym_normalize_space_function] = STATE(6),
    [sym_not_function] = STATE(6),
    [sym_number_function] = STATE(6),
    [sym_position_function] = STATE(6),
    [sym_round_function] = STATE(6),
    [sym_starts_with_function] = STATE(6),
    [sym_string_function] = STATE(6),
    [sym_string_length_function] = STATE(6),
    [sym_substring_function] = STATE(6),
    [sym_substring_after_function] = STATE(6),
    [sym_substring_before_function] = STATE(6),
    [sym_sum_function] = STATE(6),
    [sym_system_property_function] = STATE(6),
    [sym_translate_function] = STATE(6),
    [sym_true_function] = STATE(6),
    [sym_unparsed_entity_url_function] = STATE(6),
    [sym_base64_encode] = STATE(6),
    [sym_base64_decode] = STATE(6),
    [sym_get_property] = STATE(6),
    [sym__xpath_string] = STATE(6),
    [sym_synapse_xpath_property] = STATE(6),
    [aux_sym_xpath_repeat1] = STATE(6),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_boolean] = ACTIONS(27),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_concat] = ACTIONS(33),
    [anon_sym_contains] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [anon_sym_current] = ACTIONS(39),
    [anon_sym_document] = ACTIONS(41),
    [anon_sym_element_DASHavailable] = ACTIONS(43),
    [anon_sym_floor] = ACTIONS(45),
    [anon_sym_format_DASHnumber] = ACTIONS(47),
    [anon_sym_function_DASHavailable] = ACTIONS(49),
    [anon_sym_generate_DASHid] = ACTIONS(51),
    [anon_sym_lang] = ACTIONS(53),
    [anon_sym_last] = ACTIONS(55),
    [anon_sym_local_DASHname] = ACTIONS(57),
    [anon_sym_namespace_DASHuri] = ACTIONS(59),
    [anon_sym_normalize_DASHspace] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_number] = ACTIONS(65),
    [anon_sym_position] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(69),
    [anon_sym_starts_DASHwith] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(73),
    [anon_sym_string_DASHlength] = ACTIONS(75),
    [anon_sym_substring] = ACTIONS(77),
    [anon_sym_substring_DASHafter] = ACTIONS(79),
    [anon_sym_substring_DASHbefore] = ACTIONS(81),
    [anon_sym_sum] = ACTIONS(83),
    [anon_sym_system_DASHproperty] = ACTIONS(85),
    [anon_sym_translate] = ACTIONS(87),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(89),
    [anon_sym_base64Encode] = ACTIONS(91),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(95),
    [anon_sym_DOLLARbody] = ACTIONS(97),
    [anon_sym_DOLLARheader] = ACTIONS(97),
    [anon_sym_DOLLARaxis2] = ACTIONS(97),
    [anon_sym_ctx] = ACTIONS(99),
    [anon_sym_DOLLARtrp] = ACTIONS(97),
    [anon_sym_DOLLARurl] = ACTIONS(97),
    [anon_sym_DOLLARfunc] = ACTIONS(97),
    [anon_sym_DOLLARenv] = ACTIONS(97),
  },
  [8] = {
    [sym_xpath] = STATE(430),
    [sym__xpath_selectors] = STATE(6),
    [sym__xPath_extension_functions] = STATE(6),
    [sym__xpath_function] = STATE(6),
    [sym_boolean_function] = STATE(6),
    [sym_ceiling_function] = STATE(6),
    [sym_choose_function] = STATE(6),
    [sym_concat_function] = STATE(6),
    [sym_contains_function] = STATE(6),
    [sym_count_function] = STATE(6),
    [sym_current_function] = STATE(6),
    [sym_document_function] = STATE(6),
    [sym_element_available_function] = STATE(6),
    [sym_false_function] = STATE(6),
    [sym_floor_function] = STATE(6),
    [sym_format_number_function] = STATE(6),
    [sym_function_available_function] = STATE(6),
    [sym_generate_id_function] = STATE(6),
    [sym_id_function] = STATE(6),
    [sym_key_function] = STATE(6),
    [sym_lang_function] = STATE(6),
    [sym_last_function] = STATE(6),
    [sym_local_name_function] = STATE(6),
    [sym_name_function] = STATE(6),
    [sym_namespace_uri_function] = STATE(6),
    [sym_normalize_space_function] = STATE(6),
    [sym_not_function] = STATE(6),
    [sym_number_function] = STATE(6),
    [sym_position_function] = STATE(6),
    [sym_round_function] = STATE(6),
    [sym_starts_with_function] = STATE(6),
    [sym_string_function] = STATE(6),
    [sym_string_length_function] = STATE(6),
    [sym_substring_function] = STATE(6),
    [sym_substring_after_function] = STATE(6),
    [sym_substring_before_function] = STATE(6),
    [sym_sum_function] = STATE(6),
    [sym_system_property_function] = STATE(6),
    [sym_translate_function] = STATE(6),
    [sym_true_function] = STATE(6),
    [sym_unparsed_entity_url_function] = STATE(6),
    [sym_base64_encode] = STATE(6),
    [sym_base64_decode] = STATE(6),
    [sym_get_property] = STATE(6),
    [sym__xpath_string] = STATE(6),
    [sym_synapse_xpath_property] = STATE(6),
    [aux_sym_xpath_repeat1] = STATE(6),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_boolean] = ACTIONS(27),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_concat] = ACTIONS(33),
    [anon_sym_contains] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [anon_sym_current] = ACTIONS(39),
    [anon_sym_document] = ACTIONS(41),
    [anon_sym_element_DASHavailable] = ACTIONS(43),
    [anon_sym_floor] = ACTIONS(45),
    [anon_sym_format_DASHnumber] = ACTIONS(47),
    [anon_sym_function_DASHavailable] = ACTIONS(49),
    [anon_sym_generate_DASHid] = ACTIONS(51),
    [anon_sym_lang] = ACTIONS(53),
    [anon_sym_last] = ACTIONS(55),
    [anon_sym_local_DASHname] = ACTIONS(57),
    [anon_sym_namespace_DASHuri] = ACTIONS(59),
    [anon_sym_normalize_DASHspace] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_number] = ACTIONS(65),
    [anon_sym_position] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(69),
    [anon_sym_starts_DASHwith] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(73),
    [anon_sym_string_DASHlength] = ACTIONS(75),
    [anon_sym_substring] = ACTIONS(77),
    [anon_sym_substring_DASHafter] = ACTIONS(79),
    [anon_sym_substring_DASHbefore] = ACTIONS(81),
    [anon_sym_sum] = ACTIONS(83),
    [anon_sym_system_DASHproperty] = ACTIONS(85),
    [anon_sym_translate] = ACTIONS(87),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(89),
    [anon_sym_base64Encode] = ACTIONS(91),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(95),
    [anon_sym_DOLLARbody] = ACTIONS(97),
    [anon_sym_DOLLARheader] = ACTIONS(97),
    [anon_sym_DOLLARaxis2] = ACTIONS(97),
    [anon_sym_ctx] = ACTIONS(99),
    [anon_sym_DOLLARtrp] = ACTIONS(97),
    [anon_sym_DOLLARurl] = ACTIONS(97),
    [anon_sym_DOLLARfunc] = ACTIONS(97),
    [anon_sym_DOLLARenv] = ACTIONS(97),
  },
  [9] = {
    [sym_xpath] = STATE(448),
    [sym__xpath_selectors] = STATE(6),
    [sym__xPath_extension_functions] = STATE(6),
    [sym__xpath_function] = STATE(6),
    [sym_boolean_function] = STATE(6),
    [sym_ceiling_function] = STATE(6),
    [sym_choose_function] = STATE(6),
    [sym_concat_function] = STATE(6),
    [sym_contains_function] = STATE(6),
    [sym_count_function] = STATE(6),
    [sym_current_function] = STATE(6),
    [sym_document_function] = STATE(6),
    [sym_element_available_function] = STATE(6),
    [sym_false_function] = STATE(6),
    [sym_floor_function] = STATE(6),
    [sym_format_number_function] = STATE(6),
    [sym_function_available_function] = STATE(6),
    [sym_generate_id_function] = STATE(6),
    [sym_id_function] = STATE(6),
    [sym_key_function] = STATE(6),
    [sym_lang_function] = STATE(6),
    [sym_last_function] = STATE(6),
    [sym_local_name_function] = STATE(6),
    [sym_name_function] = STATE(6),
    [sym_namespace_uri_function] = STATE(6),
    [sym_normalize_space_function] = STATE(6),
    [sym_not_function] = STATE(6),
    [sym_number_function] = STATE(6),
    [sym_position_function] = STATE(6),
    [sym_round_function] = STATE(6),
    [sym_starts_with_function] = STATE(6),
    [sym_string_function] = STATE(6),
    [sym_string_length_function] = STATE(6),
    [sym_substring_function] = STATE(6),
    [sym_substring_after_function] = STATE(6),
    [sym_substring_before_function] = STATE(6),
    [sym_sum_function] = STATE(6),
    [sym_system_property_function] = STATE(6),
    [sym_translate_function] = STATE(6),
    [sym_true_function] = STATE(6),
    [sym_unparsed_entity_url_function] = STATE(6),
    [sym_base64_encode] = STATE(6),
    [sym_base64_decode] = STATE(6),
    [sym_get_property] = STATE(6),
    [sym__xpath_string] = STATE(6),
    [sym_synapse_xpath_property] = STATE(6),
    [aux_sym_xpath_repeat1] = STATE(6),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_boolean] = ACTIONS(27),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_concat] = ACTIONS(33),
    [anon_sym_contains] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [anon_sym_current] = ACTIONS(39),
    [anon_sym_document] = ACTIONS(41),
    [anon_sym_element_DASHavailable] = ACTIONS(43),
    [anon_sym_floor] = ACTIONS(45),
    [anon_sym_format_DASHnumber] = ACTIONS(47),
    [anon_sym_function_DASHavailable] = ACTIONS(49),
    [anon_sym_generate_DASHid] = ACTIONS(51),
    [anon_sym_lang] = ACTIONS(53),
    [anon_sym_last] = ACTIONS(55),
    [anon_sym_local_DASHname] = ACTIONS(57),
    [anon_sym_namespace_DASHuri] = ACTIONS(59),
    [anon_sym_normalize_DASHspace] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_number] = ACTIONS(65),
    [anon_sym_position] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(69),
    [anon_sym_starts_DASHwith] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(73),
    [anon_sym_string_DASHlength] = ACTIONS(75),
    [anon_sym_substring] = ACTIONS(77),
    [anon_sym_substring_DASHafter] = ACTIONS(79),
    [anon_sym_substring_DASHbefore] = ACTIONS(81),
    [anon_sym_sum] = ACTIONS(83),
    [anon_sym_system_DASHproperty] = ACTIONS(85),
    [anon_sym_translate] = ACTIONS(87),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(89),
    [anon_sym_base64Encode] = ACTIONS(91),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(95),
    [anon_sym_DOLLARbody] = ACTIONS(97),
    [anon_sym_DOLLARheader] = ACTIONS(97),
    [anon_sym_DOLLARaxis2] = ACTIONS(97),
    [anon_sym_ctx] = ACTIONS(99),
    [anon_sym_DOLLARtrp] = ACTIONS(97),
    [anon_sym_DOLLARurl] = ACTIONS(97),
    [anon_sym_DOLLARfunc] = ACTIONS(97),
    [anon_sym_DOLLARenv] = ACTIONS(97),
  },
  [10] = {
    [sym_xpath] = STATE(447),
    [sym__xpath_selectors] = STATE(6),
    [sym__xPath_extension_functions] = STATE(6),
    [sym__xpath_function] = STATE(6),
    [sym_boolean_function] = STATE(6),
    [sym_ceiling_function] = STATE(6),
    [sym_choose_function] = STATE(6),
    [sym_concat_function] = STATE(6),
    [sym_contains_function] = STATE(6),
    [sym_count_function] = STATE(6),
    [sym_current_function] = STATE(6),
    [sym_document_function] = STATE(6),
    [sym_element_available_function] = STATE(6),
    [sym_false_function] = STATE(6),
    [sym_floor_function] = STATE(6),
    [sym_format_number_function] = STATE(6),
    [sym_function_available_function] = STATE(6),
    [sym_generate_id_function] = STATE(6),
    [sym_id_function] = STATE(6),
    [sym_key_function] = STATE(6),
    [sym_lang_function] = STATE(6),
    [sym_last_function] = STATE(6),
    [sym_local_name_function] = STATE(6),
    [sym_name_function] = STATE(6),
    [sym_namespace_uri_function] = STATE(6),
    [sym_normalize_space_function] = STATE(6),
    [sym_not_function] = STATE(6),
    [sym_number_function] = STATE(6),
    [sym_position_function] = STATE(6),
    [sym_round_function] = STATE(6),
    [sym_starts_with_function] = STATE(6),
    [sym_string_function] = STATE(6),
    [sym_string_length_function] = STATE(6),
    [sym_substring_function] = STATE(6),
    [sym_substring_after_function] = STATE(6),
    [sym_substring_before_function] = STATE(6),
    [sym_sum_function] = STATE(6),
    [sym_system_property_function] = STATE(6),
    [sym_translate_function] = STATE(6),
    [sym_true_function] = STATE(6),
    [sym_unparsed_entity_url_function] = STATE(6),
    [sym_base64_encode] = STATE(6),
    [sym_base64_decode] = STATE(6),
    [sym_get_property] = STATE(6),
    [sym__xpath_string] = STATE(6),
    [sym_synapse_xpath_property] = STATE(6),
    [aux_sym_xpath_repeat1] = STATE(6),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_boolean] = ACTIONS(27),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_concat] = ACTIONS(33),
    [anon_sym_contains] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [anon_sym_current] = ACTIONS(39),
    [anon_sym_document] = ACTIONS(41),
    [anon_sym_element_DASHavailable] = ACTIONS(43),
    [anon_sym_floor] = ACTIONS(45),
    [anon_sym_format_DASHnumber] = ACTIONS(47),
    [anon_sym_function_DASHavailable] = ACTIONS(49),
    [anon_sym_generate_DASHid] = ACTIONS(51),
    [anon_sym_lang] = ACTIONS(53),
    [anon_sym_last] = ACTIONS(55),
    [anon_sym_local_DASHname] = ACTIONS(57),
    [anon_sym_namespace_DASHuri] = ACTIONS(59),
    [anon_sym_normalize_DASHspace] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_number] = ACTIONS(65),
    [anon_sym_position] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(69),
    [anon_sym_starts_DASHwith] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(73),
    [anon_sym_string_DASHlength] = ACTIONS(75),
    [anon_sym_substring] = ACTIONS(77),
    [anon_sym_substring_DASHafter] = ACTIONS(79),
    [anon_sym_substring_DASHbefore] = ACTIONS(81),
    [anon_sym_sum] = ACTIONS(83),
    [anon_sym_system_DASHproperty] = ACTIONS(85),
    [anon_sym_translate] = ACTIONS(87),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(89),
    [anon_sym_base64Encode] = ACTIONS(91),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(95),
    [anon_sym_DOLLARbody] = ACTIONS(97),
    [anon_sym_DOLLARheader] = ACTIONS(97),
    [anon_sym_DOLLARaxis2] = ACTIONS(97),
    [anon_sym_ctx] = ACTIONS(99),
    [anon_sym_DOLLARtrp] = ACTIONS(97),
    [anon_sym_DOLLARurl] = ACTIONS(97),
    [anon_sym_DOLLARfunc] = ACTIONS(97),
    [anon_sym_DOLLARenv] = ACTIONS(97),
  },
  [11] = {
    [sym_xpath] = STATE(446),
    [sym__xpath_selectors] = STATE(6),
    [sym__xPath_extension_functions] = STATE(6),
    [sym__xpath_function] = STATE(6),
    [sym_boolean_function] = STATE(6),
    [sym_ceiling_function] = STATE(6),
    [sym_choose_function] = STATE(6),
    [sym_concat_function] = STATE(6),
    [sym_contains_function] = STATE(6),
    [sym_count_function] = STATE(6),
    [sym_current_function] = STATE(6),
    [sym_document_function] = STATE(6),
    [sym_element_available_function] = STATE(6),
    [sym_false_function] = STATE(6),
    [sym_floor_function] = STATE(6),
    [sym_format_number_function] = STATE(6),
    [sym_function_available_function] = STATE(6),
    [sym_generate_id_function] = STATE(6),
    [sym_id_function] = STATE(6),
    [sym_key_function] = STATE(6),
    [sym_lang_function] = STATE(6),
    [sym_last_function] = STATE(6),
    [sym_local_name_function] = STATE(6),
    [sym_name_function] = STATE(6),
    [sym_namespace_uri_function] = STATE(6),
    [sym_normalize_space_function] = STATE(6),
    [sym_not_function] = STATE(6),
    [sym_number_function] = STATE(6),
    [sym_position_function] = STATE(6),
    [sym_round_function] = STATE(6),
    [sym_starts_with_function] = STATE(6),
    [sym_string_function] = STATE(6),
    [sym_string_length_function] = STATE(6),
    [sym_substring_function] = STATE(6),
    [sym_substring_after_function] = STATE(6),
    [sym_substring_before_function] = STATE(6),
    [sym_sum_function] = STATE(6),
    [sym_system_property_function] = STATE(6),
    [sym_translate_function] = STATE(6),
    [sym_true_function] = STATE(6),
    [sym_unparsed_entity_url_function] = STATE(6),
    [sym_base64_encode] = STATE(6),
    [sym_base64_decode] = STATE(6),
    [sym_get_property] = STATE(6),
    [sym__xpath_string] = STATE(6),
    [sym_synapse_xpath_property] = STATE(6),
    [aux_sym_xpath_repeat1] = STATE(6),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_boolean] = ACTIONS(27),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_concat] = ACTIONS(33),
    [anon_sym_contains] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [anon_sym_current] = ACTIONS(39),
    [anon_sym_document] = ACTIONS(41),
    [anon_sym_element_DASHavailable] = ACTIONS(43),
    [anon_sym_floor] = ACTIONS(45),
    [anon_sym_format_DASHnumber] = ACTIONS(47),
    [anon_sym_function_DASHavailable] = ACTIONS(49),
    [anon_sym_generate_DASHid] = ACTIONS(51),
    [anon_sym_lang] = ACTIONS(53),
    [anon_sym_last] = ACTIONS(55),
    [anon_sym_local_DASHname] = ACTIONS(57),
    [anon_sym_namespace_DASHuri] = ACTIONS(59),
    [anon_sym_normalize_DASHspace] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_number] = ACTIONS(65),
    [anon_sym_position] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(69),
    [anon_sym_starts_DASHwith] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(73),
    [anon_sym_string_DASHlength] = ACTIONS(75),
    [anon_sym_substring] = ACTIONS(77),
    [anon_sym_substring_DASHafter] = ACTIONS(79),
    [anon_sym_substring_DASHbefore] = ACTIONS(81),
    [anon_sym_sum] = ACTIONS(83),
    [anon_sym_system_DASHproperty] = ACTIONS(85),
    [anon_sym_translate] = ACTIONS(87),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(89),
    [anon_sym_base64Encode] = ACTIONS(91),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(95),
    [anon_sym_DOLLARbody] = ACTIONS(97),
    [anon_sym_DOLLARheader] = ACTIONS(97),
    [anon_sym_DOLLARaxis2] = ACTIONS(97),
    [anon_sym_ctx] = ACTIONS(99),
    [anon_sym_DOLLARtrp] = ACTIONS(97),
    [anon_sym_DOLLARurl] = ACTIONS(97),
    [anon_sym_DOLLARfunc] = ACTIONS(97),
    [anon_sym_DOLLARenv] = ACTIONS(97),
  },
  [12] = {
    [sym_xpath] = STATE(445),
    [sym__xpath_selectors] = STATE(6),
    [sym__xPath_extension_functions] = STATE(6),
    [sym__xpath_function] = STATE(6),
    [sym_boolean_function] = STATE(6),
    [sym_ceiling_function] = STATE(6),
    [sym_choose_function] = STATE(6),
    [sym_concat_function] = STATE(6),
    [sym_contains_function] = STATE(6),
    [sym_count_function] = STATE(6),
    [sym_current_function] = STATE(6),
    [sym_document_function] = STATE(6),
    [sym_element_available_function] = STATE(6),
    [sym_false_function] = STATE(6),
    [sym_floor_function] = STATE(6),
    [sym_format_number_function] = STATE(6),
    [sym_function_available_function] = STATE(6),
    [sym_generate_id_function] = STATE(6),
    [sym_id_function] = STATE(6),
    [sym_key_function] = STATE(6),
    [sym_lang_function] = STATE(6),
    [sym_last_function] = STATE(6),
    [sym_local_name_function] = STATE(6),
    [sym_name_function] = STATE(6),
    [sym_namespace_uri_function] = STATE(6),
    [sym_normalize_space_function] = STATE(6),
    [sym_not_function] = STATE(6),
    [sym_number_function] = STATE(6),
    [sym_position_function] = STATE(6),
    [sym_round_function] = STATE(6),
    [sym_starts_with_function] = STATE(6),
    [sym_string_function] = STATE(6),
    [sym_string_length_function] = STATE(6),
    [sym_substring_function] = STATE(6),
    [sym_substring_after_function] = STATE(6),
    [sym_substring_before_function] = STATE(6),
    [sym_sum_function] = STATE(6),
    [sym_system_property_function] = STATE(6),
    [sym_translate_function] = STATE(6),
    [sym_true_function] = STATE(6),
    [sym_unparsed_entity_url_function] = STATE(6),
    [sym_base64_encode] = STATE(6),
    [sym_base64_decode] = STATE(6),
    [sym_get_property] = STATE(6),
    [sym__xpath_string] = STATE(6),
    [sym_synapse_xpath_property] = STATE(6),
    [aux_sym_xpath_repeat1] = STATE(6),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_boolean] = ACTIONS(27),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_concat] = ACTIONS(33),
    [anon_sym_contains] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [anon_sym_current] = ACTIONS(39),
    [anon_sym_document] = ACTIONS(41),
    [anon_sym_element_DASHavailable] = ACTIONS(43),
    [anon_sym_floor] = ACTIONS(45),
    [anon_sym_format_DASHnumber] = ACTIONS(47),
    [anon_sym_function_DASHavailable] = ACTIONS(49),
    [anon_sym_generate_DASHid] = ACTIONS(51),
    [anon_sym_lang] = ACTIONS(53),
    [anon_sym_last] = ACTIONS(55),
    [anon_sym_local_DASHname] = ACTIONS(57),
    [anon_sym_namespace_DASHuri] = ACTIONS(59),
    [anon_sym_normalize_DASHspace] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_number] = ACTIONS(65),
    [anon_sym_position] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(69),
    [anon_sym_starts_DASHwith] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(73),
    [anon_sym_string_DASHlength] = ACTIONS(75),
    [anon_sym_substring] = ACTIONS(77),
    [anon_sym_substring_DASHafter] = ACTIONS(79),
    [anon_sym_substring_DASHbefore] = ACTIONS(81),
    [anon_sym_sum] = ACTIONS(83),
    [anon_sym_system_DASHproperty] = ACTIONS(85),
    [anon_sym_translate] = ACTIONS(87),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(89),
    [anon_sym_base64Encode] = ACTIONS(91),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(95),
    [anon_sym_DOLLARbody] = ACTIONS(97),
    [anon_sym_DOLLARheader] = ACTIONS(97),
    [anon_sym_DOLLARaxis2] = ACTIONS(97),
    [anon_sym_ctx] = ACTIONS(99),
    [anon_sym_DOLLARtrp] = ACTIONS(97),
    [anon_sym_DOLLARurl] = ACTIONS(97),
    [anon_sym_DOLLARfunc] = ACTIONS(97),
    [anon_sym_DOLLARenv] = ACTIONS(97),
  },
  [13] = {
    [sym_xpath] = STATE(444),
    [sym__xpath_selectors] = STATE(6),
    [sym__xPath_extension_functions] = STATE(6),
    [sym__xpath_function] = STATE(6),
    [sym_boolean_function] = STATE(6),
    [sym_ceiling_function] = STATE(6),
    [sym_choose_function] = STATE(6),
    [sym_concat_function] = STATE(6),
    [sym_contains_function] = STATE(6),
    [sym_count_function] = STATE(6),
    [sym_current_function] = STATE(6),
    [sym_document_function] = STATE(6),
    [sym_element_available_function] = STATE(6),
    [sym_false_function] = STATE(6),
    [sym_floor_function] = STATE(6),
    [sym_format_number_function] = STATE(6),
    [sym_function_available_function] = STATE(6),
    [sym_generate_id_function] = STATE(6),
    [sym_id_function] = STATE(6),
    [sym_key_function] = STATE(6),
    [sym_lang_function] = STATE(6),
    [sym_last_function] = STATE(6),
    [sym_local_name_function] = STATE(6),
    [sym_name_function] = STATE(6),
    [sym_namespace_uri_function] = STATE(6),
    [sym_normalize_space_function] = STATE(6),
    [sym_not_function] = STATE(6),
    [sym_number_function] = STATE(6),
    [sym_position_function] = STATE(6),
    [sym_round_function] = STATE(6),
    [sym_starts_with_function] = STATE(6),
    [sym_string_function] = STATE(6),
    [sym_string_length_function] = STATE(6),
    [sym_substring_function] = STATE(6),
    [sym_substring_after_function] = STATE(6),
    [sym_substring_before_function] = STATE(6),
    [sym_sum_function] = STATE(6),
    [sym_system_property_function] = STATE(6),
    [sym_translate_function] = STATE(6),
    [sym_true_function] = STATE(6),
    [sym_unparsed_entity_url_function] = STATE(6),
    [sym_base64_encode] = STATE(6),
    [sym_base64_decode] = STATE(6),
    [sym_get_property] = STATE(6),
    [sym__xpath_string] = STATE(6),
    [sym_synapse_xpath_property] = STATE(6),
    [aux_sym_xpath_repeat1] = STATE(6),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_boolean] = ACTIONS(27),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_concat] = ACTIONS(33),
    [anon_sym_contains] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [anon_sym_current] = ACTIONS(39),
    [anon_sym_document] = ACTIONS(41),
    [anon_sym_element_DASHavailable] = ACTIONS(43),
    [anon_sym_floor] = ACTIONS(45),
    [anon_sym_format_DASHnumber] = ACTIONS(47),
    [anon_sym_function_DASHavailable] = ACTIONS(49),
    [anon_sym_generate_DASHid] = ACTIONS(51),
    [anon_sym_lang] = ACTIONS(53),
    [anon_sym_last] = ACTIONS(55),
    [anon_sym_local_DASHname] = ACTIONS(57),
    [anon_sym_namespace_DASHuri] = ACTIONS(59),
    [anon_sym_normalize_DASHspace] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_number] = ACTIONS(65),
    [anon_sym_position] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(69),
    [anon_sym_starts_DASHwith] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(73),
    [anon_sym_string_DASHlength] = ACTIONS(75),
    [anon_sym_substring] = ACTIONS(77),
    [anon_sym_substring_DASHafter] = ACTIONS(79),
    [anon_sym_substring_DASHbefore] = ACTIONS(81),
    [anon_sym_sum] = ACTIONS(83),
    [anon_sym_system_DASHproperty] = ACTIONS(85),
    [anon_sym_translate] = ACTIONS(87),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(89),
    [anon_sym_base64Encode] = ACTIONS(91),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(95),
    [anon_sym_DOLLARbody] = ACTIONS(97),
    [anon_sym_DOLLARheader] = ACTIONS(97),
    [anon_sym_DOLLARaxis2] = ACTIONS(97),
    [anon_sym_ctx] = ACTIONS(99),
    [anon_sym_DOLLARtrp] = ACTIONS(97),
    [anon_sym_DOLLARurl] = ACTIONS(97),
    [anon_sym_DOLLARfunc] = ACTIONS(97),
    [anon_sym_DOLLARenv] = ACTIONS(97),
  },
  [14] = {
    [sym_xpath] = STATE(443),
    [sym__xpath_selectors] = STATE(6),
    [sym__xPath_extension_functions] = STATE(6),
    [sym__xpath_function] = STATE(6),
    [sym_boolean_function] = STATE(6),
    [sym_ceiling_function] = STATE(6),
    [sym_choose_function] = STATE(6),
    [sym_concat_function] = STATE(6),
    [sym_contains_function] = STATE(6),
    [sym_count_function] = STATE(6),
    [sym_current_function] = STATE(6),
    [sym_document_function] = STATE(6),
    [sym_element_available_function] = STATE(6),
    [sym_false_function] = STATE(6),
    [sym_floor_function] = STATE(6),
    [sym_format_number_function] = STATE(6),
    [sym_function_available_function] = STATE(6),
    [sym_generate_id_function] = STATE(6),
    [sym_id_function] = STATE(6),
    [sym_key_function] = STATE(6),
    [sym_lang_function] = STATE(6),
    [sym_last_function] = STATE(6),
    [sym_local_name_function] = STATE(6),
    [sym_name_function] = STATE(6),
    [sym_namespace_uri_function] = STATE(6),
    [sym_normalize_space_function] = STATE(6),
    [sym_not_function] = STATE(6),
    [sym_number_function] = STATE(6),
    [sym_position_function] = STATE(6),
    [sym_round_function] = STATE(6),
    [sym_starts_with_function] = STATE(6),
    [sym_string_function] = STATE(6),
    [sym_string_length_function] = STATE(6),
    [sym_substring_function] = STATE(6),
    [sym_substring_after_function] = STATE(6),
    [sym_substring_before_function] = STATE(6),
    [sym_sum_function] = STATE(6),
    [sym_system_property_function] = STATE(6),
    [sym_translate_function] = STATE(6),
    [sym_true_function] = STATE(6),
    [sym_unparsed_entity_url_function] = STATE(6),
    [sym_base64_encode] = STATE(6),
    [sym_base64_decode] = STATE(6),
    [sym_get_property] = STATE(6),
    [sym__xpath_string] = STATE(6),
    [sym_synapse_xpath_property] = STATE(6),
    [aux_sym_xpath_repeat1] = STATE(6),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_boolean] = ACTIONS(27),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_concat] = ACTIONS(33),
    [anon_sym_contains] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [anon_sym_current] = ACTIONS(39),
    [anon_sym_document] = ACTIONS(41),
    [anon_sym_element_DASHavailable] = ACTIONS(43),
    [anon_sym_floor] = ACTIONS(45),
    [anon_sym_format_DASHnumber] = ACTIONS(47),
    [anon_sym_function_DASHavailable] = ACTIONS(49),
    [anon_sym_generate_DASHid] = ACTIONS(51),
    [anon_sym_lang] = ACTIONS(53),
    [anon_sym_last] = ACTIONS(55),
    [anon_sym_local_DASHname] = ACTIONS(57),
    [anon_sym_namespace_DASHuri] = ACTIONS(59),
    [anon_sym_normalize_DASHspace] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_number] = ACTIONS(65),
    [anon_sym_position] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(69),
    [anon_sym_starts_DASHwith] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(73),
    [anon_sym_string_DASHlength] = ACTIONS(75),
    [anon_sym_substring] = ACTIONS(77),
    [anon_sym_substring_DASHafter] = ACTIONS(79),
    [anon_sym_substring_DASHbefore] = ACTIONS(81),
    [anon_sym_sum] = ACTIONS(83),
    [anon_sym_system_DASHproperty] = ACTIONS(85),
    [anon_sym_translate] = ACTIONS(87),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(89),
    [anon_sym_base64Encode] = ACTIONS(91),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(95),
    [anon_sym_DOLLARbody] = ACTIONS(97),
    [anon_sym_DOLLARheader] = ACTIONS(97),
    [anon_sym_DOLLARaxis2] = ACTIONS(97),
    [anon_sym_ctx] = ACTIONS(99),
    [anon_sym_DOLLARtrp] = ACTIONS(97),
    [anon_sym_DOLLARurl] = ACTIONS(97),
    [anon_sym_DOLLARfunc] = ACTIONS(97),
    [anon_sym_DOLLARenv] = ACTIONS(97),
  },
  [15] = {
    [sym_xpath] = STATE(442),
    [sym__xpath_selectors] = STATE(6),
    [sym__xPath_extension_functions] = STATE(6),
    [sym__xpath_function] = STATE(6),
    [sym_boolean_function] = STATE(6),
    [sym_ceiling_function] = STATE(6),
    [sym_choose_function] = STATE(6),
    [sym_concat_function] = STATE(6),
    [sym_contains_function] = STATE(6),
    [sym_count_function] = STATE(6),
    [sym_current_function] = STATE(6),
    [sym_document_function] = STATE(6),
    [sym_element_available_function] = STATE(6),
    [sym_false_function] = STATE(6),
    [sym_floor_function] = STATE(6),
    [sym_format_number_function] = STATE(6),
    [sym_function_available_function] = STATE(6),
    [sym_generate_id_function] = STATE(6),
    [sym_id_function] = STATE(6),
    [sym_key_function] = STATE(6),
    [sym_lang_function] = STATE(6),
    [sym_last_function] = STATE(6),
    [sym_local_name_function] = STATE(6),
    [sym_name_function] = STATE(6),
    [sym_namespace_uri_function] = STATE(6),
    [sym_normalize_space_function] = STATE(6),
    [sym_not_function] = STATE(6),
    [sym_number_function] = STATE(6),
    [sym_position_function] = STATE(6),
    [sym_round_function] = STATE(6),
    [sym_starts_with_function] = STATE(6),
    [sym_string_function] = STATE(6),
    [sym_string_length_function] = STATE(6),
    [sym_substring_function] = STATE(6),
    [sym_substring_after_function] = STATE(6),
    [sym_substring_before_function] = STATE(6),
    [sym_sum_function] = STATE(6),
    [sym_system_property_function] = STATE(6),
    [sym_translate_function] = STATE(6),
    [sym_true_function] = STATE(6),
    [sym_unparsed_entity_url_function] = STATE(6),
    [sym_base64_encode] = STATE(6),
    [sym_base64_decode] = STATE(6),
    [sym_get_property] = STATE(6),
    [sym__xpath_string] = STATE(6),
    [sym_synapse_xpath_property] = STATE(6),
    [aux_sym_xpath_repeat1] = STATE(6),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_boolean] = ACTIONS(27),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_concat] = ACTIONS(33),
    [anon_sym_contains] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [anon_sym_current] = ACTIONS(39),
    [anon_sym_document] = ACTIONS(41),
    [anon_sym_element_DASHavailable] = ACTIONS(43),
    [anon_sym_floor] = ACTIONS(45),
    [anon_sym_format_DASHnumber] = ACTIONS(47),
    [anon_sym_function_DASHavailable] = ACTIONS(49),
    [anon_sym_generate_DASHid] = ACTIONS(51),
    [anon_sym_lang] = ACTIONS(53),
    [anon_sym_last] = ACTIONS(55),
    [anon_sym_local_DASHname] = ACTIONS(57),
    [anon_sym_namespace_DASHuri] = ACTIONS(59),
    [anon_sym_normalize_DASHspace] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_number] = ACTIONS(65),
    [anon_sym_position] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(69),
    [anon_sym_starts_DASHwith] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(73),
    [anon_sym_string_DASHlength] = ACTIONS(75),
    [anon_sym_substring] = ACTIONS(77),
    [anon_sym_substring_DASHafter] = ACTIONS(79),
    [anon_sym_substring_DASHbefore] = ACTIONS(81),
    [anon_sym_sum] = ACTIONS(83),
    [anon_sym_system_DASHproperty] = ACTIONS(85),
    [anon_sym_translate] = ACTIONS(87),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(89),
    [anon_sym_base64Encode] = ACTIONS(91),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(95),
    [anon_sym_DOLLARbody] = ACTIONS(97),
    [anon_sym_DOLLARheader] = ACTIONS(97),
    [anon_sym_DOLLARaxis2] = ACTIONS(97),
    [anon_sym_ctx] = ACTIONS(99),
    [anon_sym_DOLLARtrp] = ACTIONS(97),
    [anon_sym_DOLLARurl] = ACTIONS(97),
    [anon_sym_DOLLARfunc] = ACTIONS(97),
    [anon_sym_DOLLARenv] = ACTIONS(97),
  },
  [16] = {
    [sym_xpath] = STATE(441),
    [sym__xpath_selectors] = STATE(6),
    [sym__xPath_extension_functions] = STATE(6),
    [sym__xpath_function] = STATE(6),
    [sym_boolean_function] = STATE(6),
    [sym_ceiling_function] = STATE(6),
    [sym_choose_function] = STATE(6),
    [sym_concat_function] = STATE(6),
    [sym_contains_function] = STATE(6),
    [sym_count_function] = STATE(6),
    [sym_current_function] = STATE(6),
    [sym_document_function] = STATE(6),
    [sym_element_available_function] = STATE(6),
    [sym_false_function] = STATE(6),
    [sym_floor_function] = STATE(6),
    [sym_format_number_function] = STATE(6),
    [sym_function_available_function] = STATE(6),
    [sym_generate_id_function] = STATE(6),
    [sym_id_function] = STATE(6),
    [sym_key_function] = STATE(6),
    [sym_lang_function] = STATE(6),
    [sym_last_function] = STATE(6),
    [sym_local_name_function] = STATE(6),
    [sym_name_function] = STATE(6),
    [sym_namespace_uri_function] = STATE(6),
    [sym_normalize_space_function] = STATE(6),
    [sym_not_function] = STATE(6),
    [sym_number_function] = STATE(6),
    [sym_position_function] = STATE(6),
    [sym_round_function] = STATE(6),
    [sym_starts_with_function] = STATE(6),
    [sym_string_function] = STATE(6),
    [sym_string_length_function] = STATE(6),
    [sym_substring_function] = STATE(6),
    [sym_substring_after_function] = STATE(6),
    [sym_substring_before_function] = STATE(6),
    [sym_sum_function] = STATE(6),
    [sym_system_property_function] = STATE(6),
    [sym_translate_function] = STATE(6),
    [sym_true_function] = STATE(6),
    [sym_unparsed_entity_url_function] = STATE(6),
    [sym_base64_encode] = STATE(6),
    [sym_base64_decode] = STATE(6),
    [sym_get_property] = STATE(6),
    [sym__xpath_string] = STATE(6),
    [sym_synapse_xpath_property] = STATE(6),
    [aux_sym_xpath_repeat1] = STATE(6),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_boolean] = ACTIONS(27),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_concat] = ACTIONS(33),
    [anon_sym_contains] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [anon_sym_current] = ACTIONS(39),
    [anon_sym_document] = ACTIONS(41),
    [anon_sym_element_DASHavailable] = ACTIONS(43),
    [anon_sym_floor] = ACTIONS(45),
    [anon_sym_format_DASHnumber] = ACTIONS(47),
    [anon_sym_function_DASHavailable] = ACTIONS(49),
    [anon_sym_generate_DASHid] = ACTIONS(51),
    [anon_sym_lang] = ACTIONS(53),
    [anon_sym_last] = ACTIONS(55),
    [anon_sym_local_DASHname] = ACTIONS(57),
    [anon_sym_namespace_DASHuri] = ACTIONS(59),
    [anon_sym_normalize_DASHspace] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_number] = ACTIONS(65),
    [anon_sym_position] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(69),
    [anon_sym_starts_DASHwith] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(73),
    [anon_sym_string_DASHlength] = ACTIONS(75),
    [anon_sym_substring] = ACTIONS(77),
    [anon_sym_substring_DASHafter] = ACTIONS(79),
    [anon_sym_substring_DASHbefore] = ACTIONS(81),
    [anon_sym_sum] = ACTIONS(83),
    [anon_sym_system_DASHproperty] = ACTIONS(85),
    [anon_sym_translate] = ACTIONS(87),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(89),
    [anon_sym_base64Encode] = ACTIONS(91),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(95),
    [anon_sym_DOLLARbody] = ACTIONS(97),
    [anon_sym_DOLLARheader] = ACTIONS(97),
    [anon_sym_DOLLARaxis2] = ACTIONS(97),
    [anon_sym_ctx] = ACTIONS(99),
    [anon_sym_DOLLARtrp] = ACTIONS(97),
    [anon_sym_DOLLARurl] = ACTIONS(97),
    [anon_sym_DOLLARfunc] = ACTIONS(97),
    [anon_sym_DOLLARenv] = ACTIONS(97),
  },
  [17] = {
    [sym_xpath] = STATE(440),
    [sym__xpath_selectors] = STATE(6),
    [sym__xPath_extension_functions] = STATE(6),
    [sym__xpath_function] = STATE(6),
    [sym_boolean_function] = STATE(6),
    [sym_ceiling_function] = STATE(6),
    [sym_choose_function] = STATE(6),
    [sym_concat_function] = STATE(6),
    [sym_contains_function] = STATE(6),
    [sym_count_function] = STATE(6),
    [sym_current_function] = STATE(6),
    [sym_document_function] = STATE(6),
    [sym_element_available_function] = STATE(6),
    [sym_false_function] = STATE(6),
    [sym_floor_function] = STATE(6),
    [sym_format_number_function] = STATE(6),
    [sym_function_available_function] = STATE(6),
    [sym_generate_id_function] = STATE(6),
    [sym_id_function] = STATE(6),
    [sym_key_function] = STATE(6),
    [sym_lang_function] = STATE(6),
    [sym_last_function] = STATE(6),
    [sym_local_name_function] = STATE(6),
    [sym_name_function] = STATE(6),
    [sym_namespace_uri_function] = STATE(6),
    [sym_normalize_space_function] = STATE(6),
    [sym_not_function] = STATE(6),
    [sym_number_function] = STATE(6),
    [sym_position_function] = STATE(6),
    [sym_round_function] = STATE(6),
    [sym_starts_with_function] = STATE(6),
    [sym_string_function] = STATE(6),
    [sym_string_length_function] = STATE(6),
    [sym_substring_function] = STATE(6),
    [sym_substring_after_function] = STATE(6),
    [sym_substring_before_function] = STATE(6),
    [sym_sum_function] = STATE(6),
    [sym_system_property_function] = STATE(6),
    [sym_translate_function] = STATE(6),
    [sym_true_function] = STATE(6),
    [sym_unparsed_entity_url_function] = STATE(6),
    [sym_base64_encode] = STATE(6),
    [sym_base64_decode] = STATE(6),
    [sym_get_property] = STATE(6),
    [sym__xpath_string] = STATE(6),
    [sym_synapse_xpath_property] = STATE(6),
    [aux_sym_xpath_repeat1] = STATE(6),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_boolean] = ACTIONS(27),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_concat] = ACTIONS(33),
    [anon_sym_contains] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [anon_sym_current] = ACTIONS(39),
    [anon_sym_document] = ACTIONS(41),
    [anon_sym_element_DASHavailable] = ACTIONS(43),
    [anon_sym_floor] = ACTIONS(45),
    [anon_sym_format_DASHnumber] = ACTIONS(47),
    [anon_sym_function_DASHavailable] = ACTIONS(49),
    [anon_sym_generate_DASHid] = ACTIONS(51),
    [anon_sym_lang] = ACTIONS(53),
    [anon_sym_last] = ACTIONS(55),
    [anon_sym_local_DASHname] = ACTIONS(57),
    [anon_sym_namespace_DASHuri] = ACTIONS(59),
    [anon_sym_normalize_DASHspace] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_number] = ACTIONS(65),
    [anon_sym_position] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(69),
    [anon_sym_starts_DASHwith] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(73),
    [anon_sym_string_DASHlength] = ACTIONS(75),
    [anon_sym_substring] = ACTIONS(77),
    [anon_sym_substring_DASHafter] = ACTIONS(79),
    [anon_sym_substring_DASHbefore] = ACTIONS(81),
    [anon_sym_sum] = ACTIONS(83),
    [anon_sym_system_DASHproperty] = ACTIONS(85),
    [anon_sym_translate] = ACTIONS(87),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(89),
    [anon_sym_base64Encode] = ACTIONS(91),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(95),
    [anon_sym_DOLLARbody] = ACTIONS(97),
    [anon_sym_DOLLARheader] = ACTIONS(97),
    [anon_sym_DOLLARaxis2] = ACTIONS(97),
    [anon_sym_ctx] = ACTIONS(99),
    [anon_sym_DOLLARtrp] = ACTIONS(97),
    [anon_sym_DOLLARurl] = ACTIONS(97),
    [anon_sym_DOLLARfunc] = ACTIONS(97),
    [anon_sym_DOLLARenv] = ACTIONS(97),
  },
  [18] = {
    [sym_xpath] = STATE(439),
    [sym__xpath_selectors] = STATE(6),
    [sym__xPath_extension_functions] = STATE(6),
    [sym__xpath_function] = STATE(6),
    [sym_boolean_function] = STATE(6),
    [sym_ceiling_function] = STATE(6),
    [sym_choose_function] = STATE(6),
    [sym_concat_function] = STATE(6),
    [sym_contains_function] = STATE(6),
    [sym_count_function] = STATE(6),
    [sym_current_function] = STATE(6),
    [sym_document_function] = STATE(6),
    [sym_element_available_function] = STATE(6),
    [sym_false_function] = STATE(6),
    [sym_floor_function] = STATE(6),
    [sym_format_number_function] = STATE(6),
    [sym_function_available_function] = STATE(6),
    [sym_generate_id_function] = STATE(6),
    [sym_id_function] = STATE(6),
    [sym_key_function] = STATE(6),
    [sym_lang_function] = STATE(6),
    [sym_last_function] = STATE(6),
    [sym_local_name_function] = STATE(6),
    [sym_name_function] = STATE(6),
    [sym_namespace_uri_function] = STATE(6),
    [sym_normalize_space_function] = STATE(6),
    [sym_not_function] = STATE(6),
    [sym_number_function] = STATE(6),
    [sym_position_function] = STATE(6),
    [sym_round_function] = STATE(6),
    [sym_starts_with_function] = STATE(6),
    [sym_string_function] = STATE(6),
    [sym_string_length_function] = STATE(6),
    [sym_substring_function] = STATE(6),
    [sym_substring_after_function] = STATE(6),
    [sym_substring_before_function] = STATE(6),
    [sym_sum_function] = STATE(6),
    [sym_system_property_function] = STATE(6),
    [sym_translate_function] = STATE(6),
    [sym_true_function] = STATE(6),
    [sym_unparsed_entity_url_function] = STATE(6),
    [sym_base64_encode] = STATE(6),
    [sym_base64_decode] = STATE(6),
    [sym_get_property] = STATE(6),
    [sym__xpath_string] = STATE(6),
    [sym_synapse_xpath_property] = STATE(6),
    [aux_sym_xpath_repeat1] = STATE(6),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_boolean] = ACTIONS(27),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_concat] = ACTIONS(33),
    [anon_sym_contains] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [anon_sym_current] = ACTIONS(39),
    [anon_sym_document] = ACTIONS(41),
    [anon_sym_element_DASHavailable] = ACTIONS(43),
    [anon_sym_floor] = ACTIONS(45),
    [anon_sym_format_DASHnumber] = ACTIONS(47),
    [anon_sym_function_DASHavailable] = ACTIONS(49),
    [anon_sym_generate_DASHid] = ACTIONS(51),
    [anon_sym_lang] = ACTIONS(53),
    [anon_sym_last] = ACTIONS(55),
    [anon_sym_local_DASHname] = ACTIONS(57),
    [anon_sym_namespace_DASHuri] = ACTIONS(59),
    [anon_sym_normalize_DASHspace] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_number] = ACTIONS(65),
    [anon_sym_position] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(69),
    [anon_sym_starts_DASHwith] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(73),
    [anon_sym_string_DASHlength] = ACTIONS(75),
    [anon_sym_substring] = ACTIONS(77),
    [anon_sym_substring_DASHafter] = ACTIONS(79),
    [anon_sym_substring_DASHbefore] = ACTIONS(81),
    [anon_sym_sum] = ACTIONS(83),
    [anon_sym_system_DASHproperty] = ACTIONS(85),
    [anon_sym_translate] = ACTIONS(87),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(89),
    [anon_sym_base64Encode] = ACTIONS(91),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(95),
    [anon_sym_DOLLARbody] = ACTIONS(97),
    [anon_sym_DOLLARheader] = ACTIONS(97),
    [anon_sym_DOLLARaxis2] = ACTIONS(97),
    [anon_sym_ctx] = ACTIONS(99),
    [anon_sym_DOLLARtrp] = ACTIONS(97),
    [anon_sym_DOLLARurl] = ACTIONS(97),
    [anon_sym_DOLLARfunc] = ACTIONS(97),
    [anon_sym_DOLLARenv] = ACTIONS(97),
  },
  [19] = {
    [sym_xpath] = STATE(438),
    [sym__xpath_selectors] = STATE(6),
    [sym__xPath_extension_functions] = STATE(6),
    [sym__xpath_function] = STATE(6),
    [sym_boolean_function] = STATE(6),
    [sym_ceiling_function] = STATE(6),
    [sym_choose_function] = STATE(6),
    [sym_concat_function] = STATE(6),
    [sym_contains_function] = STATE(6),
    [sym_count_function] = STATE(6),
    [sym_current_function] = STATE(6),
    [sym_document_function] = STATE(6),
    [sym_element_available_function] = STATE(6),
    [sym_false_function] = STATE(6),
    [sym_floor_function] = STATE(6),
    [sym_format_number_function] = STATE(6),
    [sym_function_available_function] = STATE(6),
    [sym_generate_id_function] = STATE(6),
    [sym_id_function] = STATE(6),
    [sym_key_function] = STATE(6),
    [sym_lang_function] = STATE(6),
    [sym_last_function] = STATE(6),
    [sym_local_name_function] = STATE(6),
    [sym_name_function] = STATE(6),
    [sym_namespace_uri_function] = STATE(6),
    [sym_normalize_space_function] = STATE(6),
    [sym_not_function] = STATE(6),
    [sym_number_function] = STATE(6),
    [sym_position_function] = STATE(6),
    [sym_round_function] = STATE(6),
    [sym_starts_with_function] = STATE(6),
    [sym_string_function] = STATE(6),
    [sym_string_length_function] = STATE(6),
    [sym_substring_function] = STATE(6),
    [sym_substring_after_function] = STATE(6),
    [sym_substring_before_function] = STATE(6),
    [sym_sum_function] = STATE(6),
    [sym_system_property_function] = STATE(6),
    [sym_translate_function] = STATE(6),
    [sym_true_function] = STATE(6),
    [sym_unparsed_entity_url_function] = STATE(6),
    [sym_base64_encode] = STATE(6),
    [sym_base64_decode] = STATE(6),
    [sym_get_property] = STATE(6),
    [sym__xpath_string] = STATE(6),
    [sym_synapse_xpath_property] = STATE(6),
    [aux_sym_xpath_repeat1] = STATE(6),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_boolean] = ACTIONS(27),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_concat] = ACTIONS(33),
    [anon_sym_contains] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [anon_sym_current] = ACTIONS(39),
    [anon_sym_document] = ACTIONS(41),
    [anon_sym_element_DASHavailable] = ACTIONS(43),
    [anon_sym_floor] = ACTIONS(45),
    [anon_sym_format_DASHnumber] = ACTIONS(47),
    [anon_sym_function_DASHavailable] = ACTIONS(49),
    [anon_sym_generate_DASHid] = ACTIONS(51),
    [anon_sym_lang] = ACTIONS(53),
    [anon_sym_last] = ACTIONS(55),
    [anon_sym_local_DASHname] = ACTIONS(57),
    [anon_sym_namespace_DASHuri] = ACTIONS(59),
    [anon_sym_normalize_DASHspace] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_number] = ACTIONS(65),
    [anon_sym_position] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(69),
    [anon_sym_starts_DASHwith] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(73),
    [anon_sym_string_DASHlength] = ACTIONS(75),
    [anon_sym_substring] = ACTIONS(77),
    [anon_sym_substring_DASHafter] = ACTIONS(79),
    [anon_sym_substring_DASHbefore] = ACTIONS(81),
    [anon_sym_sum] = ACTIONS(83),
    [anon_sym_system_DASHproperty] = ACTIONS(85),
    [anon_sym_translate] = ACTIONS(87),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(89),
    [anon_sym_base64Encode] = ACTIONS(91),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(95),
    [anon_sym_DOLLARbody] = ACTIONS(97),
    [anon_sym_DOLLARheader] = ACTIONS(97),
    [anon_sym_DOLLARaxis2] = ACTIONS(97),
    [anon_sym_ctx] = ACTIONS(99),
    [anon_sym_DOLLARtrp] = ACTIONS(97),
    [anon_sym_DOLLARurl] = ACTIONS(97),
    [anon_sym_DOLLARfunc] = ACTIONS(97),
    [anon_sym_DOLLARenv] = ACTIONS(97),
  },
  [20] = {
    [sym_xpath] = STATE(437),
    [sym__xpath_selectors] = STATE(6),
    [sym__xPath_extension_functions] = STATE(6),
    [sym__xpath_function] = STATE(6),
    [sym_boolean_function] = STATE(6),
    [sym_ceiling_function] = STATE(6),
    [sym_choose_function] = STATE(6),
    [sym_concat_function] = STATE(6),
    [sym_contains_function] = STATE(6),
    [sym_count_function] = STATE(6),
    [sym_current_function] = STATE(6),
    [sym_document_function] = STATE(6),
    [sym_element_available_function] = STATE(6),
    [sym_false_function] = STATE(6),
    [sym_floor_function] = STATE(6),
    [sym_format_number_function] = STATE(6),
    [sym_function_available_function] = STATE(6),
    [sym_generate_id_function] = STATE(6),
    [sym_id_function] = STATE(6),
    [sym_key_function] = STATE(6),
    [sym_lang_function] = STATE(6),
    [sym_last_function] = STATE(6),
    [sym_local_name_function] = STATE(6),
    [sym_name_function] = STATE(6),
    [sym_namespace_uri_function] = STATE(6),
    [sym_normalize_space_function] = STATE(6),
    [sym_not_function] = STATE(6),
    [sym_number_function] = STATE(6),
    [sym_position_function] = STATE(6),
    [sym_round_function] = STATE(6),
    [sym_starts_with_function] = STATE(6),
    [sym_string_function] = STATE(6),
    [sym_string_length_function] = STATE(6),
    [sym_substring_function] = STATE(6),
    [sym_substring_after_function] = STATE(6),
    [sym_substring_before_function] = STATE(6),
    [sym_sum_function] = STATE(6),
    [sym_system_property_function] = STATE(6),
    [sym_translate_function] = STATE(6),
    [sym_true_function] = STATE(6),
    [sym_unparsed_entity_url_function] = STATE(6),
    [sym_base64_encode] = STATE(6),
    [sym_base64_decode] = STATE(6),
    [sym_get_property] = STATE(6),
    [sym__xpath_string] = STATE(6),
    [sym_synapse_xpath_property] = STATE(6),
    [aux_sym_xpath_repeat1] = STATE(6),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_boolean] = ACTIONS(27),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_concat] = ACTIONS(33),
    [anon_sym_contains] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [anon_sym_current] = ACTIONS(39),
    [anon_sym_document] = ACTIONS(41),
    [anon_sym_element_DASHavailable] = ACTIONS(43),
    [anon_sym_floor] = ACTIONS(45),
    [anon_sym_format_DASHnumber] = ACTIONS(47),
    [anon_sym_function_DASHavailable] = ACTIONS(49),
    [anon_sym_generate_DASHid] = ACTIONS(51),
    [anon_sym_lang] = ACTIONS(53),
    [anon_sym_last] = ACTIONS(55),
    [anon_sym_local_DASHname] = ACTIONS(57),
    [anon_sym_namespace_DASHuri] = ACTIONS(59),
    [anon_sym_normalize_DASHspace] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_number] = ACTIONS(65),
    [anon_sym_position] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(69),
    [anon_sym_starts_DASHwith] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(73),
    [anon_sym_string_DASHlength] = ACTIONS(75),
    [anon_sym_substring] = ACTIONS(77),
    [anon_sym_substring_DASHafter] = ACTIONS(79),
    [anon_sym_substring_DASHbefore] = ACTIONS(81),
    [anon_sym_sum] = ACTIONS(83),
    [anon_sym_system_DASHproperty] = ACTIONS(85),
    [anon_sym_translate] = ACTIONS(87),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(89),
    [anon_sym_base64Encode] = ACTIONS(91),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(95),
    [anon_sym_DOLLARbody] = ACTIONS(97),
    [anon_sym_DOLLARheader] = ACTIONS(97),
    [anon_sym_DOLLARaxis2] = ACTIONS(97),
    [anon_sym_ctx] = ACTIONS(99),
    [anon_sym_DOLLARtrp] = ACTIONS(97),
    [anon_sym_DOLLARurl] = ACTIONS(97),
    [anon_sym_DOLLARfunc] = ACTIONS(97),
    [anon_sym_DOLLARenv] = ACTIONS(97),
  },
  [21] = {
    [sym_xpath] = STATE(436),
    [sym__xpath_selectors] = STATE(6),
    [sym__xPath_extension_functions] = STATE(6),
    [sym__xpath_function] = STATE(6),
    [sym_boolean_function] = STATE(6),
    [sym_ceiling_function] = STATE(6),
    [sym_choose_function] = STATE(6),
    [sym_concat_function] = STATE(6),
    [sym_contains_function] = STATE(6),
    [sym_count_function] = STATE(6),
    [sym_current_function] = STATE(6),
    [sym_document_function] = STATE(6),
    [sym_element_available_function] = STATE(6),
    [sym_false_function] = STATE(6),
    [sym_floor_function] = STATE(6),
    [sym_format_number_function] = STATE(6),
    [sym_function_available_function] = STATE(6),
    [sym_generate_id_function] = STATE(6),
    [sym_id_function] = STATE(6),
    [sym_key_function] = STATE(6),
    [sym_lang_function] = STATE(6),
    [sym_last_function] = STATE(6),
    [sym_local_name_function] = STATE(6),
    [sym_name_function] = STATE(6),
    [sym_namespace_uri_function] = STATE(6),
    [sym_normalize_space_function] = STATE(6),
    [sym_not_function] = STATE(6),
    [sym_number_function] = STATE(6),
    [sym_position_function] = STATE(6),
    [sym_round_function] = STATE(6),
    [sym_starts_with_function] = STATE(6),
    [sym_string_function] = STATE(6),
    [sym_string_length_function] = STATE(6),
    [sym_substring_function] = STATE(6),
    [sym_substring_after_function] = STATE(6),
    [sym_substring_before_function] = STATE(6),
    [sym_sum_function] = STATE(6),
    [sym_system_property_function] = STATE(6),
    [sym_translate_function] = STATE(6),
    [sym_true_function] = STATE(6),
    [sym_unparsed_entity_url_function] = STATE(6),
    [sym_base64_encode] = STATE(6),
    [sym_base64_decode] = STATE(6),
    [sym_get_property] = STATE(6),
    [sym__xpath_string] = STATE(6),
    [sym_synapse_xpath_property] = STATE(6),
    [aux_sym_xpath_repeat1] = STATE(6),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_boolean] = ACTIONS(27),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_concat] = ACTIONS(33),
    [anon_sym_contains] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [anon_sym_current] = ACTIONS(39),
    [anon_sym_document] = ACTIONS(41),
    [anon_sym_element_DASHavailable] = ACTIONS(43),
    [anon_sym_floor] = ACTIONS(45),
    [anon_sym_format_DASHnumber] = ACTIONS(47),
    [anon_sym_function_DASHavailable] = ACTIONS(49),
    [anon_sym_generate_DASHid] = ACTIONS(51),
    [anon_sym_lang] = ACTIONS(53),
    [anon_sym_last] = ACTIONS(55),
    [anon_sym_local_DASHname] = ACTIONS(57),
    [anon_sym_namespace_DASHuri] = ACTIONS(59),
    [anon_sym_normalize_DASHspace] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_number] = ACTIONS(65),
    [anon_sym_position] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(69),
    [anon_sym_starts_DASHwith] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(73),
    [anon_sym_string_DASHlength] = ACTIONS(75),
    [anon_sym_substring] = ACTIONS(77),
    [anon_sym_substring_DASHafter] = ACTIONS(79),
    [anon_sym_substring_DASHbefore] = ACTIONS(81),
    [anon_sym_sum] = ACTIONS(83),
    [anon_sym_system_DASHproperty] = ACTIONS(85),
    [anon_sym_translate] = ACTIONS(87),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(89),
    [anon_sym_base64Encode] = ACTIONS(91),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(95),
    [anon_sym_DOLLARbody] = ACTIONS(97),
    [anon_sym_DOLLARheader] = ACTIONS(97),
    [anon_sym_DOLLARaxis2] = ACTIONS(97),
    [anon_sym_ctx] = ACTIONS(99),
    [anon_sym_DOLLARtrp] = ACTIONS(97),
    [anon_sym_DOLLARurl] = ACTIONS(97),
    [anon_sym_DOLLARfunc] = ACTIONS(97),
    [anon_sym_DOLLARenv] = ACTIONS(97),
  },
  [22] = {
    [sym_xpath] = STATE(435),
    [sym__xpath_selectors] = STATE(6),
    [sym__xPath_extension_functions] = STATE(6),
    [sym__xpath_function] = STATE(6),
    [sym_boolean_function] = STATE(6),
    [sym_ceiling_function] = STATE(6),
    [sym_choose_function] = STATE(6),
    [sym_concat_function] = STATE(6),
    [sym_contains_function] = STATE(6),
    [sym_count_function] = STATE(6),
    [sym_current_function] = STATE(6),
    [sym_document_function] = STATE(6),
    [sym_element_available_function] = STATE(6),
    [sym_false_function] = STATE(6),
    [sym_floor_function] = STATE(6),
    [sym_format_number_function] = STATE(6),
    [sym_function_available_function] = STATE(6),
    [sym_generate_id_function] = STATE(6),
    [sym_id_function] = STATE(6),
    [sym_key_function] = STATE(6),
    [sym_lang_function] = STATE(6),
    [sym_last_function] = STATE(6),
    [sym_local_name_function] = STATE(6),
    [sym_name_function] = STATE(6),
    [sym_namespace_uri_function] = STATE(6),
    [sym_normalize_space_function] = STATE(6),
    [sym_not_function] = STATE(6),
    [sym_number_function] = STATE(6),
    [sym_position_function] = STATE(6),
    [sym_round_function] = STATE(6),
    [sym_starts_with_function] = STATE(6),
    [sym_string_function] = STATE(6),
    [sym_string_length_function] = STATE(6),
    [sym_substring_function] = STATE(6),
    [sym_substring_after_function] = STATE(6),
    [sym_substring_before_function] = STATE(6),
    [sym_sum_function] = STATE(6),
    [sym_system_property_function] = STATE(6),
    [sym_translate_function] = STATE(6),
    [sym_true_function] = STATE(6),
    [sym_unparsed_entity_url_function] = STATE(6),
    [sym_base64_encode] = STATE(6),
    [sym_base64_decode] = STATE(6),
    [sym_get_property] = STATE(6),
    [sym__xpath_string] = STATE(6),
    [sym_synapse_xpath_property] = STATE(6),
    [aux_sym_xpath_repeat1] = STATE(6),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_boolean] = ACTIONS(27),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_concat] = ACTIONS(33),
    [anon_sym_contains] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [anon_sym_current] = ACTIONS(39),
    [anon_sym_document] = ACTIONS(41),
    [anon_sym_element_DASHavailable] = ACTIONS(43),
    [anon_sym_floor] = ACTIONS(45),
    [anon_sym_format_DASHnumber] = ACTIONS(47),
    [anon_sym_function_DASHavailable] = ACTIONS(49),
    [anon_sym_generate_DASHid] = ACTIONS(51),
    [anon_sym_lang] = ACTIONS(53),
    [anon_sym_last] = ACTIONS(55),
    [anon_sym_local_DASHname] = ACTIONS(57),
    [anon_sym_namespace_DASHuri] = ACTIONS(59),
    [anon_sym_normalize_DASHspace] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_number] = ACTIONS(65),
    [anon_sym_position] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(69),
    [anon_sym_starts_DASHwith] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(73),
    [anon_sym_string_DASHlength] = ACTIONS(75),
    [anon_sym_substring] = ACTIONS(77),
    [anon_sym_substring_DASHafter] = ACTIONS(79),
    [anon_sym_substring_DASHbefore] = ACTIONS(81),
    [anon_sym_sum] = ACTIONS(83),
    [anon_sym_system_DASHproperty] = ACTIONS(85),
    [anon_sym_translate] = ACTIONS(87),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(89),
    [anon_sym_base64Encode] = ACTIONS(91),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(95),
    [anon_sym_DOLLARbody] = ACTIONS(97),
    [anon_sym_DOLLARheader] = ACTIONS(97),
    [anon_sym_DOLLARaxis2] = ACTIONS(97),
    [anon_sym_ctx] = ACTIONS(99),
    [anon_sym_DOLLARtrp] = ACTIONS(97),
    [anon_sym_DOLLARurl] = ACTIONS(97),
    [anon_sym_DOLLARfunc] = ACTIONS(97),
    [anon_sym_DOLLARenv] = ACTIONS(97),
  },
  [23] = {
    [sym_xpath] = STATE(433),
    [sym__xpath_selectors] = STATE(6),
    [sym__xPath_extension_functions] = STATE(6),
    [sym__xpath_function] = STATE(6),
    [sym_boolean_function] = STATE(6),
    [sym_ceiling_function] = STATE(6),
    [sym_choose_function] = STATE(6),
    [sym_concat_function] = STATE(6),
    [sym_contains_function] = STATE(6),
    [sym_count_function] = STATE(6),
    [sym_current_function] = STATE(6),
    [sym_document_function] = STATE(6),
    [sym_element_available_function] = STATE(6),
    [sym_false_function] = STATE(6),
    [sym_floor_function] = STATE(6),
    [sym_format_number_function] = STATE(6),
    [sym_function_available_function] = STATE(6),
    [sym_generate_id_function] = STATE(6),
    [sym_id_function] = STATE(6),
    [sym_key_function] = STATE(6),
    [sym_lang_function] = STATE(6),
    [sym_last_function] = STATE(6),
    [sym_local_name_function] = STATE(6),
    [sym_name_function] = STATE(6),
    [sym_namespace_uri_function] = STATE(6),
    [sym_normalize_space_function] = STATE(6),
    [sym_not_function] = STATE(6),
    [sym_number_function] = STATE(6),
    [sym_position_function] = STATE(6),
    [sym_round_function] = STATE(6),
    [sym_starts_with_function] = STATE(6),
    [sym_string_function] = STATE(6),
    [sym_string_length_function] = STATE(6),
    [sym_substring_function] = STATE(6),
    [sym_substring_after_function] = STATE(6),
    [sym_substring_before_function] = STATE(6),
    [sym_sum_function] = STATE(6),
    [sym_system_property_function] = STATE(6),
    [sym_translate_function] = STATE(6),
    [sym_true_function] = STATE(6),
    [sym_unparsed_entity_url_function] = STATE(6),
    [sym_base64_encode] = STATE(6),
    [sym_base64_decode] = STATE(6),
    [sym_get_property] = STATE(6),
    [sym__xpath_string] = STATE(6),
    [sym_synapse_xpath_property] = STATE(6),
    [aux_sym_xpath_repeat1] = STATE(6),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_boolean] = ACTIONS(27),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_concat] = ACTIONS(33),
    [anon_sym_contains] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [anon_sym_current] = ACTIONS(39),
    [anon_sym_document] = ACTIONS(41),
    [anon_sym_element_DASHavailable] = ACTIONS(43),
    [anon_sym_floor] = ACTIONS(45),
    [anon_sym_format_DASHnumber] = ACTIONS(47),
    [anon_sym_function_DASHavailable] = ACTIONS(49),
    [anon_sym_generate_DASHid] = ACTIONS(51),
    [anon_sym_lang] = ACTIONS(53),
    [anon_sym_last] = ACTIONS(55),
    [anon_sym_local_DASHname] = ACTIONS(57),
    [anon_sym_namespace_DASHuri] = ACTIONS(59),
    [anon_sym_normalize_DASHspace] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_number] = ACTIONS(65),
    [anon_sym_position] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(69),
    [anon_sym_starts_DASHwith] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(73),
    [anon_sym_string_DASHlength] = ACTIONS(75),
    [anon_sym_substring] = ACTIONS(77),
    [anon_sym_substring_DASHafter] = ACTIONS(79),
    [anon_sym_substring_DASHbefore] = ACTIONS(81),
    [anon_sym_sum] = ACTIONS(83),
    [anon_sym_system_DASHproperty] = ACTIONS(85),
    [anon_sym_translate] = ACTIONS(87),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(89),
    [anon_sym_base64Encode] = ACTIONS(91),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(95),
    [anon_sym_DOLLARbody] = ACTIONS(97),
    [anon_sym_DOLLARheader] = ACTIONS(97),
    [anon_sym_DOLLARaxis2] = ACTIONS(97),
    [anon_sym_ctx] = ACTIONS(99),
    [anon_sym_DOLLARtrp] = ACTIONS(97),
    [anon_sym_DOLLARurl] = ACTIONS(97),
    [anon_sym_DOLLARfunc] = ACTIONS(97),
    [anon_sym_DOLLARenv] = ACTIONS(97),
  },
  [24] = {
    [sym_xpath] = STATE(432),
    [sym__xpath_selectors] = STATE(6),
    [sym__xPath_extension_functions] = STATE(6),
    [sym__xpath_function] = STATE(6),
    [sym_boolean_function] = STATE(6),
    [sym_ceiling_function] = STATE(6),
    [sym_choose_function] = STATE(6),
    [sym_concat_function] = STATE(6),
    [sym_contains_function] = STATE(6),
    [sym_count_function] = STATE(6),
    [sym_current_function] = STATE(6),
    [sym_document_function] = STATE(6),
    [sym_element_available_function] = STATE(6),
    [sym_false_function] = STATE(6),
    [sym_floor_function] = STATE(6),
    [sym_format_number_function] = STATE(6),
    [sym_function_available_function] = STATE(6),
    [sym_generate_id_function] = STATE(6),
    [sym_id_function] = STATE(6),
    [sym_key_function] = STATE(6),
    [sym_lang_function] = STATE(6),
    [sym_last_function] = STATE(6),
    [sym_local_name_function] = STATE(6),
    [sym_name_function] = STATE(6),
    [sym_namespace_uri_function] = STATE(6),
    [sym_normalize_space_function] = STATE(6),
    [sym_not_function] = STATE(6),
    [sym_number_function] = STATE(6),
    [sym_position_function] = STATE(6),
    [sym_round_function] = STATE(6),
    [sym_starts_with_function] = STATE(6),
    [sym_string_function] = STATE(6),
    [sym_string_length_function] = STATE(6),
    [sym_substring_function] = STATE(6),
    [sym_substring_after_function] = STATE(6),
    [sym_substring_before_function] = STATE(6),
    [sym_sum_function] = STATE(6),
    [sym_system_property_function] = STATE(6),
    [sym_translate_function] = STATE(6),
    [sym_true_function] = STATE(6),
    [sym_unparsed_entity_url_function] = STATE(6),
    [sym_base64_encode] = STATE(6),
    [sym_base64_decode] = STATE(6),
    [sym_get_property] = STATE(6),
    [sym__xpath_string] = STATE(6),
    [sym_synapse_xpath_property] = STATE(6),
    [aux_sym_xpath_repeat1] = STATE(6),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_boolean] = ACTIONS(27),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_concat] = ACTIONS(33),
    [anon_sym_contains] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [anon_sym_current] = ACTIONS(39),
    [anon_sym_document] = ACTIONS(41),
    [anon_sym_element_DASHavailable] = ACTIONS(43),
    [anon_sym_floor] = ACTIONS(45),
    [anon_sym_format_DASHnumber] = ACTIONS(47),
    [anon_sym_function_DASHavailable] = ACTIONS(49),
    [anon_sym_generate_DASHid] = ACTIONS(51),
    [anon_sym_lang] = ACTIONS(53),
    [anon_sym_last] = ACTIONS(55),
    [anon_sym_local_DASHname] = ACTIONS(57),
    [anon_sym_namespace_DASHuri] = ACTIONS(59),
    [anon_sym_normalize_DASHspace] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_number] = ACTIONS(65),
    [anon_sym_position] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(69),
    [anon_sym_starts_DASHwith] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(73),
    [anon_sym_string_DASHlength] = ACTIONS(75),
    [anon_sym_substring] = ACTIONS(77),
    [anon_sym_substring_DASHafter] = ACTIONS(79),
    [anon_sym_substring_DASHbefore] = ACTIONS(81),
    [anon_sym_sum] = ACTIONS(83),
    [anon_sym_system_DASHproperty] = ACTIONS(85),
    [anon_sym_translate] = ACTIONS(87),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(89),
    [anon_sym_base64Encode] = ACTIONS(91),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(95),
    [anon_sym_DOLLARbody] = ACTIONS(97),
    [anon_sym_DOLLARheader] = ACTIONS(97),
    [anon_sym_DOLLARaxis2] = ACTIONS(97),
    [anon_sym_ctx] = ACTIONS(99),
    [anon_sym_DOLLARtrp] = ACTIONS(97),
    [anon_sym_DOLLARurl] = ACTIONS(97),
    [anon_sym_DOLLARfunc] = ACTIONS(97),
    [anon_sym_DOLLARenv] = ACTIONS(97),
  },
  [25] = {
    [sym_xpath] = STATE(431),
    [sym__xpath_selectors] = STATE(6),
    [sym__xPath_extension_functions] = STATE(6),
    [sym__xpath_function] = STATE(6),
    [sym_boolean_function] = STATE(6),
    [sym_ceiling_function] = STATE(6),
    [sym_choose_function] = STATE(6),
    [sym_concat_function] = STATE(6),
    [sym_contains_function] = STATE(6),
    [sym_count_function] = STATE(6),
    [sym_current_function] = STATE(6),
    [sym_document_function] = STATE(6),
    [sym_element_available_function] = STATE(6),
    [sym_false_function] = STATE(6),
    [sym_floor_function] = STATE(6),
    [sym_format_number_function] = STATE(6),
    [sym_function_available_function] = STATE(6),
    [sym_generate_id_function] = STATE(6),
    [sym_id_function] = STATE(6),
    [sym_key_function] = STATE(6),
    [sym_lang_function] = STATE(6),
    [sym_last_function] = STATE(6),
    [sym_local_name_function] = STATE(6),
    [sym_name_function] = STATE(6),
    [sym_namespace_uri_function] = STATE(6),
    [sym_normalize_space_function] = STATE(6),
    [sym_not_function] = STATE(6),
    [sym_number_function] = STATE(6),
    [sym_position_function] = STATE(6),
    [sym_round_function] = STATE(6),
    [sym_starts_with_function] = STATE(6),
    [sym_string_function] = STATE(6),
    [sym_string_length_function] = STATE(6),
    [sym_substring_function] = STATE(6),
    [sym_substring_after_function] = STATE(6),
    [sym_substring_before_function] = STATE(6),
    [sym_sum_function] = STATE(6),
    [sym_system_property_function] = STATE(6),
    [sym_translate_function] = STATE(6),
    [sym_true_function] = STATE(6),
    [sym_unparsed_entity_url_function] = STATE(6),
    [sym_base64_encode] = STATE(6),
    [sym_base64_decode] = STATE(6),
    [sym_get_property] = STATE(6),
    [sym__xpath_string] = STATE(6),
    [sym_synapse_xpath_property] = STATE(6),
    [aux_sym_xpath_repeat1] = STATE(6),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_boolean] = ACTIONS(27),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_concat] = ACTIONS(33),
    [anon_sym_contains] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [anon_sym_current] = ACTIONS(39),
    [anon_sym_document] = ACTIONS(41),
    [anon_sym_element_DASHavailable] = ACTIONS(43),
    [anon_sym_floor] = ACTIONS(45),
    [anon_sym_format_DASHnumber] = ACTIONS(47),
    [anon_sym_function_DASHavailable] = ACTIONS(49),
    [anon_sym_generate_DASHid] = ACTIONS(51),
    [anon_sym_lang] = ACTIONS(53),
    [anon_sym_last] = ACTIONS(55),
    [anon_sym_local_DASHname] = ACTIONS(57),
    [anon_sym_namespace_DASHuri] = ACTIONS(59),
    [anon_sym_normalize_DASHspace] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_number] = ACTIONS(65),
    [anon_sym_position] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(69),
    [anon_sym_starts_DASHwith] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(73),
    [anon_sym_string_DASHlength] = ACTIONS(75),
    [anon_sym_substring] = ACTIONS(77),
    [anon_sym_substring_DASHafter] = ACTIONS(79),
    [anon_sym_substring_DASHbefore] = ACTIONS(81),
    [anon_sym_sum] = ACTIONS(83),
    [anon_sym_system_DASHproperty] = ACTIONS(85),
    [anon_sym_translate] = ACTIONS(87),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(89),
    [anon_sym_base64Encode] = ACTIONS(91),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(95),
    [anon_sym_DOLLARbody] = ACTIONS(97),
    [anon_sym_DOLLARheader] = ACTIONS(97),
    [anon_sym_DOLLARaxis2] = ACTIONS(97),
    [anon_sym_ctx] = ACTIONS(99),
    [anon_sym_DOLLARtrp] = ACTIONS(97),
    [anon_sym_DOLLARurl] = ACTIONS(97),
    [anon_sym_DOLLARfunc] = ACTIONS(97),
    [anon_sym_DOLLARenv] = ACTIONS(97),
  },
  [26] = {
    [sym_xpath] = STATE(449),
    [sym__xpath_selectors] = STATE(6),
    [sym__xPath_extension_functions] = STATE(6),
    [sym__xpath_function] = STATE(6),
    [sym_boolean_function] = STATE(6),
    [sym_ceiling_function] = STATE(6),
    [sym_choose_function] = STATE(6),
    [sym_concat_function] = STATE(6),
    [sym_contains_function] = STATE(6),
    [sym_count_function] = STATE(6),
    [sym_current_function] = STATE(6),
    [sym_document_function] = STATE(6),
    [sym_element_available_function] = STATE(6),
    [sym_false_function] = STATE(6),
    [sym_floor_function] = STATE(6),
    [sym_format_number_function] = STATE(6),
    [sym_function_available_function] = STATE(6),
    [sym_generate_id_function] = STATE(6),
    [sym_id_function] = STATE(6),
    [sym_key_function] = STATE(6),
    [sym_lang_function] = STATE(6),
    [sym_last_function] = STATE(6),
    [sym_local_name_function] = STATE(6),
    [sym_name_function] = STATE(6),
    [sym_namespace_uri_function] = STATE(6),
    [sym_normalize_space_function] = STATE(6),
    [sym_not_function] = STATE(6),
    [sym_number_function] = STATE(6),
    [sym_position_function] = STATE(6),
    [sym_round_function] = STATE(6),
    [sym_starts_with_function] = STATE(6),
    [sym_string_function] = STATE(6),
    [sym_string_length_function] = STATE(6),
    [sym_substring_function] = STATE(6),
    [sym_substring_after_function] = STATE(6),
    [sym_substring_before_function] = STATE(6),
    [sym_sum_function] = STATE(6),
    [sym_system_property_function] = STATE(6),
    [sym_translate_function] = STATE(6),
    [sym_true_function] = STATE(6),
    [sym_unparsed_entity_url_function] = STATE(6),
    [sym_base64_encode] = STATE(6),
    [sym_base64_decode] = STATE(6),
    [sym_get_property] = STATE(6),
    [sym__xpath_string] = STATE(6),
    [sym_synapse_xpath_property] = STATE(6),
    [aux_sym_xpath_repeat1] = STATE(6),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_boolean] = ACTIONS(27),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_concat] = ACTIONS(33),
    [anon_sym_contains] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [anon_sym_current] = ACTIONS(39),
    [anon_sym_document] = ACTIONS(41),
    [anon_sym_element_DASHavailable] = ACTIONS(43),
    [anon_sym_floor] = ACTIONS(45),
    [anon_sym_format_DASHnumber] = ACTIONS(47),
    [anon_sym_function_DASHavailable] = ACTIONS(49),
    [anon_sym_generate_DASHid] = ACTIONS(51),
    [anon_sym_lang] = ACTIONS(53),
    [anon_sym_last] = ACTIONS(55),
    [anon_sym_local_DASHname] = ACTIONS(57),
    [anon_sym_namespace_DASHuri] = ACTIONS(59),
    [anon_sym_normalize_DASHspace] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_number] = ACTIONS(65),
    [anon_sym_position] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(69),
    [anon_sym_starts_DASHwith] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(73),
    [anon_sym_string_DASHlength] = ACTIONS(75),
    [anon_sym_substring] = ACTIONS(77),
    [anon_sym_substring_DASHafter] = ACTIONS(79),
    [anon_sym_substring_DASHbefore] = ACTIONS(81),
    [anon_sym_sum] = ACTIONS(83),
    [anon_sym_system_DASHproperty] = ACTIONS(85),
    [anon_sym_translate] = ACTIONS(87),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(89),
    [anon_sym_base64Encode] = ACTIONS(91),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(95),
    [anon_sym_DOLLARbody] = ACTIONS(97),
    [anon_sym_DOLLARheader] = ACTIONS(97),
    [anon_sym_DOLLARaxis2] = ACTIONS(97),
    [anon_sym_ctx] = ACTIONS(99),
    [anon_sym_DOLLARtrp] = ACTIONS(97),
    [anon_sym_DOLLARurl] = ACTIONS(97),
    [anon_sym_DOLLARfunc] = ACTIONS(97),
    [anon_sym_DOLLARenv] = ACTIONS(97),
  },
  [27] = {
    [sym_xpath] = STATE(429),
    [sym__xpath_selectors] = STATE(6),
    [sym__xPath_extension_functions] = STATE(6),
    [sym__xpath_function] = STATE(6),
    [sym_boolean_function] = STATE(6),
    [sym_ceiling_function] = STATE(6),
    [sym_choose_function] = STATE(6),
    [sym_concat_function] = STATE(6),
    [sym_contains_function] = STATE(6),
    [sym_count_function] = STATE(6),
    [sym_current_function] = STATE(6),
    [sym_document_function] = STATE(6),
    [sym_element_available_function] = STATE(6),
    [sym_false_function] = STATE(6),
    [sym_floor_function] = STATE(6),
    [sym_format_number_function] = STATE(6),
    [sym_function_available_function] = STATE(6),
    [sym_generate_id_function] = STATE(6),
    [sym_id_function] = STATE(6),
    [sym_key_function] = STATE(6),
    [sym_lang_function] = STATE(6),
    [sym_last_function] = STATE(6),
    [sym_local_name_function] = STATE(6),
    [sym_name_function] = STATE(6),
    [sym_namespace_uri_function] = STATE(6),
    [sym_normalize_space_function] = STATE(6),
    [sym_not_function] = STATE(6),
    [sym_number_function] = STATE(6),
    [sym_position_function] = STATE(6),
    [sym_round_function] = STATE(6),
    [sym_starts_with_function] = STATE(6),
    [sym_string_function] = STATE(6),
    [sym_string_length_function] = STATE(6),
    [sym_substring_function] = STATE(6),
    [sym_substring_after_function] = STATE(6),
    [sym_substring_before_function] = STATE(6),
    [sym_sum_function] = STATE(6),
    [sym_system_property_function] = STATE(6),
    [sym_translate_function] = STATE(6),
    [sym_true_function] = STATE(6),
    [sym_unparsed_entity_url_function] = STATE(6),
    [sym_base64_encode] = STATE(6),
    [sym_base64_decode] = STATE(6),
    [sym_get_property] = STATE(6),
    [sym__xpath_string] = STATE(6),
    [sym_synapse_xpath_property] = STATE(6),
    [aux_sym_xpath_repeat1] = STATE(6),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_boolean] = ACTIONS(27),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_concat] = ACTIONS(33),
    [anon_sym_contains] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [anon_sym_current] = ACTIONS(39),
    [anon_sym_document] = ACTIONS(41),
    [anon_sym_element_DASHavailable] = ACTIONS(43),
    [anon_sym_floor] = ACTIONS(45),
    [anon_sym_format_DASHnumber] = ACTIONS(47),
    [anon_sym_function_DASHavailable] = ACTIONS(49),
    [anon_sym_generate_DASHid] = ACTIONS(51),
    [anon_sym_lang] = ACTIONS(53),
    [anon_sym_last] = ACTIONS(55),
    [anon_sym_local_DASHname] = ACTIONS(57),
    [anon_sym_namespace_DASHuri] = ACTIONS(59),
    [anon_sym_normalize_DASHspace] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_number] = ACTIONS(65),
    [anon_sym_position] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(69),
    [anon_sym_starts_DASHwith] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(73),
    [anon_sym_string_DASHlength] = ACTIONS(75),
    [anon_sym_substring] = ACTIONS(77),
    [anon_sym_substring_DASHafter] = ACTIONS(79),
    [anon_sym_substring_DASHbefore] = ACTIONS(81),
    [anon_sym_sum] = ACTIONS(83),
    [anon_sym_system_DASHproperty] = ACTIONS(85),
    [anon_sym_translate] = ACTIONS(87),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(89),
    [anon_sym_base64Encode] = ACTIONS(91),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(95),
    [anon_sym_DOLLARbody] = ACTIONS(97),
    [anon_sym_DOLLARheader] = ACTIONS(97),
    [anon_sym_DOLLARaxis2] = ACTIONS(97),
    [anon_sym_ctx] = ACTIONS(99),
    [anon_sym_DOLLARtrp] = ACTIONS(97),
    [anon_sym_DOLLARurl] = ACTIONS(97),
    [anon_sym_DOLLARfunc] = ACTIONS(97),
    [anon_sym_DOLLARenv] = ACTIONS(97),
  },
  [28] = {
    [sym_xpath] = STATE(428),
    [sym__xpath_selectors] = STATE(6),
    [sym__xPath_extension_functions] = STATE(6),
    [sym__xpath_function] = STATE(6),
    [sym_boolean_function] = STATE(6),
    [sym_ceiling_function] = STATE(6),
    [sym_choose_function] = STATE(6),
    [sym_concat_function] = STATE(6),
    [sym_contains_function] = STATE(6),
    [sym_count_function] = STATE(6),
    [sym_current_function] = STATE(6),
    [sym_document_function] = STATE(6),
    [sym_element_available_function] = STATE(6),
    [sym_false_function] = STATE(6),
    [sym_floor_function] = STATE(6),
    [sym_format_number_function] = STATE(6),
    [sym_function_available_function] = STATE(6),
    [sym_generate_id_function] = STATE(6),
    [sym_id_function] = STATE(6),
    [sym_key_function] = STATE(6),
    [sym_lang_function] = STATE(6),
    [sym_last_function] = STATE(6),
    [sym_local_name_function] = STATE(6),
    [sym_name_function] = STATE(6),
    [sym_namespace_uri_function] = STATE(6),
    [sym_normalize_space_function] = STATE(6),
    [sym_not_function] = STATE(6),
    [sym_number_function] = STATE(6),
    [sym_position_function] = STATE(6),
    [sym_round_function] = STATE(6),
    [sym_starts_with_function] = STATE(6),
    [sym_string_function] = STATE(6),
    [sym_string_length_function] = STATE(6),
    [sym_substring_function] = STATE(6),
    [sym_substring_after_function] = STATE(6),
    [sym_substring_before_function] = STATE(6),
    [sym_sum_function] = STATE(6),
    [sym_system_property_function] = STATE(6),
    [sym_translate_function] = STATE(6),
    [sym_true_function] = STATE(6),
    [sym_unparsed_entity_url_function] = STATE(6),
    [sym_base64_encode] = STATE(6),
    [sym_base64_decode] = STATE(6),
    [sym_get_property] = STATE(6),
    [sym__xpath_string] = STATE(6),
    [sym_synapse_xpath_property] = STATE(6),
    [aux_sym_xpath_repeat1] = STATE(6),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_boolean] = ACTIONS(27),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_concat] = ACTIONS(33),
    [anon_sym_contains] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [anon_sym_current] = ACTIONS(39),
    [anon_sym_document] = ACTIONS(41),
    [anon_sym_element_DASHavailable] = ACTIONS(43),
    [anon_sym_floor] = ACTIONS(45),
    [anon_sym_format_DASHnumber] = ACTIONS(47),
    [anon_sym_function_DASHavailable] = ACTIONS(49),
    [anon_sym_generate_DASHid] = ACTIONS(51),
    [anon_sym_lang] = ACTIONS(53),
    [anon_sym_last] = ACTIONS(55),
    [anon_sym_local_DASHname] = ACTIONS(57),
    [anon_sym_namespace_DASHuri] = ACTIONS(59),
    [anon_sym_normalize_DASHspace] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_number] = ACTIONS(65),
    [anon_sym_position] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(69),
    [anon_sym_starts_DASHwith] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(73),
    [anon_sym_string_DASHlength] = ACTIONS(75),
    [anon_sym_substring] = ACTIONS(77),
    [anon_sym_substring_DASHafter] = ACTIONS(79),
    [anon_sym_substring_DASHbefore] = ACTIONS(81),
    [anon_sym_sum] = ACTIONS(83),
    [anon_sym_system_DASHproperty] = ACTIONS(85),
    [anon_sym_translate] = ACTIONS(87),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(89),
    [anon_sym_base64Encode] = ACTIONS(91),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(95),
    [anon_sym_DOLLARbody] = ACTIONS(97),
    [anon_sym_DOLLARheader] = ACTIONS(97),
    [anon_sym_DOLLARaxis2] = ACTIONS(97),
    [anon_sym_ctx] = ACTIONS(99),
    [anon_sym_DOLLARtrp] = ACTIONS(97),
    [anon_sym_DOLLARurl] = ACTIONS(97),
    [anon_sym_DOLLARfunc] = ACTIONS(97),
    [anon_sym_DOLLARenv] = ACTIONS(97),
  },
  [29] = {
    [sym_xpath] = STATE(427),
    [sym__xpath_selectors] = STATE(6),
    [sym__xPath_extension_functions] = STATE(6),
    [sym__xpath_function] = STATE(6),
    [sym_boolean_function] = STATE(6),
    [sym_ceiling_function] = STATE(6),
    [sym_choose_function] = STATE(6),
    [sym_concat_function] = STATE(6),
    [sym_contains_function] = STATE(6),
    [sym_count_function] = STATE(6),
    [sym_current_function] = STATE(6),
    [sym_document_function] = STATE(6),
    [sym_element_available_function] = STATE(6),
    [sym_false_function] = STATE(6),
    [sym_floor_function] = STATE(6),
    [sym_format_number_function] = STATE(6),
    [sym_function_available_function] = STATE(6),
    [sym_generate_id_function] = STATE(6),
    [sym_id_function] = STATE(6),
    [sym_key_function] = STATE(6),
    [sym_lang_function] = STATE(6),
    [sym_last_function] = STATE(6),
    [sym_local_name_function] = STATE(6),
    [sym_name_function] = STATE(6),
    [sym_namespace_uri_function] = STATE(6),
    [sym_normalize_space_function] = STATE(6),
    [sym_not_function] = STATE(6),
    [sym_number_function] = STATE(6),
    [sym_position_function] = STATE(6),
    [sym_round_function] = STATE(6),
    [sym_starts_with_function] = STATE(6),
    [sym_string_function] = STATE(6),
    [sym_string_length_function] = STATE(6),
    [sym_substring_function] = STATE(6),
    [sym_substring_after_function] = STATE(6),
    [sym_substring_before_function] = STATE(6),
    [sym_sum_function] = STATE(6),
    [sym_system_property_function] = STATE(6),
    [sym_translate_function] = STATE(6),
    [sym_true_function] = STATE(6),
    [sym_unparsed_entity_url_function] = STATE(6),
    [sym_base64_encode] = STATE(6),
    [sym_base64_decode] = STATE(6),
    [sym_get_property] = STATE(6),
    [sym__xpath_string] = STATE(6),
    [sym_synapse_xpath_property] = STATE(6),
    [aux_sym_xpath_repeat1] = STATE(6),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_boolean] = ACTIONS(27),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_concat] = ACTIONS(33),
    [anon_sym_contains] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [anon_sym_current] = ACTIONS(39),
    [anon_sym_document] = ACTIONS(41),
    [anon_sym_element_DASHavailable] = ACTIONS(43),
    [anon_sym_floor] = ACTIONS(45),
    [anon_sym_format_DASHnumber] = ACTIONS(47),
    [anon_sym_function_DASHavailable] = ACTIONS(49),
    [anon_sym_generate_DASHid] = ACTIONS(51),
    [anon_sym_lang] = ACTIONS(53),
    [anon_sym_last] = ACTIONS(55),
    [anon_sym_local_DASHname] = ACTIONS(57),
    [anon_sym_namespace_DASHuri] = ACTIONS(59),
    [anon_sym_normalize_DASHspace] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_number] = ACTIONS(65),
    [anon_sym_position] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(69),
    [anon_sym_starts_DASHwith] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(73),
    [anon_sym_string_DASHlength] = ACTIONS(75),
    [anon_sym_substring] = ACTIONS(77),
    [anon_sym_substring_DASHafter] = ACTIONS(79),
    [anon_sym_substring_DASHbefore] = ACTIONS(81),
    [anon_sym_sum] = ACTIONS(83),
    [anon_sym_system_DASHproperty] = ACTIONS(85),
    [anon_sym_translate] = ACTIONS(87),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(89),
    [anon_sym_base64Encode] = ACTIONS(91),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(95),
    [anon_sym_DOLLARbody] = ACTIONS(97),
    [anon_sym_DOLLARheader] = ACTIONS(97),
    [anon_sym_DOLLARaxis2] = ACTIONS(97),
    [anon_sym_ctx] = ACTIONS(99),
    [anon_sym_DOLLARtrp] = ACTIONS(97),
    [anon_sym_DOLLARurl] = ACTIONS(97),
    [anon_sym_DOLLARfunc] = ACTIONS(97),
    [anon_sym_DOLLARenv] = ACTIONS(97),
  },
  [30] = {
    [sym_xpath] = STATE(426),
    [sym__xpath_selectors] = STATE(6),
    [sym__xPath_extension_functions] = STATE(6),
    [sym__xpath_function] = STATE(6),
    [sym_boolean_function] = STATE(6),
    [sym_ceiling_function] = STATE(6),
    [sym_choose_function] = STATE(6),
    [sym_concat_function] = STATE(6),
    [sym_contains_function] = STATE(6),
    [sym_count_function] = STATE(6),
    [sym_current_function] = STATE(6),
    [sym_document_function] = STATE(6),
    [sym_element_available_function] = STATE(6),
    [sym_false_function] = STATE(6),
    [sym_floor_function] = STATE(6),
    [sym_format_number_function] = STATE(6),
    [sym_function_available_function] = STATE(6),
    [sym_generate_id_function] = STATE(6),
    [sym_id_function] = STATE(6),
    [sym_key_function] = STATE(6),
    [sym_lang_function] = STATE(6),
    [sym_last_function] = STATE(6),
    [sym_local_name_function] = STATE(6),
    [sym_name_function] = STATE(6),
    [sym_namespace_uri_function] = STATE(6),
    [sym_normalize_space_function] = STATE(6),
    [sym_not_function] = STATE(6),
    [sym_number_function] = STATE(6),
    [sym_position_function] = STATE(6),
    [sym_round_function] = STATE(6),
    [sym_starts_with_function] = STATE(6),
    [sym_string_function] = STATE(6),
    [sym_string_length_function] = STATE(6),
    [sym_substring_function] = STATE(6),
    [sym_substring_after_function] = STATE(6),
    [sym_substring_before_function] = STATE(6),
    [sym_sum_function] = STATE(6),
    [sym_system_property_function] = STATE(6),
    [sym_translate_function] = STATE(6),
    [sym_true_function] = STATE(6),
    [sym_unparsed_entity_url_function] = STATE(6),
    [sym_base64_encode] = STATE(6),
    [sym_base64_decode] = STATE(6),
    [sym_get_property] = STATE(6),
    [sym__xpath_string] = STATE(6),
    [sym_synapse_xpath_property] = STATE(6),
    [aux_sym_xpath_repeat1] = STATE(6),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_boolean] = ACTIONS(27),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_concat] = ACTIONS(33),
    [anon_sym_contains] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [anon_sym_current] = ACTIONS(39),
    [anon_sym_document] = ACTIONS(41),
    [anon_sym_element_DASHavailable] = ACTIONS(43),
    [anon_sym_floor] = ACTIONS(45),
    [anon_sym_format_DASHnumber] = ACTIONS(47),
    [anon_sym_function_DASHavailable] = ACTIONS(49),
    [anon_sym_generate_DASHid] = ACTIONS(51),
    [anon_sym_lang] = ACTIONS(53),
    [anon_sym_last] = ACTIONS(55),
    [anon_sym_local_DASHname] = ACTIONS(57),
    [anon_sym_namespace_DASHuri] = ACTIONS(59),
    [anon_sym_normalize_DASHspace] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_number] = ACTIONS(65),
    [anon_sym_position] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(69),
    [anon_sym_starts_DASHwith] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(73),
    [anon_sym_string_DASHlength] = ACTIONS(75),
    [anon_sym_substring] = ACTIONS(77),
    [anon_sym_substring_DASHafter] = ACTIONS(79),
    [anon_sym_substring_DASHbefore] = ACTIONS(81),
    [anon_sym_sum] = ACTIONS(83),
    [anon_sym_system_DASHproperty] = ACTIONS(85),
    [anon_sym_translate] = ACTIONS(87),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(89),
    [anon_sym_base64Encode] = ACTIONS(91),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(95),
    [anon_sym_DOLLARbody] = ACTIONS(97),
    [anon_sym_DOLLARheader] = ACTIONS(97),
    [anon_sym_DOLLARaxis2] = ACTIONS(97),
    [anon_sym_ctx] = ACTIONS(99),
    [anon_sym_DOLLARtrp] = ACTIONS(97),
    [anon_sym_DOLLARurl] = ACTIONS(97),
    [anon_sym_DOLLARfunc] = ACTIONS(97),
    [anon_sym_DOLLARenv] = ACTIONS(97),
  },
  [31] = {
    [sym_xpath] = STATE(425),
    [sym__xpath_selectors] = STATE(6),
    [sym__xPath_extension_functions] = STATE(6),
    [sym__xpath_function] = STATE(6),
    [sym_boolean_function] = STATE(6),
    [sym_ceiling_function] = STATE(6),
    [sym_choose_function] = STATE(6),
    [sym_concat_function] = STATE(6),
    [sym_contains_function] = STATE(6),
    [sym_count_function] = STATE(6),
    [sym_current_function] = STATE(6),
    [sym_document_function] = STATE(6),
    [sym_element_available_function] = STATE(6),
    [sym_false_function] = STATE(6),
    [sym_floor_function] = STATE(6),
    [sym_format_number_function] = STATE(6),
    [sym_function_available_function] = STATE(6),
    [sym_generate_id_function] = STATE(6),
    [sym_id_function] = STATE(6),
    [sym_key_function] = STATE(6),
    [sym_lang_function] = STATE(6),
    [sym_last_function] = STATE(6),
    [sym_local_name_function] = STATE(6),
    [sym_name_function] = STATE(6),
    [sym_namespace_uri_function] = STATE(6),
    [sym_normalize_space_function] = STATE(6),
    [sym_not_function] = STATE(6),
    [sym_number_function] = STATE(6),
    [sym_position_function] = STATE(6),
    [sym_round_function] = STATE(6),
    [sym_starts_with_function] = STATE(6),
    [sym_string_function] = STATE(6),
    [sym_string_length_function] = STATE(6),
    [sym_substring_function] = STATE(6),
    [sym_substring_after_function] = STATE(6),
    [sym_substring_before_function] = STATE(6),
    [sym_sum_function] = STATE(6),
    [sym_system_property_function] = STATE(6),
    [sym_translate_function] = STATE(6),
    [sym_true_function] = STATE(6),
    [sym_unparsed_entity_url_function] = STATE(6),
    [sym_base64_encode] = STATE(6),
    [sym_base64_decode] = STATE(6),
    [sym_get_property] = STATE(6),
    [sym__xpath_string] = STATE(6),
    [sym_synapse_xpath_property] = STATE(6),
    [aux_sym_xpath_repeat1] = STATE(6),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_boolean] = ACTIONS(27),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_concat] = ACTIONS(33),
    [anon_sym_contains] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [anon_sym_current] = ACTIONS(39),
    [anon_sym_document] = ACTIONS(41),
    [anon_sym_element_DASHavailable] = ACTIONS(43),
    [anon_sym_floor] = ACTIONS(45),
    [anon_sym_format_DASHnumber] = ACTIONS(47),
    [anon_sym_function_DASHavailable] = ACTIONS(49),
    [anon_sym_generate_DASHid] = ACTIONS(51),
    [anon_sym_lang] = ACTIONS(53),
    [anon_sym_last] = ACTIONS(55),
    [anon_sym_local_DASHname] = ACTIONS(57),
    [anon_sym_namespace_DASHuri] = ACTIONS(59),
    [anon_sym_normalize_DASHspace] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_number] = ACTIONS(65),
    [anon_sym_position] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(69),
    [anon_sym_starts_DASHwith] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(73),
    [anon_sym_string_DASHlength] = ACTIONS(75),
    [anon_sym_substring] = ACTIONS(77),
    [anon_sym_substring_DASHafter] = ACTIONS(79),
    [anon_sym_substring_DASHbefore] = ACTIONS(81),
    [anon_sym_sum] = ACTIONS(83),
    [anon_sym_system_DASHproperty] = ACTIONS(85),
    [anon_sym_translate] = ACTIONS(87),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(89),
    [anon_sym_base64Encode] = ACTIONS(91),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(95),
    [anon_sym_DOLLARbody] = ACTIONS(97),
    [anon_sym_DOLLARheader] = ACTIONS(97),
    [anon_sym_DOLLARaxis2] = ACTIONS(97),
    [anon_sym_ctx] = ACTIONS(99),
    [anon_sym_DOLLARtrp] = ACTIONS(97),
    [anon_sym_DOLLARurl] = ACTIONS(97),
    [anon_sym_DOLLARfunc] = ACTIONS(97),
    [anon_sym_DOLLARenv] = ACTIONS(97),
  },
  [32] = {
    [sym_xpath] = STATE(424),
    [sym__xpath_selectors] = STATE(6),
    [sym__xPath_extension_functions] = STATE(6),
    [sym__xpath_function] = STATE(6),
    [sym_boolean_function] = STATE(6),
    [sym_ceiling_function] = STATE(6),
    [sym_choose_function] = STATE(6),
    [sym_concat_function] = STATE(6),
    [sym_contains_function] = STATE(6),
    [sym_count_function] = STATE(6),
    [sym_current_function] = STATE(6),
    [sym_document_function] = STATE(6),
    [sym_element_available_function] = STATE(6),
    [sym_false_function] = STATE(6),
    [sym_floor_function] = STATE(6),
    [sym_format_number_function] = STATE(6),
    [sym_function_available_function] = STATE(6),
    [sym_generate_id_function] = STATE(6),
    [sym_id_function] = STATE(6),
    [sym_key_function] = STATE(6),
    [sym_lang_function] = STATE(6),
    [sym_last_function] = STATE(6),
    [sym_local_name_function] = STATE(6),
    [sym_name_function] = STATE(6),
    [sym_namespace_uri_function] = STATE(6),
    [sym_normalize_space_function] = STATE(6),
    [sym_not_function] = STATE(6),
    [sym_number_function] = STATE(6),
    [sym_position_function] = STATE(6),
    [sym_round_function] = STATE(6),
    [sym_starts_with_function] = STATE(6),
    [sym_string_function] = STATE(6),
    [sym_string_length_function] = STATE(6),
    [sym_substring_function] = STATE(6),
    [sym_substring_after_function] = STATE(6),
    [sym_substring_before_function] = STATE(6),
    [sym_sum_function] = STATE(6),
    [sym_system_property_function] = STATE(6),
    [sym_translate_function] = STATE(6),
    [sym_true_function] = STATE(6),
    [sym_unparsed_entity_url_function] = STATE(6),
    [sym_base64_encode] = STATE(6),
    [sym_base64_decode] = STATE(6),
    [sym_get_property] = STATE(6),
    [sym__xpath_string] = STATE(6),
    [sym_synapse_xpath_property] = STATE(6),
    [aux_sym_xpath_repeat1] = STATE(6),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_boolean] = ACTIONS(27),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_concat] = ACTIONS(33),
    [anon_sym_contains] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [anon_sym_current] = ACTIONS(39),
    [anon_sym_document] = ACTIONS(41),
    [anon_sym_element_DASHavailable] = ACTIONS(43),
    [anon_sym_floor] = ACTIONS(45),
    [anon_sym_format_DASHnumber] = ACTIONS(47),
    [anon_sym_function_DASHavailable] = ACTIONS(49),
    [anon_sym_generate_DASHid] = ACTIONS(51),
    [anon_sym_lang] = ACTIONS(53),
    [anon_sym_last] = ACTIONS(55),
    [anon_sym_local_DASHname] = ACTIONS(57),
    [anon_sym_namespace_DASHuri] = ACTIONS(59),
    [anon_sym_normalize_DASHspace] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_number] = ACTIONS(65),
    [anon_sym_position] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(69),
    [anon_sym_starts_DASHwith] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(73),
    [anon_sym_string_DASHlength] = ACTIONS(75),
    [anon_sym_substring] = ACTIONS(77),
    [anon_sym_substring_DASHafter] = ACTIONS(79),
    [anon_sym_substring_DASHbefore] = ACTIONS(81),
    [anon_sym_sum] = ACTIONS(83),
    [anon_sym_system_DASHproperty] = ACTIONS(85),
    [anon_sym_translate] = ACTIONS(87),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(89),
    [anon_sym_base64Encode] = ACTIONS(91),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(95),
    [anon_sym_DOLLARbody] = ACTIONS(97),
    [anon_sym_DOLLARheader] = ACTIONS(97),
    [anon_sym_DOLLARaxis2] = ACTIONS(97),
    [anon_sym_ctx] = ACTIONS(99),
    [anon_sym_DOLLARtrp] = ACTIONS(97),
    [anon_sym_DOLLARurl] = ACTIONS(97),
    [anon_sym_DOLLARfunc] = ACTIONS(97),
    [anon_sym_DOLLARenv] = ACTIONS(97),
  },
  [33] = {
    [sym_xpath] = STATE(423),
    [sym__xpath_selectors] = STATE(6),
    [sym__xPath_extension_functions] = STATE(6),
    [sym__xpath_function] = STATE(6),
    [sym_boolean_function] = STATE(6),
    [sym_ceiling_function] = STATE(6),
    [sym_choose_function] = STATE(6),
    [sym_concat_function] = STATE(6),
    [sym_contains_function] = STATE(6),
    [sym_count_function] = STATE(6),
    [sym_current_function] = STATE(6),
    [sym_document_function] = STATE(6),
    [sym_element_available_function] = STATE(6),
    [sym_false_function] = STATE(6),
    [sym_floor_function] = STATE(6),
    [sym_format_number_function] = STATE(6),
    [sym_function_available_function] = STATE(6),
    [sym_generate_id_function] = STATE(6),
    [sym_id_function] = STATE(6),
    [sym_key_function] = STATE(6),
    [sym_lang_function] = STATE(6),
    [sym_last_function] = STATE(6),
    [sym_local_name_function] = STATE(6),
    [sym_name_function] = STATE(6),
    [sym_namespace_uri_function] = STATE(6),
    [sym_normalize_space_function] = STATE(6),
    [sym_not_function] = STATE(6),
    [sym_number_function] = STATE(6),
    [sym_position_function] = STATE(6),
    [sym_round_function] = STATE(6),
    [sym_starts_with_function] = STATE(6),
    [sym_string_function] = STATE(6),
    [sym_string_length_function] = STATE(6),
    [sym_substring_function] = STATE(6),
    [sym_substring_after_function] = STATE(6),
    [sym_substring_before_function] = STATE(6),
    [sym_sum_function] = STATE(6),
    [sym_system_property_function] = STATE(6),
    [sym_translate_function] = STATE(6),
    [sym_true_function] = STATE(6),
    [sym_unparsed_entity_url_function] = STATE(6),
    [sym_base64_encode] = STATE(6),
    [sym_base64_decode] = STATE(6),
    [sym_get_property] = STATE(6),
    [sym__xpath_string] = STATE(6),
    [sym_synapse_xpath_property] = STATE(6),
    [aux_sym_xpath_repeat1] = STATE(6),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_boolean] = ACTIONS(27),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_concat] = ACTIONS(33),
    [anon_sym_contains] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [anon_sym_current] = ACTIONS(39),
    [anon_sym_document] = ACTIONS(41),
    [anon_sym_element_DASHavailable] = ACTIONS(43),
    [anon_sym_floor] = ACTIONS(45),
    [anon_sym_format_DASHnumber] = ACTIONS(47),
    [anon_sym_function_DASHavailable] = ACTIONS(49),
    [anon_sym_generate_DASHid] = ACTIONS(51),
    [anon_sym_lang] = ACTIONS(53),
    [anon_sym_last] = ACTIONS(55),
    [anon_sym_local_DASHname] = ACTIONS(57),
    [anon_sym_namespace_DASHuri] = ACTIONS(59),
    [anon_sym_normalize_DASHspace] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_number] = ACTIONS(65),
    [anon_sym_position] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(69),
    [anon_sym_starts_DASHwith] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(73),
    [anon_sym_string_DASHlength] = ACTIONS(75),
    [anon_sym_substring] = ACTIONS(77),
    [anon_sym_substring_DASHafter] = ACTIONS(79),
    [anon_sym_substring_DASHbefore] = ACTIONS(81),
    [anon_sym_sum] = ACTIONS(83),
    [anon_sym_system_DASHproperty] = ACTIONS(85),
    [anon_sym_translate] = ACTIONS(87),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(89),
    [anon_sym_base64Encode] = ACTIONS(91),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(95),
    [anon_sym_DOLLARbody] = ACTIONS(97),
    [anon_sym_DOLLARheader] = ACTIONS(97),
    [anon_sym_DOLLARaxis2] = ACTIONS(97),
    [anon_sym_ctx] = ACTIONS(99),
    [anon_sym_DOLLARtrp] = ACTIONS(97),
    [anon_sym_DOLLARurl] = ACTIONS(97),
    [anon_sym_DOLLARfunc] = ACTIONS(97),
    [anon_sym_DOLLARenv] = ACTIONS(97),
  },
  [34] = {
    [sym_xpath] = STATE(422),
    [sym__xpath_selectors] = STATE(6),
    [sym__xPath_extension_functions] = STATE(6),
    [sym__xpath_function] = STATE(6),
    [sym_boolean_function] = STATE(6),
    [sym_ceiling_function] = STATE(6),
    [sym_choose_function] = STATE(6),
    [sym_concat_function] = STATE(6),
    [sym_contains_function] = STATE(6),
    [sym_count_function] = STATE(6),
    [sym_current_function] = STATE(6),
    [sym_document_function] = STATE(6),
    [sym_element_available_function] = STATE(6),
    [sym_false_function] = STATE(6),
    [sym_floor_function] = STATE(6),
    [sym_format_number_function] = STATE(6),
    [sym_function_available_function] = STATE(6),
    [sym_generate_id_function] = STATE(6),
    [sym_id_function] = STATE(6),
    [sym_key_function] = STATE(6),
    [sym_lang_function] = STATE(6),
    [sym_last_function] = STATE(6),
    [sym_local_name_function] = STATE(6),
    [sym_name_function] = STATE(6),
    [sym_namespace_uri_function] = STATE(6),
    [sym_normalize_space_function] = STATE(6),
    [sym_not_function] = STATE(6),
    [sym_number_function] = STATE(6),
    [sym_position_function] = STATE(6),
    [sym_round_function] = STATE(6),
    [sym_starts_with_function] = STATE(6),
    [sym_string_function] = STATE(6),
    [sym_string_length_function] = STATE(6),
    [sym_substring_function] = STATE(6),
    [sym_substring_after_function] = STATE(6),
    [sym_substring_before_function] = STATE(6),
    [sym_sum_function] = STATE(6),
    [sym_system_property_function] = STATE(6),
    [sym_translate_function] = STATE(6),
    [sym_true_function] = STATE(6),
    [sym_unparsed_entity_url_function] = STATE(6),
    [sym_base64_encode] = STATE(6),
    [sym_base64_decode] = STATE(6),
    [sym_get_property] = STATE(6),
    [sym__xpath_string] = STATE(6),
    [sym_synapse_xpath_property] = STATE(6),
    [aux_sym_xpath_repeat1] = STATE(6),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_boolean] = ACTIONS(27),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_concat] = ACTIONS(33),
    [anon_sym_contains] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [anon_sym_current] = ACTIONS(39),
    [anon_sym_document] = ACTIONS(41),
    [anon_sym_element_DASHavailable] = ACTIONS(43),
    [anon_sym_floor] = ACTIONS(45),
    [anon_sym_format_DASHnumber] = ACTIONS(47),
    [anon_sym_function_DASHavailable] = ACTIONS(49),
    [anon_sym_generate_DASHid] = ACTIONS(51),
    [anon_sym_lang] = ACTIONS(53),
    [anon_sym_last] = ACTIONS(55),
    [anon_sym_local_DASHname] = ACTIONS(57),
    [anon_sym_namespace_DASHuri] = ACTIONS(59),
    [anon_sym_normalize_DASHspace] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_number] = ACTIONS(65),
    [anon_sym_position] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(69),
    [anon_sym_starts_DASHwith] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(73),
    [anon_sym_string_DASHlength] = ACTIONS(75),
    [anon_sym_substring] = ACTIONS(77),
    [anon_sym_substring_DASHafter] = ACTIONS(79),
    [anon_sym_substring_DASHbefore] = ACTIONS(81),
    [anon_sym_sum] = ACTIONS(83),
    [anon_sym_system_DASHproperty] = ACTIONS(85),
    [anon_sym_translate] = ACTIONS(87),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(89),
    [anon_sym_base64Encode] = ACTIONS(91),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(95),
    [anon_sym_DOLLARbody] = ACTIONS(97),
    [anon_sym_DOLLARheader] = ACTIONS(97),
    [anon_sym_DOLLARaxis2] = ACTIONS(97),
    [anon_sym_ctx] = ACTIONS(99),
    [anon_sym_DOLLARtrp] = ACTIONS(97),
    [anon_sym_DOLLARurl] = ACTIONS(97),
    [anon_sym_DOLLARfunc] = ACTIONS(97),
    [anon_sym_DOLLARenv] = ACTIONS(97),
  },
  [35] = {
    [sym_xpath] = STATE(421),
    [sym__xpath_selectors] = STATE(6),
    [sym__xPath_extension_functions] = STATE(6),
    [sym__xpath_function] = STATE(6),
    [sym_boolean_function] = STATE(6),
    [sym_ceiling_function] = STATE(6),
    [sym_choose_function] = STATE(6),
    [sym_concat_function] = STATE(6),
    [sym_contains_function] = STATE(6),
    [sym_count_function] = STATE(6),
    [sym_current_function] = STATE(6),
    [sym_document_function] = STATE(6),
    [sym_element_available_function] = STATE(6),
    [sym_false_function] = STATE(6),
    [sym_floor_function] = STATE(6),
    [sym_format_number_function] = STATE(6),
    [sym_function_available_function] = STATE(6),
    [sym_generate_id_function] = STATE(6),
    [sym_id_function] = STATE(6),
    [sym_key_function] = STATE(6),
    [sym_lang_function] = STATE(6),
    [sym_last_function] = STATE(6),
    [sym_local_name_function] = STATE(6),
    [sym_name_function] = STATE(6),
    [sym_namespace_uri_function] = STATE(6),
    [sym_normalize_space_function] = STATE(6),
    [sym_not_function] = STATE(6),
    [sym_number_function] = STATE(6),
    [sym_position_function] = STATE(6),
    [sym_round_function] = STATE(6),
    [sym_starts_with_function] = STATE(6),
    [sym_string_function] = STATE(6),
    [sym_string_length_function] = STATE(6),
    [sym_substring_function] = STATE(6),
    [sym_substring_after_function] = STATE(6),
    [sym_substring_before_function] = STATE(6),
    [sym_sum_function] = STATE(6),
    [sym_system_property_function] = STATE(6),
    [sym_translate_function] = STATE(6),
    [sym_true_function] = STATE(6),
    [sym_unparsed_entity_url_function] = STATE(6),
    [sym_base64_encode] = STATE(6),
    [sym_base64_decode] = STATE(6),
    [sym_get_property] = STATE(6),
    [sym__xpath_string] = STATE(6),
    [sym_synapse_xpath_property] = STATE(6),
    [aux_sym_xpath_repeat1] = STATE(6),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_boolean] = ACTIONS(27),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_concat] = ACTIONS(33),
    [anon_sym_contains] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [anon_sym_current] = ACTIONS(39),
    [anon_sym_document] = ACTIONS(41),
    [anon_sym_element_DASHavailable] = ACTIONS(43),
    [anon_sym_floor] = ACTIONS(45),
    [anon_sym_format_DASHnumber] = ACTIONS(47),
    [anon_sym_function_DASHavailable] = ACTIONS(49),
    [anon_sym_generate_DASHid] = ACTIONS(51),
    [anon_sym_lang] = ACTIONS(53),
    [anon_sym_last] = ACTIONS(55),
    [anon_sym_local_DASHname] = ACTIONS(57),
    [anon_sym_namespace_DASHuri] = ACTIONS(59),
    [anon_sym_normalize_DASHspace] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_number] = ACTIONS(65),
    [anon_sym_position] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(69),
    [anon_sym_starts_DASHwith] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(73),
    [anon_sym_string_DASHlength] = ACTIONS(75),
    [anon_sym_substring] = ACTIONS(77),
    [anon_sym_substring_DASHafter] = ACTIONS(79),
    [anon_sym_substring_DASHbefore] = ACTIONS(81),
    [anon_sym_sum] = ACTIONS(83),
    [anon_sym_system_DASHproperty] = ACTIONS(85),
    [anon_sym_translate] = ACTIONS(87),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(89),
    [anon_sym_base64Encode] = ACTIONS(91),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(95),
    [anon_sym_DOLLARbody] = ACTIONS(97),
    [anon_sym_DOLLARheader] = ACTIONS(97),
    [anon_sym_DOLLARaxis2] = ACTIONS(97),
    [anon_sym_ctx] = ACTIONS(99),
    [anon_sym_DOLLARtrp] = ACTIONS(97),
    [anon_sym_DOLLARurl] = ACTIONS(97),
    [anon_sym_DOLLARfunc] = ACTIONS(97),
    [anon_sym_DOLLARenv] = ACTIONS(97),
  },
  [36] = {
    [sym_xpath] = STATE(420),
    [sym__xpath_selectors] = STATE(6),
    [sym__xPath_extension_functions] = STATE(6),
    [sym__xpath_function] = STATE(6),
    [sym_boolean_function] = STATE(6),
    [sym_ceiling_function] = STATE(6),
    [sym_choose_function] = STATE(6),
    [sym_concat_function] = STATE(6),
    [sym_contains_function] = STATE(6),
    [sym_count_function] = STATE(6),
    [sym_current_function] = STATE(6),
    [sym_document_function] = STATE(6),
    [sym_element_available_function] = STATE(6),
    [sym_false_function] = STATE(6),
    [sym_floor_function] = STATE(6),
    [sym_format_number_function] = STATE(6),
    [sym_function_available_function] = STATE(6),
    [sym_generate_id_function] = STATE(6),
    [sym_id_function] = STATE(6),
    [sym_key_function] = STATE(6),
    [sym_lang_function] = STATE(6),
    [sym_last_function] = STATE(6),
    [sym_local_name_function] = STATE(6),
    [sym_name_function] = STATE(6),
    [sym_namespace_uri_function] = STATE(6),
    [sym_normalize_space_function] = STATE(6),
    [sym_not_function] = STATE(6),
    [sym_number_function] = STATE(6),
    [sym_position_function] = STATE(6),
    [sym_round_function] = STATE(6),
    [sym_starts_with_function] = STATE(6),
    [sym_string_function] = STATE(6),
    [sym_string_length_function] = STATE(6),
    [sym_substring_function] = STATE(6),
    [sym_substring_after_function] = STATE(6),
    [sym_substring_before_function] = STATE(6),
    [sym_sum_function] = STATE(6),
    [sym_system_property_function] = STATE(6),
    [sym_translate_function] = STATE(6),
    [sym_true_function] = STATE(6),
    [sym_unparsed_entity_url_function] = STATE(6),
    [sym_base64_encode] = STATE(6),
    [sym_base64_decode] = STATE(6),
    [sym_get_property] = STATE(6),
    [sym__xpath_string] = STATE(6),
    [sym_synapse_xpath_property] = STATE(6),
    [aux_sym_xpath_repeat1] = STATE(6),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_boolean] = ACTIONS(27),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_concat] = ACTIONS(33),
    [anon_sym_contains] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [anon_sym_current] = ACTIONS(39),
    [anon_sym_document] = ACTIONS(41),
    [anon_sym_element_DASHavailable] = ACTIONS(43),
    [anon_sym_floor] = ACTIONS(45),
    [anon_sym_format_DASHnumber] = ACTIONS(47),
    [anon_sym_function_DASHavailable] = ACTIONS(49),
    [anon_sym_generate_DASHid] = ACTIONS(51),
    [anon_sym_lang] = ACTIONS(53),
    [anon_sym_last] = ACTIONS(55),
    [anon_sym_local_DASHname] = ACTIONS(57),
    [anon_sym_namespace_DASHuri] = ACTIONS(59),
    [anon_sym_normalize_DASHspace] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_number] = ACTIONS(65),
    [anon_sym_position] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(69),
    [anon_sym_starts_DASHwith] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(73),
    [anon_sym_string_DASHlength] = ACTIONS(75),
    [anon_sym_substring] = ACTIONS(77),
    [anon_sym_substring_DASHafter] = ACTIONS(79),
    [anon_sym_substring_DASHbefore] = ACTIONS(81),
    [anon_sym_sum] = ACTIONS(83),
    [anon_sym_system_DASHproperty] = ACTIONS(85),
    [anon_sym_translate] = ACTIONS(87),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(89),
    [anon_sym_base64Encode] = ACTIONS(91),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(95),
    [anon_sym_DOLLARbody] = ACTIONS(97),
    [anon_sym_DOLLARheader] = ACTIONS(97),
    [anon_sym_DOLLARaxis2] = ACTIONS(97),
    [anon_sym_ctx] = ACTIONS(99),
    [anon_sym_DOLLARtrp] = ACTIONS(97),
    [anon_sym_DOLLARurl] = ACTIONS(97),
    [anon_sym_DOLLARfunc] = ACTIONS(97),
    [anon_sym_DOLLARenv] = ACTIONS(97),
  },
  [37] = {
    [sym_xpath] = STATE(419),
    [sym__xpath_selectors] = STATE(6),
    [sym__xPath_extension_functions] = STATE(6),
    [sym__xpath_function] = STATE(6),
    [sym_boolean_function] = STATE(6),
    [sym_ceiling_function] = STATE(6),
    [sym_choose_function] = STATE(6),
    [sym_concat_function] = STATE(6),
    [sym_contains_function] = STATE(6),
    [sym_count_function] = STATE(6),
    [sym_current_function] = STATE(6),
    [sym_document_function] = STATE(6),
    [sym_element_available_function] = STATE(6),
    [sym_false_function] = STATE(6),
    [sym_floor_function] = STATE(6),
    [sym_format_number_function] = STATE(6),
    [sym_function_available_function] = STATE(6),
    [sym_generate_id_function] = STATE(6),
    [sym_id_function] = STATE(6),
    [sym_key_function] = STATE(6),
    [sym_lang_function] = STATE(6),
    [sym_last_function] = STATE(6),
    [sym_local_name_function] = STATE(6),
    [sym_name_function] = STATE(6),
    [sym_namespace_uri_function] = STATE(6),
    [sym_normalize_space_function] = STATE(6),
    [sym_not_function] = STATE(6),
    [sym_number_function] = STATE(6),
    [sym_position_function] = STATE(6),
    [sym_round_function] = STATE(6),
    [sym_starts_with_function] = STATE(6),
    [sym_string_function] = STATE(6),
    [sym_string_length_function] = STATE(6),
    [sym_substring_function] = STATE(6),
    [sym_substring_after_function] = STATE(6),
    [sym_substring_before_function] = STATE(6),
    [sym_sum_function] = STATE(6),
    [sym_system_property_function] = STATE(6),
    [sym_translate_function] = STATE(6),
    [sym_true_function] = STATE(6),
    [sym_unparsed_entity_url_function] = STATE(6),
    [sym_base64_encode] = STATE(6),
    [sym_base64_decode] = STATE(6),
    [sym_get_property] = STATE(6),
    [sym__xpath_string] = STATE(6),
    [sym_synapse_xpath_property] = STATE(6),
    [aux_sym_xpath_repeat1] = STATE(6),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_boolean] = ACTIONS(27),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_concat] = ACTIONS(33),
    [anon_sym_contains] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [anon_sym_current] = ACTIONS(39),
    [anon_sym_document] = ACTIONS(41),
    [anon_sym_element_DASHavailable] = ACTIONS(43),
    [anon_sym_floor] = ACTIONS(45),
    [anon_sym_format_DASHnumber] = ACTIONS(47),
    [anon_sym_function_DASHavailable] = ACTIONS(49),
    [anon_sym_generate_DASHid] = ACTIONS(51),
    [anon_sym_lang] = ACTIONS(53),
    [anon_sym_last] = ACTIONS(55),
    [anon_sym_local_DASHname] = ACTIONS(57),
    [anon_sym_namespace_DASHuri] = ACTIONS(59),
    [anon_sym_normalize_DASHspace] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_number] = ACTIONS(65),
    [anon_sym_position] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(69),
    [anon_sym_starts_DASHwith] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(73),
    [anon_sym_string_DASHlength] = ACTIONS(75),
    [anon_sym_substring] = ACTIONS(77),
    [anon_sym_substring_DASHafter] = ACTIONS(79),
    [anon_sym_substring_DASHbefore] = ACTIONS(81),
    [anon_sym_sum] = ACTIONS(83),
    [anon_sym_system_DASHproperty] = ACTIONS(85),
    [anon_sym_translate] = ACTIONS(87),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(89),
    [anon_sym_base64Encode] = ACTIONS(91),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(95),
    [anon_sym_DOLLARbody] = ACTIONS(97),
    [anon_sym_DOLLARheader] = ACTIONS(97),
    [anon_sym_DOLLARaxis2] = ACTIONS(97),
    [anon_sym_ctx] = ACTIONS(99),
    [anon_sym_DOLLARtrp] = ACTIONS(97),
    [anon_sym_DOLLARurl] = ACTIONS(97),
    [anon_sym_DOLLARfunc] = ACTIONS(97),
    [anon_sym_DOLLARenv] = ACTIONS(97),
  },
  [38] = {
    [sym_xpath] = STATE(418),
    [sym__xpath_selectors] = STATE(6),
    [sym__xPath_extension_functions] = STATE(6),
    [sym__xpath_function] = STATE(6),
    [sym_boolean_function] = STATE(6),
    [sym_ceiling_function] = STATE(6),
    [sym_choose_function] = STATE(6),
    [sym_concat_function] = STATE(6),
    [sym_contains_function] = STATE(6),
    [sym_count_function] = STATE(6),
    [sym_current_function] = STATE(6),
    [sym_document_function] = STATE(6),
    [sym_element_available_function] = STATE(6),
    [sym_false_function] = STATE(6),
    [sym_floor_function] = STATE(6),
    [sym_format_number_function] = STATE(6),
    [sym_function_available_function] = STATE(6),
    [sym_generate_id_function] = STATE(6),
    [sym_id_function] = STATE(6),
    [sym_key_function] = STATE(6),
    [sym_lang_function] = STATE(6),
    [sym_last_function] = STATE(6),
    [sym_local_name_function] = STATE(6),
    [sym_name_function] = STATE(6),
    [sym_namespace_uri_function] = STATE(6),
    [sym_normalize_space_function] = STATE(6),
    [sym_not_function] = STATE(6),
    [sym_number_function] = STATE(6),
    [sym_position_function] = STATE(6),
    [sym_round_function] = STATE(6),
    [sym_starts_with_function] = STATE(6),
    [sym_string_function] = STATE(6),
    [sym_string_length_function] = STATE(6),
    [sym_substring_function] = STATE(6),
    [sym_substring_after_function] = STATE(6),
    [sym_substring_before_function] = STATE(6),
    [sym_sum_function] = STATE(6),
    [sym_system_property_function] = STATE(6),
    [sym_translate_function] = STATE(6),
    [sym_true_function] = STATE(6),
    [sym_unparsed_entity_url_function] = STATE(6),
    [sym_base64_encode] = STATE(6),
    [sym_base64_decode] = STATE(6),
    [sym_get_property] = STATE(6),
    [sym__xpath_string] = STATE(6),
    [sym_synapse_xpath_property] = STATE(6),
    [aux_sym_xpath_repeat1] = STATE(6),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_boolean] = ACTIONS(27),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_concat] = ACTIONS(33),
    [anon_sym_contains] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [anon_sym_current] = ACTIONS(39),
    [anon_sym_document] = ACTIONS(41),
    [anon_sym_element_DASHavailable] = ACTIONS(43),
    [anon_sym_floor] = ACTIONS(45),
    [anon_sym_format_DASHnumber] = ACTIONS(47),
    [anon_sym_function_DASHavailable] = ACTIONS(49),
    [anon_sym_generate_DASHid] = ACTIONS(51),
    [anon_sym_lang] = ACTIONS(53),
    [anon_sym_last] = ACTIONS(55),
    [anon_sym_local_DASHname] = ACTIONS(57),
    [anon_sym_namespace_DASHuri] = ACTIONS(59),
    [anon_sym_normalize_DASHspace] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_number] = ACTIONS(65),
    [anon_sym_position] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(69),
    [anon_sym_starts_DASHwith] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(73),
    [anon_sym_string_DASHlength] = ACTIONS(75),
    [anon_sym_substring] = ACTIONS(77),
    [anon_sym_substring_DASHafter] = ACTIONS(79),
    [anon_sym_substring_DASHbefore] = ACTIONS(81),
    [anon_sym_sum] = ACTIONS(83),
    [anon_sym_system_DASHproperty] = ACTIONS(85),
    [anon_sym_translate] = ACTIONS(87),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(89),
    [anon_sym_base64Encode] = ACTIONS(91),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(95),
    [anon_sym_DOLLARbody] = ACTIONS(97),
    [anon_sym_DOLLARheader] = ACTIONS(97),
    [anon_sym_DOLLARaxis2] = ACTIONS(97),
    [anon_sym_ctx] = ACTIONS(99),
    [anon_sym_DOLLARtrp] = ACTIONS(97),
    [anon_sym_DOLLARurl] = ACTIONS(97),
    [anon_sym_DOLLARfunc] = ACTIONS(97),
    [anon_sym_DOLLARenv] = ACTIONS(97),
  },
  [39] = {
    [sym_xpath] = STATE(417),
    [sym__xpath_selectors] = STATE(6),
    [sym__xPath_extension_functions] = STATE(6),
    [sym__xpath_function] = STATE(6),
    [sym_boolean_function] = STATE(6),
    [sym_ceiling_function] = STATE(6),
    [sym_choose_function] = STATE(6),
    [sym_concat_function] = STATE(6),
    [sym_contains_function] = STATE(6),
    [sym_count_function] = STATE(6),
    [sym_current_function] = STATE(6),
    [sym_document_function] = STATE(6),
    [sym_element_available_function] = STATE(6),
    [sym_false_function] = STATE(6),
    [sym_floor_function] = STATE(6),
    [sym_format_number_function] = STATE(6),
    [sym_function_available_function] = STATE(6),
    [sym_generate_id_function] = STATE(6),
    [sym_id_function] = STATE(6),
    [sym_key_function] = STATE(6),
    [sym_lang_function] = STATE(6),
    [sym_last_function] = STATE(6),
    [sym_local_name_function] = STATE(6),
    [sym_name_function] = STATE(6),
    [sym_namespace_uri_function] = STATE(6),
    [sym_normalize_space_function] = STATE(6),
    [sym_not_function] = STATE(6),
    [sym_number_function] = STATE(6),
    [sym_position_function] = STATE(6),
    [sym_round_function] = STATE(6),
    [sym_starts_with_function] = STATE(6),
    [sym_string_function] = STATE(6),
    [sym_string_length_function] = STATE(6),
    [sym_substring_function] = STATE(6),
    [sym_substring_after_function] = STATE(6),
    [sym_substring_before_function] = STATE(6),
    [sym_sum_function] = STATE(6),
    [sym_system_property_function] = STATE(6),
    [sym_translate_function] = STATE(6),
    [sym_true_function] = STATE(6),
    [sym_unparsed_entity_url_function] = STATE(6),
    [sym_base64_encode] = STATE(6),
    [sym_base64_decode] = STATE(6),
    [sym_get_property] = STATE(6),
    [sym__xpath_string] = STATE(6),
    [sym_synapse_xpath_property] = STATE(6),
    [aux_sym_xpath_repeat1] = STATE(6),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_boolean] = ACTIONS(27),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_concat] = ACTIONS(33),
    [anon_sym_contains] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [anon_sym_current] = ACTIONS(39),
    [anon_sym_document] = ACTIONS(41),
    [anon_sym_element_DASHavailable] = ACTIONS(43),
    [anon_sym_floor] = ACTIONS(45),
    [anon_sym_format_DASHnumber] = ACTIONS(47),
    [anon_sym_function_DASHavailable] = ACTIONS(49),
    [anon_sym_generate_DASHid] = ACTIONS(51),
    [anon_sym_lang] = ACTIONS(53),
    [anon_sym_last] = ACTIONS(55),
    [anon_sym_local_DASHname] = ACTIONS(57),
    [anon_sym_namespace_DASHuri] = ACTIONS(59),
    [anon_sym_normalize_DASHspace] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_number] = ACTIONS(65),
    [anon_sym_position] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(69),
    [anon_sym_starts_DASHwith] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(73),
    [anon_sym_string_DASHlength] = ACTIONS(75),
    [anon_sym_substring] = ACTIONS(77),
    [anon_sym_substring_DASHafter] = ACTIONS(79),
    [anon_sym_substring_DASHbefore] = ACTIONS(81),
    [anon_sym_sum] = ACTIONS(83),
    [anon_sym_system_DASHproperty] = ACTIONS(85),
    [anon_sym_translate] = ACTIONS(87),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(89),
    [anon_sym_base64Encode] = ACTIONS(91),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(95),
    [anon_sym_DOLLARbody] = ACTIONS(97),
    [anon_sym_DOLLARheader] = ACTIONS(97),
    [anon_sym_DOLLARaxis2] = ACTIONS(97),
    [anon_sym_ctx] = ACTIONS(99),
    [anon_sym_DOLLARtrp] = ACTIONS(97),
    [anon_sym_DOLLARurl] = ACTIONS(97),
    [anon_sym_DOLLARfunc] = ACTIONS(97),
    [anon_sym_DOLLARenv] = ACTIONS(97),
  },
  [40] = {
    [sym_xpath] = STATE(414),
    [sym__xpath_selectors] = STATE(6),
    [sym__xPath_extension_functions] = STATE(6),
    [sym__xpath_function] = STATE(6),
    [sym_boolean_function] = STATE(6),
    [sym_ceiling_function] = STATE(6),
    [sym_choose_function] = STATE(6),
    [sym_concat_function] = STATE(6),
    [sym_contains_function] = STATE(6),
    [sym_count_function] = STATE(6),
    [sym_current_function] = STATE(6),
    [sym_document_function] = STATE(6),
    [sym_element_available_function] = STATE(6),
    [sym_false_function] = STATE(6),
    [sym_floor_function] = STATE(6),
    [sym_format_number_function] = STATE(6),
    [sym_function_available_function] = STATE(6),
    [sym_generate_id_function] = STATE(6),
    [sym_id_function] = STATE(6),
    [sym_key_function] = STATE(6),
    [sym_lang_function] = STATE(6),
    [sym_last_function] = STATE(6),
    [sym_local_name_function] = STATE(6),
    [sym_name_function] = STATE(6),
    [sym_namespace_uri_function] = STATE(6),
    [sym_normalize_space_function] = STATE(6),
    [sym_not_function] = STATE(6),
    [sym_number_function] = STATE(6),
    [sym_position_function] = STATE(6),
    [sym_round_function] = STATE(6),
    [sym_starts_with_function] = STATE(6),
    [sym_string_function] = STATE(6),
    [sym_string_length_function] = STATE(6),
    [sym_substring_function] = STATE(6),
    [sym_substring_after_function] = STATE(6),
    [sym_substring_before_function] = STATE(6),
    [sym_sum_function] = STATE(6),
    [sym_system_property_function] = STATE(6),
    [sym_translate_function] = STATE(6),
    [sym_true_function] = STATE(6),
    [sym_unparsed_entity_url_function] = STATE(6),
    [sym_base64_encode] = STATE(6),
    [sym_base64_decode] = STATE(6),
    [sym_get_property] = STATE(6),
    [sym__xpath_string] = STATE(6),
    [sym_synapse_xpath_property] = STATE(6),
    [aux_sym_xpath_repeat1] = STATE(6),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_boolean] = ACTIONS(27),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_concat] = ACTIONS(33),
    [anon_sym_contains] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [anon_sym_current] = ACTIONS(39),
    [anon_sym_document] = ACTIONS(41),
    [anon_sym_element_DASHavailable] = ACTIONS(43),
    [anon_sym_floor] = ACTIONS(45),
    [anon_sym_format_DASHnumber] = ACTIONS(47),
    [anon_sym_function_DASHavailable] = ACTIONS(49),
    [anon_sym_generate_DASHid] = ACTIONS(51),
    [anon_sym_lang] = ACTIONS(53),
    [anon_sym_last] = ACTIONS(55),
    [anon_sym_local_DASHname] = ACTIONS(57),
    [anon_sym_namespace_DASHuri] = ACTIONS(59),
    [anon_sym_normalize_DASHspace] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_number] = ACTIONS(65),
    [anon_sym_position] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(69),
    [anon_sym_starts_DASHwith] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(73),
    [anon_sym_string_DASHlength] = ACTIONS(75),
    [anon_sym_substring] = ACTIONS(77),
    [anon_sym_substring_DASHafter] = ACTIONS(79),
    [anon_sym_substring_DASHbefore] = ACTIONS(81),
    [anon_sym_sum] = ACTIONS(83),
    [anon_sym_system_DASHproperty] = ACTIONS(85),
    [anon_sym_translate] = ACTIONS(87),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(89),
    [anon_sym_base64Encode] = ACTIONS(91),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(95),
    [anon_sym_DOLLARbody] = ACTIONS(97),
    [anon_sym_DOLLARheader] = ACTIONS(97),
    [anon_sym_DOLLARaxis2] = ACTIONS(97),
    [anon_sym_ctx] = ACTIONS(99),
    [anon_sym_DOLLARtrp] = ACTIONS(97),
    [anon_sym_DOLLARurl] = ACTIONS(97),
    [anon_sym_DOLLARfunc] = ACTIONS(97),
    [anon_sym_DOLLARenv] = ACTIONS(97),
  },
  [41] = {
    [sym_xpath] = STATE(413),
    [sym__xpath_selectors] = STATE(6),
    [sym__xPath_extension_functions] = STATE(6),
    [sym__xpath_function] = STATE(6),
    [sym_boolean_function] = STATE(6),
    [sym_ceiling_function] = STATE(6),
    [sym_choose_function] = STATE(6),
    [sym_concat_function] = STATE(6),
    [sym_contains_function] = STATE(6),
    [sym_count_function] = STATE(6),
    [sym_current_function] = STATE(6),
    [sym_document_function] = STATE(6),
    [sym_element_available_function] = STATE(6),
    [sym_false_function] = STATE(6),
    [sym_floor_function] = STATE(6),
    [sym_format_number_function] = STATE(6),
    [sym_function_available_function] = STATE(6),
    [sym_generate_id_function] = STATE(6),
    [sym_id_function] = STATE(6),
    [sym_key_function] = STATE(6),
    [sym_lang_function] = STATE(6),
    [sym_last_function] = STATE(6),
    [sym_local_name_function] = STATE(6),
    [sym_name_function] = STATE(6),
    [sym_namespace_uri_function] = STATE(6),
    [sym_normalize_space_function] = STATE(6),
    [sym_not_function] = STATE(6),
    [sym_number_function] = STATE(6),
    [sym_position_function] = STATE(6),
    [sym_round_function] = STATE(6),
    [sym_starts_with_function] = STATE(6),
    [sym_string_function] = STATE(6),
    [sym_string_length_function] = STATE(6),
    [sym_substring_function] = STATE(6),
    [sym_substring_after_function] = STATE(6),
    [sym_substring_before_function] = STATE(6),
    [sym_sum_function] = STATE(6),
    [sym_system_property_function] = STATE(6),
    [sym_translate_function] = STATE(6),
    [sym_true_function] = STATE(6),
    [sym_unparsed_entity_url_function] = STATE(6),
    [sym_base64_encode] = STATE(6),
    [sym_base64_decode] = STATE(6),
    [sym_get_property] = STATE(6),
    [sym__xpath_string] = STATE(6),
    [sym_synapse_xpath_property] = STATE(6),
    [aux_sym_xpath_repeat1] = STATE(6),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_boolean] = ACTIONS(27),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_concat] = ACTIONS(33),
    [anon_sym_contains] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [anon_sym_current] = ACTIONS(39),
    [anon_sym_document] = ACTIONS(41),
    [anon_sym_element_DASHavailable] = ACTIONS(43),
    [anon_sym_floor] = ACTIONS(45),
    [anon_sym_format_DASHnumber] = ACTIONS(47),
    [anon_sym_function_DASHavailable] = ACTIONS(49),
    [anon_sym_generate_DASHid] = ACTIONS(51),
    [anon_sym_lang] = ACTIONS(53),
    [anon_sym_last] = ACTIONS(55),
    [anon_sym_local_DASHname] = ACTIONS(57),
    [anon_sym_namespace_DASHuri] = ACTIONS(59),
    [anon_sym_normalize_DASHspace] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_number] = ACTIONS(65),
    [anon_sym_position] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(69),
    [anon_sym_starts_DASHwith] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(73),
    [anon_sym_string_DASHlength] = ACTIONS(75),
    [anon_sym_substring] = ACTIONS(77),
    [anon_sym_substring_DASHafter] = ACTIONS(79),
    [anon_sym_substring_DASHbefore] = ACTIONS(81),
    [anon_sym_sum] = ACTIONS(83),
    [anon_sym_system_DASHproperty] = ACTIONS(85),
    [anon_sym_translate] = ACTIONS(87),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(89),
    [anon_sym_base64Encode] = ACTIONS(91),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(95),
    [anon_sym_DOLLARbody] = ACTIONS(97),
    [anon_sym_DOLLARheader] = ACTIONS(97),
    [anon_sym_DOLLARaxis2] = ACTIONS(97),
    [anon_sym_ctx] = ACTIONS(99),
    [anon_sym_DOLLARtrp] = ACTIONS(97),
    [anon_sym_DOLLARurl] = ACTIONS(97),
    [anon_sym_DOLLARfunc] = ACTIONS(97),
    [anon_sym_DOLLARenv] = ACTIONS(97),
  },
  [42] = {
    [sym_xpath] = STATE(412),
    [sym__xpath_selectors] = STATE(6),
    [sym__xPath_extension_functions] = STATE(6),
    [sym__xpath_function] = STATE(6),
    [sym_boolean_function] = STATE(6),
    [sym_ceiling_function] = STATE(6),
    [sym_choose_function] = STATE(6),
    [sym_concat_function] = STATE(6),
    [sym_contains_function] = STATE(6),
    [sym_count_function] = STATE(6),
    [sym_current_function] = STATE(6),
    [sym_document_function] = STATE(6),
    [sym_element_available_function] = STATE(6),
    [sym_false_function] = STATE(6),
    [sym_floor_function] = STATE(6),
    [sym_format_number_function] = STATE(6),
    [sym_function_available_function] = STATE(6),
    [sym_generate_id_function] = STATE(6),
    [sym_id_function] = STATE(6),
    [sym_key_function] = STATE(6),
    [sym_lang_function] = STATE(6),
    [sym_last_function] = STATE(6),
    [sym_local_name_function] = STATE(6),
    [sym_name_function] = STATE(6),
    [sym_namespace_uri_function] = STATE(6),
    [sym_normalize_space_function] = STATE(6),
    [sym_not_function] = STATE(6),
    [sym_number_function] = STATE(6),
    [sym_position_function] = STATE(6),
    [sym_round_function] = STATE(6),
    [sym_starts_with_function] = STATE(6),
    [sym_string_function] = STATE(6),
    [sym_string_length_function] = STATE(6),
    [sym_substring_function] = STATE(6),
    [sym_substring_after_function] = STATE(6),
    [sym_substring_before_function] = STATE(6),
    [sym_sum_function] = STATE(6),
    [sym_system_property_function] = STATE(6),
    [sym_translate_function] = STATE(6),
    [sym_true_function] = STATE(6),
    [sym_unparsed_entity_url_function] = STATE(6),
    [sym_base64_encode] = STATE(6),
    [sym_base64_decode] = STATE(6),
    [sym_get_property] = STATE(6),
    [sym__xpath_string] = STATE(6),
    [sym_synapse_xpath_property] = STATE(6),
    [aux_sym_xpath_repeat1] = STATE(6),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_boolean] = ACTIONS(27),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_concat] = ACTIONS(33),
    [anon_sym_contains] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [anon_sym_current] = ACTIONS(39),
    [anon_sym_document] = ACTIONS(41),
    [anon_sym_element_DASHavailable] = ACTIONS(43),
    [anon_sym_floor] = ACTIONS(45),
    [anon_sym_format_DASHnumber] = ACTIONS(47),
    [anon_sym_function_DASHavailable] = ACTIONS(49),
    [anon_sym_generate_DASHid] = ACTIONS(51),
    [anon_sym_lang] = ACTIONS(53),
    [anon_sym_last] = ACTIONS(55),
    [anon_sym_local_DASHname] = ACTIONS(57),
    [anon_sym_namespace_DASHuri] = ACTIONS(59),
    [anon_sym_normalize_DASHspace] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_number] = ACTIONS(65),
    [anon_sym_position] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(69),
    [anon_sym_starts_DASHwith] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(73),
    [anon_sym_string_DASHlength] = ACTIONS(75),
    [anon_sym_substring] = ACTIONS(77),
    [anon_sym_substring_DASHafter] = ACTIONS(79),
    [anon_sym_substring_DASHbefore] = ACTIONS(81),
    [anon_sym_sum] = ACTIONS(83),
    [anon_sym_system_DASHproperty] = ACTIONS(85),
    [anon_sym_translate] = ACTIONS(87),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(89),
    [anon_sym_base64Encode] = ACTIONS(91),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(95),
    [anon_sym_DOLLARbody] = ACTIONS(97),
    [anon_sym_DOLLARheader] = ACTIONS(97),
    [anon_sym_DOLLARaxis2] = ACTIONS(97),
    [anon_sym_ctx] = ACTIONS(99),
    [anon_sym_DOLLARtrp] = ACTIONS(97),
    [anon_sym_DOLLARurl] = ACTIONS(97),
    [anon_sym_DOLLARfunc] = ACTIONS(97),
    [anon_sym_DOLLARenv] = ACTIONS(97),
  },
  [43] = {
    [sym_xpath] = STATE(452),
    [sym__xpath_selectors] = STATE(6),
    [sym__xPath_extension_functions] = STATE(6),
    [sym__xpath_function] = STATE(6),
    [sym_boolean_function] = STATE(6),
    [sym_ceiling_function] = STATE(6),
    [sym_choose_function] = STATE(6),
    [sym_concat_function] = STATE(6),
    [sym_contains_function] = STATE(6),
    [sym_count_function] = STATE(6),
    [sym_current_function] = STATE(6),
    [sym_document_function] = STATE(6),
    [sym_element_available_function] = STATE(6),
    [sym_false_function] = STATE(6),
    [sym_floor_function] = STATE(6),
    [sym_format_number_function] = STATE(6),
    [sym_function_available_function] = STATE(6),
    [sym_generate_id_function] = STATE(6),
    [sym_id_function] = STATE(6),
    [sym_key_function] = STATE(6),
    [sym_lang_function] = STATE(6),
    [sym_last_function] = STATE(6),
    [sym_local_name_function] = STATE(6),
    [sym_name_function] = STATE(6),
    [sym_namespace_uri_function] = STATE(6),
    [sym_normalize_space_function] = STATE(6),
    [sym_not_function] = STATE(6),
    [sym_number_function] = STATE(6),
    [sym_position_function] = STATE(6),
    [sym_round_function] = STATE(6),
    [sym_starts_with_function] = STATE(6),
    [sym_string_function] = STATE(6),
    [sym_string_length_function] = STATE(6),
    [sym_substring_function] = STATE(6),
    [sym_substring_after_function] = STATE(6),
    [sym_substring_before_function] = STATE(6),
    [sym_sum_function] = STATE(6),
    [sym_system_property_function] = STATE(6),
    [sym_translate_function] = STATE(6),
    [sym_true_function] = STATE(6),
    [sym_unparsed_entity_url_function] = STATE(6),
    [sym_base64_encode] = STATE(6),
    [sym_base64_decode] = STATE(6),
    [sym_get_property] = STATE(6),
    [sym__xpath_string] = STATE(6),
    [sym_synapse_xpath_property] = STATE(6),
    [aux_sym_xpath_repeat1] = STATE(6),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_boolean] = ACTIONS(27),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_concat] = ACTIONS(33),
    [anon_sym_contains] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [anon_sym_current] = ACTIONS(39),
    [anon_sym_document] = ACTIONS(41),
    [anon_sym_element_DASHavailable] = ACTIONS(43),
    [anon_sym_floor] = ACTIONS(45),
    [anon_sym_format_DASHnumber] = ACTIONS(47),
    [anon_sym_function_DASHavailable] = ACTIONS(49),
    [anon_sym_generate_DASHid] = ACTIONS(51),
    [anon_sym_lang] = ACTIONS(53),
    [anon_sym_last] = ACTIONS(55),
    [anon_sym_local_DASHname] = ACTIONS(57),
    [anon_sym_namespace_DASHuri] = ACTIONS(59),
    [anon_sym_normalize_DASHspace] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_number] = ACTIONS(65),
    [anon_sym_position] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(69),
    [anon_sym_starts_DASHwith] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(73),
    [anon_sym_string_DASHlength] = ACTIONS(75),
    [anon_sym_substring] = ACTIONS(77),
    [anon_sym_substring_DASHafter] = ACTIONS(79),
    [anon_sym_substring_DASHbefore] = ACTIONS(81),
    [anon_sym_sum] = ACTIONS(83),
    [anon_sym_system_DASHproperty] = ACTIONS(85),
    [anon_sym_translate] = ACTIONS(87),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(89),
    [anon_sym_base64Encode] = ACTIONS(91),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(95),
    [anon_sym_DOLLARbody] = ACTIONS(97),
    [anon_sym_DOLLARheader] = ACTIONS(97),
    [anon_sym_DOLLARaxis2] = ACTIONS(97),
    [anon_sym_ctx] = ACTIONS(99),
    [anon_sym_DOLLARtrp] = ACTIONS(97),
    [anon_sym_DOLLARurl] = ACTIONS(97),
    [anon_sym_DOLLARfunc] = ACTIONS(97),
    [anon_sym_DOLLARenv] = ACTIONS(97),
  },
  [44] = {
    [sym_xpath] = STATE(450),
    [sym__xpath_selectors] = STATE(6),
    [sym__xPath_extension_functions] = STATE(6),
    [sym__xpath_function] = STATE(6),
    [sym_boolean_function] = STATE(6),
    [sym_ceiling_function] = STATE(6),
    [sym_choose_function] = STATE(6),
    [sym_concat_function] = STATE(6),
    [sym_contains_function] = STATE(6),
    [sym_count_function] = STATE(6),
    [sym_current_function] = STATE(6),
    [sym_document_function] = STATE(6),
    [sym_element_available_function] = STATE(6),
    [sym_false_function] = STATE(6),
    [sym_floor_function] = STATE(6),
    [sym_format_number_function] = STATE(6),
    [sym_function_available_function] = STATE(6),
    [sym_generate_id_function] = STATE(6),
    [sym_id_function] = STATE(6),
    [sym_key_function] = STATE(6),
    [sym_lang_function] = STATE(6),
    [sym_last_function] = STATE(6),
    [sym_local_name_function] = STATE(6),
    [sym_name_function] = STATE(6),
    [sym_namespace_uri_function] = STATE(6),
    [sym_normalize_space_function] = STATE(6),
    [sym_not_function] = STATE(6),
    [sym_number_function] = STATE(6),
    [sym_position_function] = STATE(6),
    [sym_round_function] = STATE(6),
    [sym_starts_with_function] = STATE(6),
    [sym_string_function] = STATE(6),
    [sym_string_length_function] = STATE(6),
    [sym_substring_function] = STATE(6),
    [sym_substring_after_function] = STATE(6),
    [sym_substring_before_function] = STATE(6),
    [sym_sum_function] = STATE(6),
    [sym_system_property_function] = STATE(6),
    [sym_translate_function] = STATE(6),
    [sym_true_function] = STATE(6),
    [sym_unparsed_entity_url_function] = STATE(6),
    [sym_base64_encode] = STATE(6),
    [sym_base64_decode] = STATE(6),
    [sym_get_property] = STATE(6),
    [sym__xpath_string] = STATE(6),
    [sym_synapse_xpath_property] = STATE(6),
    [aux_sym_xpath_repeat1] = STATE(6),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_boolean] = ACTIONS(27),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_concat] = ACTIONS(33),
    [anon_sym_contains] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [anon_sym_current] = ACTIONS(39),
    [anon_sym_document] = ACTIONS(41),
    [anon_sym_element_DASHavailable] = ACTIONS(43),
    [anon_sym_floor] = ACTIONS(45),
    [anon_sym_format_DASHnumber] = ACTIONS(47),
    [anon_sym_function_DASHavailable] = ACTIONS(49),
    [anon_sym_generate_DASHid] = ACTIONS(51),
    [anon_sym_lang] = ACTIONS(53),
    [anon_sym_last] = ACTIONS(55),
    [anon_sym_local_DASHname] = ACTIONS(57),
    [anon_sym_namespace_DASHuri] = ACTIONS(59),
    [anon_sym_normalize_DASHspace] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_number] = ACTIONS(65),
    [anon_sym_position] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(69),
    [anon_sym_starts_DASHwith] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(73),
    [anon_sym_string_DASHlength] = ACTIONS(75),
    [anon_sym_substring] = ACTIONS(77),
    [anon_sym_substring_DASHafter] = ACTIONS(79),
    [anon_sym_substring_DASHbefore] = ACTIONS(81),
    [anon_sym_sum] = ACTIONS(83),
    [anon_sym_system_DASHproperty] = ACTIONS(85),
    [anon_sym_translate] = ACTIONS(87),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(89),
    [anon_sym_base64Encode] = ACTIONS(91),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(95),
    [anon_sym_DOLLARbody] = ACTIONS(97),
    [anon_sym_DOLLARheader] = ACTIONS(97),
    [anon_sym_DOLLARaxis2] = ACTIONS(97),
    [anon_sym_ctx] = ACTIONS(99),
    [anon_sym_DOLLARtrp] = ACTIONS(97),
    [anon_sym_DOLLARurl] = ACTIONS(97),
    [anon_sym_DOLLARfunc] = ACTIONS(97),
    [anon_sym_DOLLARenv] = ACTIONS(97),
  },
  [45] = {
    [sym_xpath] = STATE(451),
    [sym__xpath_selectors] = STATE(6),
    [sym__xPath_extension_functions] = STATE(6),
    [sym__xpath_function] = STATE(6),
    [sym_boolean_function] = STATE(6),
    [sym_ceiling_function] = STATE(6),
    [sym_choose_function] = STATE(6),
    [sym_concat_function] = STATE(6),
    [sym_contains_function] = STATE(6),
    [sym_count_function] = STATE(6),
    [sym_current_function] = STATE(6),
    [sym_document_function] = STATE(6),
    [sym_element_available_function] = STATE(6),
    [sym_false_function] = STATE(6),
    [sym_floor_function] = STATE(6),
    [sym_format_number_function] = STATE(6),
    [sym_function_available_function] = STATE(6),
    [sym_generate_id_function] = STATE(6),
    [sym_id_function] = STATE(6),
    [sym_key_function] = STATE(6),
    [sym_lang_function] = STATE(6),
    [sym_last_function] = STATE(6),
    [sym_local_name_function] = STATE(6),
    [sym_name_function] = STATE(6),
    [sym_namespace_uri_function] = STATE(6),
    [sym_normalize_space_function] = STATE(6),
    [sym_not_function] = STATE(6),
    [sym_number_function] = STATE(6),
    [sym_position_function] = STATE(6),
    [sym_round_function] = STATE(6),
    [sym_starts_with_function] = STATE(6),
    [sym_string_function] = STATE(6),
    [sym_string_length_function] = STATE(6),
    [sym_substring_function] = STATE(6),
    [sym_substring_after_function] = STATE(6),
    [sym_substring_before_function] = STATE(6),
    [sym_sum_function] = STATE(6),
    [sym_system_property_function] = STATE(6),
    [sym_translate_function] = STATE(6),
    [sym_true_function] = STATE(6),
    [sym_unparsed_entity_url_function] = STATE(6),
    [sym_base64_encode] = STATE(6),
    [sym_base64_decode] = STATE(6),
    [sym_get_property] = STATE(6),
    [sym__xpath_string] = STATE(6),
    [sym_synapse_xpath_property] = STATE(6),
    [aux_sym_xpath_repeat1] = STATE(6),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_boolean] = ACTIONS(27),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_concat] = ACTIONS(33),
    [anon_sym_contains] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [anon_sym_current] = ACTIONS(39),
    [anon_sym_document] = ACTIONS(41),
    [anon_sym_element_DASHavailable] = ACTIONS(43),
    [anon_sym_floor] = ACTIONS(45),
    [anon_sym_format_DASHnumber] = ACTIONS(47),
    [anon_sym_function_DASHavailable] = ACTIONS(49),
    [anon_sym_generate_DASHid] = ACTIONS(51),
    [anon_sym_lang] = ACTIONS(53),
    [anon_sym_last] = ACTIONS(55),
    [anon_sym_local_DASHname] = ACTIONS(57),
    [anon_sym_namespace_DASHuri] = ACTIONS(59),
    [anon_sym_normalize_DASHspace] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_number] = ACTIONS(65),
    [anon_sym_position] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(69),
    [anon_sym_starts_DASHwith] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(73),
    [anon_sym_string_DASHlength] = ACTIONS(75),
    [anon_sym_substring] = ACTIONS(77),
    [anon_sym_substring_DASHafter] = ACTIONS(79),
    [anon_sym_substring_DASHbefore] = ACTIONS(81),
    [anon_sym_sum] = ACTIONS(83),
    [anon_sym_system_DASHproperty] = ACTIONS(85),
    [anon_sym_translate] = ACTIONS(87),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(89),
    [anon_sym_base64Encode] = ACTIONS(91),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(95),
    [anon_sym_DOLLARbody] = ACTIONS(97),
    [anon_sym_DOLLARheader] = ACTIONS(97),
    [anon_sym_DOLLARaxis2] = ACTIONS(97),
    [anon_sym_ctx] = ACTIONS(99),
    [anon_sym_DOLLARtrp] = ACTIONS(97),
    [anon_sym_DOLLARurl] = ACTIONS(97),
    [anon_sym_DOLLARfunc] = ACTIONS(97),
    [anon_sym_DOLLARenv] = ACTIONS(97),
  },
  [46] = {
    [sym_xpath] = STATE(690),
    [sym__xpath_selectors] = STATE(6),
    [sym__xPath_extension_functions] = STATE(6),
    [sym__xpath_function] = STATE(6),
    [sym_boolean_function] = STATE(6),
    [sym_ceiling_function] = STATE(6),
    [sym_choose_function] = STATE(6),
    [sym_concat_function] = STATE(6),
    [sym_contains_function] = STATE(6),
    [sym_count_function] = STATE(6),
    [sym_current_function] = STATE(6),
    [sym_document_function] = STATE(6),
    [sym_element_available_function] = STATE(6),
    [sym_false_function] = STATE(6),
    [sym_floor_function] = STATE(6),
    [sym_format_number_function] = STATE(6),
    [sym_function_available_function] = STATE(6),
    [sym_generate_id_function] = STATE(6),
    [sym_id_function] = STATE(6),
    [sym_key_function] = STATE(6),
    [sym_lang_function] = STATE(6),
    [sym_last_function] = STATE(6),
    [sym_local_name_function] = STATE(6),
    [sym_name_function] = STATE(6),
    [sym_namespace_uri_function] = STATE(6),
    [sym_normalize_space_function] = STATE(6),
    [sym_not_function] = STATE(6),
    [sym_number_function] = STATE(6),
    [sym_position_function] = STATE(6),
    [sym_round_function] = STATE(6),
    [sym_starts_with_function] = STATE(6),
    [sym_string_function] = STATE(6),
    [sym_string_length_function] = STATE(6),
    [sym_substring_function] = STATE(6),
    [sym_substring_after_function] = STATE(6),
    [sym_substring_before_function] = STATE(6),
    [sym_sum_function] = STATE(6),
    [sym_system_property_function] = STATE(6),
    [sym_translate_function] = STATE(6),
    [sym_true_function] = STATE(6),
    [sym_unparsed_entity_url_function] = STATE(6),
    [sym_base64_encode] = STATE(6),
    [sym_base64_decode] = STATE(6),
    [sym_get_property] = STATE(6),
    [sym__xpath_string] = STATE(6),
    [sym_synapse_xpath_property] = STATE(6),
    [aux_sym_xpath_repeat1] = STATE(6),
    [anon_sym_key] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym__xpath_node] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [anon_sym_boolean] = ACTIONS(27),
    [anon_sym_ceiling] = ACTIONS(29),
    [anon_sym_choose] = ACTIONS(31),
    [anon_sym_concat] = ACTIONS(33),
    [anon_sym_contains] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [anon_sym_current] = ACTIONS(39),
    [anon_sym_document] = ACTIONS(41),
    [anon_sym_element_DASHavailable] = ACTIONS(43),
    [anon_sym_floor] = ACTIONS(45),
    [anon_sym_format_DASHnumber] = ACTIONS(47),
    [anon_sym_function_DASHavailable] = ACTIONS(49),
    [anon_sym_generate_DASHid] = ACTIONS(51),
    [anon_sym_lang] = ACTIONS(53),
    [anon_sym_last] = ACTIONS(55),
    [anon_sym_local_DASHname] = ACTIONS(57),
    [anon_sym_namespace_DASHuri] = ACTIONS(59),
    [anon_sym_normalize_DASHspace] = ACTIONS(61),
    [anon_sym_not] = ACTIONS(63),
    [anon_sym_number] = ACTIONS(65),
    [anon_sym_position] = ACTIONS(67),
    [anon_sym_round] = ACTIONS(69),
    [anon_sym_starts_DASHwith] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(73),
    [anon_sym_string_DASHlength] = ACTIONS(75),
    [anon_sym_substring] = ACTIONS(77),
    [anon_sym_substring_DASHafter] = ACTIONS(79),
    [anon_sym_substring_DASHbefore] = ACTIONS(81),
    [anon_sym_sum] = ACTIONS(83),
    [anon_sym_system_DASHproperty] = ACTIONS(85),
    [anon_sym_translate] = ACTIONS(87),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(89),
    [anon_sym_base64Encode] = ACTIONS(91),
    [anon_sym_base64Decode] = ACTIONS(93),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(95),
    [anon_sym_DOLLARbody] = ACTIONS(97),
    [anon_sym_DOLLARheader] = ACTIONS(97),
    [anon_sym_DOLLARaxis2] = ACTIONS(97),
    [anon_sym_ctx] = ACTIONS(99),
    [anon_sym_DOLLARtrp] = ACTIONS(97),
    [anon_sym_DOLLARurl] = ACTIONS(97),
    [anon_sym_DOLLARfunc] = ACTIONS(97),
    [anon_sym_DOLLARenv] = ACTIONS(97),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 26,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_element_DASHavailable,
      anon_sym_format_DASHnumber,
      anon_sym_function_DASHavailable,
      anon_sym_generate_DASHid,
      anon_sym_local_DASHname,
      anon_sym_namespace_DASHuri,
      anon_sym_normalize_DASHspace,
      anon_sym_starts_DASHwith,
      anon_sym_string_DASHlength,
      anon_sym_substring_DASHafter,
      anon_sym_substring_DASHbefore,
      anon_sym_system_DASHproperty,
      anon_sym_unparsed_DASHentity_DASHurl,
      anon_sym_get_DASHproperty_LPAREN,
      anon_sym_DOLLARbody,
      anon_sym_DOLLARheader,
      anon_sym_DOLLARaxis2,
      anon_sym_DOLLARtrp,
      anon_sym_DOLLARurl,
      anon_sym_DOLLARfunc,
      anon_sym_DOLLARenv,
    ACTIONS(243), 31,
      anon_sym_key,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_id,
      aux_sym_identifier_token1,
      sym__xpath_node,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_boolean,
      anon_sym_ceiling,
      anon_sym_choose,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_current,
      anon_sym_document,
      anon_sym_floor,
      anon_sym_lang,
      anon_sym_last,
      anon_sym_not,
      anon_sym_number,
      anon_sym_position,
      anon_sym_round,
      anon_sym_string,
      anon_sym_substring,
      anon_sym_sum,
      anon_sym_translate,
      anon_sym_base64Encode,
      anon_sym_base64Decode,
      anon_sym_ctx,
  [65] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 26,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_element_DASHavailable,
      anon_sym_format_DASHnumber,
      anon_sym_function_DASHavailable,
      anon_sym_generate_DASHid,
      anon_sym_local_DASHname,
      anon_sym_namespace_DASHuri,
      anon_sym_normalize_DASHspace,
      anon_sym_starts_DASHwith,
      anon_sym_string_DASHlength,
      anon_sym_substring_DASHafter,
      anon_sym_substring_DASHbefore,
      anon_sym_system_DASHproperty,
      anon_sym_unparsed_DASHentity_DASHurl,
      anon_sym_get_DASHproperty_LPAREN,
      anon_sym_DOLLARbody,
      anon_sym_DOLLARheader,
      anon_sym_DOLLARaxis2,
      anon_sym_DOLLARtrp,
      anon_sym_DOLLARurl,
      anon_sym_DOLLARfunc,
      anon_sym_DOLLARenv,
    ACTIONS(247), 31,
      anon_sym_key,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_id,
      aux_sym_identifier_token1,
      sym__xpath_node,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_boolean,
      anon_sym_ceiling,
      anon_sym_choose,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_current,
      anon_sym_document,
      anon_sym_floor,
      anon_sym_lang,
      anon_sym_last,
      anon_sym_not,
      anon_sym_number,
      anon_sym_position,
      anon_sym_round,
      anon_sym_string,
      anon_sym_substring,
      anon_sym_sum,
      anon_sym_translate,
      anon_sym_base64Encode,
      anon_sym_base64Decode,
      anon_sym_ctx,
  [130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 26,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_element_DASHavailable,
      anon_sym_format_DASHnumber,
      anon_sym_function_DASHavailable,
      anon_sym_generate_DASHid,
      anon_sym_local_DASHname,
      anon_sym_namespace_DASHuri,
      anon_sym_normalize_DASHspace,
      anon_sym_starts_DASHwith,
      anon_sym_string_DASHlength,
      anon_sym_substring_DASHafter,
      anon_sym_substring_DASHbefore,
      anon_sym_system_DASHproperty,
      anon_sym_unparsed_DASHentity_DASHurl,
      anon_sym_get_DASHproperty_LPAREN,
      anon_sym_DOLLARbody,
      anon_sym_DOLLARheader,
      anon_sym_DOLLARaxis2,
      anon_sym_DOLLARtrp,
      anon_sym_DOLLARurl,
      anon_sym_DOLLARfunc,
      anon_sym_DOLLARenv,
    ACTIONS(251), 31,
      anon_sym_key,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_id,
      aux_sym_identifier_token1,
      sym__xpath_node,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_boolean,
      anon_sym_ceiling,
      anon_sym_choose,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_current,
      anon_sym_document,
      anon_sym_floor,
      anon_sym_lang,
      anon_sym_last,
      anon_sym_not,
      anon_sym_number,
      anon_sym_position,
      anon_sym_round,
      anon_sym_string,
      anon_sym_substring,
      anon_sym_sum,
      anon_sym_translate,
      anon_sym_base64Encode,
      anon_sym_base64Decode,
      anon_sym_ctx,
  [195] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 26,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_element_DASHavailable,
      anon_sym_format_DASHnumber,
      anon_sym_function_DASHavailable,
      anon_sym_generate_DASHid,
      anon_sym_local_DASHname,
      anon_sym_namespace_DASHuri,
      anon_sym_normalize_DASHspace,
      anon_sym_starts_DASHwith,
      anon_sym_string_DASHlength,
      anon_sym_substring_DASHafter,
      anon_sym_substring_DASHbefore,
      anon_sym_system_DASHproperty,
      anon_sym_unparsed_DASHentity_DASHurl,
      anon_sym_get_DASHproperty_LPAREN,
      anon_sym_DOLLARbody,
      anon_sym_DOLLARheader,
      anon_sym_DOLLARaxis2,
      anon_sym_DOLLARtrp,
      anon_sym_DOLLARurl,
      anon_sym_DOLLARfunc,
      anon_sym_DOLLARenv,
    ACTIONS(255), 31,
      anon_sym_key,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_id,
      aux_sym_identifier_token1,
      sym__xpath_node,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_boolean,
      anon_sym_ceiling,
      anon_sym_choose,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_current,
      anon_sym_document,
      anon_sym_floor,
      anon_sym_lang,
      anon_sym_last,
      anon_sym_not,
      anon_sym_number,
      anon_sym_position,
      anon_sym_round,
      anon_sym_string,
      anon_sym_substring,
      anon_sym_sum,
      anon_sym_translate,
      anon_sym_base64Encode,
      anon_sym_base64Decode,
      anon_sym_ctx,
  [260] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 26,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_element_DASHavailable,
      anon_sym_format_DASHnumber,
      anon_sym_function_DASHavailable,
      anon_sym_generate_DASHid,
      anon_sym_local_DASHname,
      anon_sym_namespace_DASHuri,
      anon_sym_normalize_DASHspace,
      anon_sym_starts_DASHwith,
      anon_sym_string_DASHlength,
      anon_sym_substring_DASHafter,
      anon_sym_substring_DASHbefore,
      anon_sym_system_DASHproperty,
      anon_sym_unparsed_DASHentity_DASHurl,
      anon_sym_get_DASHproperty_LPAREN,
      anon_sym_DOLLARbody,
      anon_sym_DOLLARheader,
      anon_sym_DOLLARaxis2,
      anon_sym_DOLLARtrp,
      anon_sym_DOLLARurl,
      anon_sym_DOLLARfunc,
      anon_sym_DOLLARenv,
    ACTIONS(259), 31,
      anon_sym_key,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_id,
      aux_sym_identifier_token1,
      sym__xpath_node,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_boolean,
      anon_sym_ceiling,
      anon_sym_choose,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_current,
      anon_sym_document,
      anon_sym_floor,
      anon_sym_lang,
      anon_sym_last,
      anon_sym_not,
      anon_sym_number,
      anon_sym_position,
      anon_sym_round,
      anon_sym_string,
      anon_sym_substring,
      anon_sym_sum,
      anon_sym_translate,
      anon_sym_base64Encode,
      anon_sym_base64Decode,
      anon_sym_ctx,
  [325] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 26,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_element_DASHavailable,
      anon_sym_format_DASHnumber,
      anon_sym_function_DASHavailable,
      anon_sym_generate_DASHid,
      anon_sym_local_DASHname,
      anon_sym_namespace_DASHuri,
      anon_sym_normalize_DASHspace,
      anon_sym_starts_DASHwith,
      anon_sym_string_DASHlength,
      anon_sym_substring_DASHafter,
      anon_sym_substring_DASHbefore,
      anon_sym_system_DASHproperty,
      anon_sym_unparsed_DASHentity_DASHurl,
      anon_sym_get_DASHproperty_LPAREN,
      anon_sym_DOLLARbody,
      anon_sym_DOLLARheader,
      anon_sym_DOLLARaxis2,
      anon_sym_DOLLARtrp,
      anon_sym_DOLLARurl,
      anon_sym_DOLLARfunc,
      anon_sym_DOLLARenv,
    ACTIONS(263), 31,
      anon_sym_key,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_id,
      aux_sym_identifier_token1,
      sym__xpath_node,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_boolean,
      anon_sym_ceiling,
      anon_sym_choose,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_current,
      anon_sym_document,
      anon_sym_floor,
      anon_sym_lang,
      anon_sym_last,
      anon_sym_not,
      anon_sym_number,
      anon_sym_position,
      anon_sym_round,
      anon_sym_string,
      anon_sym_substring,
      anon_sym_sum,
      anon_sym_translate,
      anon_sym_base64Encode,
      anon_sym_base64Decode,
      anon_sym_ctx,
  [390] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 26,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_element_DASHavailable,
      anon_sym_format_DASHnumber,
      anon_sym_function_DASHavailable,
      anon_sym_generate_DASHid,
      anon_sym_local_DASHname,
      anon_sym_namespace_DASHuri,
      anon_sym_normalize_DASHspace,
      anon_sym_starts_DASHwith,
      anon_sym_string_DASHlength,
      anon_sym_substring_DASHafter,
      anon_sym_substring_DASHbefore,
      anon_sym_system_DASHproperty,
      anon_sym_unparsed_DASHentity_DASHurl,
      anon_sym_get_DASHproperty_LPAREN,
      anon_sym_DOLLARbody,
      anon_sym_DOLLARheader,
      anon_sym_DOLLARaxis2,
      anon_sym_DOLLARtrp,
      anon_sym_DOLLARurl,
      anon_sym_DOLLARfunc,
      anon_sym_DOLLARenv,
    ACTIONS(267), 31,
      anon_sym_key,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_id,
      aux_sym_identifier_token1,
      sym__xpath_node,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_boolean,
      anon_sym_ceiling,
      anon_sym_choose,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_current,
      anon_sym_document,
      anon_sym_floor,
      anon_sym_lang,
      anon_sym_last,
      anon_sym_not,
      anon_sym_number,
      anon_sym_position,
      anon_sym_round,
      anon_sym_string,
      anon_sym_substring,
      anon_sym_sum,
      anon_sym_translate,
      anon_sym_base64Encode,
      anon_sym_base64Decode,
      anon_sym_ctx,
  [455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 26,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_element_DASHavailable,
      anon_sym_format_DASHnumber,
      anon_sym_function_DASHavailable,
      anon_sym_generate_DASHid,
      anon_sym_local_DASHname,
      anon_sym_namespace_DASHuri,
      anon_sym_normalize_DASHspace,
      anon_sym_starts_DASHwith,
      anon_sym_string_DASHlength,
      anon_sym_substring_DASHafter,
      anon_sym_substring_DASHbefore,
      anon_sym_system_DASHproperty,
      anon_sym_unparsed_DASHentity_DASHurl,
      anon_sym_get_DASHproperty_LPAREN,
      anon_sym_DOLLARbody,
      anon_sym_DOLLARheader,
      anon_sym_DOLLARaxis2,
      anon_sym_DOLLARtrp,
      anon_sym_DOLLARurl,
      anon_sym_DOLLARfunc,
      anon_sym_DOLLARenv,
    ACTIONS(271), 31,
      anon_sym_key,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_id,
      aux_sym_identifier_token1,
      sym__xpath_node,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_boolean,
      anon_sym_ceiling,
      anon_sym_choose,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_current,
      anon_sym_document,
      anon_sym_floor,
      anon_sym_lang,
      anon_sym_last,
      anon_sym_not,
      anon_sym_number,
      anon_sym_position,
      anon_sym_round,
      anon_sym_string,
      anon_sym_substring,
      anon_sym_sum,
      anon_sym_translate,
      anon_sym_base64Encode,
      anon_sym_base64Decode,
      anon_sym_ctx,
  [520] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 26,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_element_DASHavailable,
      anon_sym_format_DASHnumber,
      anon_sym_function_DASHavailable,
      anon_sym_generate_DASHid,
      anon_sym_local_DASHname,
      anon_sym_namespace_DASHuri,
      anon_sym_normalize_DASHspace,
      anon_sym_starts_DASHwith,
      anon_sym_string_DASHlength,
      anon_sym_substring_DASHafter,
      anon_sym_substring_DASHbefore,
      anon_sym_system_DASHproperty,
      anon_sym_unparsed_DASHentity_DASHurl,
      anon_sym_get_DASHproperty_LPAREN,
      anon_sym_DOLLARbody,
      anon_sym_DOLLARheader,
      anon_sym_DOLLARaxis2,
      anon_sym_DOLLARtrp,
      anon_sym_DOLLARurl,
      anon_sym_DOLLARfunc,
      anon_sym_DOLLARenv,
    ACTIONS(275), 31,
      anon_sym_key,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_id,
      aux_sym_identifier_token1,
      sym__xpath_node,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_boolean,
      anon_sym_ceiling,
      anon_sym_choose,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_current,
      anon_sym_document,
      anon_sym_floor,
      anon_sym_lang,
      anon_sym_last,
      anon_sym_not,
      anon_sym_number,
      anon_sym_position,
      anon_sym_round,
      anon_sym_string,
      anon_sym_substring,
      anon_sym_sum,
      anon_sym_translate,
      anon_sym_base64Encode,
      anon_sym_base64Decode,
      anon_sym_ctx,
  [585] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 26,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_element_DASHavailable,
      anon_sym_format_DASHnumber,
      anon_sym_function_DASHavailable,
      anon_sym_generate_DASHid,
      anon_sym_local_DASHname,
      anon_sym_namespace_DASHuri,
      anon_sym_normalize_DASHspace,
      anon_sym_starts_DASHwith,
      anon_sym_string_DASHlength,
      anon_sym_substring_DASHafter,
      anon_sym_substring_DASHbefore,
      anon_sym_system_DASHproperty,
      anon_sym_unparsed_DASHentity_DASHurl,
      anon_sym_get_DASHproperty_LPAREN,
      anon_sym_DOLLARbody,
      anon_sym_DOLLARheader,
      anon_sym_DOLLARaxis2,
      anon_sym_DOLLARtrp,
      anon_sym_DOLLARurl,
      anon_sym_DOLLARfunc,
      anon_sym_DOLLARenv,
    ACTIONS(279), 31,
      anon_sym_key,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_id,
      aux_sym_identifier_token1,
      sym__xpath_node,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_boolean,
      anon_sym_ceiling,
      anon_sym_choose,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_current,
      anon_sym_document,
      anon_sym_floor,
      anon_sym_lang,
      anon_sym_last,
      anon_sym_not,
      anon_sym_number,
      anon_sym_position,
      anon_sym_round,
      anon_sym_string,
      anon_sym_substring,
      anon_sym_sum,
      anon_sym_translate,
      anon_sym_base64Encode,
      anon_sym_base64Decode,
      anon_sym_ctx,
  [650] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 26,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_element_DASHavailable,
      anon_sym_format_DASHnumber,
      anon_sym_function_DASHavailable,
      anon_sym_generate_DASHid,
      anon_sym_local_DASHname,
      anon_sym_namespace_DASHuri,
      anon_sym_normalize_DASHspace,
      anon_sym_starts_DASHwith,
      anon_sym_string_DASHlength,
      anon_sym_substring_DASHafter,
      anon_sym_substring_DASHbefore,
      anon_sym_system_DASHproperty,
      anon_sym_unparsed_DASHentity_DASHurl,
      anon_sym_get_DASHproperty_LPAREN,
      anon_sym_DOLLARbody,
      anon_sym_DOLLARheader,
      anon_sym_DOLLARaxis2,
      anon_sym_DOLLARtrp,
      anon_sym_DOLLARurl,
      anon_sym_DOLLARfunc,
      anon_sym_DOLLARenv,
    ACTIONS(283), 31,
      anon_sym_key,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_id,
      aux_sym_identifier_token1,
      sym__xpath_node,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_boolean,
      anon_sym_ceiling,
      anon_sym_choose,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_current,
      anon_sym_document,
      anon_sym_floor,
      anon_sym_lang,
      anon_sym_last,
      anon_sym_not,
      anon_sym_number,
      anon_sym_position,
      anon_sym_round,
      anon_sym_string,
      anon_sym_substring,
      anon_sym_sum,
      anon_sym_translate,
      anon_sym_base64Encode,
      anon_sym_base64Decode,
      anon_sym_ctx,
  [715] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 26,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_element_DASHavailable,
      anon_sym_format_DASHnumber,
      anon_sym_function_DASHavailable,
      anon_sym_generate_DASHid,
      anon_sym_local_DASHname,
      anon_sym_namespace_DASHuri,
      anon_sym_normalize_DASHspace,
      anon_sym_starts_DASHwith,
      anon_sym_string_DASHlength,
      anon_sym_substring_DASHafter,
      anon_sym_substring_DASHbefore,
      anon_sym_system_DASHproperty,
      anon_sym_unparsed_DASHentity_DASHurl,
      anon_sym_get_DASHproperty_LPAREN,
      anon_sym_DOLLARbody,
      anon_sym_DOLLARheader,
      anon_sym_DOLLARaxis2,
      anon_sym_DOLLARtrp,
      anon_sym_DOLLARurl,
      anon_sym_DOLLARfunc,
      anon_sym_DOLLARenv,
    ACTIONS(287), 31,
      anon_sym_key,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_id,
      aux_sym_identifier_token1,
      sym__xpath_node,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_boolean,
      anon_sym_ceiling,
      anon_sym_choose,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_current,
      anon_sym_document,
      anon_sym_floor,
      anon_sym_lang,
      anon_sym_last,
      anon_sym_not,
      anon_sym_number,
      anon_sym_position,
      anon_sym_round,
      anon_sym_string,
      anon_sym_substring,
      anon_sym_sum,
      anon_sym_translate,
      anon_sym_base64Encode,
      anon_sym_base64Decode,
      anon_sym_ctx,
  [780] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 26,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_element_DASHavailable,
      anon_sym_format_DASHnumber,
      anon_sym_function_DASHavailable,
      anon_sym_generate_DASHid,
      anon_sym_local_DASHname,
      anon_sym_namespace_DASHuri,
      anon_sym_normalize_DASHspace,
      anon_sym_starts_DASHwith,
      anon_sym_string_DASHlength,
      anon_sym_substring_DASHafter,
      anon_sym_substring_DASHbefore,
      anon_sym_system_DASHproperty,
      anon_sym_unparsed_DASHentity_DASHurl,
      anon_sym_get_DASHproperty_LPAREN,
      anon_sym_DOLLARbody,
      anon_sym_DOLLARheader,
      anon_sym_DOLLARaxis2,
      anon_sym_DOLLARtrp,
      anon_sym_DOLLARurl,
      anon_sym_DOLLARfunc,
      anon_sym_DOLLARenv,
    ACTIONS(291), 31,
      anon_sym_key,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_id,
      aux_sym_identifier_token1,
      sym__xpath_node,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_boolean,
      anon_sym_ceiling,
      anon_sym_choose,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_current,
      anon_sym_document,
      anon_sym_floor,
      anon_sym_lang,
      anon_sym_last,
      anon_sym_not,
      anon_sym_number,
      anon_sym_position,
      anon_sym_round,
      anon_sym_string,
      anon_sym_substring,
      anon_sym_sum,
      anon_sym_translate,
      anon_sym_base64Encode,
      anon_sym_base64Decode,
      anon_sym_ctx,
  [845] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 26,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_element_DASHavailable,
      anon_sym_format_DASHnumber,
      anon_sym_function_DASHavailable,
      anon_sym_generate_DASHid,
      anon_sym_local_DASHname,
      anon_sym_namespace_DASHuri,
      anon_sym_normalize_DASHspace,
      anon_sym_starts_DASHwith,
      anon_sym_string_DASHlength,
      anon_sym_substring_DASHafter,
      anon_sym_substring_DASHbefore,
      anon_sym_system_DASHproperty,
      anon_sym_unparsed_DASHentity_DASHurl,
      anon_sym_get_DASHproperty_LPAREN,
      anon_sym_DOLLARbody,
      anon_sym_DOLLARheader,
      anon_sym_DOLLARaxis2,
      anon_sym_DOLLARtrp,
      anon_sym_DOLLARurl,
      anon_sym_DOLLARfunc,
      anon_sym_DOLLARenv,
    ACTIONS(295), 31,
      anon_sym_key,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_id,
      aux_sym_identifier_token1,
      sym__xpath_node,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_boolean,
      anon_sym_ceiling,
      anon_sym_choose,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_current,
      anon_sym_document,
      anon_sym_floor,
      anon_sym_lang,
      anon_sym_last,
      anon_sym_not,
      anon_sym_number,
      anon_sym_position,
      anon_sym_round,
      anon_sym_string,
      anon_sym_substring,
      anon_sym_sum,
      anon_sym_translate,
      anon_sym_base64Encode,
      anon_sym_base64Decode,
      anon_sym_ctx,
  [910] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 26,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_element_DASHavailable,
      anon_sym_format_DASHnumber,
      anon_sym_function_DASHavailable,
      anon_sym_generate_DASHid,
      anon_sym_local_DASHname,
      anon_sym_namespace_DASHuri,
      anon_sym_normalize_DASHspace,
      anon_sym_starts_DASHwith,
      anon_sym_string_DASHlength,
      anon_sym_substring_DASHafter,
      anon_sym_substring_DASHbefore,
      anon_sym_system_DASHproperty,
      anon_sym_unparsed_DASHentity_DASHurl,
      anon_sym_get_DASHproperty_LPAREN,
      anon_sym_DOLLARbody,
      anon_sym_DOLLARheader,
      anon_sym_DOLLARaxis2,
      anon_sym_DOLLARtrp,
      anon_sym_DOLLARurl,
      anon_sym_DOLLARfunc,
      anon_sym_DOLLARenv,
    ACTIONS(299), 31,
      anon_sym_key,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_id,
      aux_sym_identifier_token1,
      sym__xpath_node,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_boolean,
      anon_sym_ceiling,
      anon_sym_choose,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_current,
      anon_sym_document,
      anon_sym_floor,
      anon_sym_lang,
      anon_sym_last,
      anon_sym_not,
      anon_sym_number,
      anon_sym_position,
      anon_sym_round,
      anon_sym_string,
      anon_sym_substring,
      anon_sym_sum,
      anon_sym_translate,
      anon_sym_base64Encode,
      anon_sym_base64Decode,
      anon_sym_ctx,
  [975] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 26,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_element_DASHavailable,
      anon_sym_format_DASHnumber,
      anon_sym_function_DASHavailable,
      anon_sym_generate_DASHid,
      anon_sym_local_DASHname,
      anon_sym_namespace_DASHuri,
      anon_sym_normalize_DASHspace,
      anon_sym_starts_DASHwith,
      anon_sym_string_DASHlength,
      anon_sym_substring_DASHafter,
      anon_sym_substring_DASHbefore,
      anon_sym_system_DASHproperty,
      anon_sym_unparsed_DASHentity_DASHurl,
      anon_sym_get_DASHproperty_LPAREN,
      anon_sym_DOLLARbody,
      anon_sym_DOLLARheader,
      anon_sym_DOLLARaxis2,
      anon_sym_DOLLARtrp,
      anon_sym_DOLLARurl,
      anon_sym_DOLLARfunc,
      anon_sym_DOLLARenv,
    ACTIONS(303), 31,
      anon_sym_key,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_id,
      aux_sym_identifier_token1,
      sym__xpath_node,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_boolean,
      anon_sym_ceiling,
      anon_sym_choose,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_current,
      anon_sym_document,
      anon_sym_floor,
      anon_sym_lang,
      anon_sym_last,
      anon_sym_not,
      anon_sym_number,
      anon_sym_position,
      anon_sym_round,
      anon_sym_string,
      anon_sym_substring,
      anon_sym_sum,
      anon_sym_translate,
      anon_sym_base64Encode,
      anon_sym_base64Decode,
      anon_sym_ctx,
  [1040] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 26,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_element_DASHavailable,
      anon_sym_format_DASHnumber,
      anon_sym_function_DASHavailable,
      anon_sym_generate_DASHid,
      anon_sym_local_DASHname,
      anon_sym_namespace_DASHuri,
      anon_sym_normalize_DASHspace,
      anon_sym_starts_DASHwith,
      anon_sym_string_DASHlength,
      anon_sym_substring_DASHafter,
      anon_sym_substring_DASHbefore,
      anon_sym_system_DASHproperty,
      anon_sym_unparsed_DASHentity_DASHurl,
      anon_sym_get_DASHproperty_LPAREN,
      anon_sym_DOLLARbody,
      anon_sym_DOLLARheader,
      anon_sym_DOLLARaxis2,
      anon_sym_DOLLARtrp,
      anon_sym_DOLLARurl,
      anon_sym_DOLLARfunc,
      anon_sym_DOLLARenv,
    ACTIONS(307), 31,
      anon_sym_key,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_id,
      aux_sym_identifier_token1,
      sym__xpath_node,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_boolean,
      anon_sym_ceiling,
      anon_sym_choose,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_current,
      anon_sym_document,
      anon_sym_floor,
      anon_sym_lang,
      anon_sym_last,
      anon_sym_not,
      anon_sym_number,
      anon_sym_position,
      anon_sym_round,
      anon_sym_string,
      anon_sym_substring,
      anon_sym_sum,
      anon_sym_translate,
      anon_sym_base64Encode,
      anon_sym_base64Decode,
      anon_sym_ctx,
  [1105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 26,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_element_DASHavailable,
      anon_sym_format_DASHnumber,
      anon_sym_function_DASHavailable,
      anon_sym_generate_DASHid,
      anon_sym_local_DASHname,
      anon_sym_namespace_DASHuri,
      anon_sym_normalize_DASHspace,
      anon_sym_starts_DASHwith,
      anon_sym_string_DASHlength,
      anon_sym_substring_DASHafter,
      anon_sym_substring_DASHbefore,
      anon_sym_system_DASHproperty,
      anon_sym_unparsed_DASHentity_DASHurl,
      anon_sym_get_DASHproperty_LPAREN,
      anon_sym_DOLLARbody,
      anon_sym_DOLLARheader,
      anon_sym_DOLLARaxis2,
      anon_sym_DOLLARtrp,
      anon_sym_DOLLARurl,
      anon_sym_DOLLARfunc,
      anon_sym_DOLLARenv,
    ACTIONS(311), 31,
      anon_sym_key,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_id,
      aux_sym_identifier_token1,
      sym__xpath_node,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_boolean,
      anon_sym_ceiling,
      anon_sym_choose,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_current,
      anon_sym_document,
      anon_sym_floor,
      anon_sym_lang,
      anon_sym_last,
      anon_sym_not,
      anon_sym_number,
      anon_sym_position,
      anon_sym_round,
      anon_sym_string,
      anon_sym_substring,
      anon_sym_sum,
      anon_sym_translate,
      anon_sym_base64Encode,
      anon_sym_base64Decode,
      anon_sym_ctx,
  [1170] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 26,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_element_DASHavailable,
      anon_sym_format_DASHnumber,
      anon_sym_function_DASHavailable,
      anon_sym_generate_DASHid,
      anon_sym_local_DASHname,
      anon_sym_namespace_DASHuri,
      anon_sym_normalize_DASHspace,
      anon_sym_starts_DASHwith,
      anon_sym_string_DASHlength,
      anon_sym_substring_DASHafter,
      anon_sym_substring_DASHbefore,
      anon_sym_system_DASHproperty,
      anon_sym_unparsed_DASHentity_DASHurl,
      anon_sym_get_DASHproperty_LPAREN,
      anon_sym_DOLLARbody,
      anon_sym_DOLLARheader,
      anon_sym_DOLLARaxis2,
      anon_sym_DOLLARtrp,
      anon_sym_DOLLARurl,
      anon_sym_DOLLARfunc,
      anon_sym_DOLLARenv,
    ACTIONS(315), 31,
      anon_sym_key,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_id,
      aux_sym_identifier_token1,
      sym__xpath_node,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_boolean,
      anon_sym_ceiling,
      anon_sym_choose,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_current,
      anon_sym_document,
      anon_sym_floor,
      anon_sym_lang,
      anon_sym_last,
      anon_sym_not,
      anon_sym_number,
      anon_sym_position,
      anon_sym_round,
      anon_sym_string,
      anon_sym_substring,
      anon_sym_sum,
      anon_sym_translate,
      anon_sym_base64Encode,
      anon_sym_base64Decode,
      anon_sym_ctx,
  [1235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 26,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_element_DASHavailable,
      anon_sym_format_DASHnumber,
      anon_sym_function_DASHavailable,
      anon_sym_generate_DASHid,
      anon_sym_local_DASHname,
      anon_sym_namespace_DASHuri,
      anon_sym_normalize_DASHspace,
      anon_sym_starts_DASHwith,
      anon_sym_string_DASHlength,
      anon_sym_substring_DASHafter,
      anon_sym_substring_DASHbefore,
      anon_sym_system_DASHproperty,
      anon_sym_unparsed_DASHentity_DASHurl,
      anon_sym_get_DASHproperty_LPAREN,
      anon_sym_DOLLARbody,
      anon_sym_DOLLARheader,
      anon_sym_DOLLARaxis2,
      anon_sym_DOLLARtrp,
      anon_sym_DOLLARurl,
      anon_sym_DOLLARfunc,
      anon_sym_DOLLARenv,
    ACTIONS(319), 31,
      anon_sym_key,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_id,
      aux_sym_identifier_token1,
      sym__xpath_node,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_boolean,
      anon_sym_ceiling,
      anon_sym_choose,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_current,
      anon_sym_document,
      anon_sym_floor,
      anon_sym_lang,
      anon_sym_last,
      anon_sym_not,
      anon_sym_number,
      anon_sym_position,
      anon_sym_round,
      anon_sym_string,
      anon_sym_substring,
      anon_sym_sum,
      anon_sym_translate,
      anon_sym_base64Encode,
      anon_sym_base64Decode,
      anon_sym_ctx,
  [1300] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 26,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_element_DASHavailable,
      anon_sym_format_DASHnumber,
      anon_sym_function_DASHavailable,
      anon_sym_generate_DASHid,
      anon_sym_local_DASHname,
      anon_sym_namespace_DASHuri,
      anon_sym_normalize_DASHspace,
      anon_sym_starts_DASHwith,
      anon_sym_string_DASHlength,
      anon_sym_substring_DASHafter,
      anon_sym_substring_DASHbefore,
      anon_sym_system_DASHproperty,
      anon_sym_unparsed_DASHentity_DASHurl,
      anon_sym_get_DASHproperty_LPAREN,
      anon_sym_DOLLARbody,
      anon_sym_DOLLARheader,
      anon_sym_DOLLARaxis2,
      anon_sym_DOLLARtrp,
      anon_sym_DOLLARurl,
      anon_sym_DOLLARfunc,
      anon_sym_DOLLARenv,
    ACTIONS(323), 31,
      anon_sym_key,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_id,
      aux_sym_identifier_token1,
      sym__xpath_node,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_boolean,
      anon_sym_ceiling,
      anon_sym_choose,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_current,
      anon_sym_document,
      anon_sym_floor,
      anon_sym_lang,
      anon_sym_last,
      anon_sym_not,
      anon_sym_number,
      anon_sym_position,
      anon_sym_round,
      anon_sym_string,
      anon_sym_substring,
      anon_sym_sum,
      anon_sym_translate,
      anon_sym_base64Encode,
      anon_sym_base64Decode,
      anon_sym_ctx,
  [1365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 26,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_element_DASHavailable,
      anon_sym_format_DASHnumber,
      anon_sym_function_DASHavailable,
      anon_sym_generate_DASHid,
      anon_sym_local_DASHname,
      anon_sym_namespace_DASHuri,
      anon_sym_normalize_DASHspace,
      anon_sym_starts_DASHwith,
      anon_sym_string_DASHlength,
      anon_sym_substring_DASHafter,
      anon_sym_substring_DASHbefore,
      anon_sym_system_DASHproperty,
      anon_sym_unparsed_DASHentity_DASHurl,
      anon_sym_get_DASHproperty_LPAREN,
      anon_sym_DOLLARbody,
      anon_sym_DOLLARheader,
      anon_sym_DOLLARaxis2,
      anon_sym_DOLLARtrp,
      anon_sym_DOLLARurl,
      anon_sym_DOLLARfunc,
      anon_sym_DOLLARenv,
    ACTIONS(327), 31,
      anon_sym_key,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_id,
      aux_sym_identifier_token1,
      sym__xpath_node,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_boolean,
      anon_sym_ceiling,
      anon_sym_choose,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_current,
      anon_sym_document,
      anon_sym_floor,
      anon_sym_lang,
      anon_sym_last,
      anon_sym_not,
      anon_sym_number,
      anon_sym_position,
      anon_sym_round,
      anon_sym_string,
      anon_sym_substring,
      anon_sym_sum,
      anon_sym_translate,
      anon_sym_base64Encode,
      anon_sym_base64Decode,
      anon_sym_ctx,
  [1430] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 26,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_element_DASHavailable,
      anon_sym_format_DASHnumber,
      anon_sym_function_DASHavailable,
      anon_sym_generate_DASHid,
      anon_sym_local_DASHname,
      anon_sym_namespace_DASHuri,
      anon_sym_normalize_DASHspace,
      anon_sym_starts_DASHwith,
      anon_sym_string_DASHlength,
      anon_sym_substring_DASHafter,
      anon_sym_substring_DASHbefore,
      anon_sym_system_DASHproperty,
      anon_sym_unparsed_DASHentity_DASHurl,
      anon_sym_get_DASHproperty_LPAREN,
      anon_sym_DOLLARbody,
      anon_sym_DOLLARheader,
      anon_sym_DOLLARaxis2,
      anon_sym_DOLLARtrp,
      anon_sym_DOLLARurl,
      anon_sym_DOLLARfunc,
      anon_sym_DOLLARenv,
    ACTIONS(331), 31,
      anon_sym_key,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_id,
      aux_sym_identifier_token1,
      sym__xpath_node,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_boolean,
      anon_sym_ceiling,
      anon_sym_choose,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_current,
      anon_sym_document,
      anon_sym_floor,
      anon_sym_lang,
      anon_sym_last,
      anon_sym_not,
      anon_sym_number,
      anon_sym_position,
      anon_sym_round,
      anon_sym_string,
      anon_sym_substring,
      anon_sym_sum,
      anon_sym_translate,
      anon_sym_base64Encode,
      anon_sym_base64Decode,
      anon_sym_ctx,
  [1495] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 26,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_element_DASHavailable,
      anon_sym_format_DASHnumber,
      anon_sym_function_DASHavailable,
      anon_sym_generate_DASHid,
      anon_sym_local_DASHname,
      anon_sym_namespace_DASHuri,
      anon_sym_normalize_DASHspace,
      anon_sym_starts_DASHwith,
      anon_sym_string_DASHlength,
      anon_sym_substring_DASHafter,
      anon_sym_substring_DASHbefore,
      anon_sym_system_DASHproperty,
      anon_sym_unparsed_DASHentity_DASHurl,
      anon_sym_get_DASHproperty_LPAREN,
      anon_sym_DOLLARbody,
      anon_sym_DOLLARheader,
      anon_sym_DOLLARaxis2,
      anon_sym_DOLLARtrp,
      anon_sym_DOLLARurl,
      anon_sym_DOLLARfunc,
      anon_sym_DOLLARenv,
    ACTIONS(335), 31,
      anon_sym_key,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_id,
      aux_sym_identifier_token1,
      sym__xpath_node,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_boolean,
      anon_sym_ceiling,
      anon_sym_choose,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_current,
      anon_sym_document,
      anon_sym_floor,
      anon_sym_lang,
      anon_sym_last,
      anon_sym_not,
      anon_sym_number,
      anon_sym_position,
      anon_sym_round,
      anon_sym_string,
      anon_sym_substring,
      anon_sym_sum,
      anon_sym_translate,
      anon_sym_base64Encode,
      anon_sym_base64Decode,
      anon_sym_ctx,
  [1560] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 26,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_element_DASHavailable,
      anon_sym_format_DASHnumber,
      anon_sym_function_DASHavailable,
      anon_sym_generate_DASHid,
      anon_sym_local_DASHname,
      anon_sym_namespace_DASHuri,
      anon_sym_normalize_DASHspace,
      anon_sym_starts_DASHwith,
      anon_sym_string_DASHlength,
      anon_sym_substring_DASHafter,
      anon_sym_substring_DASHbefore,
      anon_sym_system_DASHproperty,
      anon_sym_unparsed_DASHentity_DASHurl,
      anon_sym_get_DASHproperty_LPAREN,
      anon_sym_DOLLARbody,
      anon_sym_DOLLARheader,
      anon_sym_DOLLARaxis2,
      anon_sym_DOLLARtrp,
      anon_sym_DOLLARurl,
      anon_sym_DOLLARfunc,
      anon_sym_DOLLARenv,
    ACTIONS(339), 31,
      anon_sym_key,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_id,
      aux_sym_identifier_token1,
      sym__xpath_node,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_boolean,
      anon_sym_ceiling,
      anon_sym_choose,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_current,
      anon_sym_document,
      anon_sym_floor,
      anon_sym_lang,
      anon_sym_last,
      anon_sym_not,
      anon_sym_number,
      anon_sym_position,
      anon_sym_round,
      anon_sym_string,
      anon_sym_substring,
      anon_sym_sum,
      anon_sym_translate,
      anon_sym_base64Encode,
      anon_sym_base64Decode,
      anon_sym_ctx,
  [1625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 26,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_element_DASHavailable,
      anon_sym_format_DASHnumber,
      anon_sym_function_DASHavailable,
      anon_sym_generate_DASHid,
      anon_sym_local_DASHname,
      anon_sym_namespace_DASHuri,
      anon_sym_normalize_DASHspace,
      anon_sym_starts_DASHwith,
      anon_sym_string_DASHlength,
      anon_sym_substring_DASHafter,
      anon_sym_substring_DASHbefore,
      anon_sym_system_DASHproperty,
      anon_sym_unparsed_DASHentity_DASHurl,
      anon_sym_get_DASHproperty_LPAREN,
      anon_sym_DOLLARbody,
      anon_sym_DOLLARheader,
      anon_sym_DOLLARaxis2,
      anon_sym_DOLLARtrp,
      anon_sym_DOLLARurl,
      anon_sym_DOLLARfunc,
      anon_sym_DOLLARenv,
    ACTIONS(343), 31,
      anon_sym_key,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_id,
      aux_sym_identifier_token1,
      sym__xpath_node,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_boolean,
      anon_sym_ceiling,
      anon_sym_choose,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_current,
      anon_sym_document,
      anon_sym_floor,
      anon_sym_lang,
      anon_sym_last,
      anon_sym_not,
      anon_sym_number,
      anon_sym_position,
      anon_sym_round,
      anon_sym_string,
      anon_sym_substring,
      anon_sym_sum,
      anon_sym_translate,
      anon_sym_base64Encode,
      anon_sym_base64Decode,
      anon_sym_ctx,
  [1690] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 26,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_element_DASHavailable,
      anon_sym_format_DASHnumber,
      anon_sym_function_DASHavailable,
      anon_sym_generate_DASHid,
      anon_sym_local_DASHname,
      anon_sym_namespace_DASHuri,
      anon_sym_normalize_DASHspace,
      anon_sym_starts_DASHwith,
      anon_sym_string_DASHlength,
      anon_sym_substring_DASHafter,
      anon_sym_substring_DASHbefore,
      anon_sym_system_DASHproperty,
      anon_sym_unparsed_DASHentity_DASHurl,
      anon_sym_get_DASHproperty_LPAREN,
      anon_sym_DOLLARbody,
      anon_sym_DOLLARheader,
      anon_sym_DOLLARaxis2,
      anon_sym_DOLLARtrp,
      anon_sym_DOLLARurl,
      anon_sym_DOLLARfunc,
      anon_sym_DOLLARenv,
    ACTIONS(347), 31,
      anon_sym_key,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_id,
      aux_sym_identifier_token1,
      sym__xpath_node,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_boolean,
      anon_sym_ceiling,
      anon_sym_choose,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_current,
      anon_sym_document,
      anon_sym_floor,
      anon_sym_lang,
      anon_sym_last,
      anon_sym_not,
      anon_sym_number,
      anon_sym_position,
      anon_sym_round,
      anon_sym_string,
      anon_sym_substring,
      anon_sym_sum,
      anon_sym_translate,
      anon_sym_base64Encode,
      anon_sym_base64Decode,
      anon_sym_ctx,
  [1755] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 26,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_element_DASHavailable,
      anon_sym_format_DASHnumber,
      anon_sym_function_DASHavailable,
      anon_sym_generate_DASHid,
      anon_sym_local_DASHname,
      anon_sym_namespace_DASHuri,
      anon_sym_normalize_DASHspace,
      anon_sym_starts_DASHwith,
      anon_sym_string_DASHlength,
      anon_sym_substring_DASHafter,
      anon_sym_substring_DASHbefore,
      anon_sym_system_DASHproperty,
      anon_sym_unparsed_DASHentity_DASHurl,
      anon_sym_get_DASHproperty_LPAREN,
      anon_sym_DOLLARbody,
      anon_sym_DOLLARheader,
      anon_sym_DOLLARaxis2,
      anon_sym_DOLLARtrp,
      anon_sym_DOLLARurl,
      anon_sym_DOLLARfunc,
      anon_sym_DOLLARenv,
    ACTIONS(351), 31,
      anon_sym_key,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_id,
      aux_sym_identifier_token1,
      sym__xpath_node,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_boolean,
      anon_sym_ceiling,
      anon_sym_choose,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_current,
      anon_sym_document,
      anon_sym_floor,
      anon_sym_lang,
      anon_sym_last,
      anon_sym_not,
      anon_sym_number,
      anon_sym_position,
      anon_sym_round,
      anon_sym_string,
      anon_sym_substring,
      anon_sym_sum,
      anon_sym_translate,
      anon_sym_base64Encode,
      anon_sym_base64Decode,
      anon_sym_ctx,
  [1820] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 26,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_element_DASHavailable,
      anon_sym_format_DASHnumber,
      anon_sym_function_DASHavailable,
      anon_sym_generate_DASHid,
      anon_sym_local_DASHname,
      anon_sym_namespace_DASHuri,
      anon_sym_normalize_DASHspace,
      anon_sym_starts_DASHwith,
      anon_sym_string_DASHlength,
      anon_sym_substring_DASHafter,
      anon_sym_substring_DASHbefore,
      anon_sym_system_DASHproperty,
      anon_sym_unparsed_DASHentity_DASHurl,
      anon_sym_get_DASHproperty_LPAREN,
      anon_sym_DOLLARbody,
      anon_sym_DOLLARheader,
      anon_sym_DOLLARaxis2,
      anon_sym_DOLLARtrp,
      anon_sym_DOLLARurl,
      anon_sym_DOLLARfunc,
      anon_sym_DOLLARenv,
    ACTIONS(355), 31,
      anon_sym_key,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_id,
      aux_sym_identifier_token1,
      sym__xpath_node,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_boolean,
      anon_sym_ceiling,
      anon_sym_choose,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_current,
      anon_sym_document,
      anon_sym_floor,
      anon_sym_lang,
      anon_sym_last,
      anon_sym_not,
      anon_sym_number,
      anon_sym_position,
      anon_sym_round,
      anon_sym_string,
      anon_sym_substring,
      anon_sym_sum,
      anon_sym_translate,
      anon_sym_base64Encode,
      anon_sym_base64Decode,
      anon_sym_ctx,
  [1885] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 26,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_element_DASHavailable,
      anon_sym_format_DASHnumber,
      anon_sym_function_DASHavailable,
      anon_sym_generate_DASHid,
      anon_sym_local_DASHname,
      anon_sym_namespace_DASHuri,
      anon_sym_normalize_DASHspace,
      anon_sym_starts_DASHwith,
      anon_sym_string_DASHlength,
      anon_sym_substring_DASHafter,
      anon_sym_substring_DASHbefore,
      anon_sym_system_DASHproperty,
      anon_sym_unparsed_DASHentity_DASHurl,
      anon_sym_get_DASHproperty_LPAREN,
      anon_sym_DOLLARbody,
      anon_sym_DOLLARheader,
      anon_sym_DOLLARaxis2,
      anon_sym_DOLLARtrp,
      anon_sym_DOLLARurl,
      anon_sym_DOLLARfunc,
      anon_sym_DOLLARenv,
    ACTIONS(359), 31,
      anon_sym_key,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_id,
      aux_sym_identifier_token1,
      sym__xpath_node,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_boolean,
      anon_sym_ceiling,
      anon_sym_choose,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_current,
      anon_sym_document,
      anon_sym_floor,
      anon_sym_lang,
      anon_sym_last,
      anon_sym_not,
      anon_sym_number,
      anon_sym_position,
      anon_sym_round,
      anon_sym_string,
      anon_sym_substring,
      anon_sym_sum,
      anon_sym_translate,
      anon_sym_base64Encode,
      anon_sym_base64Decode,
      anon_sym_ctx,
  [1950] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 26,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_element_DASHavailable,
      anon_sym_format_DASHnumber,
      anon_sym_function_DASHavailable,
      anon_sym_generate_DASHid,
      anon_sym_local_DASHname,
      anon_sym_namespace_DASHuri,
      anon_sym_normalize_DASHspace,
      anon_sym_starts_DASHwith,
      anon_sym_string_DASHlength,
      anon_sym_substring_DASHafter,
      anon_sym_substring_DASHbefore,
      anon_sym_system_DASHproperty,
      anon_sym_unparsed_DASHentity_DASHurl,
      anon_sym_get_DASHproperty_LPAREN,
      anon_sym_DOLLARbody,
      anon_sym_DOLLARheader,
      anon_sym_DOLLARaxis2,
      anon_sym_DOLLARtrp,
      anon_sym_DOLLARurl,
      anon_sym_DOLLARfunc,
      anon_sym_DOLLARenv,
    ACTIONS(363), 31,
      anon_sym_key,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_id,
      aux_sym_identifier_token1,
      sym__xpath_node,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_boolean,
      anon_sym_ceiling,
      anon_sym_choose,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_current,
      anon_sym_document,
      anon_sym_floor,
      anon_sym_lang,
      anon_sym_last,
      anon_sym_not,
      anon_sym_number,
      anon_sym_position,
      anon_sym_round,
      anon_sym_string,
      anon_sym_substring,
      anon_sym_sum,
      anon_sym_translate,
      anon_sym_base64Encode,
      anon_sym_base64Decode,
      anon_sym_ctx,
  [2015] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 26,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_element_DASHavailable,
      anon_sym_format_DASHnumber,
      anon_sym_function_DASHavailable,
      anon_sym_generate_DASHid,
      anon_sym_local_DASHname,
      anon_sym_namespace_DASHuri,
      anon_sym_normalize_DASHspace,
      anon_sym_starts_DASHwith,
      anon_sym_string_DASHlength,
      anon_sym_substring_DASHafter,
      anon_sym_substring_DASHbefore,
      anon_sym_system_DASHproperty,
      anon_sym_unparsed_DASHentity_DASHurl,
      anon_sym_get_DASHproperty_LPAREN,
      anon_sym_DOLLARbody,
      anon_sym_DOLLARheader,
      anon_sym_DOLLARaxis2,
      anon_sym_DOLLARtrp,
      anon_sym_DOLLARurl,
      anon_sym_DOLLARfunc,
      anon_sym_DOLLARenv,
    ACTIONS(367), 31,
      anon_sym_key,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_id,
      aux_sym_identifier_token1,
      sym__xpath_node,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_boolean,
      anon_sym_ceiling,
      anon_sym_choose,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_current,
      anon_sym_document,
      anon_sym_floor,
      anon_sym_lang,
      anon_sym_last,
      anon_sym_not,
      anon_sym_number,
      anon_sym_position,
      anon_sym_round,
      anon_sym_string,
      anon_sym_substring,
      anon_sym_sum,
      anon_sym_translate,
      anon_sym_base64Encode,
      anon_sym_base64Decode,
      anon_sym_ctx,
  [2080] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 26,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_element_DASHavailable,
      anon_sym_format_DASHnumber,
      anon_sym_function_DASHavailable,
      anon_sym_generate_DASHid,
      anon_sym_local_DASHname,
      anon_sym_namespace_DASHuri,
      anon_sym_normalize_DASHspace,
      anon_sym_starts_DASHwith,
      anon_sym_string_DASHlength,
      anon_sym_substring_DASHafter,
      anon_sym_substring_DASHbefore,
      anon_sym_system_DASHproperty,
      anon_sym_unparsed_DASHentity_DASHurl,
      anon_sym_get_DASHproperty_LPAREN,
      anon_sym_DOLLARbody,
      anon_sym_DOLLARheader,
      anon_sym_DOLLARaxis2,
      anon_sym_DOLLARtrp,
      anon_sym_DOLLARurl,
      anon_sym_DOLLARfunc,
      anon_sym_DOLLARenv,
    ACTIONS(371), 31,
      anon_sym_key,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_id,
      aux_sym_identifier_token1,
      sym__xpath_node,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_boolean,
      anon_sym_ceiling,
      anon_sym_choose,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_current,
      anon_sym_document,
      anon_sym_floor,
      anon_sym_lang,
      anon_sym_last,
      anon_sym_not,
      anon_sym_number,
      anon_sym_position,
      anon_sym_round,
      anon_sym_string,
      anon_sym_substring,
      anon_sym_sum,
      anon_sym_translate,
      anon_sym_base64Encode,
      anon_sym_base64Decode,
      anon_sym_ctx,
  [2145] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 26,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_element_DASHavailable,
      anon_sym_format_DASHnumber,
      anon_sym_function_DASHavailable,
      anon_sym_generate_DASHid,
      anon_sym_local_DASHname,
      anon_sym_namespace_DASHuri,
      anon_sym_normalize_DASHspace,
      anon_sym_starts_DASHwith,
      anon_sym_string_DASHlength,
      anon_sym_substring_DASHafter,
      anon_sym_substring_DASHbefore,
      anon_sym_system_DASHproperty,
      anon_sym_unparsed_DASHentity_DASHurl,
      anon_sym_get_DASHproperty_LPAREN,
      anon_sym_DOLLARbody,
      anon_sym_DOLLARheader,
      anon_sym_DOLLARaxis2,
      anon_sym_DOLLARtrp,
      anon_sym_DOLLARurl,
      anon_sym_DOLLARfunc,
      anon_sym_DOLLARenv,
    ACTIONS(375), 31,
      anon_sym_key,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_id,
      aux_sym_identifier_token1,
      sym__xpath_node,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_boolean,
      anon_sym_ceiling,
      anon_sym_choose,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_current,
      anon_sym_document,
      anon_sym_floor,
      anon_sym_lang,
      anon_sym_last,
      anon_sym_not,
      anon_sym_number,
      anon_sym_position,
      anon_sym_round,
      anon_sym_string,
      anon_sym_substring,
      anon_sym_sum,
      anon_sym_translate,
      anon_sym_base64Encode,
      anon_sym_base64Decode,
      anon_sym_ctx,
  [2210] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 26,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_element_DASHavailable,
      anon_sym_format_DASHnumber,
      anon_sym_function_DASHavailable,
      anon_sym_generate_DASHid,
      anon_sym_local_DASHname,
      anon_sym_namespace_DASHuri,
      anon_sym_normalize_DASHspace,
      anon_sym_starts_DASHwith,
      anon_sym_string_DASHlength,
      anon_sym_substring_DASHafter,
      anon_sym_substring_DASHbefore,
      anon_sym_system_DASHproperty,
      anon_sym_unparsed_DASHentity_DASHurl,
      anon_sym_get_DASHproperty_LPAREN,
      anon_sym_DOLLARbody,
      anon_sym_DOLLARheader,
      anon_sym_DOLLARaxis2,
      anon_sym_DOLLARtrp,
      anon_sym_DOLLARurl,
      anon_sym_DOLLARfunc,
      anon_sym_DOLLARenv,
    ACTIONS(379), 31,
      anon_sym_key,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_id,
      aux_sym_identifier_token1,
      sym__xpath_node,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_boolean,
      anon_sym_ceiling,
      anon_sym_choose,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_current,
      anon_sym_document,
      anon_sym_floor,
      anon_sym_lang,
      anon_sym_last,
      anon_sym_not,
      anon_sym_number,
      anon_sym_position,
      anon_sym_round,
      anon_sym_string,
      anon_sym_substring,
      anon_sym_sum,
      anon_sym_translate,
      anon_sym_base64Encode,
      anon_sym_base64Decode,
      anon_sym_ctx,
  [2275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 26,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_element_DASHavailable,
      anon_sym_format_DASHnumber,
      anon_sym_function_DASHavailable,
      anon_sym_generate_DASHid,
      anon_sym_local_DASHname,
      anon_sym_namespace_DASHuri,
      anon_sym_normalize_DASHspace,
      anon_sym_starts_DASHwith,
      anon_sym_string_DASHlength,
      anon_sym_substring_DASHafter,
      anon_sym_substring_DASHbefore,
      anon_sym_system_DASHproperty,
      anon_sym_unparsed_DASHentity_DASHurl,
      anon_sym_get_DASHproperty_LPAREN,
      anon_sym_DOLLARbody,
      anon_sym_DOLLARheader,
      anon_sym_DOLLARaxis2,
      anon_sym_DOLLARtrp,
      anon_sym_DOLLARurl,
      anon_sym_DOLLARfunc,
      anon_sym_DOLLARenv,
    ACTIONS(383), 31,
      anon_sym_key,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_id,
      aux_sym_identifier_token1,
      sym__xpath_node,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_boolean,
      anon_sym_ceiling,
      anon_sym_choose,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_current,
      anon_sym_document,
      anon_sym_floor,
      anon_sym_lang,
      anon_sym_last,
      anon_sym_not,
      anon_sym_number,
      anon_sym_position,
      anon_sym_round,
      anon_sym_string,
      anon_sym_substring,
      anon_sym_sum,
      anon_sym_translate,
      anon_sym_base64Encode,
      anon_sym_base64Decode,
      anon_sym_ctx,
  [2340] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 26,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_element_DASHavailable,
      anon_sym_format_DASHnumber,
      anon_sym_function_DASHavailable,
      anon_sym_generate_DASHid,
      anon_sym_local_DASHname,
      anon_sym_namespace_DASHuri,
      anon_sym_normalize_DASHspace,
      anon_sym_starts_DASHwith,
      anon_sym_string_DASHlength,
      anon_sym_substring_DASHafter,
      anon_sym_substring_DASHbefore,
      anon_sym_system_DASHproperty,
      anon_sym_unparsed_DASHentity_DASHurl,
      anon_sym_get_DASHproperty_LPAREN,
      anon_sym_DOLLARbody,
      anon_sym_DOLLARheader,
      anon_sym_DOLLARaxis2,
      anon_sym_DOLLARtrp,
      anon_sym_DOLLARurl,
      anon_sym_DOLLARfunc,
      anon_sym_DOLLARenv,
    ACTIONS(387), 31,
      anon_sym_key,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_id,
      aux_sym_identifier_token1,
      sym__xpath_node,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_boolean,
      anon_sym_ceiling,
      anon_sym_choose,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_current,
      anon_sym_document,
      anon_sym_floor,
      anon_sym_lang,
      anon_sym_last,
      anon_sym_not,
      anon_sym_number,
      anon_sym_position,
      anon_sym_round,
      anon_sym_string,
      anon_sym_substring,
      anon_sym_sum,
      anon_sym_translate,
      anon_sym_base64Encode,
      anon_sym_base64Decode,
      anon_sym_ctx,
  [2405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 26,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_element_DASHavailable,
      anon_sym_format_DASHnumber,
      anon_sym_function_DASHavailable,
      anon_sym_generate_DASHid,
      anon_sym_local_DASHname,
      anon_sym_namespace_DASHuri,
      anon_sym_normalize_DASHspace,
      anon_sym_starts_DASHwith,
      anon_sym_string_DASHlength,
      anon_sym_substring_DASHafter,
      anon_sym_substring_DASHbefore,
      anon_sym_system_DASHproperty,
      anon_sym_unparsed_DASHentity_DASHurl,
      anon_sym_get_DASHproperty_LPAREN,
      anon_sym_DOLLARbody,
      anon_sym_DOLLARheader,
      anon_sym_DOLLARaxis2,
      anon_sym_DOLLARtrp,
      anon_sym_DOLLARurl,
      anon_sym_DOLLARfunc,
      anon_sym_DOLLARenv,
    ACTIONS(391), 31,
      anon_sym_key,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_id,
      aux_sym_identifier_token1,
      sym__xpath_node,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_boolean,
      anon_sym_ceiling,
      anon_sym_choose,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_current,
      anon_sym_document,
      anon_sym_floor,
      anon_sym_lang,
      anon_sym_last,
      anon_sym_not,
      anon_sym_number,
      anon_sym_position,
      anon_sym_round,
      anon_sym_string,
      anon_sym_substring,
      anon_sym_sum,
      anon_sym_translate,
      anon_sym_base64Encode,
      anon_sym_base64Decode,
      anon_sym_ctx,
  [2470] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 26,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_element_DASHavailable,
      anon_sym_format_DASHnumber,
      anon_sym_function_DASHavailable,
      anon_sym_generate_DASHid,
      anon_sym_local_DASHname,
      anon_sym_namespace_DASHuri,
      anon_sym_normalize_DASHspace,
      anon_sym_starts_DASHwith,
      anon_sym_string_DASHlength,
      anon_sym_substring_DASHafter,
      anon_sym_substring_DASHbefore,
      anon_sym_system_DASHproperty,
      anon_sym_unparsed_DASHentity_DASHurl,
      anon_sym_get_DASHproperty_LPAREN,
      anon_sym_DOLLARbody,
      anon_sym_DOLLARheader,
      anon_sym_DOLLARaxis2,
      anon_sym_DOLLARtrp,
      anon_sym_DOLLARurl,
      anon_sym_DOLLARfunc,
      anon_sym_DOLLARenv,
    ACTIONS(395), 31,
      anon_sym_key,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_id,
      aux_sym_identifier_token1,
      sym__xpath_node,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_boolean,
      anon_sym_ceiling,
      anon_sym_choose,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_current,
      anon_sym_document,
      anon_sym_floor,
      anon_sym_lang,
      anon_sym_last,
      anon_sym_not,
      anon_sym_number,
      anon_sym_position,
      anon_sym_round,
      anon_sym_string,
      anon_sym_substring,
      anon_sym_sum,
      anon_sym_translate,
      anon_sym_base64Encode,
      anon_sym_base64Decode,
      anon_sym_ctx,
  [2535] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 26,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_element_DASHavailable,
      anon_sym_format_DASHnumber,
      anon_sym_function_DASHavailable,
      anon_sym_generate_DASHid,
      anon_sym_local_DASHname,
      anon_sym_namespace_DASHuri,
      anon_sym_normalize_DASHspace,
      anon_sym_starts_DASHwith,
      anon_sym_string_DASHlength,
      anon_sym_substring_DASHafter,
      anon_sym_substring_DASHbefore,
      anon_sym_system_DASHproperty,
      anon_sym_unparsed_DASHentity_DASHurl,
      anon_sym_get_DASHproperty_LPAREN,
      anon_sym_DOLLARbody,
      anon_sym_DOLLARheader,
      anon_sym_DOLLARaxis2,
      anon_sym_DOLLARtrp,
      anon_sym_DOLLARurl,
      anon_sym_DOLLARfunc,
      anon_sym_DOLLARenv,
    ACTIONS(399), 31,
      anon_sym_key,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_id,
      aux_sym_identifier_token1,
      sym__xpath_node,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_boolean,
      anon_sym_ceiling,
      anon_sym_choose,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_current,
      anon_sym_document,
      anon_sym_floor,
      anon_sym_lang,
      anon_sym_last,
      anon_sym_not,
      anon_sym_number,
      anon_sym_position,
      anon_sym_round,
      anon_sym_string,
      anon_sym_substring,
      anon_sym_sum,
      anon_sym_translate,
      anon_sym_base64Encode,
      anon_sym_base64Decode,
      anon_sym_ctx,
  [2600] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 26,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_element_DASHavailable,
      anon_sym_format_DASHnumber,
      anon_sym_function_DASHavailable,
      anon_sym_generate_DASHid,
      anon_sym_local_DASHname,
      anon_sym_namespace_DASHuri,
      anon_sym_normalize_DASHspace,
      anon_sym_starts_DASHwith,
      anon_sym_string_DASHlength,
      anon_sym_substring_DASHafter,
      anon_sym_substring_DASHbefore,
      anon_sym_system_DASHproperty,
      anon_sym_unparsed_DASHentity_DASHurl,
      anon_sym_get_DASHproperty_LPAREN,
      anon_sym_DOLLARbody,
      anon_sym_DOLLARheader,
      anon_sym_DOLLARaxis2,
      anon_sym_DOLLARtrp,
      anon_sym_DOLLARurl,
      anon_sym_DOLLARfunc,
      anon_sym_DOLLARenv,
    ACTIONS(403), 31,
      anon_sym_key,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_id,
      aux_sym_identifier_token1,
      sym__xpath_node,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_boolean,
      anon_sym_ceiling,
      anon_sym_choose,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_current,
      anon_sym_document,
      anon_sym_floor,
      anon_sym_lang,
      anon_sym_last,
      anon_sym_not,
      anon_sym_number,
      anon_sym_position,
      anon_sym_round,
      anon_sym_string,
      anon_sym_substring,
      anon_sym_sum,
      anon_sym_translate,
      anon_sym_base64Encode,
      anon_sym_base64Decode,
      anon_sym_ctx,
  [2665] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 26,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_DOT_DOT,
      anon_sym_AT,
      anon_sym_element_DASHavailable,
      anon_sym_format_DASHnumber,
      anon_sym_function_DASHavailable,
      anon_sym_generate_DASHid,
      anon_sym_local_DASHname,
      anon_sym_namespace_DASHuri,
      anon_sym_normalize_DASHspace,
      anon_sym_starts_DASHwith,
      anon_sym_string_DASHlength,
      anon_sym_substring_DASHafter,
      anon_sym_substring_DASHbefore,
      anon_sym_system_DASHproperty,
      anon_sym_unparsed_DASHentity_DASHurl,
      anon_sym_get_DASHproperty_LPAREN,
      anon_sym_DOLLARbody,
      anon_sym_DOLLARheader,
      anon_sym_DOLLARaxis2,
      anon_sym_DOLLARtrp,
      anon_sym_DOLLARurl,
      anon_sym_DOLLARfunc,
      anon_sym_DOLLARenv,
    ACTIONS(407), 31,
      anon_sym_key,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_id,
      aux_sym_identifier_token1,
      sym__xpath_node,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_boolean,
      anon_sym_ceiling,
      anon_sym_choose,
      anon_sym_concat,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_current,
      anon_sym_document,
      anon_sym_floor,
      anon_sym_lang,
      anon_sym_last,
      anon_sym_not,
      anon_sym_number,
      anon_sym_position,
      anon_sym_round,
      anon_sym_string,
      anon_sym_substring,
      anon_sym_sum,
      anon_sym_translate,
      anon_sym_base64Encode,
      anon_sym_base64Decode,
      anon_sym_ctx,
  [2730] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_LTsequence,
    ACTIONS(414), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(417), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(420), 1,
      anon_sym_LTsend,
    ACTIONS(423), 1,
      anon_sym_LTlog,
    ACTIONS(426), 1,
      anon_sym_LTproperty,
    ACTIONS(429), 1,
      anon_sym_LTcall,
    ACTIONS(432), 1,
      anon_sym_LTforeach,
    ACTIONS(435), 1,
      anon_sym_LTfilter,
    ACTIONS(438), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(441), 1,
      anon_sym_LTaggregate,
    ACTIONS(444), 1,
      anon_sym_LTiterate,
    STATE(89), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    ACTIONS(412), 4,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
    STATE(135), 10,
      sym_respond,
      sym_send,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
      sym_aggregate,
      sym_iterate,
      sym_sequence,
  [2792] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LTsequence,
    ACTIONS(449), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(451), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(453), 1,
      anon_sym_LTsend,
    ACTIONS(455), 1,
      anon_sym_LTlog,
    ACTIONS(457), 1,
      anon_sym_LTproperty,
    ACTIONS(459), 1,
      anon_sym_LTcall,
    ACTIONS(461), 1,
      anon_sym_LTforeach,
    ACTIONS(463), 1,
      anon_sym_LTfilter,
    ACTIONS(465), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(467), 1,
      anon_sym_LTaggregate,
    ACTIONS(469), 1,
      anon_sym_LTiterate,
    ACTIONS(471), 1,
      anon_sym_LT_SLASHonComplete_GT,
    STATE(89), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(135), 10,
      sym_respond,
      sym_send,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
      sym_aggregate,
      sym_iterate,
      sym_sequence,
  [2851] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LTsequence,
    ACTIONS(449), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(451), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(453), 1,
      anon_sym_LTsend,
    ACTIONS(455), 1,
      anon_sym_LTlog,
    ACTIONS(457), 1,
      anon_sym_LTproperty,
    ACTIONS(459), 1,
      anon_sym_LTcall,
    ACTIONS(461), 1,
      anon_sym_LTforeach,
    ACTIONS(463), 1,
      anon_sym_LTfilter,
    ACTIONS(465), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(467), 1,
      anon_sym_LTaggregate,
    ACTIONS(469), 1,
      anon_sym_LTiterate,
    ACTIONS(473), 1,
      anon_sym_LT_SLASHonComplete_GT,
    STATE(95), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(135), 10,
      sym_respond,
      sym_send,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
      sym_aggregate,
      sym_iterate,
      sym_sequence,
  [2910] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LTsequence,
    ACTIONS(449), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(451), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(453), 1,
      anon_sym_LTsend,
    ACTIONS(455), 1,
      anon_sym_LTlog,
    ACTIONS(457), 1,
      anon_sym_LTproperty,
    ACTIONS(459), 1,
      anon_sym_LTcall,
    ACTIONS(461), 1,
      anon_sym_LTforeach,
    ACTIONS(463), 1,
      anon_sym_LTfilter,
    ACTIONS(465), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(467), 1,
      anon_sym_LTaggregate,
    ACTIONS(469), 1,
      anon_sym_LTiterate,
    ACTIONS(475), 1,
      anon_sym_LT_SLASHthen_GT,
    STATE(94), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(135), 10,
      sym_respond,
      sym_send,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
      sym_aggregate,
      sym_iterate,
      sym_sequence,
  [2969] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LTsequence,
    ACTIONS(449), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(451), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(453), 1,
      anon_sym_LTsend,
    ACTIONS(455), 1,
      anon_sym_LTlog,
    ACTIONS(457), 1,
      anon_sym_LTproperty,
    ACTIONS(459), 1,
      anon_sym_LTcall,
    ACTIONS(461), 1,
      anon_sym_LTforeach,
    ACTIONS(463), 1,
      anon_sym_LTfilter,
    ACTIONS(465), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(467), 1,
      anon_sym_LTaggregate,
    ACTIONS(469), 1,
      anon_sym_LTiterate,
    ACTIONS(477), 1,
      anon_sym_LT_SLASHelse_GT,
    STATE(99), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(135), 10,
      sym_respond,
      sym_send,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
      sym_aggregate,
      sym_iterate,
      sym_sequence,
  [3028] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LTsequence,
    ACTIONS(449), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(451), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(453), 1,
      anon_sym_LTsend,
    ACTIONS(455), 1,
      anon_sym_LTlog,
    ACTIONS(457), 1,
      anon_sym_LTproperty,
    ACTIONS(459), 1,
      anon_sym_LTcall,
    ACTIONS(461), 1,
      anon_sym_LTforeach,
    ACTIONS(463), 1,
      anon_sym_LTfilter,
    ACTIONS(465), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(467), 1,
      anon_sym_LTaggregate,
    ACTIONS(469), 1,
      anon_sym_LTiterate,
    ACTIONS(479), 1,
      anon_sym_LT_SLASHthen_GT,
    STATE(89), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(135), 10,
      sym_respond,
      sym_send,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
      sym_aggregate,
      sym_iterate,
      sym_sequence,
  [3087] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LTsequence,
    ACTIONS(449), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(451), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(453), 1,
      anon_sym_LTsend,
    ACTIONS(455), 1,
      anon_sym_LTlog,
    ACTIONS(457), 1,
      anon_sym_LTproperty,
    ACTIONS(459), 1,
      anon_sym_LTcall,
    ACTIONS(461), 1,
      anon_sym_LTforeach,
    ACTIONS(463), 1,
      anon_sym_LTfilter,
    ACTIONS(465), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(467), 1,
      anon_sym_LTaggregate,
    ACTIONS(469), 1,
      anon_sym_LTiterate,
    ACTIONS(481), 1,
      anon_sym_LT_SLASHonComplete_GT,
    STATE(89), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(135), 10,
      sym_respond,
      sym_send,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
      sym_aggregate,
      sym_iterate,
      sym_sequence,
  [3146] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LTsequence,
    ACTIONS(449), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(451), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(453), 1,
      anon_sym_LTsend,
    ACTIONS(455), 1,
      anon_sym_LTlog,
    ACTIONS(457), 1,
      anon_sym_LTproperty,
    ACTIONS(459), 1,
      anon_sym_LTcall,
    ACTIONS(461), 1,
      anon_sym_LTforeach,
    ACTIONS(463), 1,
      anon_sym_LTfilter,
    ACTIONS(465), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(467), 1,
      anon_sym_LTaggregate,
    ACTIONS(469), 1,
      anon_sym_LTiterate,
    ACTIONS(483), 1,
      anon_sym_LT_SLASHsequence_GT,
    STATE(102), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(135), 10,
      sym_respond,
      sym_send,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
      sym_aggregate,
      sym_iterate,
      sym_sequence,
  [3205] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LTsequence,
    ACTIONS(449), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(451), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(453), 1,
      anon_sym_LTsend,
    ACTIONS(455), 1,
      anon_sym_LTlog,
    ACTIONS(457), 1,
      anon_sym_LTproperty,
    ACTIONS(459), 1,
      anon_sym_LTcall,
    ACTIONS(461), 1,
      anon_sym_LTforeach,
    ACTIONS(463), 1,
      anon_sym_LTfilter,
    ACTIONS(465), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(467), 1,
      anon_sym_LTaggregate,
    ACTIONS(469), 1,
      anon_sym_LTiterate,
    ACTIONS(485), 1,
      anon_sym_LT_SLASHsequence_GT,
    STATE(89), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(135), 10,
      sym_respond,
      sym_send,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
      sym_aggregate,
      sym_iterate,
      sym_sequence,
  [3264] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LTsequence,
    ACTIONS(449), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(451), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(453), 1,
      anon_sym_LTsend,
    ACTIONS(455), 1,
      anon_sym_LTlog,
    ACTIONS(457), 1,
      anon_sym_LTproperty,
    ACTIONS(459), 1,
      anon_sym_LTcall,
    ACTIONS(461), 1,
      anon_sym_LTforeach,
    ACTIONS(463), 1,
      anon_sym_LTfilter,
    ACTIONS(465), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(467), 1,
      anon_sym_LTaggregate,
    ACTIONS(469), 1,
      anon_sym_LTiterate,
    ACTIONS(487), 1,
      anon_sym_LT_SLASHsequence_GT,
    STATE(89), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(135), 10,
      sym_respond,
      sym_send,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
      sym_aggregate,
      sym_iterate,
      sym_sequence,
  [3323] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LTsequence,
    ACTIONS(449), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(451), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(453), 1,
      anon_sym_LTsend,
    ACTIONS(455), 1,
      anon_sym_LTlog,
    ACTIONS(457), 1,
      anon_sym_LTproperty,
    ACTIONS(459), 1,
      anon_sym_LTcall,
    ACTIONS(461), 1,
      anon_sym_LTforeach,
    ACTIONS(463), 1,
      anon_sym_LTfilter,
    ACTIONS(465), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(467), 1,
      anon_sym_LTaggregate,
    ACTIONS(469), 1,
      anon_sym_LTiterate,
    ACTIONS(489), 1,
      anon_sym_LT_SLASHelse_GT,
    STATE(89), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(135), 10,
      sym_respond,
      sym_send,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
      sym_aggregate,
      sym_iterate,
      sym_sequence,
  [3382] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LTsequence,
    ACTIONS(449), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(451), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(453), 1,
      anon_sym_LTsend,
    ACTIONS(455), 1,
      anon_sym_LTlog,
    ACTIONS(457), 1,
      anon_sym_LTproperty,
    ACTIONS(459), 1,
      anon_sym_LTcall,
    ACTIONS(461), 1,
      anon_sym_LTforeach,
    ACTIONS(463), 1,
      anon_sym_LTfilter,
    ACTIONS(465), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(467), 1,
      anon_sym_LTaggregate,
    ACTIONS(469), 1,
      anon_sym_LTiterate,
    ACTIONS(491), 1,
      anon_sym_LT_SLASHsequence_GT,
    STATE(98), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(135), 10,
      sym_respond,
      sym_send,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
      sym_aggregate,
      sym_iterate,
      sym_sequence,
  [3441] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LTsequence,
    ACTIONS(449), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(451), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(453), 1,
      anon_sym_LTsend,
    ACTIONS(455), 1,
      anon_sym_LTlog,
    ACTIONS(457), 1,
      anon_sym_LTproperty,
    ACTIONS(459), 1,
      anon_sym_LTcall,
    ACTIONS(461), 1,
      anon_sym_LTforeach,
    ACTIONS(463), 1,
      anon_sym_LTfilter,
    ACTIONS(465), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(467), 1,
      anon_sym_LTaggregate,
    ACTIONS(469), 1,
      anon_sym_LTiterate,
    ACTIONS(493), 1,
      anon_sym_LT_SLASHsequence_GT,
    STATE(97), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(135), 10,
      sym_respond,
      sym_send,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
      sym_aggregate,
      sym_iterate,
      sym_sequence,
  [3500] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LTsequence,
    ACTIONS(449), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(451), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(453), 1,
      anon_sym_LTsend,
    ACTIONS(455), 1,
      anon_sym_LTlog,
    ACTIONS(457), 1,
      anon_sym_LTproperty,
    ACTIONS(459), 1,
      anon_sym_LTcall,
    ACTIONS(461), 1,
      anon_sym_LTforeach,
    ACTIONS(463), 1,
      anon_sym_LTfilter,
    ACTIONS(465), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(467), 1,
      anon_sym_LTaggregate,
    ACTIONS(469), 1,
      anon_sym_LTiterate,
    ACTIONS(495), 1,
      anon_sym_LT_SLASHsequence_GT,
    STATE(89), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(135), 10,
      sym_respond,
      sym_send,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
      sym_aggregate,
      sym_iterate,
      sym_sequence,
  [3559] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LTsequence,
    ACTIONS(449), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(451), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(453), 1,
      anon_sym_LTsend,
    ACTIONS(455), 1,
      anon_sym_LTlog,
    ACTIONS(457), 1,
      anon_sym_LTproperty,
    ACTIONS(459), 1,
      anon_sym_LTcall,
    ACTIONS(461), 1,
      anon_sym_LTforeach,
    ACTIONS(463), 1,
      anon_sym_LTfilter,
    ACTIONS(465), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(467), 1,
      anon_sym_LTaggregate,
    ACTIONS(469), 1,
      anon_sym_LTiterate,
    ACTIONS(497), 1,
      anon_sym_LT_SLASHonComplete_GT,
    STATE(90), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(135), 10,
      sym_respond,
      sym_send,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
      sym_aggregate,
      sym_iterate,
      sym_sequence,
  [3618] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(499), 16,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LT_SLASHforeach_GT,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHtarget_GT,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [3644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(503), 16,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LT_SLASHforeach_GT,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHtarget_GT,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [3670] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(507), 16,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LT_SLASHforeach_GT,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHtarget_GT,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [3696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(511), 16,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LT_SLASHforeach_GT,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHtarget_GT,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [3722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(515), 15,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LT_SLASHlog_GT,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [3747] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(519), 15,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LT_SLASHlog_GT,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [3772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(523), 14,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [3796] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(527), 14,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [3820] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(531), 14,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [3844] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(535), 14,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [3868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(539), 14,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [3892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(543), 14,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [3916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(547), 14,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [3940] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(551), 14,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [3964] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(555), 14,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [3988] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(559), 14,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4012] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(563), 14,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4036] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(567), 14,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4060] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(571), 14,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4084] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(575), 14,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4108] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(579), 14,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(583), 14,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(587), 14,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(591), 14,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4204] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(595), 14,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(599), 14,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(603), 14,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4276] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(607), 14,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4300] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(611), 14,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4324] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(615), 14,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4348] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(619), 14,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4372] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(623), 14,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4396] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(627), 14,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(631), 14,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(635), 14,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4468] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(639), 14,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4492] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(643), 14,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(647), 14,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4540] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(651), 14,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4564] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(655), 14,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4588] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(659), 14,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(663), 14,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4636] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(667), 14,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4660] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(671), 14,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4684] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(675), 14,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4708] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(679), 14,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(683), 14,
      anon_sym_LTsequence,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LTrespond_SLASH_GT,
      anon_sym_LTsend_SLASH_GT,
      anon_sym_LTlog,
      anon_sym_LTproperty,
      anon_sym_LTcall,
      anon_sym_LTforeach,
      anon_sym_LTfilter,
      anon_sym_LTaggregate_GT,
      anon_sym_LTiterate,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 15,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_scope,
      anon_sym_action,
      anon_sym_type,
      anon_sym_pattern,
      anon_sym_group,
      anon_sym_sequence,
      anon_sym_sequential,
      anon_sym_continueParent,
      anon_sym_preservePayload,
      anon_sym_attachPath,
      anon_sym_value,
      anon_sym_expression,
      anon_sym_id,
  [4777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 14,
      anon_sym_GET,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_HEAD,
      anon_sym_OPTIONS,
      anon_sym_PATCH,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_head,
      anon_sym_options,
      anon_sym_patch,
  [4797] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_GT,
    ACTIONS(693), 1,
      anon_sym_sequential,
    ACTIONS(696), 1,
      anon_sym_continueParent,
    ACTIONS(699), 1,
      anon_sym_preservePayload,
    ACTIONS(702), 1,
      anon_sym_attachPath,
    ACTIONS(705), 1,
      anon_sym_expression,
    STATE(153), 1,
      aux_sym_iterate_repeat1,
    STATE(186), 1,
      sym_sequential,
    STATE(188), 1,
      sym_continueParent,
    STATE(189), 1,
      sym_preservePayload,
    STATE(192), 1,
      sym_attachPath,
    STATE(193), 1,
      sym_expression,
  [4837] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_SLASH_GT,
    ACTIONS(710), 1,
      anon_sym_scope,
    ACTIONS(713), 1,
      anon_sym_action,
    ACTIONS(716), 1,
      anon_sym_type,
    ACTIONS(719), 1,
      anon_sym_pattern,
    ACTIONS(722), 1,
      anon_sym_group,
    ACTIONS(725), 1,
      anon_sym_value,
    ACTIONS(728), 1,
      anon_sym_expression,
    STATE(154), 1,
      aux_sym_property_repeat1,
    STATE(178), 1,
      sym_value,
    STATE(179), 1,
      sym_expression,
    STATE(180), 1,
      sym__property_attribute,
  [4877] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_SLASH_GT,
    ACTIONS(733), 1,
      anon_sym_scope,
    ACTIONS(735), 1,
      anon_sym_action,
    ACTIONS(737), 1,
      anon_sym_type,
    ACTIONS(739), 1,
      anon_sym_pattern,
    ACTIONS(741), 1,
      anon_sym_group,
    ACTIONS(743), 1,
      anon_sym_value,
    ACTIONS(745), 1,
      anon_sym_expression,
    STATE(157), 1,
      aux_sym_property_repeat1,
    STATE(178), 1,
      sym_value,
    STATE(179), 1,
      sym_expression,
    STATE(180), 1,
      sym__property_attribute,
  [4917] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_expression,
    ACTIONS(747), 1,
      anon_sym_GT,
    ACTIONS(749), 1,
      anon_sym_sequential,
    ACTIONS(751), 1,
      anon_sym_continueParent,
    ACTIONS(753), 1,
      anon_sym_preservePayload,
    ACTIONS(755), 1,
      anon_sym_attachPath,
    STATE(153), 1,
      aux_sym_iterate_repeat1,
    STATE(186), 1,
      sym_sequential,
    STATE(188), 1,
      sym_continueParent,
    STATE(189), 1,
      sym_preservePayload,
    STATE(192), 1,
      sym_attachPath,
    STATE(193), 1,
      sym_expression,
  [4957] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      anon_sym_scope,
    ACTIONS(735), 1,
      anon_sym_action,
    ACTIONS(737), 1,
      anon_sym_type,
    ACTIONS(739), 1,
      anon_sym_pattern,
    ACTIONS(741), 1,
      anon_sym_group,
    ACTIONS(743), 1,
      anon_sym_value,
    ACTIONS(745), 1,
      anon_sym_expression,
    ACTIONS(757), 1,
      anon_sym_SLASH_GT,
    STATE(154), 1,
      aux_sym_property_repeat1,
    STATE(178), 1,
      sym_value,
    STATE(179), 1,
      sym_expression,
    STATE(180), 1,
      sym__property_attribute,
  [4997] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
    ACTIONS(761), 1,
      anon_sym_LTinitialDuration_GT,
    ACTIONS(763), 1,
      anon_sym_LTprogressionFactor_GT,
    ACTIONS(765), 1,
      anon_sym_LTmaximumDuration_GT,
    ACTIONS(767), 1,
      anon_sym_LTerrorCodes_GT,
    STATE(161), 6,
      sym__suspend_on_failure_property,
      sym_initial_duration,
      sym_progression_factor,
      sym_maximum_duration,
      sym_error_codes,
      aux_sym_suspend_on_failure_repeat1,
  [5024] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
    ACTIONS(771), 1,
      anon_sym_LTinitialDuration_GT,
    ACTIONS(774), 1,
      anon_sym_LTprogressionFactor_GT,
    ACTIONS(777), 1,
      anon_sym_LTmaximumDuration_GT,
    ACTIONS(780), 1,
      anon_sym_LTerrorCodes_GT,
    STATE(159), 6,
      sym__suspend_on_failure_property,
      sym_initial_duration,
      sym_progression_factor,
      sym_maximum_duration,
      sym_error_codes,
      aux_sym_suspend_on_failure_repeat1,
  [5051] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_expression,
    ACTIONS(749), 1,
      anon_sym_sequential,
    ACTIONS(751), 1,
      anon_sym_continueParent,
    ACTIONS(753), 1,
      anon_sym_preservePayload,
    ACTIONS(755), 1,
      anon_sym_attachPath,
    STATE(156), 1,
      aux_sym_iterate_repeat1,
    STATE(186), 1,
      sym_sequential,
    STATE(188), 1,
      sym_continueParent,
    STATE(189), 1,
      sym_preservePayload,
    STATE(192), 1,
      sym_attachPath,
    STATE(193), 1,
      sym_expression,
  [5088] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_LTinitialDuration_GT,
    ACTIONS(763), 1,
      anon_sym_LTprogressionFactor_GT,
    ACTIONS(765), 1,
      anon_sym_LTmaximumDuration_GT,
    ACTIONS(767), 1,
      anon_sym_LTerrorCodes_GT,
    ACTIONS(783), 1,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
    STATE(159), 6,
      sym__suspend_on_failure_property,
      sym_initial_duration,
      sym_progression_factor,
      sym_maximum_duration,
      sym_error_codes,
      aux_sym_suspend_on_failure_repeat1,
  [5115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 10,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_scope,
      anon_sym_action,
      anon_sym_type,
      anon_sym_pattern,
      anon_sym_group,
      anon_sym_blocking,
      anon_sym_value,
      anon_sym_expression,
  [5131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 10,
      anon_sym_DQUOTE,
      anon_sym_LT_SLASHretriesBeforeSuspension_GT,
      anon_sym_LT_SLASHretryDelay_GT,
      anon_sym_LT_SLASHinitialDuration_GT,
      anon_sym_LT_SLASHprogressionFactor_GT,
      anon_sym_LT_SLASHmaximumDuration_GT,
      anon_sym_COMMA,
      anon_sym_LT_SLASHerrorCodes_GT,
      anon_sym_LT_SLASHduration_GT,
      anon_sym_RBRACK,
  [5147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      anon_sym_axis2,
    ACTIONS(789), 9,
      anon_sym_default,
      anon_sym_axis2_DASHclient,
      anon_sym_operation,
      anon_sym_transport,
      anon_sym_registry,
      anon_sym_synapse,
      anon_sym_system,
      anon_sym_env,
      anon_sym_file,
  [5165] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_LT_SLASHmarkForSuspension_GT,
    ACTIONS(795), 1,
      anon_sym_LTretriesBeforeSuspension_GT,
    ACTIONS(798), 1,
      anon_sym_LTretryDelay_GT,
    ACTIONS(801), 1,
      anon_sym_LTerrorCodes_GT,
    STATE(165), 5,
      sym__mark_for_suspending_property,
      sym_retries_before_suspending,
      sym_retry_delay,
      sym_error_codes,
      aux_sym_mark_for_suspending_repeat1,
  [5188] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      anon_sym_LTerrorCodes_GT,
    ACTIONS(804), 1,
      anon_sym_LT_SLASHmarkForSuspension_GT,
    ACTIONS(806), 1,
      anon_sym_LTretriesBeforeSuspension_GT,
    ACTIONS(808), 1,
      anon_sym_LTretryDelay_GT,
    STATE(171), 5,
      sym__mark_for_suspending_property,
      sym_retries_before_suspending,
      sym_retry_delay,
      sym_error_codes,
      aux_sym_mark_for_suspending_repeat1,
  [5211] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_LT_SLASHhttp_GT,
    ACTIONS(812), 1,
      anon_sym_LTtimeout_GT,
    ACTIONS(814), 1,
      anon_sym_LTmarkForSuspension_GT,
    ACTIONS(816), 1,
      anon_sym_LTsuspendOnFailure_GT,
    STATE(169), 2,
      sym_endpoint_error_property,
      aux_sym_http_endpoint_repeat2,
    STATE(224), 3,
      sym_timeout,
      sym_mark_for_suspending,
      sym_suspend_on_failure,
  [5236] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_LT_SLASHhttp_GT,
    ACTIONS(812), 1,
      anon_sym_LTtimeout_GT,
    ACTIONS(814), 1,
      anon_sym_LTmarkForSuspension_GT,
    ACTIONS(816), 1,
      anon_sym_LTsuspendOnFailure_GT,
    STATE(172), 2,
      sym_endpoint_error_property,
      aux_sym_http_endpoint_repeat2,
    STATE(224), 3,
      sym_timeout,
      sym_mark_for_suspending,
      sym_suspend_on_failure,
  [5261] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_LT_SLASHhttp_GT,
    ACTIONS(820), 1,
      anon_sym_LTtimeout_GT,
    ACTIONS(823), 1,
      anon_sym_LTmarkForSuspension_GT,
    ACTIONS(826), 1,
      anon_sym_LTsuspendOnFailure_GT,
    STATE(169), 2,
      sym_endpoint_error_property,
      aux_sym_http_endpoint_repeat2,
    STATE(224), 3,
      sym_timeout,
      sym_mark_for_suspending,
      sym_suspend_on_failure,
  [5286] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_LTtimeout_GT,
    ACTIONS(814), 1,
      anon_sym_LTmarkForSuspension_GT,
    ACTIONS(816), 1,
      anon_sym_LTsuspendOnFailure_GT,
    ACTIONS(829), 1,
      anon_sym_LT_SLASHhttp_GT,
    STATE(167), 2,
      sym_endpoint_error_property,
      aux_sym_http_endpoint_repeat2,
    STATE(224), 3,
      sym_timeout,
      sym_mark_for_suspending,
      sym_suspend_on_failure,
  [5311] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      anon_sym_LTerrorCodes_GT,
    ACTIONS(806), 1,
      anon_sym_LTretriesBeforeSuspension_GT,
    ACTIONS(808), 1,
      anon_sym_LTretryDelay_GT,
    ACTIONS(831), 1,
      anon_sym_LT_SLASHmarkForSuspension_GT,
    STATE(165), 5,
      sym__mark_for_suspending_property,
      sym_retries_before_suspending,
      sym_retry_delay,
      sym_error_codes,
      aux_sym_mark_for_suspending_repeat1,
  [5334] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_LTtimeout_GT,
    ACTIONS(814), 1,
      anon_sym_LTmarkForSuspension_GT,
    ACTIONS(816), 1,
      anon_sym_LTsuspendOnFailure_GT,
    ACTIONS(833), 1,
      anon_sym_LT_SLASHhttp_GT,
    STATE(169), 2,
      sym_endpoint_error_property,
      aux_sym_http_endpoint_repeat2,
    STATE(224), 3,
      sym_timeout,
      sym_mark_for_suspending,
      sym_suspend_on_failure,
  [5359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 8,
      anon_sym_SLASH_GT,
      anon_sym_scope,
      anon_sym_action,
      anon_sym_type,
      anon_sym_pattern,
      anon_sym_group,
      anon_sym_value,
      anon_sym_expression,
  [5373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 8,
      anon_sym_STRING,
      anon_sym_INTEGER,
      anon_sym_BOOLEAN,
      anon_sym_DOUBLE,
      anon_sym_FLOAT,
      anon_sym_LONG,
      anon_sym_SHORT,
      anon_sym_OM,
  [5387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 8,
      anon_sym_LT_SLASHmarkForSuspension_GT,
      anon_sym_LTretriesBeforeSuspension_GT,
      anon_sym_LTretryDelay_GT,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
      anon_sym_LTinitialDuration_GT,
      anon_sym_LTprogressionFactor_GT,
      anon_sym_LTmaximumDuration_GT,
      anon_sym_LTerrorCodes_GT,
  [5401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 8,
      anon_sym_SLASH_GT,
      anon_sym_scope,
      anon_sym_action,
      anon_sym_type,
      anon_sym_pattern,
      anon_sym_group,
      anon_sym_value,
      anon_sym_expression,
  [5415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 8,
      anon_sym_LT_SLASHmarkForSuspension_GT,
      anon_sym_LTretriesBeforeSuspension_GT,
      anon_sym_LTretryDelay_GT,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
      anon_sym_LTinitialDuration_GT,
      anon_sym_LTprogressionFactor_GT,
      anon_sym_LTmaximumDuration_GT,
      anon_sym_LTerrorCodes_GT,
  [5429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 8,
      anon_sym_SLASH_GT,
      anon_sym_scope,
      anon_sym_action,
      anon_sym_type,
      anon_sym_pattern,
      anon_sym_group,
      anon_sym_value,
      anon_sym_expression,
  [5443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 8,
      anon_sym_SLASH_GT,
      anon_sym_scope,
      anon_sym_action,
      anon_sym_type,
      anon_sym_pattern,
      anon_sym_group,
      anon_sym_value,
      anon_sym_expression,
  [5457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 8,
      anon_sym_SLASH_GT,
      anon_sym_scope,
      anon_sym_action,
      anon_sym_type,
      anon_sym_pattern,
      anon_sym_group,
      anon_sym_value,
      anon_sym_expression,
  [5471] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      anon_sym_LT_SLASHtimeout_GT,
    ACTIONS(851), 1,
      anon_sym_LTduration_GT,
    ACTIONS(854), 1,
      anon_sym_LTresponseAction_GT,
    STATE(181), 4,
      sym__timeout_property,
      sym_duration,
      sym_response_action,
      aux_sym_timeout_repeat1,
  [5490] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_LT_SLASHtimeout_GT,
    ACTIONS(859), 1,
      anon_sym_LTduration_GT,
    ACTIONS(861), 1,
      anon_sym_LTresponseAction_GT,
    STATE(181), 4,
      sym__timeout_property,
      sym_duration,
      sym_response_action,
      aux_sym_timeout_repeat1,
  [5509] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_LTduration_GT,
    ACTIONS(861), 1,
      anon_sym_LTresponseAction_GT,
    ACTIONS(863), 1,
      anon_sym_LT_SLASHtimeout_GT,
    STATE(182), 4,
      sym__timeout_property,
      sym_duration,
      sym_response_action,
      aux_sym_timeout_repeat1,
  [5528] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_LT_SLASHaggregate_GT,
    ACTIONS(867), 1,
      anon_sym_LTcorrelateOn,
    ACTIONS(869), 1,
      anon_sym_LTcompleteCondition,
    ACTIONS(871), 1,
      anon_sym_LTonComplete,
    STATE(210), 1,
      sym_correlateOn,
    STATE(256), 1,
      sym_complete_condition,
    STATE(478), 1,
      sym_on_complete,
  [5553] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      anon_sym_LTcorrelateOn,
    ACTIONS(869), 1,
      anon_sym_LTcompleteCondition,
    ACTIONS(871), 1,
      anon_sym_LTonComplete,
    ACTIONS(873), 1,
      anon_sym_LT_SLASHaggregate_GT,
    STATE(214), 1,
      sym_correlateOn,
    STATE(266), 1,
      sym_complete_condition,
    STATE(584), 1,
      sym_on_complete,
  [5578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 6,
      anon_sym_GT,
      anon_sym_sequential,
      anon_sym_continueParent,
      anon_sym_preservePayload,
      anon_sym_attachPath,
      anon_sym_expression,
  [5590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 6,
      anon_sym_GT,
      anon_sym_sequential,
      anon_sym_continueParent,
      anon_sym_preservePayload,
      anon_sym_attachPath,
      anon_sym_expression,
  [5602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 6,
      anon_sym_GT,
      anon_sym_sequential,
      anon_sym_continueParent,
      anon_sym_preservePayload,
      anon_sym_attachPath,
      anon_sym_expression,
  [5614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 6,
      anon_sym_GT,
      anon_sym_sequential,
      anon_sym_continueParent,
      anon_sym_preservePayload,
      anon_sym_attachPath,
      anon_sym_expression,
  [5626] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      anon_sym_RPAREN,
    ACTIONS(885), 1,
      anon_sym_DOT,
    ACTIONS(887), 1,
      anon_sym_LBRACK,
    STATE(199), 3,
      sym_json_path_array,
      sym_json_path_object,
      aux_sym_json_path_repeat1,
  [5644] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_RPAREN,
    ACTIONS(891), 1,
      anon_sym_DOT,
    ACTIONS(894), 1,
      anon_sym_LBRACK,
    STATE(191), 3,
      sym_json_path_array,
      sym_json_path_object,
      aux_sym_json_path_repeat1,
  [5662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 6,
      anon_sym_GT,
      anon_sym_sequential,
      anon_sym_continueParent,
      anon_sym_preservePayload,
      anon_sym_attachPath,
      anon_sym_expression,
  [5674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 6,
      anon_sym_GT,
      anon_sym_sequential,
      anon_sym_continueParent,
      anon_sym_preservePayload,
      anon_sym_attachPath,
      anon_sym_expression,
  [5686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 6,
      anon_sym_GT,
      anon_sym_sequential,
      anon_sym_continueParent,
      anon_sym_preservePayload,
      anon_sym_attachPath,
      anon_sym_expression,
  [5698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 6,
      anon_sym_GT,
      anon_sym_sequential,
      anon_sym_continueParent,
      anon_sym_preservePayload,
      anon_sym_attachPath,
      anon_sym_expression,
  [5710] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_GT,
    ACTIONS(907), 1,
      anon_sym_uri_DASHtemplate,
    ACTIONS(910), 1,
      anon_sym_method,
    STATE(196), 3,
      sym__endpoint_attribute,
      sym_method,
      aux_sym_http_endpoint_repeat1,
  [5728] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_GT,
    ACTIONS(915), 1,
      anon_sym_uri_DASHtemplate,
    ACTIONS(917), 1,
      anon_sym_method,
    STATE(198), 3,
      sym__endpoint_attribute,
      sym_method,
      aux_sym_http_endpoint_repeat1,
  [5746] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      anon_sym_uri_DASHtemplate,
    ACTIONS(917), 1,
      anon_sym_method,
    ACTIONS(919), 1,
      anon_sym_GT,
    STATE(196), 3,
      sym__endpoint_attribute,
      sym_method,
      aux_sym_http_endpoint_repeat1,
  [5764] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      anon_sym_DOT,
    ACTIONS(887), 1,
      anon_sym_LBRACK,
    ACTIONS(921), 1,
      anon_sym_RPAREN,
    STATE(191), 3,
      sym_json_path_array,
      sym_json_path_object,
      aux_sym_json_path_repeat1,
  [5782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 6,
      anon_sym_GT,
      anon_sym_sequential,
      anon_sym_continueParent,
      anon_sym_preservePayload,
      anon_sym_attachPath,
      anon_sym_expression,
  [5794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 5,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
      anon_sym_LTinitialDuration_GT,
      anon_sym_LTprogressionFactor_GT,
      anon_sym_LTmaximumDuration_GT,
      anon_sym_LTerrorCodes_GT,
  [5805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 5,
      anon_sym_GT,
      anon_sym_LT_SLASHhttp_GT,
      anon_sym_LTtimeout_GT,
      anon_sym_LTmarkForSuspension_GT,
      anon_sym_LTsuspendOnFailure_GT,
  [5816] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LTsequence,
    ACTIONS(929), 1,
      ts_builtin_sym_end,
    STATE(208), 3,
      sym__definition,
      sym_sequence_definition,
      aux_sym_source_file_repeat1,
  [5831] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LTsequence,
    ACTIONS(931), 1,
      ts_builtin_sym_end,
    STATE(203), 3,
      sym__definition,
      sym_sequence_definition,
      aux_sym_source_file_repeat1,
  [5846] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LTsequence,
    ACTIONS(931), 1,
      ts_builtin_sym_end,
    STATE(208), 3,
      sym__definition,
      sym_sequence_definition,
      aux_sym_source_file_repeat1,
  [5861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 5,
      anon_sym_GT,
      anon_sym_LT_SLASHhttp_GT,
      anon_sym_LTtimeout_GT,
      anon_sym_LTmarkForSuspension_GT,
      anon_sym_LTsuspendOnFailure_GT,
  [5872] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      anon_sym_GT,
    ACTIONS(937), 1,
      anon_sym_sequence,
    ACTIONS(939), 1,
      anon_sym_to,
    ACTIONS(941), 1,
      anon_sym_soapAction,
    ACTIONS(943), 1,
      anon_sym_endpoint,
  [5891] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      ts_builtin_sym_end,
    ACTIONS(947), 1,
      anon_sym_LTsequence,
    STATE(208), 3,
      sym__definition,
      sym_sequence_definition,
      aux_sym_source_file_repeat1,
  [5906] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 1,
      anon_sym_GT,
    ACTIONS(952), 1,
      anon_sym_blocking,
    ACTIONS(954), 1,
      anon_sym_name,
    STATE(275), 1,
      sym_name,
    STATE(567), 1,
      sym_blocking,
  [5925] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_LTcompleteCondition,
    ACTIONS(871), 1,
      anon_sym_LTonComplete,
    ACTIONS(956), 1,
      anon_sym_LT_SLASHaggregate_GT,
    STATE(276), 1,
      sym_complete_condition,
    STATE(657), 1,
      sym_on_complete,
  [5944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 5,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
  [5955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(958), 5,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
      anon_sym_LTinitialDuration_GT,
      anon_sym_LTprogressionFactor_GT,
      anon_sym_LTmaximumDuration_GT,
      anon_sym_LTerrorCodes_GT,
  [5966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(960), 5,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
      anon_sym_LTinitialDuration_GT,
      anon_sym_LTprogressionFactor_GT,
      anon_sym_LTmaximumDuration_GT,
      anon_sym_LTerrorCodes_GT,
  [5977] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_LTcompleteCondition,
    ACTIONS(871), 1,
      anon_sym_LTonComplete,
    ACTIONS(962), 1,
      anon_sym_LT_SLASHaggregate_GT,
    STATE(260), 1,
      sym_complete_condition,
    STATE(521), 1,
      sym_on_complete,
  [5996] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      sym__unsigned_int,
    STATE(273), 1,
      sym_number,
    ACTIONS(964), 2,
      sym__float,
      sym__int,
  [6010] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 1,
      anon_sym_LTendpoint,
    ACTIONS(970), 1,
      anon_sym_LTkey,
    STATE(415), 1,
      sym_endpoint_reference,
    STATE(599), 1,
      sym_endpoint,
  [6026] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      sym__unsigned_int,
    STATE(533), 1,
      sym_number,
    ACTIONS(964), 2,
      sym__float,
      sym__int,
  [6040] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(972), 1,
      anon_sym_GT,
    ACTIONS(974), 1,
      anon_sym_sequence,
    ACTIONS(976), 1,
      anon_sym_id,
    STATE(329), 1,
      sym_id,
  [6056] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 1,
      anon_sym_LTendpoint,
    ACTIONS(970), 1,
      anon_sym_LTkey,
    STATE(498), 1,
      sym_endpoint_reference,
    STATE(499), 1,
      sym_endpoint,
  [6072] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 1,
      anon_sym_LTendpoint,
    ACTIONS(970), 1,
      anon_sym_LTkey,
    STATE(500), 1,
      sym_endpoint_reference,
    STATE(501), 1,
      sym_endpoint,
  [6088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(978), 4,
      anon_sym_LT_SLASHhttp_GT,
      anon_sym_LTtimeout_GT,
      anon_sym_LTmarkForSuspension_GT,
      anon_sym_LTsuspendOnFailure_GT,
  [6098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 4,
      anon_sym_LT_SLASHhttp_GT,
      anon_sym_LTtimeout_GT,
      anon_sym_LTmarkForSuspension_GT,
      anon_sym_LTsuspendOnFailure_GT,
  [6108] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      sym__unsigned_int,
    STATE(674), 1,
      sym_number,
    ACTIONS(964), 2,
      sym__float,
      sym__int,
  [6122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 4,
      anon_sym_LT_SLASHhttp_GT,
      anon_sym_LTtimeout_GT,
      anon_sym_LTmarkForSuspension_GT,
      anon_sym_LTsuspendOnFailure_GT,
  [6132] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      sym__unsigned_int,
    STATE(556), 1,
      sym_number,
    ACTIONS(964), 2,
      sym__float,
      sym__int,
  [6146] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      sym__unsigned_int,
    STATE(564), 1,
      sym_number,
    ACTIONS(964), 2,
      sym__float,
      sym__int,
  [6160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(984), 4,
      anon_sym_LT_SLASHhttp_GT,
      anon_sym_LTtimeout_GT,
      anon_sym_LTmarkForSuspension_GT,
      anon_sym_LTsuspendOnFailure_GT,
  [6170] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 1,
      anon_sym_LTendpoint,
    ACTIONS(970), 1,
      anon_sym_LTkey,
    STATE(544), 1,
      sym_endpoint_reference,
    STATE(548), 1,
      sym_endpoint,
  [6186] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(986), 1,
      anon_sym_LT_SLASHlog_GT,
    ACTIONS(988), 1,
      anon_sym_LTproperty,
    STATE(229), 2,
      sym_property,
      aux_sym_log_repeat1,
  [6200] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      sym__unsigned_int,
    STATE(594), 1,
      sym_number,
    ACTIONS(964), 2,
      sym__float,
      sym__int,
  [6214] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_LTproperty,
    ACTIONS(991), 1,
      anon_sym_LT_SLASHlog_GT,
    STATE(233), 2,
      sym_property,
      aux_sym_log_repeat1,
  [6228] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 1,
      anon_sym_GT,
    ACTIONS(995), 1,
      anon_sym_sequence,
    ACTIONS(997), 1,
      anon_sym_soapAction,
    ACTIONS(999), 1,
      anon_sym_endpoint,
  [6244] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_LTproperty,
    ACTIONS(1001), 1,
      anon_sym_LT_SLASHlog_GT,
    STATE(229), 2,
      sym_property,
      aux_sym_log_repeat1,
  [6258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 4,
      anon_sym_full,
      anon_sym_simple,
      anon_sym_custom,
      anon_sym_headers,
  [6268] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      sym__unsigned_int,
    STATE(547), 1,
      sym_number,
    ACTIONS(964), 2,
      sym__float,
      sym__int,
  [6282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 4,
      anon_sym_LT_SLASHmarkForSuspension_GT,
      anon_sym_LTretriesBeforeSuspension_GT,
      anon_sym_LTretryDelay_GT,
      anon_sym_LTerrorCodes_GT,
  [6292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1007), 4,
      anon_sym_LT_SLASHmarkForSuspension_GT,
      anon_sym_LTretriesBeforeSuspension_GT,
      anon_sym_LTretryDelay_GT,
      anon_sym_LTerrorCodes_GT,
  [6302] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      sym__unsigned_int,
    STATE(540), 1,
      sym_number,
    ACTIONS(964), 2,
      sym__float,
      sym__int,
  [6316] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      sym__unsigned_int,
    STATE(546), 1,
      sym_number,
    ACTIONS(964), 2,
      sym__float,
      sym__int,
  [6330] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      sym__unsigned_int,
    STATE(311), 1,
      sym_number,
    ACTIONS(964), 2,
      sym__float,
      sym__int,
  [6344] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      sym__unsigned_int,
    STATE(541), 1,
      sym_number,
    ACTIONS(964), 2,
      sym__float,
      sym__int,
  [6358] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      sym__unsigned_int,
    STATE(545), 1,
      sym_number,
    ACTIONS(964), 2,
      sym__float,
      sym__int,
  [6372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 4,
      anon_sym_LT_SLASHhttp_GT,
      anon_sym_LTtimeout_GT,
      anon_sym_LTmarkForSuspension_GT,
      anon_sym_LTsuspendOnFailure_GT,
  [6382] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1011), 1,
      anon_sym_GT,
    ACTIONS(1013), 1,
      anon_sym_sequence,
    ACTIONS(1015), 1,
      anon_sym_endpoint,
  [6395] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      anon_sym_LT_SLASHcompleteCondition_GT,
    ACTIONS(1019), 1,
      anon_sym_LTmessageCount,
    STATE(487), 1,
      sym_message_count,
  [6408] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1021), 1,
      anon_sym_LT_SLASHfilter_GT,
    ACTIONS(1023), 1,
      anon_sym_LTelse_GT,
    STATE(677), 1,
      sym_else,
  [6421] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      anon_sym_COMMA,
    ACTIONS(1027), 1,
      anon_sym_LT_SLASHerrorCodes_GT,
    STATE(272), 1,
      aux_sym_error_codes_repeat1,
  [6434] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1029), 1,
      anon_sym_GT,
    ACTIONS(1031), 1,
      anon_sym_key,
    STATE(575), 1,
      sym_key,
  [6447] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 1,
      anon_sym_LThttp,
    STATE(598), 2,
      sym__endpoint_type,
      sym_http_endpoint,
  [6458] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(636), 1,
      sym_boolean,
    ACTIONS(1035), 2,
      anon_sym_true,
      anon_sym_false,
  [6469] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(952), 1,
      anon_sym_blocking,
    ACTIONS(1037), 1,
      anon_sym_GT,
    STATE(477), 1,
      sym_blocking,
  [6482] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(638), 1,
      sym_boolean,
    ACTIONS(1035), 2,
      anon_sym_true,
      anon_sym_false,
  [6493] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1039), 1,
      anon_sym_xpath,
    ACTIONS(1041), 1,
      anon_sym_source,
    STATE(600), 1,
      sym_source,
  [6506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(641), 1,
      sym_boolean,
    ACTIONS(1035), 2,
      anon_sym_true,
      anon_sym_false,
  [6517] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      anon_sym_name,
    ACTIONS(1043), 1,
      anon_sym_GT,
    STATE(511), 1,
      sym_name,
  [6530] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_LTonComplete,
    ACTIONS(1045), 1,
      anon_sym_LT_SLASHaggregate_GT,
    STATE(644), 1,
      sym_on_complete,
  [6543] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 1,
      anon_sym_LThttp,
    STATE(474), 2,
      sym__endpoint_type,
      sym_http_endpoint,
  [6554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1047), 3,
      anon_sym_LT_SLASHtimeout_GT,
      anon_sym_LTduration_GT,
      anon_sym_LTresponseAction_GT,
  [6563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 3,
      anon_sym_LT_SLASHtimeout_GT,
      anon_sym_LTduration_GT,
      anon_sym_LTresponseAction_GT,
  [6572] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_LTonComplete,
    ACTIONS(1051), 1,
      anon_sym_LT_SLASHaggregate_GT,
    STATE(481), 1,
      sym_on_complete,
  [6585] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1023), 1,
      anon_sym_LTelse_GT,
    ACTIONS(1053), 1,
      anon_sym_LT_SLASHfilter_GT,
    STATE(562), 1,
      sym_else,
  [6598] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      anon_sym_QMARK_GT,
    ACTIONS(1057), 1,
      anon_sym_encoding,
    STATE(489), 1,
      sym_encoding_declaration,
  [6611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1059), 3,
      anon_sym_GT,
      anon_sym_uri_DASHtemplate,
      anon_sym_method,
  [6620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1061), 3,
      anon_sym_GT,
      anon_sym_uri_DASHtemplate,
      anon_sym_method,
  [6629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1063), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [6638] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_LTonComplete,
    ACTIONS(1065), 1,
      anon_sym_LT_SLASHaggregate_GT,
    STATE(520), 1,
      sym_on_complete,
  [6651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1067), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
  [6660] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_LTtimeout_GT,
    ACTIONS(1069), 1,
      anon_sym_GT,
    STATE(523), 1,
      sym_timeout,
  [6673] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_LTmessageCount,
    ACTIONS(1071), 1,
      anon_sym_LT_SLASHcompleteCondition_GT,
    STATE(670), 1,
      sym_message_count,
  [6686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1073), 3,
      anon_sym_never,
      anon_sym_discard,
      anon_sym_fault,
  [6695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 3,
      anon_sym_LT_SLASHaggregate_GT,
      anon_sym_LTcompleteCondition,
      anon_sym_LTonComplete,
  [6704] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1077), 1,
      anon_sym_COMMA,
    ACTIONS(1080), 1,
      anon_sym_LT_SLASHerrorCodes_GT,
    STATE(272), 1,
      aux_sym_error_codes_repeat1,
  [6717] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      anon_sym_COMMA,
    ACTIONS(1082), 1,
      anon_sym_LT_SLASHerrorCodes_GT,
    STATE(247), 1,
      aux_sym_error_codes_repeat1,
  [6730] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 1,
      anon_sym_GT,
    ACTIONS(1086), 1,
      anon_sym_sequence,
    ACTIONS(1088), 1,
      anon_sym_endpoint,
  [6743] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(952), 1,
      anon_sym_blocking,
    ACTIONS(1090), 1,
      anon_sym_GT,
    STATE(543), 1,
      sym_blocking,
  [6756] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_LTonComplete,
    ACTIONS(1092), 1,
      anon_sym_LT_SLASHaggregate_GT,
    STATE(387), 1,
      sym_on_complete,
  [6769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1094), 1,
      anon_sym_min,
    STATE(285), 1,
      sym_min,
  [6779] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 1,
      anon_sym_DOLLAR_DOT,
    STATE(457), 1,
      sym_json_path,
  [6789] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LTsequence,
    STATE(691), 1,
      sym_sequence,
  [6799] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      aux_sym_identifier_token1,
    STATE(688), 1,
      sym_identifier,
  [6809] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LTsequence,
    STATE(682), 1,
      sym_sequence,
  [6819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 2,
      anon_sym_LT_SLASHfilter_GT,
      anon_sym_LTelse_GT,
  [6827] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LTsequence,
    STATE(681), 1,
      sym_sequence,
  [6837] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LTsequence,
    STATE(679), 1,
      sym_sequence,
  [6847] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 1,
      anon_sym_max,
    STATE(382), 1,
      sym_max,
  [6857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 2,
      anon_sym_LT_SLASHaggregate_GT,
      anon_sym_LTonComplete,
  [6865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LTsequence,
    STATE(678), 1,
      sym_sequence,
  [6875] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1106), 1,
      anon_sym_GT,
    ACTIONS(1108), 1,
      anon_sym_endpoint,
  [6885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 2,
      anon_sym_LT_SLASHaggregate_GT,
      anon_sym_LTonComplete,
  [6893] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      aux_sym_identifier_token1,
    STATE(668), 1,
      sym_identifier,
  [6903] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      aux_sym_identifier_token1,
    STATE(667), 1,
      sym_identifier,
  [6913] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      aux_sym_identifier_token1,
    STATE(666), 1,
      sym_identifier,
  [6923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      aux_sym_identifier_token1,
    STATE(665), 1,
      sym_identifier,
  [6933] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LTsequence,
    STATE(654), 1,
      sym_sequence,
  [6943] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LTsequence,
    STATE(652), 1,
      sym_sequence,
  [6953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LTsequence,
    STATE(651), 1,
      sym_sequence,
  [6963] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LTsequence,
    STATE(648), 1,
      sym_sequence,
  [6973] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LTsequence,
    STATE(646), 1,
      sym_sequence,
  [6983] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LTsequence,
    STATE(645), 1,
      sym_sequence,
  [6993] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1112), 1,
      anon_sym_GT,
    ACTIONS(1114), 1,
      anon_sym_endpoint,
  [7003] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LTsequence,
    STATE(394), 1,
      sym_sequence,
  [7013] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1116), 1,
      anon_sym_GT,
    ACTIONS(1118), 1,
      anon_sym_endpoint,
  [7023] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      aux_sym_identifier_token1,
    STATE(628), 1,
      sym_identifier,
  [7033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      aux_sym_identifier_token1,
    STATE(627), 1,
      sym_identifier,
  [7043] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      aux_sym_identifier_token1,
    STATE(626), 1,
      sym_identifier,
  [7053] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      aux_sym_identifier_token1,
    STATE(625), 1,
      sym_identifier,
  [7063] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      aux_sym_identifier_token1,
    STATE(624), 1,
      sym_identifier,
  [7073] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      aux_sym_identifier_token1,
    STATE(372), 1,
      sym_identifier,
  [7083] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      aux_sym_identifier_token1,
    STATE(623), 1,
      sym_identifier,
  [7093] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_expression,
    STATE(524), 1,
      sym_expression,
  [7103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1080), 2,
      anon_sym_COMMA,
      anon_sym_LT_SLASHerrorCodes_GT,
  [7111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1120), 2,
      anon_sym_LT_SLASHsend_GT,
      anon_sym_LT_SLASHcall_GT,
  [7119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LTsequence,
    STATE(612), 1,
      sym_sequence,
  [7129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LTsequence,
    STATE(609), 1,
      sym_sequence,
  [7139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1122), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
  [7147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LTsequence,
    STATE(605), 1,
      sym_sequence,
  [7157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LTsequence,
    STATE(603), 1,
      sym_sequence,
  [7167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_expression,
    STATE(333), 1,
      sym_expression,
  [7177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1124), 2,
      anon_sym_GT,
      anon_sym_DQUOTE,
  [7185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1126), 1,
      anon_sym_regex,
    STATE(458), 1,
      sym_regex,
  [7195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1128), 2,
      ts_builtin_sym_end,
      anon_sym_LTsequence,
  [7203] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1130), 1,
      anon_sym_version,
    STATE(262), 1,
      sym_version_info,
  [7213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 1,
      anon_sym_LTendpoint,
    STATE(509), 1,
      sym_endpoint,
  [7223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 1,
      anon_sym_GT,
    ACTIONS(1134), 1,
      anon_sym_endpoint,
  [7233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      aux_sym_identifier_token1,
    STATE(190), 1,
      sym_identifier,
  [7243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LTsequence,
    STATE(583), 1,
      sym_sequence,
  [7253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LTsequence,
    STATE(496), 1,
      sym_sequence,
  [7263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LTsequence,
    STATE(559), 1,
      sym_sequence,
  [7273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1136), 1,
      anon_sym_GT,
    ACTIONS(1138), 1,
      anon_sym_sequence,
  [7283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1140), 2,
      ts_builtin_sym_end,
      anon_sym_LTsequence,
  [7291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1142), 1,
      anon_sym_LTthen_GT,
    STATE(246), 1,
      sym_then,
  [7301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1144), 2,
      anon_sym_QMARK_GT,
      anon_sym_encoding,
  [7309] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1146), 1,
      anon_sym_GT,
    ACTIONS(1148), 1,
      anon_sym_sequence,
  [7319] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      anon_sym_name,
    STATE(467), 1,
      sym_name,
  [7329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1150), 1,
      anon_sym_LTtarget,
    STATE(476), 1,
      sym_target,
  [7339] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(976), 1,
      anon_sym_id,
    STATE(581), 1,
      sym_id,
  [7349] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      aux_sym_identifier_token1,
    STATE(475), 1,
      sym_identifier,
  [7359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1152), 2,
      anon_sym_true,
      anon_sym_false,
  [7367] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_expression,
    STATE(218), 1,
      sym_expression,
  [7377] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 1,
      anon_sym_LTendpoint,
    STATE(572), 1,
      sym_endpoint,
  [7387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      anon_sym_name,
    STATE(155), 1,
      sym_name,
  [7397] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1154), 1,
      anon_sym_level,
    STATE(344), 1,
      sym_level,
  [7407] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LTsequence,
    STATE(486), 1,
      sym_sequence,
  [7417] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1156), 1,
      anon_sym_GT,
    ACTIONS(1158), 1,
      anon_sym_SLASH_GT,
  [7427] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      aux_sym_identifier_token1,
    STATE(267), 1,
      sym_identifier,
  [7437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1160), 2,
      ts_builtin_sym_end,
      anon_sym_LTsequence,
  [7445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1162), 2,
      anon_sym_LT_SLASHaggregate_GT,
      anon_sym_LTonComplete,
  [7453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      aux_sym_identifier_token1,
    STATE(534), 1,
      sym_identifier,
  [7463] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      aux_sym_identifier_token1,
    STATE(456), 1,
      sym_identifier,
  [7473] = 3,
    ACTIONS(1164), 1,
      aux_sym_value_token1,
    ACTIONS(1166), 1,
      sym_comment,
    STATE(554), 1,
      sym_expression_string,
  [7483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1168), 2,
      ts_builtin_sym_end,
      anon_sym_LTsequence,
  [7491] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      aux_sym_identifier_token1,
    STATE(550), 1,
      sym_identifier,
  [7501] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      aux_sym_identifier_token1,
    STATE(659), 1,
      sym_identifier,
  [7511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 2,
      anon_sym_set,
      anon_sym_remove,
  [7519] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1126), 1,
      anon_sym_regex,
    STATE(594), 1,
      sym_regex,
  [7529] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      aux_sym_identifier_token1,
    STATE(539), 1,
      sym_identifier,
  [7539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      aux_sym_identifier_token1,
    STATE(538), 1,
      sym_identifier,
  [7549] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      aux_sym_identifier_token1,
    STATE(537), 1,
      sym_identifier,
  [7559] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      aux_sym_identifier_token1,
    STATE(536), 1,
      sym_identifier,
  [7569] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      aux_sym_identifier_token1,
    STATE(587), 1,
      sym_identifier,
  [7579] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1142), 1,
      anon_sym_LTthen_GT,
    STATE(261), 1,
      sym_then,
  [7589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1170), 2,
      anon_sym_LT_SLASHsend_GT,
      anon_sym_LT_SLASHcall_GT,
  [7597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      aux_sym_identifier_token1,
    STATE(453), 1,
      sym_identifier,
  [7607] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1172), 1,
      aux_sym_identifier_token1,
    STATE(87), 1,
      sym_identifier,
  [7617] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      aux_sym_identifier_token1,
    STATE(463), 1,
      sym_identifier,
  [7627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1174), 2,
      anon_sym_GT,
      anon_sym_sequence,
  [7635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1176), 2,
      anon_sym_LT_SLASHfilter_GT,
      anon_sym_LTelse_GT,
  [7643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1178), 2,
      anon_sym_LT_SLASHaggregate_GT,
      anon_sym_LTonComplete,
  [7651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1180), 1,
      anon_sym_LT_SLASHcall_GT,
  [7658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1182), 1,
      anon_sym_EQ,
  [7665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1184), 1,
      ts_builtin_sym_end,
  [7672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1186), 1,
      anon_sym_DQUOTE,
  [7679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1188), 1,
      anon_sym_LPAREN,
  [7686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1190), 1,
      anon_sym_LPAREN,
  [7693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1192), 1,
      anon_sym_LPAREN,
  [7700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1194), 1,
      anon_sym_EQ,
  [7707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1196), 1,
      anon_sym_LT_SLASHfilter_GT,
  [7714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1198), 1,
      anon_sym_LPAREN,
  [7721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1200), 1,
      anon_sym_LPAREN,
  [7728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1202), 1,
      anon_sym_DQUOTE,
  [7735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1204), 1,
      anon_sym_EQ,
  [7742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1206), 1,
      anon_sym_SLASH_GT,
  [7749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1208), 1,
      anon_sym_LPAREN,
  [7756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1210), 1,
      anon_sym_LPAREN,
  [7763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1212), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [7770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1214), 1,
      anon_sym_LPAREN,
  [7777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1216), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [7784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1218), 1,
      anon_sym_LPAREN,
  [7791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1220), 1,
      anon_sym_LPAREN,
  [7798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1222), 1,
      anon_sym_LPAREN,
  [7805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1224), 1,
      anon_sym_LPAREN,
  [7812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1226), 1,
      anon_sym_LPAREN,
  [7819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1228), 1,
      anon_sym_LPAREN,
  [7826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1230), 1,
      anon_sym_LT_SLASHtarget_GT,
  [7833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1232), 1,
      anon_sym_DQUOTE,
  [7840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1234), 1,
      anon_sym_DQUOTE,
  [7847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1236), 1,
      anon_sym_DQUOTE,
  [7854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1238), 1,
      anon_sym_DQUOTE,
  [7861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1240), 1,
      anon_sym_LT_SLASHendpoint_GT,
  [7868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1242), 1,
      anon_sym_LPAREN,
  [7875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1244), 1,
      anon_sym_LPAREN,
  [7882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1246), 1,
      anon_sym_LPAREN,
  [7889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1248), 1,
      anon_sym_LPAREN,
  [7896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1250), 1,
      anon_sym_DQUOTE,
  [7903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1252), 1,
      anon_sym_DQUOTE,
  [7910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1254), 1,
      anon_sym_LPAREN,
  [7917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1256), 1,
      anon_sym_LPAREN,
  [7924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1258), 1,
      anon_sym_LPAREN,
  [7931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1260), 1,
      anon_sym_DQUOTE,
  [7938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1262), 1,
      anon_sym_LPAREN,
  [7945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1264), 1,
      anon_sym_SLASH_GT,
  [7952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1266), 1,
      anon_sym_RPAREN,
  [7959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1268), 1,
      anon_sym_RPAREN,
  [7966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1270), 1,
      anon_sym_RPAREN,
  [7973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1272), 1,
      anon_sym_LT_SLASHcall_GT,
  [7980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1274), 1,
      anon_sym_DQUOTE,
  [7987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1276), 1,
      anon_sym_RPAREN,
  [7994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1278), 1,
      anon_sym_RPAREN,
  [8001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1280), 1,
      anon_sym_RPAREN,
  [8008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1282), 1,
      anon_sym_RPAREN,
  [8015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1284), 1,
      anon_sym_RPAREN,
  [8022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1286), 1,
      anon_sym_RPAREN,
  [8029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1288), 1,
      anon_sym_RPAREN,
  [8036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1290), 1,
      anon_sym_RPAREN,
  [8043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1292), 1,
      anon_sym_RPAREN,
  [8050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1294), 1,
      anon_sym_RPAREN,
  [8057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1296), 1,
      anon_sym_RPAREN,
  [8064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1298), 1,
      anon_sym_RPAREN,
  [8071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1300), 1,
      anon_sym_RPAREN,
  [8078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1302), 1,
      anon_sym_RPAREN,
  [8085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1304), 1,
      anon_sym_RPAREN,
  [8092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1306), 1,
      anon_sym_RPAREN,
  [8099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1308), 1,
      anon_sym_RPAREN,
  [8106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1310), 1,
      anon_sym_RPAREN,
  [8113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1312), 1,
      anon_sym_RPAREN,
  [8120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1314), 1,
      anon_sym_RPAREN,
  [8127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1316), 1,
      anon_sym_RPAREN,
  [8134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1318), 1,
      anon_sym_RPAREN,
  [8141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1320), 1,
      anon_sym_RPAREN,
  [8148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1322), 1,
      anon_sym_RPAREN,
  [8155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1324), 1,
      anon_sym_RPAREN,
  [8162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1326), 1,
      anon_sym_RPAREN,
  [8169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1328), 1,
      anon_sym_RPAREN,
  [8176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1330), 1,
      anon_sym_RPAREN,
  [8183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1332), 1,
      anon_sym_RPAREN,
  [8190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1334), 1,
      anon_sym_RPAREN,
  [8197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1336), 1,
      anon_sym_RPAREN,
  [8204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1338), 1,
      anon_sym_RPAREN,
  [8211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1340), 1,
      anon_sym_RPAREN,
  [8218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1342), 1,
      anon_sym_RPAREN,
  [8225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1344), 1,
      anon_sym_RPAREN,
  [8232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1346), 1,
      anon_sym_RPAREN,
  [8239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1348), 1,
      anon_sym_SQUOTE,
  [8246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1350), 1,
      anon_sym_EQ,
  [8253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1352), 1,
      anon_sym_GT,
  [8260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1354), 1,
      anon_sym_DQUOTE,
  [8267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1356), 1,
      anon_sym_RPAREN,
  [8274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_GT,
  [8281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1360), 1,
      anon_sym_LT_SLASHfilter_GT,
  [8288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1362), 1,
      anon_sym_LPAREN,
  [8295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1364), 1,
      anon_sym_DQUOTE,
  [8302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1366), 1,
      anon_sym_LT_SLASHcompleteCondition_GT,
  [8309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1368), 1,
      anon_sym_DQUOTE,
  [8316] = 2,
    ACTIONS(1166), 1,
      sym_comment,
    ACTIONS(1370), 1,
      aux_sym_value_token1,
  [8323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1372), 1,
      anon_sym_LT_SLASHiterate_GT,
  [8330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1374), 1,
      anon_sym_EQ,
  [8337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1376), 1,
      anon_sym_GT,
  [8344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1378), 1,
      anon_sym_EQ,
  [8351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1380), 1,
      anon_sym_LPAREN,
  [8358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1382), 1,
      anon_sym_LPAREN,
  [8365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1384), 1,
      anon_sym_LPAREN,
  [8372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1386), 1,
      anon_sym_DQUOTE,
  [8379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1388), 1,
      anon_sym_DQUOTE,
  [8386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1390), 1,
      anon_sym_LT_SLASHendpoint_GT,
  [8393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1392), 1,
      anon_sym_DQUOTE,
  [8400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1394), 1,
      anon_sym_LT_SLASHiterate_GT,
  [8407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1396), 1,
      anon_sym_GT,
  [8414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1398), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [8421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1400), 1,
      anon_sym_DQUOTE,
  [8428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1402), 1,
      anon_sym_LT_SLASHendpoint_GT,
  [8435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1404), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [8442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1406), 1,
      anon_sym_LPAREN,
  [8449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1408), 1,
      anon_sym_EQ,
  [8456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1410), 1,
      anon_sym_GT,
  [8463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1412), 1,
      sym_version_number,
  [8470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1414), 1,
      anon_sym_LT_SLASHforeach_GT,
  [8477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1416), 1,
      anon_sym_LT_SLASHcompleteCondition_GT,
  [8484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1418), 1,
      anon_sym_EQ,
  [8491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1420), 1,
      anon_sym_QMARK_GT,
  [8498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1422), 1,
      anon_sym_LPAREN,
  [8505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1424), 1,
      anon_sym_EQ,
  [8512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1426), 1,
      anon_sym_LPAREN,
  [8519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1428), 1,
      anon_sym_EQ,
  [8526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1430), 1,
      anon_sym_LPAREN,
  [8533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1432), 1,
      anon_sym_DQUOTE,
  [8540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1434), 1,
      anon_sym_LT_SLASHforeach_GT,
  [8547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1436), 1,
      anon_sym_LPAREN,
  [8554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1438), 1,
      anon_sym_LT_SLASHcall_GT,
  [8561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1440), 1,
      anon_sym_LT_SLASHcall_GT,
  [8568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1442), 1,
      anon_sym_LT_SLASHcall_GT,
  [8575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1444), 1,
      anon_sym_LT_SLASHcall_GT,
  [8582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1446), 1,
      anon_sym_DQUOTE,
  [8589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1448), 1,
      anon_sym_DQUOTE,
  [8596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1450), 1,
      anon_sym_DQUOTE,
  [8603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1452), 1,
      anon_sym_DQUOTE,
  [8610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1454), 1,
      anon_sym_DQUOTE,
  [8617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1456), 1,
      anon_sym_DQUOTE,
  [8624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1458), 1,
      anon_sym_DQUOTE,
  [8631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1460), 1,
      anon_sym_LT_SLASHsend_GT,
  [8638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1462), 1,
      anon_sym_LPAREN,
  [8645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1464), 1,
      anon_sym_GT,
  [8652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1466), 1,
      anon_sym_LPAREN,
  [8659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1468), 1,
      anon_sym_LPAREN,
  [8666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1470), 1,
      anon_sym_DQUOTE,
  [8673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1472), 1,
      anon_sym_DQUOTE,
  [8680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1474), 1,
      anon_sym_DQUOTE,
  [8687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1476), 1,
      anon_sym_DQUOTE,
  [8694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1478), 1,
      anon_sym_DQUOTE,
  [8701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1480), 1,
      anon_sym_LPAREN,
  [8708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1482), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [8715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1484), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [8722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1486), 1,
      anon_sym_LPAREN,
  [8729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1488), 1,
      anon_sym_GT,
  [8736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1490), 1,
      anon_sym_SLASH_GT,
  [8743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1492), 1,
      anon_sym_LPAREN,
  [8750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1494), 1,
      anon_sym_DQUOTE,
  [8757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1496), 1,
      anon_sym_DQUOTE,
  [8764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1498), 1,
      sym_encoding,
  [8771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1500), 1,
      anon_sym_RPAREN,
  [8778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1502), 1,
      anon_sym_LPAREN,
  [8785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1504), 1,
      anon_sym_GT,
  [8792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1506), 1,
      anon_sym_LPAREN,
  [8799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1508), 1,
      anon_sym_DQUOTE,
  [8806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1510), 1,
      anon_sym_DQUOTE,
  [8813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1512), 1,
      anon_sym_GT,
  [8820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1514), 1,
      anon_sym_DQUOTE,
  [8827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1516), 1,
      anon_sym_DQUOTE,
  [8834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1518), 1,
      anon_sym_DQUOTE,
  [8841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1520), 1,
      anon_sym_DQUOTE,
  [8848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1522), 1,
      anon_sym_LT_SLASHretriesBeforeSuspension_GT,
  [8855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1524), 1,
      anon_sym_LT_SLASHretryDelay_GT,
  [8862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1526), 1,
      anon_sym_DQUOTE,
  [8869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1528), 1,
      anon_sym_GT,
  [8876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1530), 1,
      anon_sym_LT_SLASHcall_GT,
  [8883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1532), 1,
      anon_sym_LT_SLASHinitialDuration_GT,
  [8890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1534), 1,
      anon_sym_LT_SLASHprogressionFactor_GT,
  [8897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1536), 1,
      anon_sym_LT_SLASHmaximumDuration_GT,
  [8904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1538), 1,
      anon_sym_LT_SLASHcall_GT,
  [8911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1540), 1,
      anon_sym_EQ,
  [8918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1542), 1,
      anon_sym_DQUOTE,
  [8925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1544), 1,
      anon_sym_DQUOTE,
  [8932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1546), 1,
      anon_sym_LT_SLASHendpoint_GT,
  [8939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1548), 1,
      anon_sym_DQUOTE,
  [8946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1550), 1,
      anon_sym_DQUOTE,
  [8953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1552), 1,
      anon_sym_EQ,
  [8960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1554), 1,
      anon_sym_RBRACK,
  [8967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1556), 1,
      anon_sym_EQ,
  [8974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1558), 1,
      anon_sym_EQ,
  [8981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1560), 1,
      anon_sym_LT_SLASHforeach_GT,
  [8988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1562), 1,
      anon_sym_SQUOTE,
  [8995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1564), 1,
      anon_sym_EQ,
  [9002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1566), 1,
      anon_sym_LT_SLASHfilter_GT,
  [9009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1568), 1,
      anon_sym_max,
  [9016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1570), 1,
      anon_sym_DQUOTE,
  [9023] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1572), 1,
      anon_sym_EQ,
  [9030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1574), 1,
      anon_sym_DQUOTE,
  [9037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1576), 1,
      anon_sym_GT,
  [9044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1578), 1,
      anon_sym_DQUOTE,
  [9051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1580), 1,
      anon_sym_GT,
  [9058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1582), 1,
      anon_sym_EQ,
  [9065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1584), 1,
      anon_sym_DQUOTE,
  [9072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1586), 1,
      anon_sym_LT_SLASHsend_GT,
  [9079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1588), 1,
      anon_sym_DQUOTE,
  [9086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1590), 1,
      anon_sym_QMARK_GT,
  [9093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1592), 1,
      anon_sym_GT,
  [9100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1594), 1,
      anon_sym_COLON,
  [9107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1596), 1,
      anon_sym_EQ,
  [9114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1598), 1,
      anon_sym_EQ,
  [9121] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1600), 1,
      anon_sym_EQ,
  [9128] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1602), 1,
      anon_sym_DQUOTE,
  [9135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1604), 1,
      anon_sym_GT,
  [9142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1606), 1,
      anon_sym_EQ,
  [9149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1608), 1,
      anon_sym_LT_SLASHforeach_GT,
  [9156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1610), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [9163] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1612), 1,
      anon_sym_SLASH_GT,
  [9170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1614), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [9177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1616), 1,
      anon_sym_DQUOTE,
  [9184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1618), 1,
      anon_sym_DQUOTE,
  [9191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1620), 1,
      anon_sym_EQ,
  [9198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1622), 1,
      anon_sym_EQ,
  [9205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1624), 1,
      anon_sym_EQ,
  [9212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1626), 1,
      anon_sym_EQ,
  [9219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1628), 1,
      anon_sym_EQ,
  [9226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1630), 1,
      anon_sym_DQUOTE,
  [9233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1632), 1,
      anon_sym_EQ,
  [9240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1634), 1,
      anon_sym_EQ,
  [9247] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1636), 1,
      anon_sym_GT,
  [9254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1638), 1,
      anon_sym_LT_SLASHendpoint_GT,
  [9261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1640), 1,
      anon_sym_LT_SLASHcall_GT,
  [9268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1642), 1,
      anon_sym_GT,
  [9275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1644), 1,
      anon_sym_EQ,
  [9282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1646), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [9289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1648), 1,
      anon_sym_LT_SLASHtarget_GT,
  [9296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1650), 1,
      anon_sym_DQUOTE,
  [9303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1652), 1,
      anon_sym_LT_SLASHtarget_GT,
  [9310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1654), 1,
      anon_sym_DQUOTE,
  [9317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1656), 1,
      anon_sym_DQUOTE,
  [9324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1658), 1,
      anon_sym_DQUOTE,
  [9331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1660), 1,
      anon_sym_LT_SLASHtarget_GT,
  [9338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1662), 1,
      anon_sym_DQUOTE,
  [9345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1664), 1,
      anon_sym_DQUOTE,
  [9352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1666), 1,
      anon_sym_LT_SLASHtarget_GT,
  [9359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1668), 1,
      anon_sym_LT_SLASHiterate_GT,
  [9366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1670), 1,
      anon_sym_EQ,
  [9373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1672), 1,
      anon_sym_LT_SLASHiterate_GT,
  [9380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1674), 1,
      anon_sym_EQ,
  [9387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1676), 1,
      anon_sym_GT,
  [9394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1678), 1,
      anon_sym_EQ,
  [9401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1680), 1,
      anon_sym_LT_SLASHiterate_GT,
  [9408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1682), 1,
      anon_sym_EQ,
  [9415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1684), 1,
      anon_sym_EQ,
  [9422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1686), 1,
      anon_sym_LT_SLASHiterate_GT,
  [9429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1688), 1,
      anon_sym_DQUOTE,
  [9436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1690), 1,
      anon_sym_DQUOTE,
  [9443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1692), 1,
      anon_sym_DQUOTE,
  [9450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1694), 1,
      anon_sym_DQUOTE,
  [9457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1696), 1,
      anon_sym_DQUOTE,
  [9464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1698), 1,
      anon_sym_DQUOTE,
  [9471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1700), 1,
      anon_sym_GT,
  [9478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1702), 1,
      anon_sym_EQ,
  [9485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1704), 1,
      anon_sym_EQ,
  [9492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1706), 1,
      anon_sym_GT,
  [9499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1708), 1,
      anon_sym_EQ,
  [9506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1710), 1,
      anon_sym_GT,
  [9513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1712), 1,
      anon_sym_DQUOTE,
  [9520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1714), 1,
      anon_sym_DQUOTE,
  [9527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1716), 1,
      anon_sym_EQ,
  [9534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1718), 1,
      anon_sym_DQUOTE,
  [9541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1720), 1,
      anon_sym_EQ,
  [9548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1722), 1,
      anon_sym_EQ,
  [9555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1724), 1,
      anon_sym_DQUOTE,
  [9562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1726), 1,
      anon_sym_DQUOTE,
  [9569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1728), 1,
      anon_sym_EQ,
  [9576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1730), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [9583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1732), 1,
      anon_sym_LT_SLASHtarget_GT,
  [9590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1734), 1,
      anon_sym_LT_SLASHtarget_GT,
  [9597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1736), 1,
      anon_sym_DQUOTE,
  [9604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1738), 1,
      anon_sym_LT_SLASHtarget_GT,
  [9611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1740), 1,
      anon_sym_DQUOTE,
  [9618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1742), 1,
      anon_sym_DQUOTE,
  [9625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1744), 1,
      anon_sym_LT_SLASHtarget_GT,
  [9632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1746), 1,
      anon_sym_LT_SLASHtarget_GT,
  [9639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1748), 1,
      anon_sym_DQUOTE,
  [9646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1750), 1,
      anon_sym_LT_SLASHtarget_GT,
  [9653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1752), 1,
      anon_sym_LT_SLASHiterate_GT,
  [9660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1754), 1,
      anon_sym_LT_SLASHiterate_GT,
  [9667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1756), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [9674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1758), 1,
      anon_sym_LT_SLASHiterate_GT,
  [9681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1760), 1,
      anon_sym_DQUOTE,
  [9688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1762), 1,
      anon_sym_DQUOTE,
  [9695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1764), 1,
      anon_sym_LT_SLASHiterate_GT,
  [9702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1766), 1,
      anon_sym_LT_SLASHiterate_GT,
  [9709] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1768), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [9716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1770), 1,
      anon_sym_LT_SLASHiterate_GT,
  [9723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1772), 1,
      anon_sym_DQUOTE,
  [9730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1774), 1,
      anon_sym_DQUOTE,
  [9737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1776), 1,
      anon_sym_DQUOTE,
  [9744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1778), 1,
      anon_sym_DQUOTE,
  [9751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1780), 1,
      anon_sym_GT,
  [9758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1782), 1,
      anon_sym_LT_SLASHcompleteCondition_GT,
  [9765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1784), 1,
      anon_sym_GT,
  [9772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1786), 1,
      anon_sym_GT,
  [9779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1788), 1,
      anon_sym_LT_SLASHresponseAction_GT,
  [9786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1790), 1,
      anon_sym_LT_SLASHduration_GT,
  [9793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1792), 1,
      anon_sym_EQ,
  [9800] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1794), 1,
      anon_sym_EQ,
  [9807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1796), 1,
      anon_sym_LT_SLASHfilter_GT,
  [9814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1798), 1,
      anon_sym_LT_SLASHtarget_GT,
  [9821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1800), 1,
      anon_sym_LT_SLASHtarget_GT,
  [9828] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1802), 1,
      anon_sym_DQUOTE,
  [9835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1804), 1,
      anon_sym_LT_SLASHtarget_GT,
  [9842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1806), 1,
      anon_sym_LT_SLASHtarget_GT,
  [9849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1808), 1,
      anon_sym_LT_SLASHiterate_GT,
  [9856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1810), 1,
      anon_sym_LT_SLASHiterate_GT,
  [9863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1812), 1,
      anon_sym_DQUOTE,
  [9870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1814), 1,
      anon_sym_LT_SLASHiterate_GT,
  [9877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1816), 1,
      anon_sym_LT_SLASHiterate_GT,
  [9884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1818), 1,
      anon_sym_DQUOTE,
  [9891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1820), 1,
      anon_sym_GT,
  [9898] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1822), 1,
      anon_sym_DQUOTE,
  [9905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1824), 1,
      anon_sym_LT_SLASHtarget_GT,
  [9912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1826), 1,
      anon_sym_LT_SLASHiterate_GT,
  [9919] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1828), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(47)] = 0,
  [SMALL_STATE(48)] = 65,
  [SMALL_STATE(49)] = 130,
  [SMALL_STATE(50)] = 195,
  [SMALL_STATE(51)] = 260,
  [SMALL_STATE(52)] = 325,
  [SMALL_STATE(53)] = 390,
  [SMALL_STATE(54)] = 455,
  [SMALL_STATE(55)] = 520,
  [SMALL_STATE(56)] = 585,
  [SMALL_STATE(57)] = 650,
  [SMALL_STATE(58)] = 715,
  [SMALL_STATE(59)] = 780,
  [SMALL_STATE(60)] = 845,
  [SMALL_STATE(61)] = 910,
  [SMALL_STATE(62)] = 975,
  [SMALL_STATE(63)] = 1040,
  [SMALL_STATE(64)] = 1105,
  [SMALL_STATE(65)] = 1170,
  [SMALL_STATE(66)] = 1235,
  [SMALL_STATE(67)] = 1300,
  [SMALL_STATE(68)] = 1365,
  [SMALL_STATE(69)] = 1430,
  [SMALL_STATE(70)] = 1495,
  [SMALL_STATE(71)] = 1560,
  [SMALL_STATE(72)] = 1625,
  [SMALL_STATE(73)] = 1690,
  [SMALL_STATE(74)] = 1755,
  [SMALL_STATE(75)] = 1820,
  [SMALL_STATE(76)] = 1885,
  [SMALL_STATE(77)] = 1950,
  [SMALL_STATE(78)] = 2015,
  [SMALL_STATE(79)] = 2080,
  [SMALL_STATE(80)] = 2145,
  [SMALL_STATE(81)] = 2210,
  [SMALL_STATE(82)] = 2275,
  [SMALL_STATE(83)] = 2340,
  [SMALL_STATE(84)] = 2405,
  [SMALL_STATE(85)] = 2470,
  [SMALL_STATE(86)] = 2535,
  [SMALL_STATE(87)] = 2600,
  [SMALL_STATE(88)] = 2665,
  [SMALL_STATE(89)] = 2730,
  [SMALL_STATE(90)] = 2792,
  [SMALL_STATE(91)] = 2851,
  [SMALL_STATE(92)] = 2910,
  [SMALL_STATE(93)] = 2969,
  [SMALL_STATE(94)] = 3028,
  [SMALL_STATE(95)] = 3087,
  [SMALL_STATE(96)] = 3146,
  [SMALL_STATE(97)] = 3205,
  [SMALL_STATE(98)] = 3264,
  [SMALL_STATE(99)] = 3323,
  [SMALL_STATE(100)] = 3382,
  [SMALL_STATE(101)] = 3441,
  [SMALL_STATE(102)] = 3500,
  [SMALL_STATE(103)] = 3559,
  [SMALL_STATE(104)] = 3618,
  [SMALL_STATE(105)] = 3644,
  [SMALL_STATE(106)] = 3670,
  [SMALL_STATE(107)] = 3696,
  [SMALL_STATE(108)] = 3722,
  [SMALL_STATE(109)] = 3747,
  [SMALL_STATE(110)] = 3772,
  [SMALL_STATE(111)] = 3796,
  [SMALL_STATE(112)] = 3820,
  [SMALL_STATE(113)] = 3844,
  [SMALL_STATE(114)] = 3868,
  [SMALL_STATE(115)] = 3892,
  [SMALL_STATE(116)] = 3916,
  [SMALL_STATE(117)] = 3940,
  [SMALL_STATE(118)] = 3964,
  [SMALL_STATE(119)] = 3988,
  [SMALL_STATE(120)] = 4012,
  [SMALL_STATE(121)] = 4036,
  [SMALL_STATE(122)] = 4060,
  [SMALL_STATE(123)] = 4084,
  [SMALL_STATE(124)] = 4108,
  [SMALL_STATE(125)] = 4132,
  [SMALL_STATE(126)] = 4156,
  [SMALL_STATE(127)] = 4180,
  [SMALL_STATE(128)] = 4204,
  [SMALL_STATE(129)] = 4228,
  [SMALL_STATE(130)] = 4252,
  [SMALL_STATE(131)] = 4276,
  [SMALL_STATE(132)] = 4300,
  [SMALL_STATE(133)] = 4324,
  [SMALL_STATE(134)] = 4348,
  [SMALL_STATE(135)] = 4372,
  [SMALL_STATE(136)] = 4396,
  [SMALL_STATE(137)] = 4420,
  [SMALL_STATE(138)] = 4444,
  [SMALL_STATE(139)] = 4468,
  [SMALL_STATE(140)] = 4492,
  [SMALL_STATE(141)] = 4516,
  [SMALL_STATE(142)] = 4540,
  [SMALL_STATE(143)] = 4564,
  [SMALL_STATE(144)] = 4588,
  [SMALL_STATE(145)] = 4612,
  [SMALL_STATE(146)] = 4636,
  [SMALL_STATE(147)] = 4660,
  [SMALL_STATE(148)] = 4684,
  [SMALL_STATE(149)] = 4708,
  [SMALL_STATE(150)] = 4732,
  [SMALL_STATE(151)] = 4756,
  [SMALL_STATE(152)] = 4777,
  [SMALL_STATE(153)] = 4797,
  [SMALL_STATE(154)] = 4837,
  [SMALL_STATE(155)] = 4877,
  [SMALL_STATE(156)] = 4917,
  [SMALL_STATE(157)] = 4957,
  [SMALL_STATE(158)] = 4997,
  [SMALL_STATE(159)] = 5024,
  [SMALL_STATE(160)] = 5051,
  [SMALL_STATE(161)] = 5088,
  [SMALL_STATE(162)] = 5115,
  [SMALL_STATE(163)] = 5131,
  [SMALL_STATE(164)] = 5147,
  [SMALL_STATE(165)] = 5165,
  [SMALL_STATE(166)] = 5188,
  [SMALL_STATE(167)] = 5211,
  [SMALL_STATE(168)] = 5236,
  [SMALL_STATE(169)] = 5261,
  [SMALL_STATE(170)] = 5286,
  [SMALL_STATE(171)] = 5311,
  [SMALL_STATE(172)] = 5334,
  [SMALL_STATE(173)] = 5359,
  [SMALL_STATE(174)] = 5373,
  [SMALL_STATE(175)] = 5387,
  [SMALL_STATE(176)] = 5401,
  [SMALL_STATE(177)] = 5415,
  [SMALL_STATE(178)] = 5429,
  [SMALL_STATE(179)] = 5443,
  [SMALL_STATE(180)] = 5457,
  [SMALL_STATE(181)] = 5471,
  [SMALL_STATE(182)] = 5490,
  [SMALL_STATE(183)] = 5509,
  [SMALL_STATE(184)] = 5528,
  [SMALL_STATE(185)] = 5553,
  [SMALL_STATE(186)] = 5578,
  [SMALL_STATE(187)] = 5590,
  [SMALL_STATE(188)] = 5602,
  [SMALL_STATE(189)] = 5614,
  [SMALL_STATE(190)] = 5626,
  [SMALL_STATE(191)] = 5644,
  [SMALL_STATE(192)] = 5662,
  [SMALL_STATE(193)] = 5674,
  [SMALL_STATE(194)] = 5686,
  [SMALL_STATE(195)] = 5698,
  [SMALL_STATE(196)] = 5710,
  [SMALL_STATE(197)] = 5728,
  [SMALL_STATE(198)] = 5746,
  [SMALL_STATE(199)] = 5764,
  [SMALL_STATE(200)] = 5782,
  [SMALL_STATE(201)] = 5794,
  [SMALL_STATE(202)] = 5805,
  [SMALL_STATE(203)] = 5816,
  [SMALL_STATE(204)] = 5831,
  [SMALL_STATE(205)] = 5846,
  [SMALL_STATE(206)] = 5861,
  [SMALL_STATE(207)] = 5872,
  [SMALL_STATE(208)] = 5891,
  [SMALL_STATE(209)] = 5906,
  [SMALL_STATE(210)] = 5925,
  [SMALL_STATE(211)] = 5944,
  [SMALL_STATE(212)] = 5955,
  [SMALL_STATE(213)] = 5966,
  [SMALL_STATE(214)] = 5977,
  [SMALL_STATE(215)] = 5996,
  [SMALL_STATE(216)] = 6010,
  [SMALL_STATE(217)] = 6026,
  [SMALL_STATE(218)] = 6040,
  [SMALL_STATE(219)] = 6056,
  [SMALL_STATE(220)] = 6072,
  [SMALL_STATE(221)] = 6088,
  [SMALL_STATE(222)] = 6098,
  [SMALL_STATE(223)] = 6108,
  [SMALL_STATE(224)] = 6122,
  [SMALL_STATE(225)] = 6132,
  [SMALL_STATE(226)] = 6146,
  [SMALL_STATE(227)] = 6160,
  [SMALL_STATE(228)] = 6170,
  [SMALL_STATE(229)] = 6186,
  [SMALL_STATE(230)] = 6200,
  [SMALL_STATE(231)] = 6214,
  [SMALL_STATE(232)] = 6228,
  [SMALL_STATE(233)] = 6244,
  [SMALL_STATE(234)] = 6258,
  [SMALL_STATE(235)] = 6268,
  [SMALL_STATE(236)] = 6282,
  [SMALL_STATE(237)] = 6292,
  [SMALL_STATE(238)] = 6302,
  [SMALL_STATE(239)] = 6316,
  [SMALL_STATE(240)] = 6330,
  [SMALL_STATE(241)] = 6344,
  [SMALL_STATE(242)] = 6358,
  [SMALL_STATE(243)] = 6372,
  [SMALL_STATE(244)] = 6382,
  [SMALL_STATE(245)] = 6395,
  [SMALL_STATE(246)] = 6408,
  [SMALL_STATE(247)] = 6421,
  [SMALL_STATE(248)] = 6434,
  [SMALL_STATE(249)] = 6447,
  [SMALL_STATE(250)] = 6458,
  [SMALL_STATE(251)] = 6469,
  [SMALL_STATE(252)] = 6482,
  [SMALL_STATE(253)] = 6493,
  [SMALL_STATE(254)] = 6506,
  [SMALL_STATE(255)] = 6517,
  [SMALL_STATE(256)] = 6530,
  [SMALL_STATE(257)] = 6543,
  [SMALL_STATE(258)] = 6554,
  [SMALL_STATE(259)] = 6563,
  [SMALL_STATE(260)] = 6572,
  [SMALL_STATE(261)] = 6585,
  [SMALL_STATE(262)] = 6598,
  [SMALL_STATE(263)] = 6611,
  [SMALL_STATE(264)] = 6620,
  [SMALL_STATE(265)] = 6629,
  [SMALL_STATE(266)] = 6638,
  [SMALL_STATE(267)] = 6651,
  [SMALL_STATE(268)] = 6660,
  [SMALL_STATE(269)] = 6673,
  [SMALL_STATE(270)] = 6686,
  [SMALL_STATE(271)] = 6695,
  [SMALL_STATE(272)] = 6704,
  [SMALL_STATE(273)] = 6717,
  [SMALL_STATE(274)] = 6730,
  [SMALL_STATE(275)] = 6743,
  [SMALL_STATE(276)] = 6756,
  [SMALL_STATE(277)] = 6769,
  [SMALL_STATE(278)] = 6779,
  [SMALL_STATE(279)] = 6789,
  [SMALL_STATE(280)] = 6799,
  [SMALL_STATE(281)] = 6809,
  [SMALL_STATE(282)] = 6819,
  [SMALL_STATE(283)] = 6827,
  [SMALL_STATE(284)] = 6837,
  [SMALL_STATE(285)] = 6847,
  [SMALL_STATE(286)] = 6857,
  [SMALL_STATE(287)] = 6865,
  [SMALL_STATE(288)] = 6875,
  [SMALL_STATE(289)] = 6885,
  [SMALL_STATE(290)] = 6893,
  [SMALL_STATE(291)] = 6903,
  [SMALL_STATE(292)] = 6913,
  [SMALL_STATE(293)] = 6923,
  [SMALL_STATE(294)] = 6933,
  [SMALL_STATE(295)] = 6943,
  [SMALL_STATE(296)] = 6953,
  [SMALL_STATE(297)] = 6963,
  [SMALL_STATE(298)] = 6973,
  [SMALL_STATE(299)] = 6983,
  [SMALL_STATE(300)] = 6993,
  [SMALL_STATE(301)] = 7003,
  [SMALL_STATE(302)] = 7013,
  [SMALL_STATE(303)] = 7023,
  [SMALL_STATE(304)] = 7033,
  [SMALL_STATE(305)] = 7043,
  [SMALL_STATE(306)] = 7053,
  [SMALL_STATE(307)] = 7063,
  [SMALL_STATE(308)] = 7073,
  [SMALL_STATE(309)] = 7083,
  [SMALL_STATE(310)] = 7093,
  [SMALL_STATE(311)] = 7103,
  [SMALL_STATE(312)] = 7111,
  [SMALL_STATE(313)] = 7119,
  [SMALL_STATE(314)] = 7129,
  [SMALL_STATE(315)] = 7139,
  [SMALL_STATE(316)] = 7147,
  [SMALL_STATE(317)] = 7157,
  [SMALL_STATE(318)] = 7167,
  [SMALL_STATE(319)] = 7177,
  [SMALL_STATE(320)] = 7185,
  [SMALL_STATE(321)] = 7195,
  [SMALL_STATE(322)] = 7203,
  [SMALL_STATE(323)] = 7213,
  [SMALL_STATE(324)] = 7223,
  [SMALL_STATE(325)] = 7233,
  [SMALL_STATE(326)] = 7243,
  [SMALL_STATE(327)] = 7253,
  [SMALL_STATE(328)] = 7263,
  [SMALL_STATE(329)] = 7273,
  [SMALL_STATE(330)] = 7283,
  [SMALL_STATE(331)] = 7291,
  [SMALL_STATE(332)] = 7301,
  [SMALL_STATE(333)] = 7309,
  [SMALL_STATE(334)] = 7319,
  [SMALL_STATE(335)] = 7329,
  [SMALL_STATE(336)] = 7339,
  [SMALL_STATE(337)] = 7349,
  [SMALL_STATE(338)] = 7359,
  [SMALL_STATE(339)] = 7367,
  [SMALL_STATE(340)] = 7377,
  [SMALL_STATE(341)] = 7387,
  [SMALL_STATE(342)] = 7397,
  [SMALL_STATE(343)] = 7407,
  [SMALL_STATE(344)] = 7417,
  [SMALL_STATE(345)] = 7427,
  [SMALL_STATE(346)] = 7437,
  [SMALL_STATE(347)] = 7445,
  [SMALL_STATE(348)] = 7453,
  [SMALL_STATE(349)] = 7463,
  [SMALL_STATE(350)] = 7473,
  [SMALL_STATE(351)] = 7483,
  [SMALL_STATE(352)] = 7491,
  [SMALL_STATE(353)] = 7501,
  [SMALL_STATE(354)] = 7511,
  [SMALL_STATE(355)] = 7519,
  [SMALL_STATE(356)] = 7529,
  [SMALL_STATE(357)] = 7539,
  [SMALL_STATE(358)] = 7549,
  [SMALL_STATE(359)] = 7559,
  [SMALL_STATE(360)] = 7569,
  [SMALL_STATE(361)] = 7579,
  [SMALL_STATE(362)] = 7589,
  [SMALL_STATE(363)] = 7597,
  [SMALL_STATE(364)] = 7607,
  [SMALL_STATE(365)] = 7617,
  [SMALL_STATE(366)] = 7627,
  [SMALL_STATE(367)] = 7635,
  [SMALL_STATE(368)] = 7643,
  [SMALL_STATE(369)] = 7651,
  [SMALL_STATE(370)] = 7658,
  [SMALL_STATE(371)] = 7665,
  [SMALL_STATE(372)] = 7672,
  [SMALL_STATE(373)] = 7679,
  [SMALL_STATE(374)] = 7686,
  [SMALL_STATE(375)] = 7693,
  [SMALL_STATE(376)] = 7700,
  [SMALL_STATE(377)] = 7707,
  [SMALL_STATE(378)] = 7714,
  [SMALL_STATE(379)] = 7721,
  [SMALL_STATE(380)] = 7728,
  [SMALL_STATE(381)] = 7735,
  [SMALL_STATE(382)] = 7742,
  [SMALL_STATE(383)] = 7749,
  [SMALL_STATE(384)] = 7756,
  [SMALL_STATE(385)] = 7763,
  [SMALL_STATE(386)] = 7770,
  [SMALL_STATE(387)] = 7777,
  [SMALL_STATE(388)] = 7784,
  [SMALL_STATE(389)] = 7791,
  [SMALL_STATE(390)] = 7798,
  [SMALL_STATE(391)] = 7805,
  [SMALL_STATE(392)] = 7812,
  [SMALL_STATE(393)] = 7819,
  [SMALL_STATE(394)] = 7826,
  [SMALL_STATE(395)] = 7833,
  [SMALL_STATE(396)] = 7840,
  [SMALL_STATE(397)] = 7847,
  [SMALL_STATE(398)] = 7854,
  [SMALL_STATE(399)] = 7861,
  [SMALL_STATE(400)] = 7868,
  [SMALL_STATE(401)] = 7875,
  [SMALL_STATE(402)] = 7882,
  [SMALL_STATE(403)] = 7889,
  [SMALL_STATE(404)] = 7896,
  [SMALL_STATE(405)] = 7903,
  [SMALL_STATE(406)] = 7910,
  [SMALL_STATE(407)] = 7917,
  [SMALL_STATE(408)] = 7924,
  [SMALL_STATE(409)] = 7931,
  [SMALL_STATE(410)] = 7938,
  [SMALL_STATE(411)] = 7945,
  [SMALL_STATE(412)] = 7952,
  [SMALL_STATE(413)] = 7959,
  [SMALL_STATE(414)] = 7966,
  [SMALL_STATE(415)] = 7973,
  [SMALL_STATE(416)] = 7980,
  [SMALL_STATE(417)] = 7987,
  [SMALL_STATE(418)] = 7994,
  [SMALL_STATE(419)] = 8001,
  [SMALL_STATE(420)] = 8008,
  [SMALL_STATE(421)] = 8015,
  [SMALL_STATE(422)] = 8022,
  [SMALL_STATE(423)] = 8029,
  [SMALL_STATE(424)] = 8036,
  [SMALL_STATE(425)] = 8043,
  [SMALL_STATE(426)] = 8050,
  [SMALL_STATE(427)] = 8057,
  [SMALL_STATE(428)] = 8064,
  [SMALL_STATE(429)] = 8071,
  [SMALL_STATE(430)] = 8078,
  [SMALL_STATE(431)] = 8085,
  [SMALL_STATE(432)] = 8092,
  [SMALL_STATE(433)] = 8099,
  [SMALL_STATE(434)] = 8106,
  [SMALL_STATE(435)] = 8113,
  [SMALL_STATE(436)] = 8120,
  [SMALL_STATE(437)] = 8127,
  [SMALL_STATE(438)] = 8134,
  [SMALL_STATE(439)] = 8141,
  [SMALL_STATE(440)] = 8148,
  [SMALL_STATE(441)] = 8155,
  [SMALL_STATE(442)] = 8162,
  [SMALL_STATE(443)] = 8169,
  [SMALL_STATE(444)] = 8176,
  [SMALL_STATE(445)] = 8183,
  [SMALL_STATE(446)] = 8190,
  [SMALL_STATE(447)] = 8197,
  [SMALL_STATE(448)] = 8204,
  [SMALL_STATE(449)] = 8211,
  [SMALL_STATE(450)] = 8218,
  [SMALL_STATE(451)] = 8225,
  [SMALL_STATE(452)] = 8232,
  [SMALL_STATE(453)] = 8239,
  [SMALL_STATE(454)] = 8246,
  [SMALL_STATE(455)] = 8253,
  [SMALL_STATE(456)] = 8260,
  [SMALL_STATE(457)] = 8267,
  [SMALL_STATE(458)] = 8274,
  [SMALL_STATE(459)] = 8281,
  [SMALL_STATE(460)] = 8288,
  [SMALL_STATE(461)] = 8295,
  [SMALL_STATE(462)] = 8302,
  [SMALL_STATE(463)] = 8309,
  [SMALL_STATE(464)] = 8316,
  [SMALL_STATE(465)] = 8323,
  [SMALL_STATE(466)] = 8330,
  [SMALL_STATE(467)] = 8337,
  [SMALL_STATE(468)] = 8344,
  [SMALL_STATE(469)] = 8351,
  [SMALL_STATE(470)] = 8358,
  [SMALL_STATE(471)] = 8365,
  [SMALL_STATE(472)] = 8372,
  [SMALL_STATE(473)] = 8379,
  [SMALL_STATE(474)] = 8386,
  [SMALL_STATE(475)] = 8393,
  [SMALL_STATE(476)] = 8400,
  [SMALL_STATE(477)] = 8407,
  [SMALL_STATE(478)] = 8414,
  [SMALL_STATE(479)] = 8421,
  [SMALL_STATE(480)] = 8428,
  [SMALL_STATE(481)] = 8435,
  [SMALL_STATE(482)] = 8442,
  [SMALL_STATE(483)] = 8449,
  [SMALL_STATE(484)] = 8456,
  [SMALL_STATE(485)] = 8463,
  [SMALL_STATE(486)] = 8470,
  [SMALL_STATE(487)] = 8477,
  [SMALL_STATE(488)] = 8484,
  [SMALL_STATE(489)] = 8491,
  [SMALL_STATE(490)] = 8498,
  [SMALL_STATE(491)] = 8505,
  [SMALL_STATE(492)] = 8512,
  [SMALL_STATE(493)] = 8519,
  [SMALL_STATE(494)] = 8526,
  [SMALL_STATE(495)] = 8533,
  [SMALL_STATE(496)] = 8540,
  [SMALL_STATE(497)] = 8547,
  [SMALL_STATE(498)] = 8554,
  [SMALL_STATE(499)] = 8561,
  [SMALL_STATE(500)] = 8568,
  [SMALL_STATE(501)] = 8575,
  [SMALL_STATE(502)] = 8582,
  [SMALL_STATE(503)] = 8589,
  [SMALL_STATE(504)] = 8596,
  [SMALL_STATE(505)] = 8603,
  [SMALL_STATE(506)] = 8610,
  [SMALL_STATE(507)] = 8617,
  [SMALL_STATE(508)] = 8624,
  [SMALL_STATE(509)] = 8631,
  [SMALL_STATE(510)] = 8638,
  [SMALL_STATE(511)] = 8645,
  [SMALL_STATE(512)] = 8652,
  [SMALL_STATE(513)] = 8659,
  [SMALL_STATE(514)] = 8666,
  [SMALL_STATE(515)] = 8673,
  [SMALL_STATE(516)] = 8680,
  [SMALL_STATE(517)] = 8687,
  [SMALL_STATE(518)] = 8694,
  [SMALL_STATE(519)] = 8701,
  [SMALL_STATE(520)] = 8708,
  [SMALL_STATE(521)] = 8715,
  [SMALL_STATE(522)] = 8722,
  [SMALL_STATE(523)] = 8729,
  [SMALL_STATE(524)] = 8736,
  [SMALL_STATE(525)] = 8743,
  [SMALL_STATE(526)] = 8750,
  [SMALL_STATE(527)] = 8757,
  [SMALL_STATE(528)] = 8764,
  [SMALL_STATE(529)] = 8771,
  [SMALL_STATE(530)] = 8778,
  [SMALL_STATE(531)] = 8785,
  [SMALL_STATE(532)] = 8792,
  [SMALL_STATE(533)] = 8799,
  [SMALL_STATE(534)] = 8806,
  [SMALL_STATE(535)] = 8813,
  [SMALL_STATE(536)] = 8820,
  [SMALL_STATE(537)] = 8827,
  [SMALL_STATE(538)] = 8834,
  [SMALL_STATE(539)] = 8841,
  [SMALL_STATE(540)] = 8848,
  [SMALL_STATE(541)] = 8855,
  [SMALL_STATE(542)] = 8862,
  [SMALL_STATE(543)] = 8869,
  [SMALL_STATE(544)] = 8876,
  [SMALL_STATE(545)] = 8883,
  [SMALL_STATE(546)] = 8890,
  [SMALL_STATE(547)] = 8897,
  [SMALL_STATE(548)] = 8904,
  [SMALL_STATE(549)] = 8911,
  [SMALL_STATE(550)] = 8918,
  [SMALL_STATE(551)] = 8925,
  [SMALL_STATE(552)] = 8932,
  [SMALL_STATE(553)] = 8939,
  [SMALL_STATE(554)] = 8946,
  [SMALL_STATE(555)] = 8953,
  [SMALL_STATE(556)] = 8960,
  [SMALL_STATE(557)] = 8967,
  [SMALL_STATE(558)] = 8974,
  [SMALL_STATE(559)] = 8981,
  [SMALL_STATE(560)] = 8988,
  [SMALL_STATE(561)] = 8995,
  [SMALL_STATE(562)] = 9002,
  [SMALL_STATE(563)] = 9009,
  [SMALL_STATE(564)] = 9016,
  [SMALL_STATE(565)] = 9023,
  [SMALL_STATE(566)] = 9030,
  [SMALL_STATE(567)] = 9037,
  [SMALL_STATE(568)] = 9044,
  [SMALL_STATE(569)] = 9051,
  [SMALL_STATE(570)] = 9058,
  [SMALL_STATE(571)] = 9065,
  [SMALL_STATE(572)] = 9072,
  [SMALL_STATE(573)] = 9079,
  [SMALL_STATE(574)] = 9086,
  [SMALL_STATE(575)] = 9093,
  [SMALL_STATE(576)] = 9100,
  [SMALL_STATE(577)] = 9107,
  [SMALL_STATE(578)] = 9114,
  [SMALL_STATE(579)] = 9121,
  [SMALL_STATE(580)] = 9128,
  [SMALL_STATE(581)] = 9135,
  [SMALL_STATE(582)] = 9142,
  [SMALL_STATE(583)] = 9149,
  [SMALL_STATE(584)] = 9156,
  [SMALL_STATE(585)] = 9163,
  [SMALL_STATE(586)] = 9170,
  [SMALL_STATE(587)] = 9177,
  [SMALL_STATE(588)] = 9184,
  [SMALL_STATE(589)] = 9191,
  [SMALL_STATE(590)] = 9198,
  [SMALL_STATE(591)] = 9205,
  [SMALL_STATE(592)] = 9212,
  [SMALL_STATE(593)] = 9219,
  [SMALL_STATE(594)] = 9226,
  [SMALL_STATE(595)] = 9233,
  [SMALL_STATE(596)] = 9240,
  [SMALL_STATE(597)] = 9247,
  [SMALL_STATE(598)] = 9254,
  [SMALL_STATE(599)] = 9261,
  [SMALL_STATE(600)] = 9268,
  [SMALL_STATE(601)] = 9275,
  [SMALL_STATE(602)] = 9282,
  [SMALL_STATE(603)] = 9289,
  [SMALL_STATE(604)] = 9296,
  [SMALL_STATE(605)] = 9303,
  [SMALL_STATE(606)] = 9310,
  [SMALL_STATE(607)] = 9317,
  [SMALL_STATE(608)] = 9324,
  [SMALL_STATE(609)] = 9331,
  [SMALL_STATE(610)] = 9338,
  [SMALL_STATE(611)] = 9345,
  [SMALL_STATE(612)] = 9352,
  [SMALL_STATE(613)] = 9359,
  [SMALL_STATE(614)] = 9366,
  [SMALL_STATE(615)] = 9373,
  [SMALL_STATE(616)] = 9380,
  [SMALL_STATE(617)] = 9387,
  [SMALL_STATE(618)] = 9394,
  [SMALL_STATE(619)] = 9401,
  [SMALL_STATE(620)] = 9408,
  [SMALL_STATE(621)] = 9415,
  [SMALL_STATE(622)] = 9422,
  [SMALL_STATE(623)] = 9429,
  [SMALL_STATE(624)] = 9436,
  [SMALL_STATE(625)] = 9443,
  [SMALL_STATE(626)] = 9450,
  [SMALL_STATE(627)] = 9457,
  [SMALL_STATE(628)] = 9464,
  [SMALL_STATE(629)] = 9471,
  [SMALL_STATE(630)] = 9478,
  [SMALL_STATE(631)] = 9485,
  [SMALL_STATE(632)] = 9492,
  [SMALL_STATE(633)] = 9499,
  [SMALL_STATE(634)] = 9506,
  [SMALL_STATE(635)] = 9513,
  [SMALL_STATE(636)] = 9520,
  [SMALL_STATE(637)] = 9527,
  [SMALL_STATE(638)] = 9534,
  [SMALL_STATE(639)] = 9541,
  [SMALL_STATE(640)] = 9548,
  [SMALL_STATE(641)] = 9555,
  [SMALL_STATE(642)] = 9562,
  [SMALL_STATE(643)] = 9569,
  [SMALL_STATE(644)] = 9576,
  [SMALL_STATE(645)] = 9583,
  [SMALL_STATE(646)] = 9590,
  [SMALL_STATE(647)] = 9597,
  [SMALL_STATE(648)] = 9604,
  [SMALL_STATE(649)] = 9611,
  [SMALL_STATE(650)] = 9618,
  [SMALL_STATE(651)] = 9625,
  [SMALL_STATE(652)] = 9632,
  [SMALL_STATE(653)] = 9639,
  [SMALL_STATE(654)] = 9646,
  [SMALL_STATE(655)] = 9653,
  [SMALL_STATE(656)] = 9660,
  [SMALL_STATE(657)] = 9667,
  [SMALL_STATE(658)] = 9674,
  [SMALL_STATE(659)] = 9681,
  [SMALL_STATE(660)] = 9688,
  [SMALL_STATE(661)] = 9695,
  [SMALL_STATE(662)] = 9702,
  [SMALL_STATE(663)] = 9709,
  [SMALL_STATE(664)] = 9716,
  [SMALL_STATE(665)] = 9723,
  [SMALL_STATE(666)] = 9730,
  [SMALL_STATE(667)] = 9737,
  [SMALL_STATE(668)] = 9744,
  [SMALL_STATE(669)] = 9751,
  [SMALL_STATE(670)] = 9758,
  [SMALL_STATE(671)] = 9765,
  [SMALL_STATE(672)] = 9772,
  [SMALL_STATE(673)] = 9779,
  [SMALL_STATE(674)] = 9786,
  [SMALL_STATE(675)] = 9793,
  [SMALL_STATE(676)] = 9800,
  [SMALL_STATE(677)] = 9807,
  [SMALL_STATE(678)] = 9814,
  [SMALL_STATE(679)] = 9821,
  [SMALL_STATE(680)] = 9828,
  [SMALL_STATE(681)] = 9835,
  [SMALL_STATE(682)] = 9842,
  [SMALL_STATE(683)] = 9849,
  [SMALL_STATE(684)] = 9856,
  [SMALL_STATE(685)] = 9863,
  [SMALL_STATE(686)] = 9870,
  [SMALL_STATE(687)] = 9877,
  [SMALL_STATE(688)] = 9884,
  [SMALL_STATE(689)] = 9891,
  [SMALL_STATE(690)] = 9898,
  [SMALL_STATE(691)] = 9905,
  [SMALL_STATE(692)] = 9912,
  [SMALL_STATE(693)] = 9919,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(576),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(410),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(408),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(406),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(403),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(402),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(5),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(5),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(401),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(400),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(393),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(392),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(391),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(390),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(389),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(388),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(386),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(384),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(383),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(379),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(378),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(375),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(374),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(373),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(532),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(407),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(460),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(469),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(470),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(471),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(482),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(490),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(492),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(494),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(497),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(510),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(512),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(513),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(519),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(522),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(525),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(530),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(560),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(576),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(576),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath, 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_length_function, 4),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_length_function, 4),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lang_function, 4),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lang_function, 4),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_function, 4),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_function, 4),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_true_function, 4),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_true_function, 4),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_false_function, 4),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_false_function, 4),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_function, 4),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_function, 4),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_function, 4),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_function, 4),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_function, 4),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_function, 4),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ceiling_function, 4),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ceiling_function, 4),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choose_function, 4),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choose_function, 4),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concat_function, 4),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concat_function, 4),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains_function, 4),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contains_function, 4),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_count_function, 4),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_count_function, 4),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_current_function, 4),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_current_function, 4),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_function, 4),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document_function, 4),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_available_function, 4),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_available_function, 4),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floor_function, 4),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floor_function, 4),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_number_function, 4),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format_number_function, 4),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_available_function, 4),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_available_function, 4),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generate_id_function, 4),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generate_id_function, 4),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_function, 4),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_last_function, 4),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_name_function, 4),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_name_function, 4),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_uri_function, 4),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_uri_function, 4),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normalize_space_function, 4),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normalize_space_function, 4),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_function, 4),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_function, 4),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_function, 4),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_function, 4),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_position_function, 4),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_position_function, 4),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_round_function, 4),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_round_function, 4),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_starts_with_function, 4),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_starts_with_function, 4),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_function, 4),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_function, 4),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substring_function, 4),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substring_function, 4),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substring_after_function, 4),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substring_after_function, 4),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substring_before_function, 4),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substring_before_function, 4),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sum_function, 4),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sum_function, 4),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_property_function, 4),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_property_function, 4),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translate_function, 4),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_translate_function, 4),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unparsed_entity_url_function, 4),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unparsed_entity_url_function, 4),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base64_encode, 4),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base64_encode, 4),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base64_decode, 4),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base64_decode, 4),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_synapse_xpath_property, 3),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_synapse_xpath_property, 3),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_property, 5),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_property, 5),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(248),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(130),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(110),
  [420] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(251),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(342),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(341),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(209),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(339),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(253),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(185),
  [441] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(336),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(160),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 5, .production_id = 14),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 5, .production_id = 14),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 4, .production_id = 14),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 4, .production_id = 14),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 4),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 4),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 3),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 3),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3, .production_id = 1),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 3, .production_id = 1),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 16),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, .production_id = 16),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_send, 1),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_send, 1),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 27),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5, .production_id = 27),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 24),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5, .production_id = 24),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 6, .production_id = 45),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 6, .production_id = 45),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 7, .production_id = 50),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 7, .production_id = 50),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 9, .production_id = 52),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 9, .production_id = 52),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log, 5, .production_id = 7),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log, 5, .production_id = 7),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 6, .production_id = 44),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 6, .production_id = 44),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 6, .production_id = 41),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 6, .production_id = 41),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5, .production_id = 33),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 5, .production_id = 33),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_send, 5, .production_id = 24),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_send, 5, .production_id = 24),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5, .production_id = 34),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 5, .production_id = 34),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 3, .production_id = 10),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 3, .production_id = 10),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 6, .production_id = 46),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 6, .production_id = 46),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach, 6, .production_id = 40),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach, 6, .production_id = 40),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 3, .production_id = 11),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 3, .production_id = 11),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 3, .production_id = 12),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 3, .production_id = 12),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 5, .production_id = 29),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 5, .production_id = 29),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4, .production_id = 23),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 4, .production_id = 23),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach, 11, .production_id = 56),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach, 11, .production_id = 56),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_respond, 1),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_respond, 1),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5, .production_id = 32),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 5, .production_id = 32),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4, .production_id = 20),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 4, .production_id = 20),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 2),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 2),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log, 3, .production_id = 7),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log, 3, .production_id = 7),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mediator, 1),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mediator, 1),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5, .production_id = 35),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 5, .production_id = 35),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 26),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5, .production_id = 26),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4, .production_id = 22),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 4, .production_id = 22),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 10, .production_id = 54),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 10, .production_id = 54),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_send, 4, .production_id = 15),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_send, 4, .production_id = 15),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 25),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5, .production_id = 25),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 18),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, .production_id = 18),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4, .production_id = 21),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 4, .production_id = 21),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log, 4, .production_id = 7),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log, 4, .production_id = 7),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 15),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, .production_id = 15),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 6, .production_id = 39),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 6, .production_id = 39),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 6, .production_id = 38),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 6, .production_id = 38),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iterate, 5, .production_id = 36),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iterate, 5, .production_id = 36),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach, 5, .production_id = 28),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach, 5, .production_id = 28),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach, 10, .production_id = 53),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach, 10, .production_id = 53),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 5),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_iterate_repeat1, 2, .production_id = 13),
  [693] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_iterate_repeat1, 2, .production_id = 13), SHIFT_REPEAT(579),
  [696] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_iterate_repeat1, 2, .production_id = 13), SHIFT_REPEAT(578),
  [699] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_iterate_repeat1, 2, .production_id = 13), SHIFT_REPEAT(577),
  [702] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_iterate_repeat1, 2, .production_id = 13), SHIFT_REPEAT(376),
  [705] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_iterate_repeat1, 2, .production_id = 13), SHIFT_REPEAT(693),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 2, .production_id = 17),
  [710] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 2, .production_id = 17), SHIFT_REPEAT(483),
  [713] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 2, .production_id = 17), SHIFT_REPEAT(565),
  [716] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 2, .production_id = 17), SHIFT_REPEAT(561),
  [719] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 2, .production_id = 17), SHIFT_REPEAT(558),
  [722] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 2, .production_id = 17), SHIFT_REPEAT(557),
  [725] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 2, .production_id = 17), SHIFT_REPEAT(555),
  [728] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 2, .production_id = 17), SHIFT_REPEAT(693),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_suspend_on_failure_repeat1, 2),
  [771] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_suspend_on_failure_repeat1, 2), SHIFT_REPEAT(242),
  [774] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_suspend_on_failure_repeat1, 2), SHIFT_REPEAT(239),
  [777] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_suspend_on_failure_repeat1, 2), SHIFT_REPEAT(235),
  [780] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_suspend_on_failure_repeat1, 2), SHIFT_REPEAT(215),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 5),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(594),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mark_for_suspending_repeat1, 2),
  [795] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mark_for_suspending_repeat1, 2), SHIFT_REPEAT(238),
  [798] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mark_for_suspending_repeat1, 2), SHIFT_REPEAT(241),
  [801] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mark_for_suspending_repeat1, 2), SHIFT_REPEAT(215),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat2, 2),
  [820] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat2, 2), SHIFT_REPEAT(183),
  [823] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat2, 2), SHIFT_REPEAT(166),
  [826] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat2, 2), SHIFT_REPEAT(158),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__property_attribute, 5),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_codes, 4),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 5),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_codes, 3),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__property_attribute, 1, .production_id = 9),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__property_attribute, 1, .production_id = 6),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 1, .production_id = 8),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_timeout_repeat1, 2),
  [851] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_timeout_repeat1, 2), SHIFT_REPEAT(223),
  [854] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_timeout_repeat1, 2), SHIFT_REPEAT(270),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_iterate_repeat1, 1, .production_id = 2),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continueParent, 5),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_iterate_repeat1, 1, .production_id = 3),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_iterate_repeat1, 1, .production_id = 4),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_path, 2),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_path_repeat1, 2),
  [891] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_path_repeat1, 2), SHIFT_REPEAT(345),
  [894] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_path_repeat1, 2), SHIFT_REPEAT(225),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_iterate_repeat1, 1, .production_id = 5),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_iterate_repeat1, 1, .production_id = 6),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attachPath, 5),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preservePayload, 5),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat1, 2),
  [907] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat1, 2), SHIFT_REPEAT(616),
  [910] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat1, 2), SHIFT_REPEAT(614),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_path, 3),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential, 5),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initial_duration, 3, .production_id = 42),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timeout, 2),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timeout, 3),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [947] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(334),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_progression_factor, 3, .production_id = 42),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maximum_duration, 3, .production_id = 42),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mark_for_suspending, 3),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_suspend_on_failure, 3),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endpoint_error_property, 1),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mark_for_suspending, 2),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_log_repeat1, 2),
  [988] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_repeat1, 2), SHIFT_REPEAT(341),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retries_before_suspending, 3, .production_id = 42),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_delay, 3, .production_id = 42),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_suspend_on_failure, 2),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration, 3, .production_id = 42),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_action, 3),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__endpoint_attribute, 5),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 5),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_path_array, 3),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_path_object, 2),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_correlateOn, 3, .production_id = 19),
  [1077] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_error_codes_repeat1, 2), SHIFT_REPEAT(240),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_error_codes_repeat1, 2),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then, 2),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complete_condition, 4, .production_id = 30),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complete_condition, 4, .production_id = 31),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endpoint, 4, .production_id = 37),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_level, 5),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 5),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_definition, 5, .production_id = 1),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_declaration, 4),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_info, 3),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_definition, 4, .production_id = 1),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complete_condition, 3),
  [1164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(553),
  [1166] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_declaration, 3),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endpoint, 5, .production_id = 47),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 5),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then, 3),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complete_condition, 5, .production_id = 43),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endpoint_reference, 6),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1184] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else, 2),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_complete, 5, .production_id = 19),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_endpoint, 3),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_eval, 3),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 6, .production_id = 48),
  [1360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else, 3),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_count, 4, .production_id = 49),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(588),
  [1372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 4, .production_id = 51),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_endpoint, 4),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_endpoint, 5),
  [1548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_string, 1),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_min, 5),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_encoding_declaration, 3),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_max, 5),
  [1614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_complete, 9, .production_id = 55),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blocking, 5),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_complete, 10, .production_id = 55),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 9, .production_id = 57),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 9, .production_id = 58),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 5),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 9, .production_id = 59),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 9, .production_id = 60),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 14, .production_id = 61),
  [1754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 14, .production_id = 62),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 14, .production_id = 63),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 14, .production_id = 64),
  [1766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 14, .production_id = 65),
  [1768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_complete, 4, .production_id = 19),
  [1770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 14, .production_id = 66),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [1800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [1808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 19, .production_id = 67),
  [1810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 19, .production_id = 68),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 19, .production_id = 69),
  [1816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 19, .production_id = 70),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 24, .production_id = 71),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
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
