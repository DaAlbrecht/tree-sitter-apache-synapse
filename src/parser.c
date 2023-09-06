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
#define STATE_COUNT 755
#define LARGE_STATE_COUNT 47
#define SYMBOL_COUNT 364
#define ALIAS_COUNT 0
#define TOKEN_COUNT 220
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 33
#define MAX_ALIAS_SEQUENCE_LENGTH 24
#define PRODUCTION_ID_COUNT 75

enum {
  anon_sym_LBRACE = 1,
  anon_sym_COMMA = 2,
  anon_sym_RBRACE = 3,
  anon_sym_COLON = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_DQUOTE = 7,
  aux_sym_string_content_token1 = 8,
  sym_escape_sequence = 9,
  anon_sym_true = 10,
  anon_sym_false = 11,
  sym_null = 12,
  sym_comment = 13,
  anon_sym_LTsequence = 14,
  anon_sym_GT = 15,
  anon_sym_LT_SLASHsequence_GT = 16,
  anon_sym_LTrespond_SLASH_GT = 17,
  anon_sym_LTsend_SLASH_GT = 18,
  anon_sym_LTsend = 19,
  anon_sym_LT_SLASHsend_GT = 20,
  anon_sym_LTlog = 21,
  anon_sym_LT_SLASHlog_GT = 22,
  anon_sym_SLASH_GT = 23,
  anon_sym_LTproperty = 24,
  anon_sym_scope = 25,
  anon_sym_EQ = 26,
  anon_sym_default = 27,
  anon_sym_axis2 = 28,
  anon_sym_axis2_DASHclient = 29,
  anon_sym_operation = 30,
  anon_sym_transport = 31,
  anon_sym_registry = 32,
  anon_sym_synapse = 33,
  anon_sym_system = 34,
  anon_sym_env = 35,
  anon_sym_file = 36,
  anon_sym_action = 37,
  anon_sym_set = 38,
  anon_sym_remove = 39,
  anon_sym_type = 40,
  anon_sym_STRING = 41,
  anon_sym_INTEGER = 42,
  anon_sym_BOOLEAN = 43,
  anon_sym_DOUBLE = 44,
  anon_sym_FLOAT = 45,
  anon_sym_LONG = 46,
  anon_sym_SHORT = 47,
  anon_sym_OM = 48,
  anon_sym_pattern = 49,
  anon_sym_group = 50,
  anon_sym_LTcall = 51,
  anon_sym_LT_SLASHcall_GT = 52,
  anon_sym_LTforeach = 53,
  anon_sym_sequence = 54,
  anon_sym_LT_SLASHforeach_GT = 55,
  anon_sym_LTfilter = 56,
  anon_sym_xpath = 57,
  anon_sym_LT_SLASHfilter_GT = 58,
  anon_sym_LTaggregate_GT = 59,
  anon_sym_LTaggregate = 60,
  anon_sym_LT_SLASHaggregate_GT = 61,
  anon_sym_LTiterate = 62,
  anon_sym_LT_SLASHiterate_GT = 63,
  anon_sym_LTpayloadFactory = 64,
  anon_sym_LT_SLASHpayloadFactory_GT = 65,
  anon_sym_media_DASHtype = 66,
  anon_sym_xml = 67,
  anon_sym_json = 68,
  anon_sym_LTformat = 69,
  anon_sym_LT_SLASHformat_GT = 70,
  anon_sym_LTargs_SLASH_GT = 71,
  anon_sym_LTargs_GT = 72,
  anon_sym_LTarg = 73,
  anon_sym_value = 74,
  anon_sym_expression = 75,
  anon_sym_LT_SLASHargs_GT = 76,
  anon_sym_sequential = 77,
  anon_sym_continueParent = 78,
  anon_sym_preservePayload = 79,
  anon_sym_attachPath = 80,
  anon_sym_LTtarget = 81,
  anon_sym_to = 82,
  anon_sym_soapAction = 83,
  anon_sym_endpoint = 84,
  anon_sym_LT_SLASHtarget_GT = 85,
  anon_sym_LTcorrelateOn = 86,
  anon_sym_LTcompleteCondition = 87,
  anon_sym_LT_SLASHcompleteCondition_GT = 88,
  anon_sym_LTonComplete = 89,
  anon_sym_LT_SLASHonComplete_GT = 90,
  anon_sym_LTmessageCount = 91,
  anon_sym_min = 92,
  anon_sym_max = 93,
  anon_sym_key = 94,
  anon_sym_LTthen_GT = 95,
  anon_sym_LT_SLASHthen_GT = 96,
  anon_sym_LTelse_GT = 97,
  anon_sym_LT_SLASHelse_GT = 98,
  anon_sym_source = 99,
  anon_sym_regex = 100,
  anon_sym_LTendpoint = 101,
  anon_sym_LT_SLASHendpoint_GT = 102,
  anon_sym_LThttp = 103,
  anon_sym_LT_SLASHhttp_GT = 104,
  anon_sym_uri_DASHtemplate = 105,
  anon_sym_method = 106,
  anon_sym_GET = 107,
  anon_sym_POST = 108,
  anon_sym_PUT = 109,
  anon_sym_DELETE = 110,
  anon_sym_HEAD = 111,
  anon_sym_OPTIONS = 112,
  anon_sym_PATCH = 113,
  anon_sym_get = 114,
  anon_sym_post = 115,
  anon_sym_put = 116,
  anon_sym_delete = 117,
  anon_sym_head = 118,
  anon_sym_options = 119,
  anon_sym_patch = 120,
  anon_sym_LTtimeout_GT = 121,
  anon_sym_LT_SLASHtimeout_GT = 122,
  anon_sym_LTmarkForSuspension_GT = 123,
  anon_sym_LT_SLASHmarkForSuspension_GT = 124,
  anon_sym_LTretriesBeforeSuspension_GT = 125,
  anon_sym_LT_SLASHretriesBeforeSuspension_GT = 126,
  anon_sym_LTretryDelay_GT = 127,
  anon_sym_LT_SLASHretryDelay_GT = 128,
  anon_sym_LTsuspendOnFailure_GT = 129,
  anon_sym_LT_SLASHsuspendOnFailure_GT = 130,
  anon_sym_LTinitialDuration_GT = 131,
  anon_sym_LT_SLASHinitialDuration_GT = 132,
  anon_sym_LTprogressionFactor_GT = 133,
  anon_sym_LT_SLASHprogressionFactor_GT = 134,
  anon_sym_LTmaximumDuration_GT = 135,
  anon_sym_LT_SLASHmaximumDuration_GT = 136,
  anon_sym_LTerrorCodes_GT = 137,
  anon_sym_LT_SLASHerrorCodes_GT = 138,
  anon_sym_LTduration_GT = 139,
  anon_sym_LT_SLASHduration_GT = 140,
  anon_sym_LTresponseAction_GT = 141,
  anon_sym_never = 142,
  anon_sym_discard = 143,
  anon_sym_fault = 144,
  anon_sym_LT_SLASHresponseAction_GT = 145,
  anon_sym_LTkey = 146,
  anon_sym_blocking = 147,
  aux_sym_value_token1 = 148,
  anon_sym_json_DASHeval_LPAREN = 149,
  anon_sym_RPAREN = 150,
  anon_sym_name = 151,
  anon_sym_id = 152,
  anon_sym_level = 153,
  anon_sym_full = 154,
  anon_sym_simple = 155,
  anon_sym_custom = 156,
  anon_sym_headers = 157,
  aux_sym_identifier_token1 = 158,
  sym__float = 159,
  sym__unsigned_int = 160,
  sym__int = 161,
  anon_sym_LT_QMARKxml = 162,
  anon_sym_QMARK_GT = 163,
  anon_sym_version = 164,
  sym_version_number = 165,
  anon_sym_encoding = 166,
  sym_encoding = 167,
  sym__xpath_node = 168,
  anon_sym_SLASH = 169,
  anon_sym_SLASH_SLASH = 170,
  anon_sym_DOT_DOT = 171,
  anon_sym_DOT = 172,
  anon_sym_AT = 173,
  anon_sym_boolean = 174,
  anon_sym_LPAREN = 175,
  anon_sym_ceiling = 176,
  anon_sym_choose = 177,
  anon_sym_concat = 178,
  anon_sym_contains = 179,
  anon_sym_count = 180,
  anon_sym_current = 181,
  anon_sym_document = 182,
  anon_sym_element_DASHavailable = 183,
  anon_sym_floor = 184,
  anon_sym_format_DASHnumber = 185,
  anon_sym_function_DASHavailable = 186,
  anon_sym_generate_DASHid = 187,
  anon_sym_lang = 188,
  anon_sym_last = 189,
  anon_sym_local_DASHname = 190,
  anon_sym_namespace_DASHuri = 191,
  anon_sym_normalize_DASHspace = 192,
  anon_sym_not = 193,
  anon_sym_number = 194,
  anon_sym_position = 195,
  anon_sym_round = 196,
  anon_sym_starts_DASHwith = 197,
  anon_sym_string = 198,
  anon_sym_string_DASHlength = 199,
  anon_sym_substring = 200,
  anon_sym_substring_DASHafter = 201,
  anon_sym_substring_DASHbefore = 202,
  anon_sym_sum = 203,
  anon_sym_system_DASHproperty = 204,
  anon_sym_translate = 205,
  anon_sym_unparsed_DASHentity_DASHurl = 206,
  anon_sym_base64Encode = 207,
  anon_sym_base64Decode = 208,
  anon_sym_get_DASHproperty_LPAREN = 209,
  anon_sym_SQUOTE = 210,
  anon_sym_DOLLARbody = 211,
  anon_sym_DOLLARheader = 212,
  anon_sym_DOLLARaxis2 = 213,
  anon_sym_ctx = 214,
  anon_sym_DOLLARtrp = 215,
  anon_sym_DOLLARurl = 216,
  anon_sym_DOLLARfunc = 217,
  anon_sym_DOLLARenv = 218,
  anon_sym_DOLLAR_DOT = 219,
  sym_document = 220,
  sym__value = 221,
  sym_object = 222,
  sym_pair = 223,
  sym_array = 224,
  sym_string = 225,
  sym_string_content = 226,
  sym_number = 227,
  sym_true = 228,
  sym_false = 229,
  sym__definition = 230,
  sym_sequence_definition = 231,
  sym_mediator = 232,
  sym_respond = 233,
  sym_send = 234,
  sym_log = 235,
  sym_property = 236,
  sym__property_attribute = 237,
  sym_call = 238,
  sym_foreach = 239,
  sym_filter = 240,
  sym_aggregate = 241,
  sym_iterate = 242,
  sym_payload_factory = 243,
  sym_media_type = 244,
  sym_format = 245,
  sym_args = 246,
  sym_sequential = 247,
  sym_continueParent = 248,
  sym_preservePayload = 249,
  sym_attachPath = 250,
  sym_sequence = 251,
  sym_target = 252,
  sym_correlateOn = 253,
  sym_complete_condition = 254,
  sym_on_complete = 255,
  sym_message_count = 256,
  sym_min = 257,
  sym_max = 258,
  sym_key = 259,
  sym_then = 260,
  sym_else = 261,
  sym_source = 262,
  sym_regex = 263,
  sym_endpoint = 264,
  sym__endpoint_type = 265,
  sym_http_endpoint = 266,
  sym__endpoint_attribute = 267,
  sym_method = 268,
  sym_endpoint_error_property = 269,
  sym_timeout = 270,
  sym_mark_for_suspending = 271,
  sym__mark_for_suspending_property = 272,
  sym_retries_before_suspending = 273,
  sym_retry_delay = 274,
  sym_suspend_on_failure = 275,
  sym__suspend_on_failure_property = 276,
  sym_initial_duration = 277,
  sym_progression_factor = 278,
  sym_maximum_duration = 279,
  sym_error_codes = 280,
  sym__timeout_property = 281,
  sym_duration = 282,
  sym_response_action = 283,
  sym_endpoint_reference = 284,
  sym_blocking = 285,
  sym_value = 286,
  sym_expression = 287,
  sym_json_eval = 288,
  sym_name = 289,
  sym_id = 290,
  sym_level = 291,
  sym_identifier = 292,
  sym_boolean = 293,
  sym_expression_string = 294,
  sym_xml_declaration = 295,
  sym_version_info = 296,
  sym_encoding_declaration = 297,
  sym_xpath = 298,
  sym__xpath_selectors = 299,
  sym__xPath_extension_functions = 300,
  sym__xpath_function = 301,
  sym_boolean_function = 302,
  sym_ceiling_function = 303,
  sym_choose_function = 304,
  sym_concat_function = 305,
  sym_contains_function = 306,
  sym_count_function = 307,
  sym_current_function = 308,
  sym_document_function = 309,
  sym_element_available_function = 310,
  sym_false_function = 311,
  sym_floor_function = 312,
  sym_format_number_function = 313,
  sym_function_available_function = 314,
  sym_generate_id_function = 315,
  sym_id_function = 316,
  sym_key_function = 317,
  sym_lang_function = 318,
  sym_last_function = 319,
  sym_local_name_function = 320,
  sym_name_function = 321,
  sym_namespace_uri_function = 322,
  sym_normalize_space_function = 323,
  sym_not_function = 324,
  sym_number_function = 325,
  sym_position_function = 326,
  sym_round_function = 327,
  sym_starts_with_function = 328,
  sym_string_function = 329,
  sym_string_length_function = 330,
  sym_substring_function = 331,
  sym_substring_after_function = 332,
  sym_substring_before_function = 333,
  sym_sum_function = 334,
  sym_system_property_function = 335,
  sym_translate_function = 336,
  sym_true_function = 337,
  sym_unparsed_entity_url_function = 338,
  sym_base64_encode = 339,
  sym_base64_decode = 340,
  sym_get_property = 341,
  sym__xpath_string = 342,
  sym_synapse_xpath_property = 343,
  sym_json_path = 344,
  sym_json_path_array = 345,
  sym_json_path_object = 346,
  aux_sym_document_repeat1 = 347,
  aux_sym_object_repeat1 = 348,
  aux_sym_array_repeat1 = 349,
  aux_sym_string_content_repeat1 = 350,
  aux_sym_sequence_definition_repeat1 = 351,
  aux_sym_log_repeat1 = 352,
  aux_sym_property_repeat1 = 353,
  aux_sym_iterate_repeat1 = 354,
  aux_sym_args_repeat1 = 355,
  aux_sym_http_endpoint_repeat1 = 356,
  aux_sym_http_endpoint_repeat2 = 357,
  aux_sym_timeout_repeat1 = 358,
  aux_sym_mark_for_suspending_repeat1 = 359,
  aux_sym_suspend_on_failure_repeat1 = 360,
  aux_sym_error_codes_repeat1 = 361,
  aux_sym_xpath_repeat1 = 362,
  aux_sym_json_path_repeat1 = 363,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_content_token1] = "string_content_token1",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_null] = "null",
  [sym_comment] = "comment",
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
  [anon_sym_LTpayloadFactory] = "<payloadFactory",
  [anon_sym_LT_SLASHpayloadFactory_GT] = "</payloadFactory>",
  [anon_sym_media_DASHtype] = "media-type",
  [anon_sym_xml] = "xml",
  [anon_sym_json] = "json",
  [anon_sym_LTformat] = "<format",
  [anon_sym_LT_SLASHformat_GT] = "</format>",
  [anon_sym_LTargs_SLASH_GT] = "<args/>",
  [anon_sym_LTargs_GT] = "<args>",
  [anon_sym_LTarg] = "<arg",
  [anon_sym_value] = "value",
  [anon_sym_expression] = "expression",
  [anon_sym_LT_SLASHargs_GT] = "</args>",
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
  [aux_sym_value_token1] = "value_token1",
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
  [anon_sym_DOLLAR_DOT] = "$.",
  [sym_document] = "document",
  [sym__value] = "_value",
  [sym_object] = "object",
  [sym_pair] = "pair",
  [sym_array] = "array",
  [sym_string] = "string",
  [sym_string_content] = "string_content",
  [sym_number] = "number",
  [sym_true] = "true",
  [sym_false] = "false",
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
  [sym_payload_factory] = "payload_factory",
  [sym_media_type] = "media_type",
  [sym_format] = "format",
  [sym_args] = "args",
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
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_string_content_repeat1] = "string_content_repeat1",
  [aux_sym_sequence_definition_repeat1] = "sequence_definition_repeat1",
  [aux_sym_log_repeat1] = "log_repeat1",
  [aux_sym_property_repeat1] = "property_repeat1",
  [aux_sym_iterate_repeat1] = "iterate_repeat1",
  [aux_sym_args_repeat1] = "args_repeat1",
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
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_content_token1] = aux_sym_string_content_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_null] = sym_null,
  [sym_comment] = sym_comment,
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
  [anon_sym_LTpayloadFactory] = anon_sym_LTpayloadFactory,
  [anon_sym_LT_SLASHpayloadFactory_GT] = anon_sym_LT_SLASHpayloadFactory_GT,
  [anon_sym_media_DASHtype] = anon_sym_media_DASHtype,
  [anon_sym_xml] = anon_sym_xml,
  [anon_sym_json] = anon_sym_json,
  [anon_sym_LTformat] = anon_sym_LTformat,
  [anon_sym_LT_SLASHformat_GT] = anon_sym_LT_SLASHformat_GT,
  [anon_sym_LTargs_SLASH_GT] = anon_sym_LTargs_SLASH_GT,
  [anon_sym_LTargs_GT] = anon_sym_LTargs_GT,
  [anon_sym_LTarg] = anon_sym_LTarg,
  [anon_sym_value] = anon_sym_value,
  [anon_sym_expression] = anon_sym_expression,
  [anon_sym_LT_SLASHargs_GT] = anon_sym_LT_SLASHargs_GT,
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
  [aux_sym_value_token1] = aux_sym_value_token1,
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
  [anon_sym_DOLLAR_DOT] = anon_sym_DOLLAR_DOT,
  [sym_document] = sym_document,
  [sym__value] = sym__value,
  [sym_object] = sym_object,
  [sym_pair] = sym_pair,
  [sym_array] = sym_array,
  [sym_string] = sym_string,
  [sym_string_content] = sym_string_content,
  [sym_number] = sym_number,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
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
  [sym_payload_factory] = sym_payload_factory,
  [sym_media_type] = sym_media_type,
  [sym_format] = sym_format,
  [sym_args] = sym_args,
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
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_string_content_repeat1] = aux_sym_string_content_repeat1,
  [aux_sym_sequence_definition_repeat1] = aux_sym_sequence_definition_repeat1,
  [aux_sym_log_repeat1] = aux_sym_log_repeat1,
  [aux_sym_property_repeat1] = aux_sym_property_repeat1,
  [aux_sym_iterate_repeat1] = aux_sym_iterate_repeat1,
  [aux_sym_args_repeat1] = aux_sym_args_repeat1,
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_content_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
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
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
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
  [anon_sym_LTpayloadFactory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHpayloadFactory_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_media_DASHtype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_json] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTformat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHformat_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTargs_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTargs_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTarg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_value] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_expression] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHargs_GT] = {
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
  [aux_sym_value_token1] = {
    .visible = false,
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
  [anon_sym_DOLLAR_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
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
  [sym_payload_factory] = {
    .visible = true,
    .named = true,
  },
  [sym_media_type] = {
    .visible = true,
    .named = true,
  },
  [sym_format] = {
    .visible = true,
    .named = true,
  },
  [sym_args] = {
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
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_content_repeat1] = {
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
  [aux_sym_args_repeat1] = {
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
  field_args = 1,
  field_attachPath = 2,
  field_blocking = 3,
  field_complete_condition = 4,
  field_continueParent = 5,
  field_correlateOn = 6,
  field_else = 7,
  field_endpoint = 8,
  field_endpoint_reference = 9,
  field_endpoint_type = 10,
  field_expression = 11,
  field_format = 12,
  field_id = 13,
  field_key = 14,
  field_level = 15,
  field_max = 16,
  field_media_type = 17,
  field_message_count = 18,
  field_min = 19,
  field_name = 20,
  field_number = 21,
  field_on_complete = 22,
  field_preservePayload = 23,
  field_regex = 24,
  field_sequence = 25,
  field_sequential = 26,
  field_soapAction = 27,
  field_source = 28,
  field_target = 29,
  field_then = 30,
  field_timeout = 31,
  field_to = 32,
  field_value = 33,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
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
  [field_format] = "format",
  [field_id] = "id",
  [field_key] = "key",
  [field_level] = "level",
  [field_max] = "max",
  [field_media_type] = "media_type",
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
  [47] = {.index = 95, .length = 3},
  [48] = {.index = 98, .length = 2},
  [49] = {.index = 100, .length = 1},
  [50] = {.index = 101, .length = 2},
  [51] = {.index = 103, .length = 4},
  [52] = {.index = 107, .length = 1},
  [53] = {.index = 108, .length = 1},
  [54] = {.index = 109, .length = 1},
  [55] = {.index = 110, .length = 2},
  [56] = {.index = 112, .length = 7},
  [57] = {.index = 119, .length = 2},
  [58] = {.index = 121, .length = 6},
  [59] = {.index = 127, .length = 8},
  [60] = {.index = 135, .length = 6},
  [61] = {.index = 141, .length = 6},
  [62] = {.index = 147, .length = 6},
  [63] = {.index = 153, .length = 6},
  [64] = {.index = 159, .length = 11},
  [65] = {.index = 170, .length = 11},
  [66] = {.index = 181, .length = 11},
  [67] = {.index = 192, .length = 11},
  [68] = {.index = 203, .length = 11},
  [69] = {.index = 214, .length = 11},
  [70] = {.index = 225, .length = 16},
  [71] = {.index = 241, .length = 16},
  [72] = {.index = 257, .length = 16},
  [73] = {.index = 273, .length = 16},
  [74] = {.index = 289, .length = 21},
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
    {field_args, 4},
    {field_format, 3},
    {field_media_type, 1},
  [98] =
    {field_endpoint_type, 3},
    {field_name, 1},
  [100] =
    {field_regex, 5},
  [101] =
    {field_max, 2},
    {field_min, 1},
  [103] =
    {field_complete_condition, 4},
    {field_correlateOn, 3},
    {field_id, 1},
    {field_on_complete, 5},
  [107] =
    {field_sequence, 2},
  [108] =
    {field_value, 2},
  [109] =
    {field_then, 7},
  [110] =
    {field_key, 0},
    {field_value, 2},
  [112] =
    {field_expression, 1},
    {field_sequence, 2},
    {field_sequence, 3},
    {field_sequence, 4},
    {field_sequence, 5},
    {field_sequence, 6},
    {field_sequence, 8},
  [119] =
    {field_else, 8},
    {field_then, 7},
  [121] =
    {field_expression, 1},
    {field_sequence, 2},
    {field_sequence, 3},
    {field_sequence, 4},
    {field_sequence, 5},
    {field_sequence, 6},
  [127] =
    {field_expression, 1},
    {field_id, 2},
    {field_sequence, 3},
    {field_sequence, 4},
    {field_sequence, 5},
    {field_sequence, 6},
    {field_sequence, 7},
    {field_sequence, 9},
  [135] =
    {field_sequence, 1},
    {field_sequence, 2},
    {field_sequence, 3},
    {field_sequence, 4},
    {field_sequence, 5},
    {field_sequence, 7},
  [141] =
    {field_sequence, 7},
    {field_to, 1},
    {field_to, 2},
    {field_to, 3},
    {field_to, 4},
    {field_to, 5},
  [147] =
    {field_sequence, 7},
    {field_soapAction, 1},
    {field_soapAction, 2},
    {field_soapAction, 3},
    {field_soapAction, 4},
    {field_soapAction, 5},
  [153] =
    {field_endpoint, 1},
    {field_endpoint, 2},
    {field_endpoint, 3},
    {field_endpoint, 4},
    {field_endpoint, 5},
    {field_sequence, 7},
  [159] =
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
  [170] =
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
  [181] =
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
  [192] =
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
  [203] =
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
  [214] =
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
  [225] =
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
  [241] =
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
  [257] =
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
  [273] =
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
  [289] =
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
  [208] = 80,
  [209] = 209,
  [210] = 210,
  [211] = 211,
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
  [694] = 694,
  [695] = 695,
  [696] = 696,
  [697] = 697,
  [698] = 698,
  [699] = 699,
  [700] = 700,
  [701] = 701,
  [702] = 702,
  [703] = 703,
  [704] = 704,
  [705] = 705,
  [706] = 706,
  [707] = 707,
  [708] = 708,
  [709] = 709,
  [710] = 710,
  [711] = 711,
  [712] = 712,
  [713] = 713,
  [714] = 714,
  [715] = 715,
  [716] = 716,
  [717] = 717,
  [718] = 718,
  [719] = 719,
  [720] = 720,
  [721] = 721,
  [722] = 722,
  [723] = 723,
  [724] = 724,
  [725] = 725,
  [726] = 726,
  [727] = 727,
  [728] = 728,
  [729] = 729,
  [730] = 730,
  [731] = 731,
  [732] = 732,
  [733] = 733,
  [734] = 734,
  [735] = 735,
  [736] = 736,
  [737] = 737,
  [738] = 738,
  [739] = 739,
  [740] = 740,
  [741] = 741,
  [742] = 742,
  [743] = 743,
  [744] = 744,
  [745] = 745,
  [746] = 746,
  [747] = 747,
  [748] = 748,
  [749] = 749,
  [750] = 750,
  [751] = 751,
  [752] = 752,
  [753] = 753,
  [754] = 754,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(985);
      if (lookahead == '"') ADVANCE(992);
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(1738);
      if (lookahead == '(') ADVANCE(1703);
      if (lookahead == ')') ADVANCE(1216);
      if (lookahead == ',') ADVANCE(987);
      if (lookahead == '-') ADVANCE(980);
      if (lookahead == '.') ADVANCE(1700);
      if (lookahead == '/') ADVANCE(1696);
      if (lookahead == ':') ADVANCE(989);
      if (lookahead == '<') ADVANCE(3);
      if (lookahead == '=') ADVANCE(1024);
      if (lookahead == '>') ADVANCE(1012);
      if (lookahead == '?') ADVANCE(32);
      if (lookahead == '@') ADVANCE(1701);
      if (lookahead == 'B') ADVANCE(1286);
      if (lookahead == 'D') ADVANCE(1261);
      if (lookahead == 'F') ADVANCE(1273);
      if (lookahead == 'G') ADVANCE(1257);
      if (lookahead == 'H') ADVANCE(1258);
      if (lookahead == 'I') ADVANCE(1280);
      if (lookahead == 'L') ADVANCE(1283);
      if (lookahead == 'O') ADVANCE(1277);
      if (lookahead == 'P') ADVANCE(1249);
      if (lookahead == 'S') ADVANCE(1270);
      if (lookahead == '[') ADVANCE(990);
      if (lookahead == '\\') ADVANCE(979);
      if (lookahead == ']') ADVANCE(991);
      if (lookahead == 'a') ADVANCE(1348);
      if (lookahead == 'b') ADVANCE(1313);
      if (lookahead == 'c') ADVANCE(1400);
      if (lookahead == 'd') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(1473);
      if (lookahead == 'f') ADVANCE(1307);
      if (lookahead == 'g') ADVANCE(1378);
      if (lookahead == 'h') ADVANCE(1379);
      if (lookahead == 'i') ADVANCE(1366);
      if (lookahead == 'j') ADVANCE(1616);
      if (lookahead == 'k') ADVANCE(1380);
      if (lookahead == 'l') ADVANCE(1308);
      if (lookahead == 'm') ADVANCE(1315);
      if (lookahead == 'n') ADVANCE(1310);
      if (lookahead == 'o') ADVANCE(1572);
      if (lookahead == 'p') ADVANCE(1317);
      if (lookahead == 'r') ADVANCE(1381);
      if (lookahead == 's') ADVANCE(1354);
      if (lookahead == 't') ADVANCE(1543);
      if (lookahead == 'u') ADVANCE(1517);
      if (lookahead == 'v') ADVANCE(1316);
      if (lookahead == 'x') ADVANCE(1493);
      if (lookahead == '{') ADVANCE(986);
      if (lookahead == '}') ADVANCE(988);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(984)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1685);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '"') ADVANCE(992);
      if (lookahead == '<') ADVANCE(993);
      if (lookahead == '\\') ADVANCE(979);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(999);
      if (lookahead != 0) ADVANCE(1001);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '/') ADVANCE(206);
      if (lookahead == '?') ADVANCE(961);
      if (lookahead == 'a') ADVANCE(414);
      if (lookahead == 'c') ADVANCE(174);
      if (lookahead == 'd') ADVANCE(922);
      if (lookahead == 'e') ADVANCE(502);
      if (lookahead == 'f') ADVANCE(445);
      if (lookahead == 'h') ADVANCE(863);
      if (lookahead == 'i') ADVANCE(583);
      if (lookahead == 'k') ADVANCE(294);
      if (lookahead == 'l') ADVANCE(639);
      if (lookahead == 'm') ADVANCE(172);
      if (lookahead == 'o') ADVANCE(569);
      if (lookahead == 'p') ADVANCE(175);
      if (lookahead == 'r') ADVANCE(295);
      if (lookahead == 's') ADVANCE(296);
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '/') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(758);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == 'a') ADVANCE(782);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(992);
      if (lookahead == '$') ADVANCE(171);
      if (lookahead == ')') ADVANCE(1216);
      if (lookahead == '.') ADVANCE(1700);
      if (lookahead == '/') ADVANCE(1695);
      if (lookahead == '<') ADVANCE(4);
      if (lookahead == '@') ADVANCE(1701);
      if (lookahead == 'b') ADVANCE(1314);
      if (lookahead == 'c') ADVANCE(1401);
      if (lookahead == 'd') ADVANCE(1541);
      if (lookahead == 'e') ADVANCE(1474);
      if (lookahead == 'f') ADVANCE(1335);
      if (lookahead == 'g') ADVANCE(1402);
      if (lookahead == 'i') ADVANCE(1366);
      if (lookahead == 'j') ADVANCE(1629);
      if (lookahead == 'k') ADVANCE(1380);
      if (lookahead == 'l') ADVANCE(1309);
      if (lookahead == 'n') ADVANCE(1311);
      if (lookahead == 'p') ADVANCE(1557);
      if (lookahead == 'r') ADVANCE(1542);
      if (lookahead == 's') ADVANCE(1632);
      if (lookahead == 't') ADVANCE(1606);
      if (lookahead == 'u') ADVANCE(1518);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(992);
      if (lookahead == '\'') ADVANCE(1738);
      if (lookahead == ')') ADVANCE(1216);
      if (lookahead == '-') ADVANCE(980);
      if (lookahead == '.') ADVANCE(1699);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '>') ADVANCE(1012);
      if (lookahead == '?') ADVANCE(32);
      if (lookahead == 'B') ADVANCE(143);
      if (lookahead == 'D') ADVANCE(108);
      if (lookahead == 'F') ADVANCE(130);
      if (lookahead == 'G') ADVANCE(104);
      if (lookahead == 'H') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(136);
      if (lookahead == 'L') ADVANCE(139);
      if (lookahead == 'O') ADVANCE(133);
      if (lookahead == 'P') ADVANCE(80);
      if (lookahead == 'S') ADVANCE(126);
      if (lookahead == '[') ADVANCE(990);
      if (lookahead == ']') ADVANCE(991);
      if (lookahead == 'a') ADVANCE(263);
      if (lookahead == 'b') ADVANCE(522);
      if (lookahead == 'c') ADVANCE(656);
      if (lookahead == 'd') ADVANCE(310);
      if (lookahead == 'e') ADVANCE(574);
      if (lookahead == 'f') ADVANCE(173);
      if (lookahead == 'g') ADVANCE(357);
      if (lookahead == 'h') ADVANCE(381);
      if (lookahead == 'i') ADVANCE(273);
      if (lookahead == 'j') ADVANCE(832);
      if (lookahead == 'l') ADVANCE(327);
      if (lookahead == 'm') ADVANCE(179);
      if (lookahead == 'n') ADVANCE(213);
      if (lookahead == 'o') ADVANCE(706);
      if (lookahead == 'p') ADVANCE(199);
      if (lookahead == 'r') ADVANCE(311);
      if (lookahead == 's') ADVANCE(261);
      if (lookahead == 't') ADVANCE(638);
      if (lookahead == 'u') ADVANCE(761);
      if (lookahead == 'v') ADVANCE(198);
      if (lookahead == 'x') ADVANCE(556);
      if (lookahead == '{') ADVANCE(986);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1685);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(992);
      if (lookahead == '<') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == '<') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(936);
      if (lookahead == 'f') ADVANCE(937);
      if (lookahead == 'h') ADVANCE(393);
      if (lookahead == 's') ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(1691);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(1694);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(1215);
      END_STATE();
    case 13:
      if (lookahead == '(') ADVANCE(1737);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(983);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(29);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(19);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(867);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(44);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(880);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(929);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(1747);
      if (lookahead == 'a') ADVANCE(960);
      if (lookahead == 'b') ADVANCE(636);
      if (lookahead == 'e') ADVANCE(568);
      if (lookahead == 'f') ADVANCE(921);
      if (lookahead == 'h') ADVANCE(293);
      if (lookahead == 't') ADVANCE(739);
      if (lookahead == 'u') ADVANCE(740);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(982);
      END_STATE();
    case 24:
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '>') ADVANCE(1097);
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(53);
      END_STATE();
    case 26:
      if (lookahead == '1') ADVANCE(23);
      if (lookahead == 'U') ADVANCE(167);
      END_STATE();
    case 27:
      if (lookahead == '2') ADVANCE(1741);
      END_STATE();
    case 28:
      if (lookahead == '2') ADVANCE(1027);
      END_STATE();
    case 29:
      if (lookahead == '8') ADVANCE(11);
      END_STATE();
    case 30:
      if (lookahead == '<') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1683);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(1020);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(1688);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(1019);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(1134);
      END_STATE();
    case 35:
      if (lookahead == '>') ADVANCE(1132);
      END_STATE();
    case 36:
      if (lookahead == '>') ADVANCE(1104);
      END_STATE();
    case 37:
      if (lookahead == '>') ADVANCE(1073);
      END_STATE();
    case 38:
      if (lookahead == '>') ADVANCE(1135);
      END_STATE();
    case 39:
      if (lookahead == '>') ADVANCE(1143);
      END_STATE();
    case 40:
      if (lookahead == '>') ADVANCE(1017);
      END_STATE();
    case 41:
      if (lookahead == '>') ADVANCE(1133);
      END_STATE();
    case 42:
      if (lookahead == '>') ADVANCE(1096);
      END_STATE();
    case 43:
      if (lookahead == '>') ADVANCE(1015);
      END_STATE();
    case 44:
      if (lookahead == '>') ADVANCE(1009);
      END_STATE();
    case 45:
      if (lookahead == '>') ADVANCE(1081);
      END_STATE();
    case 46:
      if (lookahead == '>') ADVANCE(1095);
      END_STATE();
    case 47:
      if (lookahead == '>') ADVANCE(1120);
      END_STATE();
    case 48:
      if (lookahead == '>') ADVANCE(1175);
      END_STATE();
    case 49:
      if (lookahead == '>') ADVANCE(1077);
      END_STATE();
    case 50:
      if (lookahead == '>') ADVANCE(1086);
      END_STATE();
    case 51:
      if (lookahead == '>') ADVANCE(1176);
      END_STATE();
    case 52:
      if (lookahead == '>') ADVANCE(1193);
      END_STATE();
    case 53:
      if (lookahead == '>') ADVANCE(1014);
      END_STATE();
    case 54:
      if (lookahead == '>') ADVANCE(1194);
      END_STATE();
    case 55:
      if (lookahead == '>') ADVANCE(1141);
      END_STATE();
    case 56:
      if (lookahead == '>') ADVANCE(1013);
      END_STATE();
    case 57:
      if (lookahead == '>') ADVANCE(1084);
      END_STATE();
    case 58:
      if (lookahead == '>') ADVANCE(1191);
      END_STATE();
    case 59:
      if (lookahead == '>') ADVANCE(1181);
      END_STATE();
    case 60:
      if (lookahead == '>') ADVANCE(1192);
      END_STATE();
    case 61:
      if (lookahead == '>') ADVANCE(1125);
      END_STATE();
    case 62:
      if (lookahead == '>') ADVANCE(1182);
      END_STATE();
    case 63:
      if (lookahead == '>') ADVANCE(1195);
      END_STATE();
    case 64:
      if (lookahead == '>') ADVANCE(1088);
      END_STATE();
    case 65:
      if (lookahead == '>') ADVANCE(1202);
      END_STATE();
    case 66:
      if (lookahead == '>') ADVANCE(1185);
      END_STATE();
    case 67:
      if (lookahead == '>') ADVANCE(1189);
      END_STATE();
    case 68:
      if (lookahead == '>') ADVANCE(1186);
      END_STATE();
    case 69:
      if (lookahead == '>') ADVANCE(1190);
      END_STATE();
    case 70:
      if (lookahead == '>') ADVANCE(1183);
      END_STATE();
    case 71:
      if (lookahead == '>') ADVANCE(1184);
      END_STATE();
    case 72:
      if (lookahead == '>') ADVANCE(1177);
      END_STATE();
    case 73:
      if (lookahead == '>') ADVANCE(1187);
      END_STATE();
    case 74:
      if (lookahead == '>') ADVANCE(1123);
      END_STATE();
    case 75:
      if (lookahead == '>') ADVANCE(1178);
      END_STATE();
    case 76:
      if (lookahead == '>') ADVANCE(1188);
      END_STATE();
    case 77:
      if (lookahead == '>') ADVANCE(1179);
      END_STATE();
    case 78:
      if (lookahead == '>') ADVANCE(1180);
      END_STATE();
    case 79:
      if (lookahead == 'A') ADVANCE(97);
      END_STATE();
    case 80:
      if (lookahead == 'A') ADVANCE(166);
      if (lookahead == 'O') ADVANCE(156);
      if (lookahead == 'U') ADVANCE(162);
      END_STATE();
    case 81:
      if (lookahead == 'A') ADVANCE(135);
      END_STATE();
    case 82:
      if (lookahead == 'A') ADVANCE(267);
      END_STATE();
    case 83:
      if (lookahead == 'A') ADVANCE(164);
      END_STATE();
    case 84:
      if (lookahead == 'A') ADVANCE(266);
      END_STATE();
    case 85:
      if (lookahead == 'A') ADVANCE(268);
      END_STATE();
    case 86:
      if (lookahead == 'B') ADVANCE(301);
      END_STATE();
    case 87:
      if (lookahead == 'B') ADVANCE(131);
      END_STATE();
    case 88:
      if (lookahead == 'B') ADVANCE(407);
      END_STATE();
    case 89:
      if (lookahead == 'C') ADVANCE(125);
      END_STATE();
    case 90:
      if (lookahead == 'C') ADVANCE(698);
      END_STATE();
    case 91:
      if (lookahead == 'C') ADVANCE(664);
      END_STATE();
    case 92:
      if (lookahead == 'C') ADVANCE(652);
      END_STATE();
    case 93:
      if (lookahead == 'C') ADVANCE(666);
      END_STATE();
    case 94:
      if (lookahead == 'C') ADVANCE(673);
      END_STATE();
    case 95:
      if (lookahead == 'C') ADVANCE(697);
      END_STATE();
    case 96:
      if (lookahead == 'C') ADVANCE(700);
      END_STATE();
    case 97:
      if (lookahead == 'D') ADVANCE(1155);
      END_STATE();
    case 98:
      if (lookahead == 'D') ADVANCE(346);
      END_STATE();
    case 99:
      if (lookahead == 'D') ADVANCE(380);
      END_STATE();
    case 100:
      if (lookahead == 'D') ADVANCE(944);
      END_STATE();
    case 101:
      if (lookahead == 'D') ADVANCE(946);
      END_STATE();
    case 102:
      if (lookahead == 'D') ADVANCE(948);
      END_STATE();
    case 103:
      if (lookahead == 'D') ADVANCE(949);
      END_STATE();
    case 104:
      if (lookahead == 'E') ADVANCE(160);
      END_STATE();
    case 105:
      if (lookahead == 'E') ADVANCE(1153);
      END_STATE();
    case 106:
      if (lookahead == 'E') ADVANCE(1058);
      END_STATE();
    case 107:
      if (lookahead == 'E') ADVANCE(79);
      END_STATE();
    case 108:
      if (lookahead == 'E') ADVANCE(132);
      if (lookahead == 'O') ADVANCE(170);
      END_STATE();
    case 109:
      if (lookahead == 'E') ADVANCE(124);
      END_STATE();
    case 110:
      if (lookahead == 'E') ADVANCE(151);
      END_STATE();
    case 111:
      if (lookahead == 'E') ADVANCE(81);
      END_STATE();
    case 112:
      if (lookahead == 'E') ADVANCE(169);
      END_STATE();
    case 113:
      if (lookahead == 'F') ADVANCE(15);
      END_STATE();
    case 114:
      if (lookahead == 'F') ADVANCE(187);
      END_STATE();
    case 115:
      if (lookahead == 'F') ADVANCE(651);
      END_STATE();
    case 116:
      if (lookahead == 'F') ADVANCE(212);
      END_STATE();
    case 117:
      if (lookahead == 'F') ADVANCE(227);
      END_STATE();
    case 118:
      if (lookahead == 'F') ADVANCE(229);
      END_STATE();
    case 119:
      if (lookahead == 'F') ADVANCE(230);
      END_STATE();
    case 120:
      if (lookahead == 'F') ADVANCE(231);
      END_STATE();
    case 121:
      if (lookahead == 'F') ADVANCE(702);
      END_STATE();
    case 122:
      if (lookahead == 'G') ADVANCE(1062);
      END_STATE();
    case 123:
      if (lookahead == 'G') ADVANCE(1052);
      END_STATE();
    case 124:
      if (lookahead == 'G') ADVANCE(110);
      END_STATE();
    case 125:
      if (lookahead == 'H') ADVANCE(1159);
      END_STATE();
    case 126:
      if (lookahead == 'H') ADVANCE(140);
      if (lookahead == 'T') ADVANCE(152);
      END_STATE();
    case 127:
      if (lookahead == 'I') ADVANCE(138);
      END_STATE();
    case 128:
      if (lookahead == 'I') ADVANCE(144);
      END_STATE();
    case 129:
      if (lookahead == 'L') ADVANCE(111);
      END_STATE();
    case 130:
      if (lookahead == 'L') ADVANCE(141);
      END_STATE();
    case 131:
      if (lookahead == 'L') ADVANCE(106);
      END_STATE();
    case 132:
      if (lookahead == 'L') ADVANCE(112);
      END_STATE();
    case 133:
      if (lookahead == 'M') ADVANCE(1066);
      if (lookahead == 'P') ADVANCE(161);
      END_STATE();
    case 134:
      if (lookahead == 'N') ADVANCE(122);
      END_STATE();
    case 135:
      if (lookahead == 'N') ADVANCE(1056);
      END_STATE();
    case 136:
      if (lookahead == 'N') ADVANCE(168);
      END_STATE();
    case 137:
      if (lookahead == 'N') ADVANCE(154);
      END_STATE();
    case 138:
      if (lookahead == 'N') ADVANCE(123);
      END_STATE();
    case 139:
      if (lookahead == 'O') ADVANCE(134);
      END_STATE();
    case 140:
      if (lookahead == 'O') ADVANCE(153);
      END_STATE();
    case 141:
      if (lookahead == 'O') ADVANCE(83);
      END_STATE();
    case 142:
      if (lookahead == 'O') ADVANCE(129);
      END_STATE();
    case 143:
      if (lookahead == 'O') ADVANCE(142);
      END_STATE();
    case 144:
      if (lookahead == 'O') ADVANCE(137);
      END_STATE();
    case 145:
      if (lookahead == 'O') ADVANCE(618);
      END_STATE();
    case 146:
      if (lookahead == 'O') ADVANCE(572);
      END_STATE();
    case 147:
      if (lookahead == 'O') ADVANCE(627);
      END_STATE();
    case 148:
      if (lookahead == 'P') ADVANCE(221);
      END_STATE();
    case 149:
      if (lookahead == 'P') ADVANCE(236);
      END_STATE();
    case 150:
      if (lookahead == 'P') ADVANCE(205);
      END_STATE();
    case 151:
      if (lookahead == 'R') ADVANCE(1054);
      END_STATE();
    case 152:
      if (lookahead == 'R') ADVANCE(127);
      END_STATE();
    case 153:
      if (lookahead == 'R') ADVANCE(165);
      END_STATE();
    case 154:
      if (lookahead == 'S') ADVANCE(1157);
      END_STATE();
    case 155:
      if (lookahead == 'S') ADVANCE(941);
      END_STATE();
    case 156:
      if (lookahead == 'S') ADVANCE(163);
      END_STATE();
    case 157:
      if (lookahead == 'S') ADVANCE(943);
      END_STATE();
    case 158:
      if (lookahead == 'S') ADVANCE(945);
      END_STATE();
    case 159:
      if (lookahead == 'S') ADVANCE(947);
      END_STATE();
    case 160:
      if (lookahead == 'T') ADVANCE(1147);
      END_STATE();
    case 161:
      if (lookahead == 'T') ADVANCE(128);
      END_STATE();
    case 162:
      if (lookahead == 'T') ADVANCE(1151);
      END_STATE();
    case 163:
      if (lookahead == 'T') ADVANCE(1149);
      END_STATE();
    case 164:
      if (lookahead == 'T') ADVANCE(1060);
      END_STATE();
    case 165:
      if (lookahead == 'T') ADVANCE(1064);
      END_STATE();
    case 166:
      if (lookahead == 'T') ADVANCE(89);
      END_STATE();
    case 167:
      if (lookahead == 'T') ADVANCE(113);
      END_STATE();
    case 168:
      if (lookahead == 'T') ADVANCE(109);
      END_STATE();
    case 169:
      if (lookahead == 'T') ADVANCE(105);
      END_STATE();
    case 170:
      if (lookahead == 'U') ADVANCE(87);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(960);
      if (lookahead == 'b') ADVANCE(636);
      if (lookahead == 'e') ADVANCE(568);
      if (lookahead == 'f') ADVANCE(921);
      if (lookahead == 'h') ADVANCE(293);
      if (lookahead == 't') ADVANCE(739);
      if (lookahead == 'u') ADVANCE(740);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(742);
      if (lookahead == 'e') ADVANCE(813);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(537);
      if (lookahead == 'i') ADVANCE(531);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(515);
      if (lookahead == 'o') ADVANCE(552);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(972);
      if (lookahead == 'r') ADVANCE(637);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(247);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(412);
      if (lookahead == 'b') ADVANCE(394);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(243);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(962);
      if (lookahead == 'e') ADVANCE(284);
      if (lookahead == 'i') ADVANCE(575);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(282);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(249);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(849);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(755);
      if (lookahead == 'h') ADVANCE(329);
      if (lookahead == 'i') ADVANCE(555);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(278);
      END_STATE();
    case 186:
      if (lookahead == 'a') ADVANCE(973);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(253);
      END_STATE();
    case 188:
      if (lookahead == 'a') ADVANCE(934);
      END_STATE();
    case 189:
      if (lookahead == 'a') ADVANCE(877);
      END_STATE();
    case 190:
      if (lookahead == 'a') ADVANCE(457);
      END_STATE();
    case 191:
      if (lookahead == 'a') ADVANCE(513);
      END_STATE();
    case 192:
      if (lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 193:
      if (lookahead == 'a') ADVANCE(274);
      END_STATE();
    case 194:
      if (lookahead == 'a') ADVANCE(727);
      if (lookahead == 'u') ADVANCE(786);
      END_STATE();
    case 195:
      if (lookahead == 'a') ADVANCE(723);
      END_STATE();
    case 196:
      if (lookahead == 'a') ADVANCE(506);
      END_STATE();
    case 197:
      if (lookahead == 'a') ADVANCE(277);
      END_STATE();
    case 198:
      if (lookahead == 'a') ADVANCE(536);
      if (lookahead == 'e') ADVANCE(789);
      END_STATE();
    case 199:
      if (lookahead == 'a') ADVANCE(855);
      if (lookahead == 'o') ADVANCE(820);
      if (lookahead == 'r') ADVANCE(384);
      if (lookahead == 'u') ADVANCE(856);
      END_STATE();
    case 200:
      if (lookahead == 'a') ADVANCE(511);
      END_STATE();
    case 201:
      if (lookahead == 'a') ADVANCE(752);
      END_STATE();
    case 202:
      if (lookahead == 'a') ADVANCE(873);
      END_STATE();
    case 203:
      if (lookahead == 'a') ADVANCE(598);
      if (lookahead == 'u') ADVANCE(314);
      END_STATE();
    case 204:
      if (lookahead == 'a') ADVANCE(767);
      END_STATE();
    case 205:
      if (lookahead == 'a') ADVANCE(875);
      END_STATE();
    case 206:
      if (lookahead == 'a') ADVANCE(433);
      if (lookahead == 'c') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(942);
      if (lookahead == 'e') ADVANCE(533);
      if (lookahead == 'f') ADVANCE(477);
      if (lookahead == 'h') ADVANCE(896);
      if (lookahead == 'i') ADVANCE(635);
      if (lookahead == 'l') ADVANCE(641);
      if (lookahead == 'm') ADVANCE(242);
      if (lookahead == 'o') ADVANCE(633);
      if (lookahead == 'p') ADVANCE(240);
      if (lookahead == 'r') ADVANCE(389);
      if (lookahead == 's') ADVANCE(371);
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 207:
      if (lookahead == 'a') ADVANCE(952);
      END_STATE();
    case 208:
      if (lookahead == 'a') ADVANCE(518);
      if (lookahead == 'o') ADVANCE(566);
      END_STATE();
    case 209:
      if (lookahead == 'a') ADVANCE(557);
      END_STATE();
    case 210:
      if (lookahead == 'a') ADVANCE(869);
      END_STATE();
    case 211:
      if (lookahead == 'a') ADVANCE(974);
      END_STATE();
    case 212:
      if (lookahead == 'a') ADVANCE(458);
      END_STATE();
    case 213:
      if (lookahead == 'a') ADVANCE(558);
      if (lookahead == 'e') ADVANCE(956);
      if (lookahead == 'u') ADVANCE(524);
      END_STATE();
    case 214:
      if (lookahead == 'a') ADVANCE(884);
      END_STATE();
    case 215:
      if (lookahead == 'a') ADVANCE(256);
      END_STATE();
    case 216:
      if (lookahead == 'a') ADVANCE(428);
      END_STATE();
    case 217:
      if (lookahead == 'a') ADVANCE(886);
      END_STATE();
    case 218:
      if (lookahead == 'a') ADVANCE(887);
      END_STATE();
    case 219:
      if (lookahead == 'a') ADVANCE(888);
      END_STATE();
    case 220:
      if (lookahead == 'a') ADVANCE(890);
      END_STATE();
    case 221:
      if (lookahead == 'a') ADVANCE(780);
      END_STATE();
    case 222:
      if (lookahead == 'a') ADVANCE(893);
      END_STATE();
    case 223:
      if (lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 224:
      if (lookahead == 'a') ADVANCE(287);
      END_STATE();
    case 225:
      if (lookahead == 'a') ADVANCE(783);
      if (lookahead == 'h') ADVANCE(331);
      if (lookahead == 'i') ADVANCE(561);
      END_STATE();
    case 226:
      if (lookahead == 'a') ADVANCE(909);
      END_STATE();
    case 227:
      if (lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 228:
      if (lookahead == 'a') ADVANCE(911);
      END_STATE();
    case 229:
      if (lookahead == 'a') ADVANCE(492);
      END_STATE();
    case 230:
      if (lookahead == 'a') ADVANCE(264);
      END_STATE();
    case 231:
      if (lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 232:
      if (lookahead == 'a') ADVANCE(914);
      END_STATE();
    case 233:
      if (lookahead == 'a') ADVANCE(915);
      END_STATE();
    case 234:
      if (lookahead == 'a') ADVANCE(916);
      END_STATE();
    case 235:
      if (lookahead == 'a') ADVANCE(917);
      END_STATE();
    case 236:
      if (lookahead == 'a') ADVANCE(977);
      END_STATE();
    case 237:
      if (lookahead == 'a') ADVANCE(291);
      END_STATE();
    case 238:
      if (lookahead == 'a') ADVANCE(491);
      END_STATE();
    case 239:
      if (lookahead == 'a') ADVANCE(958);
      END_STATE();
    case 240:
      if (lookahead == 'a') ADVANCE(978);
      if (lookahead == 'r') ADVANCE(693);
      END_STATE();
    case 241:
      if (lookahead == 'a') ADVANCE(548);
      END_STATE();
    case 242:
      if (lookahead == 'a') ADVANCE(804);
      END_STATE();
    case 243:
      if (lookahead == 'b') ADVANCE(529);
      END_STATE();
    case 244:
      if (lookahead == 'b') ADVANCE(530);
      END_STATE();
    case 245:
      if (lookahead == 'b') ADVANCE(352);
      END_STATE();
    case 246:
      if (lookahead == 'c') ADVANCE(1745);
      END_STATE();
    case 247:
      if (lookahead == 'c') ADVANCE(435);
      END_STATE();
    case 248:
      if (lookahead == 'c') ADVANCE(500);
      END_STATE();
    case 249:
      if (lookahead == 'c') ADVANCE(442);
      END_STATE();
    case 250:
      if (lookahead == 'c') ADVANCE(438);
      if (lookahead == 't') ADVANCE(362);
      END_STATE();
    case 251:
      if (lookahead == 'c') ADVANCE(440);
      END_STATE();
    case 252:
      if (lookahead == 'c') ADVANCE(517);
      END_STATE();
    case 253:
      if (lookahead == 'c') ADVANCE(901);
      END_STATE();
    case 254:
      if (lookahead == 'c') ADVANCE(299);
      END_STATE();
    case 255:
      if (lookahead == 'c') ADVANCE(359);
      END_STATE();
    case 256:
      if (lookahead == 'c') ADVANCE(306);
      END_STATE();
    case 257:
      if (lookahead == 'c') ADVANCE(321);
      END_STATE();
    case 258:
      if (lookahead == 'c') ADVANCE(323);
      if (lookahead == 't') ADVANCE(470);
      END_STATE();
    case 259:
      if (lookahead == 'c') ADVANCE(204);
      END_STATE();
    case 260:
      if (lookahead == 'c') ADVANCE(649);
      if (lookahead == 'd') ADVANCE(721);
      if (lookahead == 'v') ADVANCE(1040);
      END_STATE();
    case 261:
      if (lookahead == 'c') ADVANCE(683);
      if (lookahead == 'e') ADVANCE(738);
      if (lookahead == 'o') ADVANCE(194);
      if (lookahead == 'y') ADVANCE(602);
      END_STATE();
    case 262:
      if (lookahead == 'c') ADVANCE(904);
      END_STATE();
    case 263:
      if (lookahead == 'c') ADVANCE(902);
      if (lookahead == 't') ADVANCE(881);
      if (lookahead == 'x') ADVANCE(456);
      END_STATE();
    case 264:
      if (lookahead == 'c') ADVANCE(905);
      END_STATE();
    case 265:
      if (lookahead == 'c') ADVANCE(906);
      END_STATE();
    case 266:
      if (lookahead == 'c') ADVANCE(910);
      END_STATE();
    case 267:
      if (lookahead == 'c') ADVANCE(912);
      END_STATE();
    case 268:
      if (lookahead == 'c') ADVANCE(913);
      END_STATE();
    case 269:
      if (lookahead == 'd') ADVANCE(1016);
      END_STATE();
    case 270:
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead == 's') ADVANCE(298);
      END_STATE();
    case 271:
      if (lookahead == 'd') ADVANCE(145);
      END_STATE();
    case 272:
      if (lookahead == 'd') ADVANCE(1715);
      END_STATE();
    case 273:
      if (lookahead == 'd') ADVANCE(1219);
      END_STATE();
    case 274:
      if (lookahead == 'd') ADVANCE(1169);
      END_STATE();
    case 275:
      if (lookahead == 'd') ADVANCE(1145);
      END_STATE();
    case 276:
      if (lookahead == 'd') ADVANCE(1198);
      END_STATE();
    case 277:
      if (lookahead == 'd') ADVANCE(1109);
      END_STATE();
    case 278:
      if (lookahead == 'd') ADVANCE(114);
      END_STATE();
    case 279:
      if (lookahead == 'd') ADVANCE(708);
      END_STATE();
    case 280:
      if (lookahead == 'd') ADVANCE(965);
      END_STATE();
    case 281:
      if (lookahead == 'd') ADVANCE(40);
      END_STATE();
    case 282:
      if (lookahead == 'd') ADVANCE(343);
      END_STATE();
    case 283:
      if (lookahead == 'd') ADVANCE(341);
      END_STATE();
    case 284:
      if (lookahead == 'd') ADVANCE(461);
      if (lookahead == 't') ADVANCE(443);
      END_STATE();
    case 285:
      if (lookahead == 'd') ADVANCE(379);
      END_STATE();
    case 286:
      if (lookahead == 'd') ADVANCE(465);
      END_STATE();
    case 287:
      if (lookahead == 'd') ADVANCE(366);
      END_STATE();
    case 288:
      if (lookahead == 'd') ADVANCE(469);
      END_STATE();
    case 289:
      if (lookahead == 'd') ADVANCE(720);
      END_STATE();
    case 290:
      if (lookahead == 'd') ADVANCE(493);
      END_STATE();
    case 291:
      if (lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 292:
      if (lookahead == 'd') ADVANCE(147);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(964);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(827);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(586);
      if (lookahead == 'u') ADVANCE(812);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(1085);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(1011);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(1083);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(1718);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(1089);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(1124);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(1144);
      END_STATE();
    case 306:
      if (lookahead == 'e') ADVANCE(1720);
      END_STATE();
    case 307:
      if (lookahead == 'e') ADVANCE(1730);
      END_STATE();
    case 308:
      if (lookahead == 'e') ADVANCE(1711);
      END_STATE();
    case 309:
      if (lookahead == 'e') ADVANCE(1714);
      END_STATE();
    case 310:
      if (lookahead == 'e') ADVANCE(409);
      if (lookahead == 'i') ADVANCE(818);
      END_STATE();
    case 311:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 312:
      if (lookahead == 'e') ADVANCE(1042);
      END_STATE();
    case 313:
      if (lookahead == 'e') ADVANCE(1217);
      END_STATE();
    case 314:
      if (lookahead == 'e') ADVANCE(1003);
      END_STATE();
    case 315:
      if (lookahead == 'e') ADVANCE(1050);
      END_STATE();
    case 316:
      if (lookahead == 'e') ADVANCE(1005);
      END_STATE();
    case 317:
      if (lookahead == 'e') ADVANCE(1022);
      END_STATE();
    case 318:
      if (lookahead == 'e') ADVANCE(1100);
      END_STATE();
    case 319:
      if (lookahead == 'e') ADVANCE(1167);
      END_STATE();
    case 320:
      if (lookahead == 'e') ADVANCE(1048);
      END_STATE();
    case 321:
      if (lookahead == 'e') ADVANCE(1136);
      END_STATE();
    case 322:
      if (lookahead == 'e') ADVANCE(1036);
      END_STATE();
    case 323:
      if (lookahead == 'e') ADVANCE(1075);
      END_STATE();
    case 324:
      if (lookahead == 'e') ADVANCE(1225);
      END_STATE();
    case 325:
      if (lookahead == 'e') ADVANCE(955);
      END_STATE();
    case 326:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 327:
      if (lookahead == 'e') ADVANCE(953);
      END_STATE();
    case 328:
      if (lookahead == 'e') ADVANCE(963);
      if (lookahead == 'i') ADVANCE(822);
      END_STATE();
    case 329:
      if (lookahead == 'e') ADVANCE(585);
      END_STATE();
    case 330:
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == 'm') ADVANCE(182);
      END_STATE();
    case 331:
      if (lookahead == 'e') ADVANCE(593);
      END_STATE();
    case 332:
      if (lookahead == 'e') ADVANCE(850);
      END_STATE();
    case 333:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 334:
      if (lookahead == 'e') ADVANCE(588);
      END_STATE();
    case 335:
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == 'm') ADVANCE(189);
      END_STATE();
    case 336:
      if (lookahead == 'e') ADVANCE(550);
      END_STATE();
    case 337:
      if (lookahead == 'e') ADVANCE(430);
      END_STATE();
    case 338:
      if (lookahead == 'e') ADVANCE(807);
      END_STATE();
    case 339:
      if (lookahead == 'e') ADVANCE(589);
      END_STATE();
    case 340:
      if (lookahead == 'e') ADVANCE(544);
      END_STATE();
    case 341:
      if (lookahead == 'e') ADVANCE(821);
      END_STATE();
    case 342:
      if (lookahead == 'e') ADVANCE(640);
      END_STATE();
    case 343:
      if (lookahead == 'e') ADVANCE(744);
      END_STATE();
    case 344:
      if (lookahead == 'e') ADVANCE(745);
      END_STATE();
    case 345:
      if (lookahead == 'e') ADVANCE(757);
      END_STATE();
    case 346:
      if (lookahead == 'e') ADVANCE(520);
      END_STATE();
    case 347:
      if (lookahead == 'e') ADVANCE(766);
      END_STATE();
    case 348:
      if (lookahead == 'e') ADVANCE(590);
      END_STATE();
    case 349:
      if (lookahead == 'e') ADVANCE(765);
      END_STATE();
    case 350:
      if (lookahead == 'e') ADVANCE(597);
      END_STATE();
    case 351:
      if (lookahead == 'e') ADVANCE(599);
      END_STATE();
    case 352:
      if (lookahead == 'e') ADVANCE(747);
      END_STATE();
    case 353:
      if (lookahead == 'e') ADVANCE(770);
      END_STATE();
    case 354:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 355:
      if (lookahead == 'e') ADVANCE(621);
      END_STATE();
    case 356:
      if (lookahead == 'e') ADVANCE(748);
      END_STATE();
    case 357:
      if (lookahead == 'e') ADVANCE(854);
      if (lookahead == 'r') ADVANCE(644);
      END_STATE();
    case 358:
      if (lookahead == 'e') ADVANCE(510);
      END_STATE();
    case 359:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 360:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 361:
      if (lookahead == 'e') ADVANCE(749);
      END_STATE();
    case 362:
      if (lookahead == 'e') ADVANCE(773);
      END_STATE();
    case 363:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 364:
      if (lookahead == 'e') ADVANCE(584);
      END_STATE();
    case 365:
      if (lookahead == 'e') ADVANCE(785);
      END_STATE();
    case 366:
      if (lookahead == 'e') ADVANCE(769);
      END_STATE();
    case 367:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 368:
      if (lookahead == 'e') ADVANCE(607);
      END_STATE();
    case 369:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 370:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 371:
      if (lookahead == 'e') ADVANCE(587);
      if (lookahead == 'u') ADVANCE(846);
      END_STATE();
    case 372:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 373:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 374:
      if (lookahead == 'e') ADVANCE(817);
      END_STATE();
    case 375:
      if (lookahead == 'e') ADVANCE(754);
      END_STATE();
    case 376:
      if (lookahead == 'e') ADVANCE(559);
      END_STATE();
    case 377:
      if (lookahead == 'e') ADVANCE(620);
      END_STATE();
    case 378:
      if (lookahead == 'e') ADVANCE(878);
      END_STATE();
    case 379:
      if (lookahead == 'e') ADVANCE(823);
      END_STATE();
    case 380:
      if (lookahead == 'e') ADVANCE(534);
      END_STATE();
    case 381:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 382:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 383:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 384:
      if (lookahead == 'e') ADVANCE(833);
      END_STATE();
    case 385:
      if (lookahead == 'e') ADVANCE(908);
      END_STATE();
    case 386:
      if (lookahead == 'e') ADVANCE(891);
      END_STATE();
    case 387:
      if (lookahead == 'e') ADVANCE(892);
      END_STATE();
    case 388:
      if (lookahead == 'e') ADVANCE(895);
      END_STATE();
    case 389:
      if (lookahead == 'e') ADVANCE(829);
      END_STATE();
    case 390:
      if (lookahead == 'e') ADVANCE(694);
      END_STATE();
    case 391:
      if (lookahead == 'e') ADVANCE(836);
      END_STATE();
    case 392:
      if (lookahead == 'e') ADVANCE(788);
      END_STATE();
    case 393:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 394:
      if (lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 395:
      if (lookahead == 'e') ADVANCE(787);
      if (lookahead == 't') ADVANCE(472);
      END_STATE();
    case 396:
      if (lookahead == 'e') ADVANCE(431);
      END_STATE();
    case 397:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 398:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 399:
      if (lookahead == 'e') ADVANCE(628);
      END_STATE();
    case 400:
      if (lookahead == 'e') ADVANCE(919);
      END_STATE();
    case 401:
      if (lookahead == 'e') ADVANCE(630);
      END_STATE();
    case 402:
      if (lookahead == 'e') ADVANCE(632);
      END_STATE();
    case 403:
      if (lookahead == 'e') ADVANCE(634);
      END_STATE();
    case 404:
      if (lookahead == 'e') ADVANCE(847);
      END_STATE();
    case 405:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 406:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 407:
      if (lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 408:
      if (lookahead == 'e') ADVANCE(848);
      END_STATE();
    case 409:
      if (lookahead == 'f') ADVANCE(188);
      if (lookahead == 'l') ADVANCE(388);
      END_STATE();
    case 410:
      if (lookahead == 'f') ADVANCE(679);
      END_STATE();
    case 411:
      if (lookahead == 'f') ADVANCE(681);
      END_STATE();
    case 412:
      if (lookahead == 'f') ADVANCE(907);
      END_STATE();
    case 413:
      if (lookahead == 'f') ADVANCE(703);
      END_STATE();
    case 414:
      if (lookahead == 'g') ADVANCE(423);
      if (lookahead == 'r') ADVANCE(415);
      END_STATE();
    case 415:
      if (lookahead == 'g') ADVANCE(1099);
      END_STATE();
    case 416:
      if (lookahead == 'g') ADVANCE(1018);
      END_STATE();
    case 417:
      if (lookahead == 'g') ADVANCE(1098);
      END_STATE();
    case 418:
      if (lookahead == 'g') ADVANCE(1204);
      END_STATE();
    case 419:
      if (lookahead == 'g') ADVANCE(1692);
      END_STATE();
    case 420:
      if (lookahead == 'g') ADVANCE(33);
      END_STATE();
    case 421:
      if (lookahead == 'g') ADVANCE(328);
      if (lookahead == 'm') ADVANCE(674);
      END_STATE();
    case 422:
      if (lookahead == 'g') ADVANCE(811);
      END_STATE();
    case 423:
      if (lookahead == 'g') ADVANCE(760);
      END_STATE();
    case 424:
      if (lookahead == 'g') ADVANCE(806);
      END_STATE();
    case 425:
      if (lookahead == 'g') ADVANCE(332);
      END_STATE();
    case 426:
      if (lookahead == 'g') ADVANCE(868);
      END_STATE();
    case 427:
      if (lookahead == 'g') ADVANCE(378);
      END_STATE();
    case 428:
      if (lookahead == 'g') ADVANCE(370);
      END_STATE();
    case 429:
      if (lookahead == 'g') ADVANCE(771);
      if (lookahead == 'p') ADVANCE(345);
      END_STATE();
    case 430:
      if (lookahead == 'g') ADVANCE(218);
      END_STATE();
    case 431:
      if (lookahead == 'g') ADVANCE(220);
      END_STATE();
    case 432:
      if (lookahead == 'g') ADVANCE(792);
      END_STATE();
    case 433:
      if (lookahead == 'g') ADVANCE(432);
      if (lookahead == 'r') ADVANCE(422);
      END_STATE();
    case 434:
      if (lookahead == 'g') ADVANCE(802);
      END_STATE();
    case 435:
      if (lookahead == 'h') ADVANCE(1074);
      END_STATE();
    case 436:
      if (lookahead == 'h') ADVANCE(1725);
      END_STATE();
    case 437:
      if (lookahead == 'h') ADVANCE(1727);
      END_STATE();
    case 438:
      if (lookahead == 'h') ADVANCE(1173);
      END_STATE();
    case 439:
      if (lookahead == 'h') ADVANCE(1079);
      END_STATE();
    case 440:
      if (lookahead == 'h') ADVANCE(150);
      END_STATE();
    case 441:
      if (lookahead == 'h') ADVANCE(1111);
      END_STATE();
    case 442:
      if (lookahead == 'h') ADVANCE(49);
      END_STATE();
    case 443:
      if (lookahead == 'h') ADVANCE(650);
      END_STATE();
    case 444:
      if (lookahead == 'i') ADVANCE(1719);
      END_STATE();
    case 445:
      if (lookahead == 'i') ADVANCE(514);
      if (lookahead == 'o') ADVANCE(741);
      END_STATE();
    case 446:
      if (lookahead == 'i') ADVANCE(865);
      END_STATE();
    case 447:
      if (lookahead == 'i') ADVANCE(553);
      END_STATE();
    case 448:
      if (lookahead == 'i') ADVANCE(805);
      END_STATE();
    case 449:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 450:
      if (lookahead == 'i') ADVANCE(272);
      END_STATE();
    case 451:
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 452:
      if (lookahead == 'i') ADVANCE(594);
      END_STATE();
    case 453:
      if (lookahead == 'i') ADVANCE(864);
      END_STATE();
    case 454:
      if (lookahead == 'i') ADVANCE(667);
      END_STATE();
    case 455:
      if (lookahead == 'i') ADVANCE(625);
      END_STATE();
    case 456:
      if (lookahead == 'i') ADVANCE(810);
      END_STATE();
    case 457:
      if (lookahead == 'i') ADVANCE(521);
      END_STATE();
    case 458:
      if (lookahead == 'i') ADVANCE(535);
      END_STATE();
    case 459:
      if (lookahead == 'i') ADVANCE(671);
      END_STATE();
    case 460:
      if (lookahead == 'i') ADVANCE(876);
      END_STATE();
    case 461:
      if (lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 462:
      if (lookahead == 'i') ADVANCE(338);
      if (lookahead == 'y') ADVANCE(98);
      END_STATE();
    case 463:
      if (lookahead == 'i') ADVANCE(623);
      END_STATE();
    case 464:
      if (lookahead == 'i') ADVANCE(595);
      END_STATE();
    case 465:
      if (lookahead == 'i') ADVANCE(596);
      END_STATE();
    case 466:
      if (lookahead == 'i') ADVANCE(605);
      END_STATE();
    case 467:
      if (lookahead == 'i') ADVANCE(350);
      END_STATE();
    case 468:
      if (lookahead == 'i') ADVANCE(655);
      END_STATE();
    case 469:
      if (lookahead == 'i') ADVANCE(899);
      END_STATE();
    case 470:
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 471:
      if (lookahead == 'i') ADVANCE(658);
      END_STATE();
    case 472:
      if (lookahead == 'i') ADVANCE(659);
      END_STATE();
    case 473:
      if (lookahead == 'i') ADVANCE(660);
      END_STATE();
    case 474:
      if (lookahead == 'i') ADVANCE(661);
      END_STATE();
    case 475:
      if (lookahead == 'i') ADVANCE(662);
      END_STATE();
    case 476:
      if (lookahead == 'i') ADVANCE(663);
      END_STATE();
    case 477:
      if (lookahead == 'i') ADVANCE(538);
      if (lookahead == 'o') ADVANCE(781);
      END_STATE();
    case 478:
      if (lookahead == 'i') ADVANCE(560);
      END_STATE();
    case 479:
      if (lookahead == 'i') ADVANCE(675);
      END_STATE();
    case 480:
      if (lookahead == 'i') ADVANCE(678);
      END_STATE();
    case 481:
      if (lookahead == 'i') ADVANCE(680);
      END_STATE();
    case 482:
      if (lookahead == 'i') ADVANCE(682);
      END_STATE();
    case 483:
      if (lookahead == 'i') ADVANCE(685);
      END_STATE();
    case 484:
      if (lookahead == 'i') ADVANCE(686);
      END_STATE();
    case 485:
      if (lookahead == 'i') ADVANCE(687);
      END_STATE();
    case 486:
      if (lookahead == 'i') ADVANCE(688);
      END_STATE();
    case 487:
      if (lookahead == 'i') ADVANCE(689);
      END_STATE();
    case 488:
      if (lookahead == 'i') ADVANCE(690);
      END_STATE();
    case 489:
      if (lookahead == 'i') ADVANCE(691);
      END_STATE();
    case 490:
      if (lookahead == 'i') ADVANCE(692);
      END_STATE();
    case 491:
      if (lookahead == 'i') ADVANCE(540);
      END_STATE();
    case 492:
      if (lookahead == 'i') ADVANCE(542);
      END_STATE();
    case 493:
      if (lookahead == 'i') ADVANCE(918);
      END_STATE();
    case 494:
      if (lookahead == 'i') ADVANCE(701);
      END_STATE();
    case 495:
      if (lookahead == 'i') ADVANCE(241);
      END_STATE();
    case 496:
      if (lookahead == 'i') ADVANCE(567);
      END_STATE();
    case 497:
      if (lookahead == 'i') ADVANCE(920);
      END_STATE();
    case 498:
      if (lookahead == 'i') ADVANCE(408);
      if (lookahead == 'y') ADVANCE(99);
      END_STATE();
    case 499:
      if (lookahead == 'k') ADVANCE(115);
      END_STATE();
    case 500:
      if (lookahead == 'k') ADVANCE(464);
      END_STATE();
    case 501:
      if (lookahead == 'k') ADVANCE(121);
      END_STATE();
    case 502:
      if (lookahead == 'l') ADVANCE(815);
      if (lookahead == 'n') ADVANCE(279);
      if (lookahead == 'r') ADVANCE(753);
      END_STATE();
    case 503:
      if (lookahead == 'l') ADVANCE(1744);
      END_STATE();
    case 504:
      if (lookahead == 'l') ADVANCE(1687);
      END_STATE();
    case 505:
      if (lookahead == 'l') ADVANCE(1072);
      END_STATE();
    case 506:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 507:
      if (lookahead == 'l') ADVANCE(1734);
      END_STATE();
    case 508:
      if (lookahead == 'l') ADVANCE(1090);
      END_STATE();
    case 509:
      if (lookahead == 'l') ADVANCE(1007);
      END_STATE();
    case 510:
      if (lookahead == 'l') ADVANCE(1221);
      END_STATE();
    case 511:
      if (lookahead == 'l') ADVANCE(1105);
      END_STATE();
    case 512:
      if (lookahead == 'l') ADVANCE(1223);
      END_STATE();
    case 513:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 514:
      if (lookahead == 'l') ADVANCE(897);
      END_STATE();
    case 515:
      if (lookahead == 'l') ADVANCE(505);
      END_STATE();
    case 516:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 517:
      if (lookahead == 'l') ADVANCE(467);
      END_STATE();
    case 518:
      if (lookahead == 'l') ADVANCE(516);
      END_STATE();
    case 519:
      if (lookahead == 'l') ADVANCE(665);
      END_STATE();
    case 520:
      if (lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 521:
      if (lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 522:
      if (lookahead == 'l') ADVANCE(646);
      END_STATE();
    case 523:
      if (lookahead == 'l') ADVANCE(385);
      END_STATE();
    case 524:
      if (lookahead == 'l') ADVANCE(509);
      END_STATE();
    case 525:
      if (lookahead == 'l') ADVANCE(512);
      END_STATE();
    case 526:
      if (lookahead == 'l') ADVANCE(858);
      END_STATE();
    case 527:
      if (lookahead == 'l') ADVANCE(348);
      END_STATE();
    case 528:
      if (lookahead == 'l') ADVANCE(859);
      END_STATE();
    case 529:
      if (lookahead == 'l') ADVANCE(308);
      END_STATE();
    case 530:
      if (lookahead == 'l') ADVANCE(309);
      END_STATE();
    case 531:
      if (lookahead == 'l') ADVANCE(312);
      END_STATE();
    case 532:
      if (lookahead == 'l') ADVANCE(324);
      END_STATE();
    case 533:
      if (lookahead == 'l') ADVANCE(819);
      if (lookahead == 'n') ADVANCE(289);
      if (lookahead == 'r') ADVANCE(796);
      END_STATE();
    case 534:
      if (lookahead == 'l') ADVANCE(211);
      END_STATE();
    case 535:
      if (lookahead == 'l') ADVANCE(939);
      END_STATE();
    case 536:
      if (lookahead == 'l') ADVANCE(931);
      END_STATE();
    case 537:
      if (lookahead == 'l') ADVANCE(825);
      if (lookahead == 'u') ADVANCE(526);
      END_STATE();
    case 538:
      if (lookahead == 'l') ADVANCE(903);
      END_STATE();
    case 539:
      if (lookahead == 'l') ADVANCE(677);
      END_STATE();
    case 540:
      if (lookahead == 'l') ADVANCE(223);
      END_STATE();
    case 541:
      if (lookahead == 'l') ADVANCE(386);
      END_STATE();
    case 542:
      if (lookahead == 'l') ADVANCE(940);
      END_STATE();
    case 543:
      if (lookahead == 'l') ADVANCE(387);
      END_STATE();
    case 544:
      if (lookahead == 'l') ADVANCE(219);
      END_STATE();
    case 545:
      if (lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 546:
      if (lookahead == 'l') ADVANCE(699);
      END_STATE();
    case 547:
      if (lookahead == 'l') ADVANCE(400);
      END_STATE();
    case 548:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 549:
      if (lookahead == 'm') ADVANCE(245);
      END_STATE();
    case 550:
      if (lookahead == 'm') ADVANCE(1038);
      END_STATE();
    case 551:
      if (lookahead == 'm') ADVANCE(1227);
      END_STATE();
    case 552:
      if (lookahead == 'm') ADVANCE(710);
      if (lookahead == 'r') ADVANCE(764);
      END_STATE();
    case 553:
      if (lookahead == 'm') ADVANCE(923);
      END_STATE();
    case 554:
      if (lookahead == 'm') ADVANCE(504);
      END_STATE();
    case 555:
      if (lookahead == 'm') ADVANCE(342);
      END_STATE();
    case 556:
      if (lookahead == 'm') ADVANCE(508);
      if (lookahead == 'p') ADVANCE(202);
      END_STATE();
    case 557:
      if (lookahead == 'm') ADVANCE(302);
      END_STATE();
    case 558:
      if (lookahead == 'm') ADVANCE(313);
      END_STATE();
    case 559:
      if (lookahead == 'm') ADVANCE(729);
      END_STATE();
    case 560:
      if (lookahead == 'm') ADVANCE(724);
      END_STATE();
    case 561:
      if (lookahead == 'm') ADVANCE(390);
      END_STATE();
    case 562:
      if (lookahead == 'm') ADVANCE(728);
      END_STATE();
    case 563:
      if (lookahead == 'm') ADVANCE(732);
      END_STATE();
    case 564:
      if (lookahead == 'm') ADVANCE(101);
      END_STATE();
    case 565:
      if (lookahead == 'm') ADVANCE(103);
      END_STATE();
    case 566:
      if (lookahead == 'm') ADVANCE(737);
      END_STATE();
    case 567:
      if (lookahead == 'm') ADVANCE(950);
      END_STATE();
    case 568:
      if (lookahead == 'n') ADVANCE(951);
      END_STATE();
    case 569:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 570:
      if (lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 571:
      if (lookahead == 'n') ADVANCE(270);
      END_STATE();
    case 572:
      if (lookahead == 'n') ADVANCE(1121);
      END_STATE();
    case 573:
      if (lookahead == 'n') ADVANCE(1122);
      END_STATE();
    case 574:
      if (lookahead == 'n') ADVANCE(260);
      if (lookahead == 'x') ADVANCE(731);
      END_STATE();
    case 575:
      if (lookahead == 'n') ADVANCE(1127);
      END_STATE();
    case 576:
      if (lookahead == 'n') ADVANCE(1092);
      END_STATE();
    case 577:
      if (lookahead == 'n') ADVANCE(1044);
      END_STATE();
    case 578:
      if (lookahead == 'n') ADVANCE(1068);
      END_STATE();
    case 579:
      if (lookahead == 'n') ADVANCE(1689);
      END_STATE();
    case 580:
      if (lookahead == 'n') ADVANCE(1030);
      END_STATE();
    case 581:
      if (lookahead == 'n') ADVANCE(1102);
      END_STATE();
    case 582:
      if (lookahead == 'n') ADVANCE(1116);
      END_STATE();
    case 583:
      if (lookahead == 'n') ADVANCE(446);
      if (lookahead == 't') ADVANCE(375);
      END_STATE();
    case 584:
      if (lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 585:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 586:
      if (lookahead == 'n') ADVANCE(269);
      if (lookahead == 'q') ADVANCE(926);
      END_STATE();
    case 587:
      if (lookahead == 'n') ADVANCE(281);
      if (lookahead == 'q') ADVANCE(933);
      END_STATE();
    case 588:
      if (lookahead == 'n') ADVANCE(254);
      END_STATE();
    case 589:
      if (lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 590:
      if (lookahead == 'n') ADVANCE(426);
      END_STATE();
    case 591:
      if (lookahead == 'n') ADVANCE(288);
      END_STATE();
    case 592:
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 593:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 594:
      if (lookahead == 'n') ADVANCE(851);
      END_STATE();
    case 595:
      if (lookahead == 'n') ADVANCE(418);
      END_STATE();
    case 596:
      if (lookahead == 'n') ADVANCE(419);
      END_STATE();
    case 597:
      if (lookahead == 'n') ADVANCE(852);
      END_STATE();
    case 598:
      if (lookahead == 'n') ADVANCE(830);
      END_STATE();
    case 599:
      if (lookahead == 'n') ADVANCE(898);
      END_STATE();
    case 600:
      if (lookahead == 'n') ADVANCE(808);
      END_STATE();
    case 601:
      if (lookahead == 'n') ADVANCE(853);
      END_STATE();
    case 602:
      if (lookahead == 'n') ADVANCE(195);
      if (lookahead == 's') ADVANCE(894);
      END_STATE();
    case 603:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 604:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 605:
      if (lookahead == 'n') ADVANCE(860);
      END_STATE();
    case 606:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 607:
      if (lookahead == 'n') ADVANCE(862);
      END_STATE();
    case 608:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 609:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 610:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 611:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 612:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 613:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 614:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 615:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 616:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 617:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 618:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 619:
      if (lookahead == 'n') ADVANCE(924);
      END_STATE();
    case 620:
      if (lookahead == 'n') ADVANCE(255);
      END_STATE();
    case 621:
      if (lookahead == 'n') ADVANCE(837);
      END_STATE();
    case 622:
      if (lookahead == 'n') ADVANCE(841);
      END_STATE();
    case 623:
      if (lookahead == 'n') ADVANCE(932);
      END_STATE();
    case 624:
      if (lookahead == 'n') ADVANCE(900);
      END_STATE();
    case 625:
      if (lookahead == 'n') ADVANCE(885);
      END_STATE();
    case 626:
      if (lookahead == 'n') ADVANCE(290);
      END_STATE();
    case 627:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 628:
      if (lookahead == 'n') ADVANCE(838);
      END_STATE();
    case 629:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 630:
      if (lookahead == 'n') ADVANCE(839);
      END_STATE();
    case 631:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 632:
      if (lookahead == 'n') ADVANCE(840);
      END_STATE();
    case 633:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 634:
      if (lookahead == 'n') ADVANCE(292);
      END_STATE();
    case 635:
      if (lookahead == 'n') ADVANCE(497);
      if (lookahead == 't') ADVANCE(392);
      END_STATE();
    case 636:
      if (lookahead == 'o') ADVANCE(280);
      END_STATE();
    case 637:
      if (lookahead == 'o') ADVANCE(429);
      END_STATE();
    case 638:
      if (lookahead == 'o') ADVANCE(1114);
      if (lookahead == 'r') ADVANCE(203);
      if (lookahead == 'y') ADVANCE(717);
      END_STATE();
    case 639:
      if (lookahead == 'o') ADVANCE(416);
      END_STATE();
    case 640:
      if (lookahead == 'o') ADVANCE(935);
      END_STATE();
    case 641:
      if (lookahead == 'o') ADVANCE(420);
      END_STATE();
    case 642:
      if (lookahead == 'o') ADVANCE(571);
      END_STATE();
    case 643:
      if (lookahead == 'o') ADVANCE(452);
      END_STATE();
    case 644:
      if (lookahead == 'o') ADVANCE(925);
      END_STATE();
    case 645:
      if (lookahead == 'o') ADVANCE(551);
      END_STATE();
    case 646:
      if (lookahead == 'o') ADVANCE(248);
      END_STATE();
    case 647:
      if (lookahead == 'o') ADVANCE(750);
      END_STATE();
    case 648:
      if (lookahead == 'o') ADVANCE(622);
      END_STATE();
    case 649:
      if (lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 650:
      if (lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 651:
      if (lookahead == 'o') ADVANCE(746);
      END_STATE();
    case 652:
      if (lookahead == 'o') ADVANCE(591);
      END_STATE();
    case 653:
      if (lookahead == 'o') ADVANCE(756);
      END_STATE();
    case 654:
      if (lookahead == 'o') ADVANCE(784);
      END_STATE();
    case 655:
      if (lookahead == 'o') ADVANCE(573);
      END_STATE();
    case 656:
      if (lookahead == 'o') ADVANCE(624);
      END_STATE();
    case 657:
      if (lookahead == 'o') ADVANCE(576);
      END_STATE();
    case 658:
      if (lookahead == 'o') ADVANCE(577);
      END_STATE();
    case 659:
      if (lookahead == 'o') ADVANCE(600);
      END_STATE();
    case 660:
      if (lookahead == 'o') ADVANCE(579);
      END_STATE();
    case 661:
      if (lookahead == 'o') ADVANCE(580);
      END_STATE();
    case 662:
      if (lookahead == 'o') ADVANCE(581);
      END_STATE();
    case 663:
      if (lookahead == 'o') ADVANCE(582);
      END_STATE();
    case 664:
      if (lookahead == 'o') ADVANCE(928);
      END_STATE();
    case 665:
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 666:
      if (lookahead == 'o') ADVANCE(283);
      END_STATE();
    case 667:
      if (lookahead == 'o') ADVANCE(603);
      END_STATE();
    case 668:
      if (lookahead == 'o') ADVANCE(722);
      END_STATE();
    case 669:
      if (lookahead == 'o') ADVANCE(455);
      END_STATE();
    case 670:
      if (lookahead == 'o') ADVANCE(774);
      END_STATE();
    case 671:
      if (lookahead == 'o') ADVANCE(629);
      END_STATE();
    case 672:
      if (lookahead == 'o') ADVANCE(772);
      END_STATE();
    case 673:
      if (lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 674:
      if (lookahead == 'o') ADVANCE(954);
      END_STATE();
    case 675:
      if (lookahead == 'o') ADVANCE(604);
      END_STATE();
    case 676:
      if (lookahead == 'o') ADVANCE(776);
      END_STATE();
    case 677:
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 678:
      if (lookahead == 'o') ADVANCE(606);
      END_STATE();
    case 679:
      if (lookahead == 'o') ADVANCE(775);
      END_STATE();
    case 680:
      if (lookahead == 'o') ADVANCE(608);
      END_STATE();
    case 681:
      if (lookahead == 'o') ADVANCE(777);
      END_STATE();
    case 682:
      if (lookahead == 'o') ADVANCE(609);
      END_STATE();
    case 683:
      if (lookahead == 'o') ADVANCE(718);
      END_STATE();
    case 684:
      if (lookahead == 'o') ADVANCE(466);
      END_STATE();
    case 685:
      if (lookahead == 'o') ADVANCE(610);
      END_STATE();
    case 686:
      if (lookahead == 'o') ADVANCE(611);
      END_STATE();
    case 687:
      if (lookahead == 'o') ADVANCE(612);
      END_STATE();
    case 688:
      if (lookahead == 'o') ADVANCE(613);
      END_STATE();
    case 689:
      if (lookahead == 'o') ADVANCE(614);
      END_STATE();
    case 690:
      if (lookahead == 'o') ADVANCE(615);
      END_STATE();
    case 691:
      if (lookahead == 'o') ADVANCE(616);
      END_STATE();
    case 692:
      if (lookahead == 'o') ADVANCE(617);
      END_STATE();
    case 693:
      if (lookahead == 'o') ADVANCE(434);
      END_STATE();
    case 694:
      if (lookahead == 'o') ADVANCE(938);
      END_STATE();
    case 695:
      if (lookahead == 'o') ADVANCE(725);
      END_STATE();
    case 696:
      if (lookahead == 'o') ADVANCE(791);
      END_STATE();
    case 697:
      if (lookahead == 'o') ADVANCE(626);
      END_STATE();
    case 698:
      if (lookahead == 'o') ADVANCE(562);
      END_STATE();
    case 699:
      if (lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 700:
      if (lookahead == 'o') ADVANCE(563);
      END_STATE();
    case 701:
      if (lookahead == 'o') ADVANCE(631);
      END_STATE();
    case 702:
      if (lookahead == 'o') ADVANCE(801);
      END_STATE();
    case 703:
      if (lookahead == 'o') ADVANCE(803);
      END_STATE();
    case 704:
      if (lookahead == 'p') ADVANCE(1743);
      END_STATE();
    case 705:
      if (lookahead == 'p') ADVANCE(1142);
      END_STATE();
    case 706:
      if (lookahead == 'p') ADVANCE(395);
      END_STATE();
    case 707:
      if (lookahead == 'p') ADVANCE(1070);
      END_STATE();
    case 708:
      if (lookahead == 'p') ADVANCE(643);
      END_STATE();
    case 709:
      if (lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 710:
      if (lookahead == 'p') ADVANCE(523);
      END_STATE();
    case 711:
      if (lookahead == 'p') ADVANCE(642);
      END_STATE();
    case 712:
      if (lookahead == 'p') ADVANCE(648);
      END_STATE();
    case 713:
      if (lookahead == 'p') ADVANCE(339);
      END_STATE();
    case 714:
      if (lookahead == 'p') ADVANCE(215);
      END_STATE();
    case 715:
      if (lookahead == 'p') ADVANCE(303);
      END_STATE();
    case 716:
      if (lookahead == 'p') ADVANCE(355);
      END_STATE();
    case 717:
      if (lookahead == 'p') ADVANCE(315);
      END_STATE();
    case 718:
      if (lookahead == 'p') ADVANCE(317);
      END_STATE();
    case 719:
      if (lookahead == 'p') ADVANCE(763);
      END_STATE();
    case 720:
      if (lookahead == 'p') ADVANCE(669);
      END_STATE();
    case 721:
      if (lookahead == 'p') ADVANCE(684);
      END_STATE();
    case 722:
      if (lookahead == 'p') ADVANCE(349);
      END_STATE();
    case 723:
      if (lookahead == 'p') ADVANCE(826);
      END_STATE();
    case 724:
      if (lookahead == 'p') ADVANCE(532);
      END_STATE();
    case 725:
      if (lookahead == 'p') ADVANCE(353);
      END_STATE();
    case 726:
      if (lookahead == 'p') ADVANCE(672);
      END_STATE();
    case 727:
      if (lookahead == 'p') ADVANCE(84);
      END_STATE();
    case 728:
      if (lookahead == 'p') ADVANCE(541);
      END_STATE();
    case 729:
      if (lookahead == 'p') ADVANCE(545);
      END_STATE();
    case 730:
      if (lookahead == 'p') ADVANCE(793);
      END_STATE();
    case 731:
      if (lookahead == 'p') ADVANCE(794);
      END_STATE();
    case 732:
      if (lookahead == 'p') ADVANCE(543);
      END_STATE();
    case 733:
      if (lookahead == 'p') ADVANCE(399);
      END_STATE();
    case 734:
      if (lookahead == 'p') ADVANCE(401);
      END_STATE();
    case 735:
      if (lookahead == 'p') ADVANCE(402);
      END_STATE();
    case 736:
      if (lookahead == 'p') ADVANCE(403);
      END_STATE();
    case 737:
      if (lookahead == 'p') ADVANCE(547);
      END_STATE();
    case 738:
      if (lookahead == 'q') ADVANCE(930);
      if (lookahead == 't') ADVANCE(1046);
      END_STATE();
    case 739:
      if (lookahead == 'r') ADVANCE(704);
      END_STATE();
    case 740:
      if (lookahead == 'r') ADVANCE(503);
      END_STATE();
    case 741:
      if (lookahead == 'r') ADVANCE(330);
      END_STATE();
    case 742:
      if (lookahead == 'r') ADVANCE(499);
      if (lookahead == 'x') ADVANCE(447);
      END_STATE();
    case 743:
      if (lookahead == 'r') ADVANCE(462);
      END_STATE();
    case 744:
      if (lookahead == 'r') ADVANCE(1740);
      END_STATE();
    case 745:
      if (lookahead == 'r') ADVANCE(1078);
      END_STATE();
    case 746:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 747:
      if (lookahead == 'r') ADVANCE(1713);
      END_STATE();
    case 748:
      if (lookahead == 'r') ADVANCE(1729);
      END_STATE();
    case 749:
      if (lookahead == 'r') ADVANCE(1196);
      END_STATE();
    case 750:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 751:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 752:
      if (lookahead == 'r') ADVANCE(422);
      END_STATE();
    case 753:
      if (lookahead == 'r') ADVANCE(647);
      END_STATE();
    case 754:
      if (lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 755:
      if (lookahead == 'r') ADVANCE(425);
      END_STATE();
    case 756:
      if (lookahead == 'r') ADVANCE(967);
      END_STATE();
    case 757:
      if (lookahead == 'r') ADVANCE(870);
      END_STATE();
    case 758:
      if (lookahead == 'r') ADVANCE(417);
      END_STATE();
    case 759:
      if (lookahead == 'r') ADVANCE(444);
      END_STATE();
    case 760:
      if (lookahead == 'r') ADVANCE(337);
      END_STATE();
    case 761:
      if (lookahead == 'r') ADVANCE(449);
      END_STATE();
    case 762:
      if (lookahead == 'r') ADVANCE(969);
      END_STATE();
    case 763:
      if (lookahead == 'r') ADVANCE(668);
      END_STATE();
    case 764:
      if (lookahead == 'r') ADVANCE(340);
      END_STATE();
    case 765:
      if (lookahead == 'r') ADVANCE(872);
      END_STATE();
    case 766:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 767:
      if (lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 768:
      if (lookahead == 'r') ADVANCE(507);
      END_STATE();
    case 769:
      if (lookahead == 'r') ADVANCE(809);
      END_STATE();
    case 770:
      if (lookahead == 'r') ADVANCE(874);
      END_STATE();
    case 771:
      if (lookahead == 'r') ADVANCE(374);
      END_STATE();
    case 772:
      if (lookahead == 'r') ADVANCE(861);
      END_STATE();
    case 773:
      if (lookahead == 'r') ADVANCE(578);
      END_STATE();
    case 774:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 775:
      if (lookahead == 'r') ADVANCE(405);
      END_STATE();
    case 776:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 777:
      if (lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 778:
      if (lookahead == 'r') ADVANCE(367);
      END_STATE();
    case 779:
      if (lookahead == 'r') ADVANCE(369);
      END_STATE();
    case 780:
      if (lookahead == 'r') ADVANCE(368);
      END_STATE();
    case 781:
      if (lookahead == 'r') ADVANCE(335);
      END_STATE();
    case 782:
      if (lookahead == 'r') ADVANCE(424);
      END_STATE();
    case 783:
      if (lookahead == 'r') ADVANCE(427);
      END_STATE();
    case 784:
      if (lookahead == 'r') ADVANCE(975);
      END_STATE();
    case 785:
      if (lookahead == 'r') ADVANCE(957);
      END_STATE();
    case 786:
      if (lookahead == 'r') ADVANCE(257);
      END_STATE();
    case 787:
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 788:
      if (lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 789:
      if (lookahead == 'r') ADVANCE(834);
      END_STATE();
    case 790:
      if (lookahead == 'r') ADVANCE(498);
      END_STATE();
    case 791:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 792:
      if (lookahead == 'r') ADVANCE(396);
      END_STATE();
    case 793:
      if (lookahead == 'r') ADVANCE(695);
      END_STATE();
    case 794:
      if (lookahead == 'r') ADVANCE(391);
      END_STATE();
    case 795:
      if (lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 796:
      if (lookahead == 'r') ADVANCE(696);
      END_STATE();
    case 797:
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 798:
      if (lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 799:
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 800:
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 801:
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 802:
      if (lookahead == 'r') ADVANCE(404);
      END_STATE();
    case 803:
      if (lookahead == 'r') ADVANCE(406);
      END_STATE();
    case 804:
      if (lookahead == 'r') ADVANCE(501);
      if (lookahead == 'x') ADVANCE(496);
      END_STATE();
    case 805:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 806:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 807:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 808:
      if (lookahead == 's') ADVANCE(1171);
      END_STATE();
    case 809:
      if (lookahead == 's') ADVANCE(1229);
      END_STATE();
    case 810:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 811:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 812:
      if (lookahead == 's') ADVANCE(713);
      END_STATE();
    case 813:
      if (lookahead == 's') ADVANCE(814);
      END_STATE();
    case 814:
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 815:
      if (lookahead == 's') ADVANCE(326);
      END_STATE();
    case 816:
      if (lookahead == 's') ADVANCE(714);
      END_STATE();
    case 817:
      if (lookahead == 's') ADVANCE(828);
      END_STATE();
    case 818:
      if (lookahead == 's') ADVANCE(259);
      END_STATE();
    case 819:
      if (lookahead == 's') ADVANCE(333);
      END_STATE();
    case 820:
      if (lookahead == 's') ADVANCE(857);
      END_STATE();
    case 821:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 822:
      if (lookahead == 's') ADVANCE(889);
      END_STATE();
    case 823:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 824:
      if (lookahead == 's') ADVANCE(883);
      END_STATE();
    case 825:
      if (lookahead == 's') ADVANCE(316);
      END_STATE();
    case 826:
      if (lookahead == 's') ADVANCE(322);
      END_STATE();
    case 827:
      if (lookahead == 's') ADVANCE(711);
      if (lookahead == 't') ADVANCE(743);
      END_STATE();
    case 828:
      if (lookahead == 's') ADVANCE(459);
      END_STATE();
    case 829:
      if (lookahead == 's') ADVANCE(712);
      if (lookahead == 't') ADVANCE(790);
      END_STATE();
    case 830:
      if (lookahead == 's') ADVANCE(726);
      END_STATE();
    case 831:
      if (lookahead == 's') ADVANCE(716);
      END_STATE();
    case 832:
      if (lookahead == 's') ADVANCE(657);
      END_STATE();
    case 833:
      if (lookahead == 's') ADVANCE(365);
      END_STATE();
    case 834:
      if (lookahead == 's') ADVANCE(473);
      END_STATE();
    case 835:
      if (lookahead == 's') ADVANCE(475);
      END_STATE();
    case 836:
      if (lookahead == 's') ADVANCE(835);
      END_STATE();
    case 837:
      if (lookahead == 's') ADVANCE(486);
      END_STATE();
    case 838:
      if (lookahead == 's') ADVANCE(488);
      END_STATE();
    case 839:
      if (lookahead == 's') ADVANCE(489);
      END_STATE();
    case 840:
      if (lookahead == 's') ADVANCE(490);
      END_STATE();
    case 841:
      if (lookahead == 's') ADVANCE(398);
      END_STATE();
    case 842:
      if (lookahead == 's') ADVANCE(733);
      END_STATE();
    case 843:
      if (lookahead == 's') ADVANCE(734);
      END_STATE();
    case 844:
      if (lookahead == 's') ADVANCE(735);
      END_STATE();
    case 845:
      if (lookahead == 's') ADVANCE(494);
      END_STATE();
    case 846:
      if (lookahead == 's') ADVANCE(736);
      END_STATE();
    case 847:
      if (lookahead == 's') ADVANCE(845);
      END_STATE();
    case 848:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 849:
      if (lookahead == 't') ADVANCE(1094);
      END_STATE();
    case 850:
      if (lookahead == 't') ADVANCE(1113);
      END_STATE();
    case 851:
      if (lookahead == 't') ADVANCE(1140);
      END_STATE();
    case 852:
      if (lookahead == 't') ADVANCE(1029);
      END_STATE();
    case 853:
      if (lookahead == 't') ADVANCE(1126);
      END_STATE();
    case 854:
      if (lookahead == 't') ADVANCE(1161);
      END_STATE();
    case 855:
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 856:
      if (lookahead == 't') ADVANCE(1165);
      END_STATE();
    case 857:
      if (lookahead == 't') ADVANCE(1163);
      END_STATE();
    case 858:
      if (lookahead == 't') ADVANCE(1200);
      END_STATE();
    case 859:
      if (lookahead == 't') ADVANCE(1025);
      END_STATE();
    case 860:
      if (lookahead == 't') ADVANCE(1118);
      END_STATE();
    case 861:
      if (lookahead == 't') ADVANCE(1032);
      END_STATE();
    case 862:
      if (lookahead == 't') ADVANCE(1107);
      END_STATE();
    case 863:
      if (lookahead == 't') ADVANCE(866);
      END_STATE();
    case 864:
      if (lookahead == 't') ADVANCE(436);
      END_STATE();
    case 865:
      if (lookahead == 't') ADVANCE(451);
      END_STATE();
    case 866:
      if (lookahead == 't') ADVANCE(705);
      END_STATE();
    case 867:
      if (lookahead == 't') ADVANCE(976);
      END_STATE();
    case 868:
      if (lookahead == 't') ADVANCE(437);
      END_STATE();
    case 869:
      if (lookahead == 't') ADVANCE(454);
      END_STATE();
    case 870:
      if (lookahead == 't') ADVANCE(966);
      END_STATE();
    case 871:
      if (lookahead == 't') ADVANCE(709);
      END_STATE();
    case 872:
      if (lookahead == 't') ADVANCE(970);
      END_STATE();
    case 873:
      if (lookahead == 't') ADVANCE(439);
      END_STATE();
    case 874:
      if (lookahead == 't') ADVANCE(968);
      END_STATE();
    case 875:
      if (lookahead == 't') ADVANCE(441);
      END_STATE();
    case 876:
      if (lookahead == 't') ADVANCE(971);
      END_STATE();
    case 877:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 878:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 879:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 880:
      if (lookahead == 't') ADVANCE(376);
      END_STATE();
    case 881:
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 882:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 883:
      if (lookahead == 't') ADVANCE(645);
      END_STATE();
    case 884:
      if (lookahead == 't') ADVANCE(297);
      END_STATE();
    case 885:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 886:
      if (lookahead == 't') ADVANCE(354);
      END_STATE();
    case 887:
      if (lookahead == 't') ADVANCE(300);
      END_STATE();
    case 888:
      if (lookahead == 't') ADVANCE(372);
      END_STATE();
    case 889:
      if (lookahead == 't') ADVANCE(762);
      END_STATE();
    case 890:
      if (lookahead == 't') ADVANCE(360);
      END_STATE();
    case 891:
      if (lookahead == 't') ADVANCE(304);
      END_STATE();
    case 892:
      if (lookahead == 't') ADVANCE(363);
      END_STATE();
    case 893:
      if (lookahead == 't') ADVANCE(305);
      END_STATE();
    case 894:
      if (lookahead == 't') ADVANCE(336);
      END_STATE();
    case 895:
      if (lookahead == 't') ADVANCE(319);
      END_STATE();
    case 896:
      if (lookahead == 't') ADVANCE(871);
      END_STATE();
    case 897:
      if (lookahead == 't') ADVANCE(344);
      END_STATE();
    case 898:
      if (lookahead == 't') ADVANCE(460);
      END_STATE();
    case 899:
      if (lookahead == 't') ADVANCE(468);
      END_STATE();
    case 900:
      if (lookahead == 't') ADVANCE(463);
      END_STATE();
    case 901:
      if (lookahead == 't') ADVANCE(653);
      END_STATE();
    case 902:
      if (lookahead == 't') ADVANCE(471);
      END_STATE();
    case 903:
      if (lookahead == 't') ADVANCE(347);
      END_STATE();
    case 904:
      if (lookahead == 't') ADVANCE(654);
      END_STATE();
    case 905:
      if (lookahead == 't') ADVANCE(670);
      END_STATE();
    case 906:
      if (lookahead == 't') ADVANCE(676);
      END_STATE();
    case 907:
      if (lookahead == 't') ADVANCE(356);
      END_STATE();
    case 908:
      if (lookahead == 't') ADVANCE(382);
      END_STATE();
    case 909:
      if (lookahead == 't') ADVANCE(474);
      END_STATE();
    case 910:
      if (lookahead == 't') ADVANCE(476);
      END_STATE();
    case 911:
      if (lookahead == 't') ADVANCE(479);
      END_STATE();
    case 912:
      if (lookahead == 't') ADVANCE(480);
      END_STATE();
    case 913:
      if (lookahead == 't') ADVANCE(481);
      END_STATE();
    case 914:
      if (lookahead == 't') ADVANCE(482);
      END_STATE();
    case 915:
      if (lookahead == 't') ADVANCE(483);
      END_STATE();
    case 916:
      if (lookahead == 't') ADVANCE(484);
      END_STATE();
    case 917:
      if (lookahead == 't') ADVANCE(485);
      END_STATE();
    case 918:
      if (lookahead == 't') ADVANCE(487);
      END_STATE();
    case 919:
      if (lookahead == 't') ADVANCE(397);
      END_STATE();
    case 920:
      if (lookahead == 't') ADVANCE(495);
      END_STATE();
    case 921:
      if (lookahead == 'u') ADVANCE(570);
      END_STATE();
    case 922:
      if (lookahead == 'u') ADVANCE(751);
      END_STATE();
    case 923:
      if (lookahead == 'u') ADVANCE(564);
      END_STATE();
    case 924:
      if (lookahead == 'u') ADVANCE(549);
      END_STATE();
    case 925:
      if (lookahead == 'u') ADVANCE(707);
      END_STATE();
    case 926:
      if (lookahead == 'u') ADVANCE(334);
      END_STATE();
    case 927:
      if (lookahead == 'u') ADVANCE(759);
      END_STATE();
    case 928:
      if (lookahead == 'u') ADVANCE(601);
      END_STATE();
    case 929:
      if (lookahead == 'u') ADVANCE(768);
      END_STATE();
    case 930:
      if (lookahead == 'u') ADVANCE(364);
      END_STATE();
    case 931:
      if (lookahead == 'u') ADVANCE(318);
      END_STATE();
    case 932:
      if (lookahead == 'u') ADVANCE(373);
      END_STATE();
    case 933:
      if (lookahead == 'u') ADVANCE(377);
      END_STATE();
    case 934:
      if (lookahead == 'u') ADVANCE(528);
      END_STATE();
    case 935:
      if (lookahead == 'u') ADVANCE(879);
      END_STATE();
    case 936:
      if (lookahead == 'u') ADVANCE(824);
      END_STATE();
    case 937:
      if (lookahead == 'u') ADVANCE(525);
      END_STATE();
    case 938:
      if (lookahead == 'u') ADVANCE(882);
      END_STATE();
    case 939:
      if (lookahead == 'u') ADVANCE(778);
      END_STATE();
    case 940:
      if (lookahead == 'u') ADVANCE(779);
      END_STATE();
    case 941:
      if (lookahead == 'u') ADVANCE(831);
      END_STATE();
    case 942:
      if (lookahead == 'u') ADVANCE(795);
      END_STATE();
    case 943:
      if (lookahead == 'u') ADVANCE(842);
      END_STATE();
    case 944:
      if (lookahead == 'u') ADVANCE(797);
      END_STATE();
    case 945:
      if (lookahead == 'u') ADVANCE(843);
      END_STATE();
    case 946:
      if (lookahead == 'u') ADVANCE(798);
      END_STATE();
    case 947:
      if (lookahead == 'u') ADVANCE(844);
      END_STATE();
    case 948:
      if (lookahead == 'u') ADVANCE(799);
      END_STATE();
    case 949:
      if (lookahead == 'u') ADVANCE(800);
      END_STATE();
    case 950:
      if (lookahead == 'u') ADVANCE(565);
      END_STATE();
    case 951:
      if (lookahead == 'v') ADVANCE(1746);
      END_STATE();
    case 952:
      if (lookahead == 'v') ADVANCE(190);
      END_STATE();
    case 953:
      if (lookahead == 'v') ADVANCE(358);
      END_STATE();
    case 954:
      if (lookahead == 'v') ADVANCE(320);
      END_STATE();
    case 955:
      if (lookahead == 'v') ADVANCE(196);
      END_STATE();
    case 956:
      if (lookahead == 'v') ADVANCE(361);
      END_STATE();
    case 957:
      if (lookahead == 'v') ADVANCE(383);
      END_STATE();
    case 958:
      if (lookahead == 'v') ADVANCE(238);
      END_STATE();
    case 959:
      if (lookahead == 'w') ADVANCE(453);
      END_STATE();
    case 960:
      if (lookahead == 'x') ADVANCE(448);
      END_STATE();
    case 961:
      if (lookahead == 'x') ADVANCE(554);
      END_STATE();
    case 962:
      if (lookahead == 'x') ADVANCE(1129);
      END_STATE();
    case 963:
      if (lookahead == 'x') ADVANCE(1138);
      END_STATE();
    case 964:
      if (lookahead == 'y') ADVANCE(1203);
      END_STATE();
    case 965:
      if (lookahead == 'y') ADVANCE(1739);
      END_STATE();
    case 966:
      if (lookahead == 'y') ADVANCE(1021);
      END_STATE();
    case 967:
      if (lookahead == 'y') ADVANCE(1087);
      END_STATE();
    case 968:
      if (lookahead == 'y') ADVANCE(1732);
      END_STATE();
    case 969:
      if (lookahead == 'y') ADVANCE(1034);
      END_STATE();
    case 970:
      if (lookahead == 'y') ADVANCE(13);
      END_STATE();
    case 971:
      if (lookahead == 'y') ADVANCE(21);
      END_STATE();
    case 972:
      if (lookahead == 'y') ADVANCE(519);
      END_STATE();
    case 973:
      if (lookahead == 'y') ADVANCE(59);
      END_STATE();
    case 974:
      if (lookahead == 'y') ADVANCE(62);
      END_STATE();
    case 975:
      if (lookahead == 'y') ADVANCE(64);
      END_STATE();
    case 976:
      if (lookahead == 'y') ADVANCE(715);
      END_STATE();
    case 977:
      if (lookahead == 'y') ADVANCE(539);
      END_STATE();
    case 978:
      if (lookahead == 'y') ADVANCE(546);
      END_STATE();
    case 979:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(1002);
      END_STATE();
    case 980:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1686);
      END_STATE();
    case 981:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1684);
      END_STATE();
    case 982:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 983:
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(17);
      END_STATE();
    case 984:
      if (eof) ADVANCE(985);
      if (lookahead == '"') ADVANCE(992);
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(1738);
      if (lookahead == '(') ADVANCE(1703);
      if (lookahead == ')') ADVANCE(1216);
      if (lookahead == ',') ADVANCE(987);
      if (lookahead == '-') ADVANCE(980);
      if (lookahead == '.') ADVANCE(1700);
      if (lookahead == '/') ADVANCE(1696);
      if (lookahead == ':') ADVANCE(989);
      if (lookahead == '<') ADVANCE(3);
      if (lookahead == '=') ADVANCE(1024);
      if (lookahead == '>') ADVANCE(1012);
      if (lookahead == '?') ADVANCE(32);
      if (lookahead == '@') ADVANCE(1701);
      if (lookahead == 'B') ADVANCE(1286);
      if (lookahead == 'D') ADVANCE(1261);
      if (lookahead == 'F') ADVANCE(1273);
      if (lookahead == 'G') ADVANCE(1257);
      if (lookahead == 'H') ADVANCE(1258);
      if (lookahead == 'I') ADVANCE(1280);
      if (lookahead == 'L') ADVANCE(1283);
      if (lookahead == 'O') ADVANCE(1277);
      if (lookahead == 'P') ADVANCE(1249);
      if (lookahead == 'S') ADVANCE(1270);
      if (lookahead == '[') ADVANCE(990);
      if (lookahead == ']') ADVANCE(991);
      if (lookahead == 'a') ADVANCE(1348);
      if (lookahead == 'b') ADVANCE(1313);
      if (lookahead == 'c') ADVANCE(1400);
      if (lookahead == 'd') ADVANCE(1377);
      if (lookahead == 'e') ADVANCE(1473);
      if (lookahead == 'f') ADVANCE(1307);
      if (lookahead == 'g') ADVANCE(1378);
      if (lookahead == 'h') ADVANCE(1379);
      if (lookahead == 'i') ADVANCE(1366);
      if (lookahead == 'j') ADVANCE(1616);
      if (lookahead == 'k') ADVANCE(1380);
      if (lookahead == 'l') ADVANCE(1308);
      if (lookahead == 'm') ADVANCE(1315);
      if (lookahead == 'n') ADVANCE(1310);
      if (lookahead == 'o') ADVANCE(1572);
      if (lookahead == 'p') ADVANCE(1317);
      if (lookahead == 'r') ADVANCE(1381);
      if (lookahead == 's') ADVANCE(1354);
      if (lookahead == 't') ADVANCE(1543);
      if (lookahead == 'u') ADVANCE(1517);
      if (lookahead == 'v') ADVANCE(1316);
      if (lookahead == 'x') ADVANCE(1493);
      if (lookahead == '{') ADVANCE(986);
      if (lookahead == '}') ADVANCE(988);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(984)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1685);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '!') ADVANCE(998);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1001);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '-') ADVANCE(1001);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(997);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '-') ADVANCE(1000);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1001);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '-') ADVANCE(994);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1001);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '-') ADVANCE(995);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(997);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '-') ADVANCE(996);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1001);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '<') ADVANCE(993);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(999);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1001);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '>') ADVANCE(1001);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1001);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1001);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1214);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(anon_sym_LTsequence);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(anon_sym_LT_SLASHsequence_GT);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(anon_sym_LTrespond_SLASH_GT);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(anon_sym_LTsend_SLASH_GT);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(anon_sym_LTsend);
      if (lookahead == '/') ADVANCE(43);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(anon_sym_LT_SLASHsend_GT);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(anon_sym_LTlog);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(anon_sym_LT_SLASHlog_GT);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(anon_sym_LTproperty);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(anon_sym_scope);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(anon_sym_scope);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(anon_sym_axis2);
      if (lookahead == '-') ADVANCE(252);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(anon_sym_axis2);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(anon_sym_axis2_DASHclient);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(anon_sym_operation);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(anon_sym_operation);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(anon_sym_transport);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(anon_sym_transport);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(anon_sym_registry);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(anon_sym_registry);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(anon_sym_synapse);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(anon_sym_synapse);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(anon_sym_system);
      if (lookahead == '-') ADVANCE(730);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(anon_sym_env);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(anon_sym_env);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(anon_sym_file);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(anon_sym_action);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(anon_sym_action);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(anon_sym_remove);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(anon_sym_remove);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(anon_sym_STRING);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(anon_sym_STRING);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(anon_sym_INTEGER);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(anon_sym_INTEGER);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(anon_sym_BOOLEAN);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(anon_sym_BOOLEAN);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(anon_sym_DOUBLE);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(anon_sym_DOUBLE);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(anon_sym_FLOAT);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(anon_sym_FLOAT);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(anon_sym_LONG);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(anon_sym_LONG);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(anon_sym_SHORT);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(anon_sym_SHORT);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(anon_sym_OM);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(anon_sym_OM);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(anon_sym_pattern);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(anon_sym_pattern);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(anon_sym_group);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(anon_sym_LTcall);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(anon_sym_LT_SLASHcall_GT);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(anon_sym_LTforeach);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(anon_sym_sequence);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(anon_sym_sequence);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(anon_sym_LT_SLASHforeach_GT);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(anon_sym_LTfilter);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(anon_sym_xpath);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(anon_sym_xpath);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(anon_sym_LT_SLASHfilter_GT);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(anon_sym_LTaggregate_GT);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(anon_sym_LTaggregate);
      if (lookahead == '>') ADVANCE(1082);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(anon_sym_LT_SLASHaggregate_GT);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(anon_sym_LTiterate);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(anon_sym_LT_SLASHiterate_GT);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(anon_sym_LTpayloadFactory);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(anon_sym_LT_SLASHpayloadFactory_GT);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(anon_sym_media_DASHtype);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(anon_sym_xml);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(anon_sym_json);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(anon_sym_json);
      if (lookahead == '-') ADVANCE(325);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(anon_sym_LTformat);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(anon_sym_LT_SLASHformat_GT);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(anon_sym_LTargs_SLASH_GT);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(anon_sym_LTargs_GT);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(anon_sym_LTarg);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(anon_sym_LTarg);
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(anon_sym_value);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(anon_sym_expression);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(anon_sym_expression);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(anon_sym_LT_SLASHargs_GT);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(anon_sym_sequential);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(anon_sym_sequential);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(anon_sym_continueParent);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(anon_sym_continueParent);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(anon_sym_preservePayload);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(anon_sym_preservePayload);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(anon_sym_attachPath);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(anon_sym_attachPath);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(anon_sym_LTtarget);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(anon_sym_to);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(anon_sym_soapAction);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(anon_sym_soapAction);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(anon_sym_endpoint);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(anon_sym_endpoint);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(anon_sym_LT_SLASHtarget_GT);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(anon_sym_LTcorrelateOn);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(anon_sym_LTcompleteCondition);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(anon_sym_LT_SLASHcompleteCondition_GT);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(anon_sym_LTonComplete);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(anon_sym_LT_SLASHonComplete_GT);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(anon_sym_LTmessageCount);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(anon_sym_min);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(anon_sym_max);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(anon_sym_key);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(anon_sym_LTthen_GT);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(anon_sym_LT_SLASHthen_GT);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(anon_sym_LTelse_GT);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(anon_sym_LT_SLASHelse_GT);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(anon_sym_source);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(anon_sym_source);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(anon_sym_regex);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(anon_sym_regex);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(anon_sym_LTendpoint);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(anon_sym_LT_SLASHendpoint_GT);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(anon_sym_LThttp);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(anon_sym_LT_SLASHhttp_GT);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(anon_sym_uri_DASHtemplate);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(anon_sym_method);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(anon_sym_get);
      if (lookahead == '-') ADVANCE(719);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(anon_sym_post);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(anon_sym_post);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(anon_sym_put);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(anon_sym_put);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(anon_sym_head);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(anon_sym_head);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(anon_sym_options);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(anon_sym_options);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(anon_sym_patch);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(anon_sym_patch);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(anon_sym_LTtimeout_GT);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(anon_sym_LT_SLASHtimeout_GT);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(anon_sym_LTmarkForSuspension_GT);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmarkForSuspension_GT);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(anon_sym_LTretriesBeforeSuspension_GT);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(anon_sym_LT_SLASHretriesBeforeSuspension_GT);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(anon_sym_LTretryDelay_GT);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(anon_sym_LT_SLASHretryDelay_GT);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(anon_sym_LTsuspendOnFailure_GT);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(anon_sym_LT_SLASHsuspendOnFailure_GT);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(anon_sym_LTinitialDuration_GT);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(anon_sym_LT_SLASHinitialDuration_GT);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(anon_sym_LTprogressionFactor_GT);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(anon_sym_LT_SLASHprogressionFactor_GT);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(anon_sym_LTmaximumDuration_GT);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmaximumDuration_GT);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(anon_sym_LTerrorCodes_GT);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(anon_sym_LT_SLASHerrorCodes_GT);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(anon_sym_LTduration_GT);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(anon_sym_LT_SLASHduration_GT);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(anon_sym_LTresponseAction_GT);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(anon_sym_never);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(anon_sym_never);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(anon_sym_discard);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(anon_sym_discard);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(anon_sym_fault);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(anon_sym_fault);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(anon_sym_LT_SLASHresponseAction_GT);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(anon_sym_LTkey);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(anon_sym_blocking);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(anon_sym_blocking);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '!') ADVANCE(1211);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1214);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '-') ADVANCE(1214);
      if (lookahead != 0) ADVANCE(1208);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '-') ADVANCE(1210);
      if (lookahead != 0) ADVANCE(1208);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '-') ADVANCE(1207);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1214);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '-') ADVANCE(1213);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1214);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '-') ADVANCE(1209);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1214);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '<') ADVANCE(1206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1212);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1214);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '>') ADVANCE(1010);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1214);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1214);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(anon_sym_json_DASHeval_LPAREN);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(anon_sym_name);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 's') ADVANCE(1581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(anon_sym_id);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(anon_sym_id);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(anon_sym_level);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(anon_sym_level);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(anon_sym_full);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(anon_sym_full);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(anon_sym_simple);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(anon_sym_simple);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(anon_sym_custom);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(anon_sym_custom);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(anon_sym_headers);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(anon_sym_headers);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(959);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(719);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(867);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(450);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(592);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(207);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(619);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(325);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(351);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(927);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(880);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(816);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(730);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(239);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == '2') ADVANCE(1028);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == '4') ADVANCE(1256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == '6') ADVANCE(1246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'A') ADVANCE(1255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'A') ADVANCE(1299);
      if (lookahead == 'O') ADVANCE(1296);
      if (lookahead == 'U') ADVANCE(1300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'A') ADVANCE(1279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'A') ADVANCE(1302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'A') ADVANCE(1365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'B') ADVANCE(1275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'C') ADVANCE(1269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'D') ADVANCE(1156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'D') ADVANCE(1408);
      if (lookahead == 'E') ADVANCE(1539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'E') ADVANCE(1297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'E') ADVANCE(1248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'E') ADVANCE(1154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'E') ADVANCE(1059);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'E') ADVANCE(1276);
      if (lookahead == 'O') ADVANCE(1306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'E') ADVANCE(1268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'E') ADVANCE(1292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'E') ADVANCE(1250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'E') ADVANCE(1305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'G') ADVANCE(1063);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'G') ADVANCE(1053);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'G') ADVANCE(1263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'H') ADVANCE(1160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'H') ADVANCE(1285);
      if (lookahead == 'T') ADVANCE(1293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'I') ADVANCE(1282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'I') ADVANCE(1288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'L') ADVANCE(1284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'L') ADVANCE(1264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'L') ADVANCE(1260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'L') ADVANCE(1265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'M') ADVANCE(1067);
      if (lookahead == 'P') ADVANCE(1298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'N') ADVANCE(1266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'N') ADVANCE(1057);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'N') ADVANCE(1304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'N') ADVANCE(1295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'N') ADVANCE(1267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'O') ADVANCE(1278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'O') ADVANCE(1251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'O') ADVANCE(1294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'O') ADVANCE(1287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'O') ADVANCE(1274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'O') ADVANCE(1281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'P') ADVANCE(1345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'P') ADVANCE(1318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'P') ADVANCE(1337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'R') ADVANCE(1055);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'R') ADVANCE(1271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'R') ADVANCE(1303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'S') ADVANCE(1158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'S') ADVANCE(1301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'T') ADVANCE(1148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'T') ADVANCE(1272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'T') ADVANCE(1254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'T') ADVANCE(1152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'T') ADVANCE(1150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'T') ADVANCE(1061);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'T') ADVANCE(1065);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'T') ADVANCE(1262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'T') ADVANCE(1259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'U') ADVANCE(1253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'a') ADVANCE(1484);
      if (lookahead == 'i') ADVANCE(1475);
      if (lookahead == 'l') ADVANCE(1556);
      if (lookahead == 'o') ADVANCE(1590);
      if (lookahead == 'u') ADVANCE(1476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'a') ADVANCE(1502);
      if (lookahead == 'e') ADVANCE(1671);
      if (lookahead == 'o') ADVANCE(1353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'a') ADVANCE(1502);
      if (lookahead == 'o') ADVANCE(1353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'a') ADVANCE(1496);
      if (lookahead == 'e') ADVANCE(1673);
      if (lookahead == 'o') ADVANCE(1591);
      if (lookahead == 'u') ADVANCE(1477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'a') ADVANCE(1496);
      if (lookahead == 'o') ADVANCE(1591);
      if (lookahead == 'u') ADVANCE(1490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'a') ADVANCE(1367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'a') ADVANCE(1615);
      if (lookahead == 'l') ADVANCE(1545);
      if (lookahead == 'o') ADVANCE(1548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'a') ADVANCE(1615);
      if (lookahead == 'o') ADVANCE(1548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'a') ADVANCE(1676);
      if (lookahead == 'e') ADVANCE(1372);
      if (lookahead == 'i') ADVANCE(1503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'a') ADVANCE(1486);
      if (lookahead == 'e') ADVANCE(1594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'a') ADVANCE(1644);
      if (lookahead == 'o') ADVANCE(1608);
      if (lookahead == 'r') ADVANCE(1426);
      if (lookahead == 'u') ADVANCE(1633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'a') ADVANCE(1680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'a') ADVANCE(1352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'a') ADVANCE(1527);
      if (lookahead == 'u') ADVANCE(1385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'a') ADVANCE(1669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'a') ADVANCE(1597);
      if (lookahead == 'r') ADVANCE(1447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'a') ADVANCE(1574);
      if (lookahead == 'u') ADVANCE(1593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'a') ADVANCE(1459);
      if (lookahead == 'i') ADVANCE(1538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'a') ADVANCE(1459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'a') ADVANCE(1646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'a') ADVANCE(1371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'a') ADVANCE(1582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'a') ADVANCE(1472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'a') ADVANCE(1605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'a') ADVANCE(1471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'a') ADVANCE(1592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'a') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'a') ADVANCE(1637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'a') ADVANCE(1485);
      if (lookahead == 'l') ADVANCE(1556);
      if (lookahead == 'o') ADVANCE(1590);
      if (lookahead == 'u') ADVANCE(1519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'a') ADVANCE(1659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'a') ADVANCE(1649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'a') ADVANCE(1233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'a') ADVANCE(1478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'a') ADVANCE(1359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'a') ADVANCE(1656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'a') ADVANCE(1531);
      if (lookahead == 'u') ADVANCE(1385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'a') ADVANCE(1657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'a') ADVANCE(1662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'a') ADVANCE(1607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'b') ADVANCE(1618);
      if (lookahead == 'm') ADVANCE(1731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'b') ADVANCE(1418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'c') ADVANCE(1647);
      if (lookahead == 't') ADVANCE(1645);
      if (lookahead == 'x') ADVANCE(1445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'c') ADVANCE(1466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'c') ADVANCE(1670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'c') ADVANCE(1438);
      if (lookahead == 't') ADVANCE(1419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'c') ADVANCE(1440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'c') ADVANCE(1329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'c') ADVANCE(1566);
      if (lookahead == 'e') ADVANCE(1583);
      if (lookahead == 'i') ADVANCE(1494);
      if (lookahead == 'o') ADVANCE(1323);
      if (lookahead == 't') ADVANCE(1322);
      if (lookahead == 'u') ADVANCE(1346);
      if (lookahead == 'y') ADVANCE(1523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'c') ADVANCE(1544);
      if (lookahead == 'd') ADVANCE(1577);
      if (lookahead == 'v') ADVANCE(1041);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'c') ADVANCE(1554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'c') ADVANCE(1394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'c') ADVANCE(1396);
      if (lookahead == 't') ADVANCE(1457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'c') ADVANCE(1409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'c') ADVANCE(1334);
      if (lookahead == 't') ADVANCE(1324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'c') ADVANCE(1334);
      if (lookahead == 't') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'c') ADVANCE(1332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'c') ADVANCE(1569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'c') ADVANCE(1660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'c') ADVANCE(1663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'd') ADVANCE(1220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'd') ADVANCE(1170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'd') ADVANCE(1724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'd') ADVANCE(1146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'd') ADVANCE(1199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'd') ADVANCE(1110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'd') ADVANCE(1448);
      if (lookahead == 't') ADVANCE(1442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'd') ADVANCE(1239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'd') ADVANCE(1398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'd') ADVANCE(1399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'd') ADVANCE(1452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1430);
      if (lookahead == 'i') ADVANCE(1624);
      if (lookahead == 'o') ADVANCE(1350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1525);
      if (lookahead == 'r') ADVANCE(1547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1431);
      if (lookahead == 'o') ADVANCE(1664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1043);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1004);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1006);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1023);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1049);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1037);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1076);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1446);
      if (lookahead == 'h') ADVANCE(1551);
      if (lookahead == 'o') ADVANCE(1501);
      if (lookahead == 't') ADVANCE(1675);
      if (lookahead == 'u') ADVANCE(1588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1446);
      if (lookahead == 'h') ADVANCE(1551);
      if (lookahead == 'o') ADVANCE(1520);
      if (lookahead == 't') ADVANCE(1675);
      if (lookahead == 'u') ADVANCE(1589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1677);
      if (lookahead == 'i') ADVANCE(1625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1595);
      if (lookahead == 't') ADVANCE(1453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'e') ADVANCE(1536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'f') ADVANCE(1321);
      if (lookahead == 'l') ADVANCE(1424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'g') ADVANCE(1403);
      if (lookahead == 'm') ADVANCE(1570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'g') ADVANCE(1716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'g') ADVANCE(1726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'g') ADVANCE(1704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'g') ADVANCE(1205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'g') ADVANCE(1693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'g') ADVANCE(1728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'h') ADVANCE(1174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'h') ADVANCE(1080);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'h') ADVANCE(1291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'h') ADVANCE(1112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'h') ADVANCE(1549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'i') ADVANCE(1241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'i') ADVANCE(1681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'i') ADVANCE(1609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'i') ADVANCE(1487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'i') ADVANCE(1513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'i') ADVANCE(1338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'i') ADVANCE(1515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'i') ADVANCE(1553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'i') ADVANCE(1521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'i') ADVANCE(1522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'i') ADVANCE(1567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'i') ADVANCE(1558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'i') ADVANCE(1559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'i') ADVANCE(1524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'i') ADVANCE(1331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'i') ADVANCE(1560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'i') ADVANCE(1530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'i') ADVANCE(1561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'i') ADVANCE(1562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'i') ADVANCE(1535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'i') ADVANCE(1563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'i') ADVANCE(1661);
      if (lookahead == 't') ADVANCE(1164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'i') ADVANCE(1661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'k') ADVANCE(1451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'l') ADVANCE(1091);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'l') ADVANCE(1224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'l') ADVANCE(1008);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'l') ADVANCE(1222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'l') ADVANCE(1106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'l') ADVANCE(1235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'l') ADVANCE(1421);
      if (lookahead == 'n') ADVANCE(1355);
      if (lookahead == 'x') ADVANCE(1580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'l') ADVANCE(1421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'l') ADVANCE(1383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'l') ADVANCE(1468);
      if (lookahead == 'n') ADVANCE(1364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'l') ADVANCE(1469);
      if (lookahead == 'm') ADVANCE(1347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'l') ADVANCE(1444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'l') ADVANCE(1636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'l') ADVANCE(1639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'l') ADVANCE(1565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'l') ADVANCE(1393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'l') ADVANCE(1417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'l') ADVANCE(1620);
      if (lookahead == 'u') ADVANCE(1479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'l') ADVANCE(1620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'l') ADVANCE(1667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'l') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'l') ADVANCE(1343);
      if (lookahead == 'p') ADVANCE(1568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'l') ADVANCE(1343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'm') ADVANCE(1347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'm') ADVANCE(1228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'm') ADVANCE(1039);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'm') ADVANCE(1467);
      if (lookahead == 'p') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'm') ADVANCE(1579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'm') ADVANCE(1339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'm') ADVANCE(1384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'm') ADVANCE(1336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'm') ADVANCE(1427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'm') ADVANCE(1428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'm') ADVANCE(1243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'n') ADVANCE(1360);
      if (lookahead == 'u') ADVANCE(1528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'n') ADVANCE(1432);
      if (lookahead == 's') ADVANCE(1634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'n') ADVANCE(1128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'n') ADVANCE(1093);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'n') ADVANCE(1045);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'n') ADVANCE(1702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'n') ADVANCE(1069);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'n') ADVANCE(1690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'n') ADVANCE(1723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'n') ADVANCE(1031);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'n') ADVANCE(1103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'n') ADVANCE(1117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'n') ADVANCE(1433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'n') ADVANCE(1358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'n') ADVANCE(1434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'n') ADVANCE(1368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'n') ADVANCE(1575);
      if (lookahead == 'r') ADVANCE(1443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'n') ADVANCE(1575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'n') ADVANCE(1364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'n') ADVANCE(1361);
      if (lookahead == 'u') ADVANCE(1528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'n') ADVANCE(1435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'n') ADVANCE(1436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'n') ADVANCE(1328);
      if (lookahead == 's') ADVANCE(1654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'n') ADVANCE(1437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'n') ADVANCE(1410);
      if (lookahead == 't') ADVANCE(1162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'n') ADVANCE(1410);
      if (lookahead == 't') ADVANCE(1232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'n') ADVANCE(1610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'n') ADVANCE(1635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'n') ADVANCE(1612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'n') ADVANCE(1613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'n') ADVANCE(1619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'n') ADVANCE(1638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'n') ADVANCE(1648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'n') ADVANCE(1640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'n') ADVANCE(1641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'n') ADVANCE(1643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'n') ADVANCE(1238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'n') ADVANCE(1668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'n') ADVANCE(1363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'n') ADVANCE(1244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'o') ADVANCE(1350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'o') ADVANCE(1664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'o') ADVANCE(1115);
      if (lookahead == 'r') ADVANCE(1320);
      if (lookahead == 'y') ADVANCE(1576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'o') ADVANCE(1376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'o') ADVANCE(1349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'o') ADVANCE(1504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'o') ADVANCE(1665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'o') ADVANCE(1483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'o') ADVANCE(1369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'o') ADVANCE(1491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'o') ADVANCE(1571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'o') ADVANCE(1584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'o') ADVANCE(1505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'o') ADVANCE(1374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'o') ADVANCE(1462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'o') ADVANCE(1552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'o') ADVANCE(1617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'o') ADVANCE(1508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'o') ADVANCE(1540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'o') ADVANCE(1509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'o') ADVANCE(1510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'o') ADVANCE(1511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'o') ADVANCE(1512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'o') ADVANCE(1537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'o') ADVANCE(1327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'o') ADVANCE(1578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'o') ADVANCE(1529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'o') ADVANCE(1601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'o') ADVANCE(1375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'o') ADVANCE(1672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'o') ADVANCE(1621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'p') ADVANCE(1404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'p') ADVANCE(1071);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1574:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'p') ADVANCE(1252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'p') ADVANCE(1330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'p') ADVANCE(1386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'p') ADVANCE(1555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'p') ADVANCE(1388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1579:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'p') ADVANCE(1482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1580:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'p') ADVANCE(1599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1581:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'p') ADVANCE(1340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'p') ADVANCE(1622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1583:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'q') ADVANCE(1666);
      if (lookahead == 't') ADVANCE(1047);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1584:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'r') ADVANCE(1712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1585:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'r') ADVANCE(1197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1586:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'r') ADVANCE(1722);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1587:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'r') ADVANCE(1679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1588:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'r') ADVANCE(1598);
      if (lookahead == 's') ADVANCE(1651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1589:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'r') ADVANCE(1598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1590:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'r') ADVANCE(1497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1591:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'r') ADVANCE(1495);
      if (lookahead == 't') ADVANCE(1721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'r') ADVANCE(1370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1593:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'r') ADVANCE(1357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1594:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'r') ADVANCE(1626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1595:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'r') ADVANCE(1344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1596:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'r') ADVANCE(1611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1597:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'r') ADVANCE(1650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1598:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'r') ADVANCE(1423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1599:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'r') ADVANCE(1413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1600:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'r') ADVANCE(1507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1601:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'r') ADVANCE(1642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1602:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'r') ADVANCE(1674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1603:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'r') ADVANCE(1341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1604:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'r') ADVANCE(1456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1605:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'r') ADVANCE(1623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1606:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'r') ADVANCE(1342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1607:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'r') ADVANCE(1429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1608:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 's') ADVANCE(1464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1609:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 's') ADVANCE(1245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1610:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 's') ADVANCE(1488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1611:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 's') ADVANCE(1230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1612:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 's') ADVANCE(1172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1613:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 's') ADVANCE(1707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1614:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 's') ADVANCE(1231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1615:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 's') ADVANCE(1382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1616:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 's') ADVANCE(1546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1617:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 's') ADVANCE(1465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1618:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 's') ADVANCE(1652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1619:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 's') ADVANCE(1489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1620:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 's') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1621:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 's') ADVANCE(1390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1622:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 's') ADVANCE(1395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1623:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 's') ADVANCE(1407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1624:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 's') ADVANCE(1362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1625:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 's') ADVANCE(1653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1626:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 's') ADVANCE(1454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1627:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 's') ADVANCE(1658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1628:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 's') ADVANCE(1420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1629:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 's') ADVANCE(1564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1630:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 's') ADVANCE(1461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1631:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 's') ADVANCE(1630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1632:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 't') ADVANCE(1322);
      if (lookahead == 'u') ADVANCE(1346);
      if (lookahead == 'y') ADVANCE(1627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1633:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 't') ADVANCE(1166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1634:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 't') ADVANCE(1717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1635:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 't') ADVANCE(1708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1636:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 't') ADVANCE(1201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1637:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 't') ADVANCE(1706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1638:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 't') ADVANCE(1709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1639:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 't') ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1640:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 't') ADVANCE(1710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1641:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 't') ADVANCE(1119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1642:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 't') ADVANCE(1033);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1643:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 't') ADVANCE(1108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1644:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 't') ADVANCE(1351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1645:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 't') ADVANCE(1319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1646:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 't') ADVANCE(1439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1647:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 't') ADVANCE(1450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1648:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 't') ADVANCE(1236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1649:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 't') ADVANCE(1441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1650:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 't') ADVANCE(1614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1651:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 't') ADVANCE(1550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1652:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 't') ADVANCE(1604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1653:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 't') ADVANCE(1587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1654:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 't') ADVANCE(1406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1655:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 't') ADVANCE(1391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1656:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 't') ADVANCE(1405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1657:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 't') ADVANCE(1397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1658:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 't') ADVANCE(1411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1659:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 't') ADVANCE(1237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1660:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 't') ADVANCE(1455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1661:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 't') ADVANCE(1458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1662:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 't') ADVANCE(1460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1663:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 't') ADVANCE(1463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1664:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'u') ADVANCE(1516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1665:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'u') ADVANCE(1573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1666:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'u') ADVANCE(1416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1667:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'u') ADVANCE(1389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1668:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'u') ADVANCE(1422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1669:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'u') ADVANCE(1480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1670:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'u') ADVANCE(1499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1671:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'v') ADVANCE(1414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1672:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'v') ADVANCE(1392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1673:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'v') ADVANCE(1415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1674:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'v') ADVANCE(1425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1675:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'x') ADVANCE(1742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1676:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'x') ADVANCE(1130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1677:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'x') ADVANCE(1139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1678:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'y') ADVANCE(1131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1679:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'y') ADVANCE(1035);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1680:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'y') ADVANCE(1481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1681:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (lookahead == 'z') ADVANCE(1412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1682);
      END_STATE();
    case 1682:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1683:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1683);
      END_STATE();
    case 1684:
      ACCEPT_TOKEN(sym__float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1684);
      END_STATE();
    case 1685:
      ACCEPT_TOKEN(sym__unsigned_int);
      if (lookahead == '.') ADVANCE(981);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1685);
      END_STATE();
    case 1686:
      ACCEPT_TOKEN(sym__int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1686);
      END_STATE();
    case 1687:
      ACCEPT_TOKEN(anon_sym_LT_QMARKxml);
      END_STATE();
    case 1688:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 1689:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 1690:
      ACCEPT_TOKEN(anon_sym_version);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1691:
      ACCEPT_TOKEN(sym_version_number);
      END_STATE();
    case 1692:
      ACCEPT_TOKEN(anon_sym_encoding);
      END_STATE();
    case 1693:
      ACCEPT_TOKEN(anon_sym_encoding);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1694:
      ACCEPT_TOKEN(sym_encoding);
      END_STATE();
    case 1695:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(1697);
      END_STATE();
    case 1696:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(1697);
      if (lookahead == '>') ADVANCE(1020);
      END_STATE();
    case 1697:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 1698:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 1699:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 1700:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(1698);
      END_STATE();
    case 1701:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 1702:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1703:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 1704:
      ACCEPT_TOKEN(anon_sym_ceiling);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1705:
      ACCEPT_TOKEN(anon_sym_choose);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1706:
      ACCEPT_TOKEN(anon_sym_concat);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1707:
      ACCEPT_TOKEN(anon_sym_contains);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1708:
      ACCEPT_TOKEN(anon_sym_count);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1709:
      ACCEPT_TOKEN(anon_sym_current);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1710:
      ACCEPT_TOKEN(anon_sym_document);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1711:
      ACCEPT_TOKEN(anon_sym_element_DASHavailable);
      END_STATE();
    case 1712:
      ACCEPT_TOKEN(anon_sym_floor);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1713:
      ACCEPT_TOKEN(anon_sym_format_DASHnumber);
      END_STATE();
    case 1714:
      ACCEPT_TOKEN(anon_sym_function_DASHavailable);
      END_STATE();
    case 1715:
      ACCEPT_TOKEN(anon_sym_generate_DASHid);
      END_STATE();
    case 1716:
      ACCEPT_TOKEN(anon_sym_lang);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1717:
      ACCEPT_TOKEN(anon_sym_last);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1718:
      ACCEPT_TOKEN(anon_sym_local_DASHname);
      END_STATE();
    case 1719:
      ACCEPT_TOKEN(anon_sym_namespace_DASHuri);
      END_STATE();
    case 1720:
      ACCEPT_TOKEN(anon_sym_normalize_DASHspace);
      END_STATE();
    case 1721:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1722:
      ACCEPT_TOKEN(anon_sym_number);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1723:
      ACCEPT_TOKEN(anon_sym_position);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1724:
      ACCEPT_TOKEN(anon_sym_round);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1725:
      ACCEPT_TOKEN(anon_sym_starts_DASHwith);
      END_STATE();
    case 1726:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == '-') ADVANCE(527);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1727:
      ACCEPT_TOKEN(anon_sym_string_DASHlength);
      END_STATE();
    case 1728:
      ACCEPT_TOKEN(anon_sym_substring);
      if (lookahead == '-') ADVANCE(177);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1729:
      ACCEPT_TOKEN(anon_sym_substring_DASHafter);
      END_STATE();
    case 1730:
      ACCEPT_TOKEN(anon_sym_substring_DASHbefore);
      END_STATE();
    case 1731:
      ACCEPT_TOKEN(anon_sym_sum);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1732:
      ACCEPT_TOKEN(anon_sym_system_DASHproperty);
      END_STATE();
    case 1733:
      ACCEPT_TOKEN(anon_sym_translate);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1734:
      ACCEPT_TOKEN(anon_sym_unparsed_DASHentity_DASHurl);
      END_STATE();
    case 1735:
      ACCEPT_TOKEN(anon_sym_base64Encode);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1736:
      ACCEPT_TOKEN(anon_sym_base64Decode);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1737:
      ACCEPT_TOKEN(anon_sym_get_DASHproperty_LPAREN);
      END_STATE();
    case 1738:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 1739:
      ACCEPT_TOKEN(anon_sym_DOLLARbody);
      END_STATE();
    case 1740:
      ACCEPT_TOKEN(anon_sym_DOLLARheader);
      END_STATE();
    case 1741:
      ACCEPT_TOKEN(anon_sym_DOLLARaxis2);
      END_STATE();
    case 1742:
      ACCEPT_TOKEN(anon_sym_ctx);
      if (lookahead == '.') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1682);
      END_STATE();
    case 1743:
      ACCEPT_TOKEN(anon_sym_DOLLARtrp);
      END_STATE();
    case 1744:
      ACCEPT_TOKEN(anon_sym_DOLLARurl);
      END_STATE();
    case 1745:
      ACCEPT_TOKEN(anon_sym_DOLLARfunc);
      END_STATE();
    case 1746:
      ACCEPT_TOKEN(anon_sym_DOLLARenv);
      END_STATE();
    case 1747:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
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
  [137] = {.lex_state = 7},
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
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 7},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 7},
  [157] = {.lex_state = 7},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 7},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 7},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 7},
  [169] = {.lex_state = 7},
  [170] = {.lex_state = 7},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 7},
  [181] = {.lex_state = 7},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 7},
  [184] = {.lex_state = 7},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 7},
  [194] = {.lex_state = 7},
  [195] = {.lex_state = 7},
  [196] = {.lex_state = 7},
  [197] = {.lex_state = 7},
  [198] = {.lex_state = 7},
  [199] = {.lex_state = 7},
  [200] = {.lex_state = 7},
  [201] = {.lex_state = 7},
  [202] = {.lex_state = 7},
  [203] = {.lex_state = 7},
  [204] = {.lex_state = 7},
  [205] = {.lex_state = 7},
  [206] = {.lex_state = 7},
  [207] = {.lex_state = 7},
  [208] = {.lex_state = 7},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 7},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 7},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 1},
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
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 1},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 7},
  [250] = {.lex_state = 7},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 9},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 1},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 7},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 7},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 6},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 7},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 7},
  [284] = {.lex_state = 7},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 6},
  [290] = {.lex_state = 7},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 6},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 7},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 7},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 7},
  [303] = {.lex_state = 7},
  [304] = {.lex_state = 7},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 7},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 7},
  [310] = {.lex_state = 7},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 7},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 30},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 7},
  [321] = {.lex_state = 30},
  [322] = {.lex_state = 30},
  [323] = {.lex_state = 30},
  [324] = {.lex_state = 30},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 7},
  [333] = {.lex_state = 7},
  [334] = {.lex_state = 6},
  [335] = {.lex_state = 30},
  [336] = {.lex_state = 30},
  [337] = {.lex_state = 30},
  [338] = {.lex_state = 30},
  [339] = {.lex_state = 30},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 30},
  [342] = {.lex_state = 7},
  [343] = {.lex_state = 7},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 30},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 7},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 7},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 7},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 30},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 7},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 7},
  [368] = {.lex_state = 7},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 7},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 30},
  [377] = {.lex_state = 30},
  [378] = {.lex_state = 30},
  [379] = {.lex_state = 30},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 7},
  [382] = {.lex_state = 30},
  [383] = {.lex_state = 7},
  [384] = {.lex_state = 7},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 7},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 7},
  [390] = {.lex_state = 7},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 30},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 7},
  [396] = {.lex_state = 30},
  [397] = {.lex_state = 7},
  [398] = {.lex_state = 30},
  [399] = {.lex_state = 7},
  [400] = {.lex_state = 1212},
  [401] = {.lex_state = 30},
  [402] = {.lex_state = 30},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 7},
  [405] = {.lex_state = 7},
  [406] = {.lex_state = 30},
  [407] = {.lex_state = 30},
  [408] = {.lex_state = 30},
  [409] = {.lex_state = 30},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
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
  [436] = {.lex_state = 7},
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
  [464] = {.lex_state = 0},
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
  [485] = {.lex_state = 0},
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
  [522] = {.lex_state = 1212},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 9},
  [539] = {.lex_state = 7},
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
  [559] = {.lex_state = 9},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
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
  [585] = {.lex_state = 0},
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
  [612] = {.lex_state = 7},
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
  [640] = {.lex_state = 7},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 7},
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
  [672] = {.lex_state = 7},
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
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
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
    [anon_sym_LTpayloadFactory] = ACTIONS(1),
    [anon_sym_LT_SLASHpayloadFactory_GT] = ACTIONS(1),
    [anon_sym_media_DASHtype] = ACTIONS(1),
    [anon_sym_xml] = ACTIONS(1),
    [anon_sym_json] = ACTIONS(1),
    [anon_sym_LTformat] = ACTIONS(1),
    [anon_sym_LT_SLASHformat_GT] = ACTIONS(1),
    [anon_sym_LTargs_SLASH_GT] = ACTIONS(1),
    [anon_sym_LTargs_GT] = ACTIONS(1),
    [anon_sym_LTarg] = ACTIONS(1),
    [anon_sym_value] = ACTIONS(1),
    [anon_sym_expression] = ACTIONS(1),
    [anon_sym_LT_SLASHargs_GT] = ACTIONS(1),
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
    [anon_sym_DOLLAR_DOT] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(525),
    [sym__definition] = STATE(218),
    [sym_sequence_definition] = STATE(218),
    [sym_xml_declaration] = STATE(216),
    [aux_sym_document_repeat1] = STATE(218),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LTsequence] = ACTIONS(7),
    [anon_sym_LT_QMARKxml] = ACTIONS(9),
  },
  [2] = {
    [sym_json_eval] = STATE(530),
    [sym_xpath] = STATE(530),
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
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_key] = ACTIONS(15),
    [anon_sym_json_DASHeval_LPAREN] = ACTIONS(17),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
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
    [sym_json_eval] = STATE(558),
    [sym_xpath] = STATE(558),
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
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_key] = ACTIONS(15),
    [anon_sym_json_DASHeval_LPAREN] = ACTIONS(17),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
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
    [sym_json_eval] = STATE(702),
    [sym_xpath] = STATE(702),
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
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_key] = ACTIONS(15),
    [anon_sym_json_DASHeval_LPAREN] = ACTIONS(17),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
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
    [anon_sym_true] = ACTIONS(103),
    [anon_sym_false] = ACTIONS(106),
    [sym_comment] = ACTIONS(3),
    [anon_sym_key] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(101),
    [anon_sym_name] = ACTIONS(112),
    [anon_sym_id] = ACTIONS(115),
    [aux_sym_identifier_token1] = ACTIONS(118),
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
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_key] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(235),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(237),
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
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_key] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
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
    [sym_xpath] = STATE(475),
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
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_key] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
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
    [sym_xpath] = STATE(553),
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
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_key] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
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
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_key] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
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
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_key] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
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
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_key] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
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
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_key] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
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
    [sym_xpath] = STATE(471),
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
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_key] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
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
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_key] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
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
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_key] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
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
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_key] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
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
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_key] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
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
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_key] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
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
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_key] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
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
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_key] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
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
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_key] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
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
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_key] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
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
    [sym_xpath] = STATE(453),
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
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_key] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
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
    [sym_xpath] = STATE(454),
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
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_key] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
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
    [sym_xpath] = STATE(455),
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
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_key] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
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
    [sym_xpath] = STATE(456),
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
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_key] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
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
    [sym_xpath] = STATE(457),
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
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_key] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
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
    [sym_xpath] = STATE(458),
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
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_key] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
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
    [sym_xpath] = STATE(459),
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
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_key] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
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
    [sym_xpath] = STATE(460),
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
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_key] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
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
    [sym_xpath] = STATE(461),
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
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_key] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
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
    [sym_xpath] = STATE(469),
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
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_key] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
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
    [sym_xpath] = STATE(462),
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
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_key] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
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
    [sym_xpath] = STATE(463),
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
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_key] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
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
    [sym_xpath] = STATE(464),
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
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_key] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
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
    [sym_xpath] = STATE(465),
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
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_key] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
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
    [sym_xpath] = STATE(466),
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
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_key] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
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
    [sym_xpath] = STATE(467),
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
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_key] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
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
    [sym_xpath] = STATE(468),
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
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_key] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
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
    [sym_xpath] = STATE(470),
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
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_key] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
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
    [sym_xpath] = STATE(474),
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
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_key] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
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
    [sym_xpath] = STATE(473),
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
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_key] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
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
    [sym_xpath] = STATE(472),
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
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_key] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
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
    [sym_xpath] = STATE(477),
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
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_key] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
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
    [sym_xpath] = STATE(476),
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
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_key] = ACTIONS(15),
    [anon_sym_name] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(21),
    [aux_sym_identifier_token1] = ACTIONS(23),
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
      anon_sym_true,
      anon_sym_false,
      anon_sym_key,
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
      anon_sym_true,
      anon_sym_false,
      anon_sym_key,
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
      anon_sym_true,
      anon_sym_false,
      anon_sym_key,
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
      anon_sym_true,
      anon_sym_false,
      anon_sym_key,
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
      anon_sym_true,
      anon_sym_false,
      anon_sym_key,
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
      anon_sym_true,
      anon_sym_false,
      anon_sym_key,
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
      anon_sym_true,
      anon_sym_false,
      anon_sym_key,
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
      anon_sym_true,
      anon_sym_false,
      anon_sym_key,
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
      anon_sym_true,
      anon_sym_false,
      anon_sym_key,
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
      anon_sym_true,
      anon_sym_false,
      anon_sym_key,
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
      anon_sym_true,
      anon_sym_false,
      anon_sym_key,
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
      anon_sym_true,
      anon_sym_false,
      anon_sym_key,
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
      anon_sym_true,
      anon_sym_false,
      anon_sym_key,
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
      anon_sym_true,
      anon_sym_false,
      anon_sym_key,
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
      anon_sym_true,
      anon_sym_false,
      anon_sym_key,
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
      anon_sym_true,
      anon_sym_false,
      anon_sym_key,
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
      anon_sym_true,
      anon_sym_false,
      anon_sym_key,
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
      anon_sym_true,
      anon_sym_false,
      anon_sym_key,
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
      anon_sym_true,
      anon_sym_false,
      anon_sym_key,
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
      anon_sym_true,
      anon_sym_false,
      anon_sym_key,
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
      anon_sym_true,
      anon_sym_false,
      anon_sym_key,
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
      anon_sym_true,
      anon_sym_false,
      anon_sym_key,
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
      anon_sym_true,
      anon_sym_false,
      anon_sym_key,
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
      anon_sym_true,
      anon_sym_false,
      anon_sym_key,
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
      anon_sym_true,
      anon_sym_false,
      anon_sym_key,
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
      anon_sym_true,
      anon_sym_false,
      anon_sym_key,
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
      anon_sym_true,
      anon_sym_false,
      anon_sym_key,
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
      anon_sym_true,
      anon_sym_false,
      anon_sym_key,
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
      anon_sym_true,
      anon_sym_false,
      anon_sym_key,
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
      anon_sym_true,
      anon_sym_false,
      anon_sym_key,
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
      anon_sym_true,
      anon_sym_false,
      anon_sym_key,
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
      anon_sym_true,
      anon_sym_false,
      anon_sym_key,
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
      anon_sym_true,
      anon_sym_false,
      anon_sym_key,
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
      anon_sym_true,
      anon_sym_false,
      anon_sym_key,
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
      anon_sym_true,
      anon_sym_false,
      anon_sym_key,
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
      anon_sym_true,
      anon_sym_false,
      anon_sym_key,
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
      anon_sym_true,
      anon_sym_false,
      anon_sym_key,
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
      anon_sym_true,
      anon_sym_false,
      anon_sym_key,
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
      anon_sym_true,
      anon_sym_false,
      anon_sym_key,
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
      anon_sym_true,
      anon_sym_false,
      anon_sym_key,
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
      anon_sym_true,
      anon_sym_false,
      anon_sym_key,
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
      anon_sym_true,
      anon_sym_false,
      anon_sym_key,
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
  [2730] = 17,
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
    ACTIONS(447), 1,
      anon_sym_LTpayloadFactory,
    STATE(89), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    ACTIONS(412), 4,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
    STATE(115), 11,
      sym_respond,
      sym_send,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
      sym_aggregate,
      sym_iterate,
      sym_payload_factory,
      sym_sequence,
  [2796] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LTsequence,
    ACTIONS(452), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(454), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(456), 1,
      anon_sym_LTsend,
    ACTIONS(458), 1,
      anon_sym_LTlog,
    ACTIONS(460), 1,
      anon_sym_LTproperty,
    ACTIONS(462), 1,
      anon_sym_LTcall,
    ACTIONS(464), 1,
      anon_sym_LTforeach,
    ACTIONS(466), 1,
      anon_sym_LTfilter,
    ACTIONS(468), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(470), 1,
      anon_sym_LTaggregate,
    ACTIONS(472), 1,
      anon_sym_LTiterate,
    ACTIONS(474), 1,
      anon_sym_LTpayloadFactory,
    ACTIONS(476), 1,
      anon_sym_LT_SLASHonComplete_GT,
    STATE(94), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(115), 11,
      sym_respond,
      sym_send,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
      sym_aggregate,
      sym_iterate,
      sym_payload_factory,
      sym_sequence,
  [2859] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LTsequence,
    ACTIONS(452), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(454), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(456), 1,
      anon_sym_LTsend,
    ACTIONS(458), 1,
      anon_sym_LTlog,
    ACTIONS(460), 1,
      anon_sym_LTproperty,
    ACTIONS(462), 1,
      anon_sym_LTcall,
    ACTIONS(464), 1,
      anon_sym_LTforeach,
    ACTIONS(466), 1,
      anon_sym_LTfilter,
    ACTIONS(468), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(470), 1,
      anon_sym_LTaggregate,
    ACTIONS(472), 1,
      anon_sym_LTiterate,
    ACTIONS(474), 1,
      anon_sym_LTpayloadFactory,
    ACTIONS(478), 1,
      anon_sym_LT_SLASHsequence_GT,
    STATE(101), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(115), 11,
      sym_respond,
      sym_send,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
      sym_aggregate,
      sym_iterate,
      sym_payload_factory,
      sym_sequence,
  [2922] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LTsequence,
    ACTIONS(452), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(454), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(456), 1,
      anon_sym_LTsend,
    ACTIONS(458), 1,
      anon_sym_LTlog,
    ACTIONS(460), 1,
      anon_sym_LTproperty,
    ACTIONS(462), 1,
      anon_sym_LTcall,
    ACTIONS(464), 1,
      anon_sym_LTforeach,
    ACTIONS(466), 1,
      anon_sym_LTfilter,
    ACTIONS(468), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(470), 1,
      anon_sym_LTaggregate,
    ACTIONS(472), 1,
      anon_sym_LTiterate,
    ACTIONS(474), 1,
      anon_sym_LTpayloadFactory,
    ACTIONS(480), 1,
      anon_sym_LT_SLASHsequence_GT,
    STATE(89), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(115), 11,
      sym_respond,
      sym_send,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
      sym_aggregate,
      sym_iterate,
      sym_payload_factory,
      sym_sequence,
  [2985] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LTsequence,
    ACTIONS(452), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(454), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(456), 1,
      anon_sym_LTsend,
    ACTIONS(458), 1,
      anon_sym_LTlog,
    ACTIONS(460), 1,
      anon_sym_LTproperty,
    ACTIONS(462), 1,
      anon_sym_LTcall,
    ACTIONS(464), 1,
      anon_sym_LTforeach,
    ACTIONS(466), 1,
      anon_sym_LTfilter,
    ACTIONS(468), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(470), 1,
      anon_sym_LTaggregate,
    ACTIONS(472), 1,
      anon_sym_LTiterate,
    ACTIONS(474), 1,
      anon_sym_LTpayloadFactory,
    ACTIONS(482), 1,
      anon_sym_LT_SLASHsequence_GT,
    STATE(89), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(115), 11,
      sym_respond,
      sym_send,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
      sym_aggregate,
      sym_iterate,
      sym_payload_factory,
      sym_sequence,
  [3048] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LTsequence,
    ACTIONS(452), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(454), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(456), 1,
      anon_sym_LTsend,
    ACTIONS(458), 1,
      anon_sym_LTlog,
    ACTIONS(460), 1,
      anon_sym_LTproperty,
    ACTIONS(462), 1,
      anon_sym_LTcall,
    ACTIONS(464), 1,
      anon_sym_LTforeach,
    ACTIONS(466), 1,
      anon_sym_LTfilter,
    ACTIONS(468), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(470), 1,
      anon_sym_LTaggregate,
    ACTIONS(472), 1,
      anon_sym_LTiterate,
    ACTIONS(474), 1,
      anon_sym_LTpayloadFactory,
    ACTIONS(484), 1,
      anon_sym_LT_SLASHonComplete_GT,
    STATE(89), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(115), 11,
      sym_respond,
      sym_send,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
      sym_aggregate,
      sym_iterate,
      sym_payload_factory,
      sym_sequence,
  [3111] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LTsequence,
    ACTIONS(452), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(454), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(456), 1,
      anon_sym_LTsend,
    ACTIONS(458), 1,
      anon_sym_LTlog,
    ACTIONS(460), 1,
      anon_sym_LTproperty,
    ACTIONS(462), 1,
      anon_sym_LTcall,
    ACTIONS(464), 1,
      anon_sym_LTforeach,
    ACTIONS(466), 1,
      anon_sym_LTfilter,
    ACTIONS(468), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(470), 1,
      anon_sym_LTaggregate,
    ACTIONS(472), 1,
      anon_sym_LTiterate,
    ACTIONS(474), 1,
      anon_sym_LTpayloadFactory,
    ACTIONS(486), 1,
      anon_sym_LT_SLASHelse_GT,
    STATE(89), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(115), 11,
      sym_respond,
      sym_send,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
      sym_aggregate,
      sym_iterate,
      sym_payload_factory,
      sym_sequence,
  [3174] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LTsequence,
    ACTIONS(452), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(454), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(456), 1,
      anon_sym_LTsend,
    ACTIONS(458), 1,
      anon_sym_LTlog,
    ACTIONS(460), 1,
      anon_sym_LTproperty,
    ACTIONS(462), 1,
      anon_sym_LTcall,
    ACTIONS(464), 1,
      anon_sym_LTforeach,
    ACTIONS(466), 1,
      anon_sym_LTfilter,
    ACTIONS(468), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(470), 1,
      anon_sym_LTaggregate,
    ACTIONS(472), 1,
      anon_sym_LTiterate,
    ACTIONS(474), 1,
      anon_sym_LTpayloadFactory,
    ACTIONS(488), 1,
      anon_sym_LT_SLASHonComplete_GT,
    STATE(89), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(115), 11,
      sym_respond,
      sym_send,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
      sym_aggregate,
      sym_iterate,
      sym_payload_factory,
      sym_sequence,
  [3237] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LTsequence,
    ACTIONS(452), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(454), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(456), 1,
      anon_sym_LTsend,
    ACTIONS(458), 1,
      anon_sym_LTlog,
    ACTIONS(460), 1,
      anon_sym_LTproperty,
    ACTIONS(462), 1,
      anon_sym_LTcall,
    ACTIONS(464), 1,
      anon_sym_LTforeach,
    ACTIONS(466), 1,
      anon_sym_LTfilter,
    ACTIONS(468), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(470), 1,
      anon_sym_LTaggregate,
    ACTIONS(472), 1,
      anon_sym_LTiterate,
    ACTIONS(474), 1,
      anon_sym_LTpayloadFactory,
    ACTIONS(490), 1,
      anon_sym_LT_SLASHelse_GT,
    STATE(95), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(115), 11,
      sym_respond,
      sym_send,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
      sym_aggregate,
      sym_iterate,
      sym_payload_factory,
      sym_sequence,
  [3300] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LTsequence,
    ACTIONS(452), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(454), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(456), 1,
      anon_sym_LTsend,
    ACTIONS(458), 1,
      anon_sym_LTlog,
    ACTIONS(460), 1,
      anon_sym_LTproperty,
    ACTIONS(462), 1,
      anon_sym_LTcall,
    ACTIONS(464), 1,
      anon_sym_LTforeach,
    ACTIONS(466), 1,
      anon_sym_LTfilter,
    ACTIONS(468), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(470), 1,
      anon_sym_LTaggregate,
    ACTIONS(472), 1,
      anon_sym_LTiterate,
    ACTIONS(474), 1,
      anon_sym_LTpayloadFactory,
    ACTIONS(492), 1,
      anon_sym_LT_SLASHthen_GT,
    STATE(89), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(115), 11,
      sym_respond,
      sym_send,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
      sym_aggregate,
      sym_iterate,
      sym_payload_factory,
      sym_sequence,
  [3363] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LTsequence,
    ACTIONS(452), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(454), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(456), 1,
      anon_sym_LTsend,
    ACTIONS(458), 1,
      anon_sym_LTlog,
    ACTIONS(460), 1,
      anon_sym_LTproperty,
    ACTIONS(462), 1,
      anon_sym_LTcall,
    ACTIONS(464), 1,
      anon_sym_LTforeach,
    ACTIONS(466), 1,
      anon_sym_LTfilter,
    ACTIONS(468), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(470), 1,
      anon_sym_LTaggregate,
    ACTIONS(472), 1,
      anon_sym_LTiterate,
    ACTIONS(474), 1,
      anon_sym_LTpayloadFactory,
    ACTIONS(494), 1,
      anon_sym_LT_SLASHsequence_GT,
    STATE(93), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(115), 11,
      sym_respond,
      sym_send,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
      sym_aggregate,
      sym_iterate,
      sym_payload_factory,
      sym_sequence,
  [3426] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LTsequence,
    ACTIONS(452), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(454), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(456), 1,
      anon_sym_LTsend,
    ACTIONS(458), 1,
      anon_sym_LTlog,
    ACTIONS(460), 1,
      anon_sym_LTproperty,
    ACTIONS(462), 1,
      anon_sym_LTcall,
    ACTIONS(464), 1,
      anon_sym_LTforeach,
    ACTIONS(466), 1,
      anon_sym_LTfilter,
    ACTIONS(468), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(470), 1,
      anon_sym_LTaggregate,
    ACTIONS(472), 1,
      anon_sym_LTiterate,
    ACTIONS(474), 1,
      anon_sym_LTpayloadFactory,
    ACTIONS(496), 1,
      anon_sym_LT_SLASHsequence_GT,
    STATE(92), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(115), 11,
      sym_respond,
      sym_send,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
      sym_aggregate,
      sym_iterate,
      sym_payload_factory,
      sym_sequence,
  [3489] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LTsequence,
    ACTIONS(452), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(454), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(456), 1,
      anon_sym_LTsend,
    ACTIONS(458), 1,
      anon_sym_LTlog,
    ACTIONS(460), 1,
      anon_sym_LTproperty,
    ACTIONS(462), 1,
      anon_sym_LTcall,
    ACTIONS(464), 1,
      anon_sym_LTforeach,
    ACTIONS(466), 1,
      anon_sym_LTfilter,
    ACTIONS(468), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(470), 1,
      anon_sym_LTaggregate,
    ACTIONS(472), 1,
      anon_sym_LTiterate,
    ACTIONS(474), 1,
      anon_sym_LTpayloadFactory,
    ACTIONS(498), 1,
      anon_sym_LT_SLASHsequence_GT,
    STATE(89), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(115), 11,
      sym_respond,
      sym_send,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
      sym_aggregate,
      sym_iterate,
      sym_payload_factory,
      sym_sequence,
  [3552] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LTsequence,
    ACTIONS(452), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(454), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(456), 1,
      anon_sym_LTsend,
    ACTIONS(458), 1,
      anon_sym_LTlog,
    ACTIONS(460), 1,
      anon_sym_LTproperty,
    ACTIONS(462), 1,
      anon_sym_LTcall,
    ACTIONS(464), 1,
      anon_sym_LTforeach,
    ACTIONS(466), 1,
      anon_sym_LTfilter,
    ACTIONS(468), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(470), 1,
      anon_sym_LTaggregate,
    ACTIONS(472), 1,
      anon_sym_LTiterate,
    ACTIONS(474), 1,
      anon_sym_LTpayloadFactory,
    ACTIONS(500), 1,
      anon_sym_LT_SLASHonComplete_GT,
    STATE(96), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(115), 11,
      sym_respond,
      sym_send,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
      sym_aggregate,
      sym_iterate,
      sym_payload_factory,
      sym_sequence,
  [3615] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LTsequence,
    ACTIONS(452), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(454), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(456), 1,
      anon_sym_LTsend,
    ACTIONS(458), 1,
      anon_sym_LTlog,
    ACTIONS(460), 1,
      anon_sym_LTproperty,
    ACTIONS(462), 1,
      anon_sym_LTcall,
    ACTIONS(464), 1,
      anon_sym_LTforeach,
    ACTIONS(466), 1,
      anon_sym_LTfilter,
    ACTIONS(468), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(470), 1,
      anon_sym_LTaggregate,
    ACTIONS(472), 1,
      anon_sym_LTiterate,
    ACTIONS(474), 1,
      anon_sym_LTpayloadFactory,
    ACTIONS(502), 1,
      anon_sym_LT_SLASHthen_GT,
    STATE(98), 2,
      sym_mediator,
      aux_sym_sequence_definition_repeat1,
    STATE(115), 11,
      sym_respond,
      sym_send,
      sym_log,
      sym_property,
      sym_call,
      sym_foreach,
      sym_filter,
      sym_aggregate,
      sym_iterate,
      sym_payload_factory,
      sym_sequence,
  [3678] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(504), 17,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHtarget_GT,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [3705] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(508), 17,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHtarget_GT,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [3732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(512), 17,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHtarget_GT,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [3759] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(516), 17,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHtarget_GT,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [3786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(520), 16,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [3812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(524), 16,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [3838] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(528), 15,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [3863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(532), 15,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [3888] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(536), 15,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [3913] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(540), 15,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [3938] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(544), 15,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [3963] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(548), 15,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [3988] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(552), 15,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4013] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(556), 15,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4038] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(560), 15,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4063] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(564), 15,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4088] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(568), 15,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(572), 15,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(576), 15,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4163] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(580), 15,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4188] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(584), 15,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(588), 15,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(592), 15,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(596), 15,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4288] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(600), 15,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(604), 15,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4338] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(608), 15,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(612), 15,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4388] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(616), 15,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(620), 15,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4438] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(624), 15,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4463] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(628), 15,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4488] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(632), 15,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4513] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_LBRACE,
    ACTIONS(638), 1,
      anon_sym_LBRACK,
    ACTIONS(640), 1,
      anon_sym_RBRACK,
    ACTIONS(642), 1,
      anon_sym_DQUOTE,
    ACTIONS(644), 1,
      anon_sym_true,
    ACTIONS(646), 1,
      anon_sym_false,
    ACTIONS(648), 1,
      sym_null,
    ACTIONS(652), 1,
      sym__unsigned_int,
    STATE(288), 1,
      sym__value,
    ACTIONS(650), 2,
      sym__float,
      sym__int,
    STATE(257), 6,
      sym_object,
      sym_array,
      sym_string,
      sym_number,
      sym_true,
      sym_false,
  [4556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(654), 15,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4581] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(658), 15,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(662), 15,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4631] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(666), 15,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4656] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(670), 15,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4681] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(674), 15,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4706] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(678), 15,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4731] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(682), 15,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4756] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(686), 15,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(690), 15,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4806] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(694), 15,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4831] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(698), 15,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4856] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(702), 15,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4881] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(706), 15,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4906] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(710), 15,
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
      anon_sym_LTpayloadFactory,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
  [4931] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_LBRACE,
    ACTIONS(638), 1,
      anon_sym_LBRACK,
    ACTIONS(642), 1,
      anon_sym_DQUOTE,
    ACTIONS(644), 1,
      anon_sym_true,
    ACTIONS(646), 1,
      anon_sym_false,
    ACTIONS(648), 1,
      sym_null,
    ACTIONS(652), 1,
      sym__unsigned_int,
    STATE(360), 1,
      sym__value,
    ACTIONS(650), 2,
      sym__float,
      sym__int,
    STATE(257), 6,
      sym_object,
      sym_array,
      sym_string,
      sym_number,
      sym_true,
      sym_false,
  [4971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 16,
      anon_sym_DQUOTE,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_scope,
      anon_sym_action,
      anon_sym_type,
      anon_sym_pattern,
      anon_sym_group,
      anon_sym_sequence,
      anon_sym_value,
      anon_sym_expression,
      anon_sym_sequential,
      anon_sym_continueParent,
      anon_sym_preservePayload,
      anon_sym_attachPath,
      anon_sym_id,
  [4993] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_LBRACE,
    ACTIONS(638), 1,
      anon_sym_LBRACK,
    ACTIONS(642), 1,
      anon_sym_DQUOTE,
    ACTIONS(644), 1,
      anon_sym_true,
    ACTIONS(646), 1,
      anon_sym_false,
    ACTIONS(648), 1,
      sym_null,
    ACTIONS(652), 1,
      sym__unsigned_int,
    STATE(361), 1,
      sym__value,
    ACTIONS(650), 2,
      sym__float,
      sym__int,
    STATE(257), 6,
      sym_object,
      sym_array,
      sym_string,
      sym_number,
      sym_true,
      sym_false,
  [5033] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_LBRACE,
    ACTIONS(638), 1,
      anon_sym_LBRACK,
    ACTIONS(642), 1,
      anon_sym_DQUOTE,
    ACTIONS(644), 1,
      anon_sym_true,
    ACTIONS(646), 1,
      anon_sym_false,
    ACTIONS(648), 1,
      sym_null,
    ACTIONS(652), 1,
      sym__unsigned_int,
    STATE(419), 1,
      sym__value,
    ACTIONS(650), 2,
      sym__float,
      sym__int,
    STATE(257), 6,
      sym_object,
      sym_array,
      sym_string,
      sym_number,
      sym_true,
      sym_false,
  [5073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 14,
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
  [5093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 13,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_LT_SLASHformat_GT,
      anon_sym_LT_SLASHretriesBeforeSuspension_GT,
      anon_sym_LT_SLASHretryDelay_GT,
      anon_sym_LT_SLASHinitialDuration_GT,
      anon_sym_LT_SLASHprogressionFactor_GT,
      anon_sym_LT_SLASHmaximumDuration_GT,
      anon_sym_LT_SLASHerrorCodes_GT,
      anon_sym_LT_SLASHduration_GT,
  [5112] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_SLASH_GT,
    ACTIONS(722), 1,
      anon_sym_scope,
    ACTIONS(725), 1,
      anon_sym_action,
    ACTIONS(728), 1,
      anon_sym_type,
    ACTIONS(731), 1,
      anon_sym_pattern,
    ACTIONS(734), 1,
      anon_sym_group,
    ACTIONS(737), 1,
      anon_sym_value,
    ACTIONS(740), 1,
      anon_sym_expression,
    STATE(159), 1,
      aux_sym_property_repeat1,
    STATE(180), 1,
      sym__property_attribute,
    STATE(183), 1,
      sym_expression,
    STATE(184), 1,
      sym_value,
  [5152] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      anon_sym_GT,
    ACTIONS(745), 1,
      anon_sym_expression,
    ACTIONS(747), 1,
      anon_sym_sequential,
    ACTIONS(749), 1,
      anon_sym_continueParent,
    ACTIONS(751), 1,
      anon_sym_preservePayload,
    ACTIONS(753), 1,
      anon_sym_attachPath,
    STATE(161), 1,
      aux_sym_iterate_repeat1,
    STATE(193), 1,
      sym_attachPath,
    STATE(197), 1,
      sym_sequential,
    STATE(199), 1,
      sym_continueParent,
    STATE(203), 1,
      sym_expression,
    STATE(204), 1,
      sym_preservePayload,
  [5192] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_GT,
    ACTIONS(757), 1,
      anon_sym_expression,
    ACTIONS(760), 1,
      anon_sym_sequential,
    ACTIONS(763), 1,
      anon_sym_continueParent,
    ACTIONS(766), 1,
      anon_sym_preservePayload,
    ACTIONS(769), 1,
      anon_sym_attachPath,
    STATE(161), 1,
      aux_sym_iterate_repeat1,
    STATE(193), 1,
      sym_attachPath,
    STATE(197), 1,
      sym_sequential,
    STATE(199), 1,
      sym_continueParent,
    STATE(203), 1,
      sym_expression,
    STATE(204), 1,
      sym_preservePayload,
  [5232] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_expression,
    ACTIONS(772), 1,
      anon_sym_SLASH_GT,
    ACTIONS(774), 1,
      anon_sym_scope,
    ACTIONS(776), 1,
      anon_sym_action,
    ACTIONS(778), 1,
      anon_sym_type,
    ACTIONS(780), 1,
      anon_sym_pattern,
    ACTIONS(782), 1,
      anon_sym_group,
    ACTIONS(784), 1,
      anon_sym_value,
    STATE(159), 1,
      aux_sym_property_repeat1,
    STATE(180), 1,
      sym__property_attribute,
    STATE(183), 1,
      sym_expression,
    STATE(184), 1,
      sym_value,
  [5272] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_expression,
    ACTIONS(774), 1,
      anon_sym_scope,
    ACTIONS(776), 1,
      anon_sym_action,
    ACTIONS(778), 1,
      anon_sym_type,
    ACTIONS(780), 1,
      anon_sym_pattern,
    ACTIONS(782), 1,
      anon_sym_group,
    ACTIONS(784), 1,
      anon_sym_value,
    ACTIONS(786), 1,
      anon_sym_SLASH_GT,
    STATE(162), 1,
      aux_sym_property_repeat1,
    STATE(180), 1,
      sym__property_attribute,
    STATE(183), 1,
      sym_expression,
    STATE(184), 1,
      sym_value,
  [5312] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
    ACTIONS(790), 1,
      anon_sym_LTinitialDuration_GT,
    ACTIONS(793), 1,
      anon_sym_LTprogressionFactor_GT,
    ACTIONS(796), 1,
      anon_sym_LTmaximumDuration_GT,
    ACTIONS(799), 1,
      anon_sym_LTerrorCodes_GT,
    STATE(164), 6,
      sym__suspend_on_failure_property,
      sym_initial_duration,
      sym_progression_factor,
      sym_maximum_duration,
      sym_error_codes,
      aux_sym_suspend_on_failure_repeat1,
  [5339] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_expression,
    ACTIONS(747), 1,
      anon_sym_sequential,
    ACTIONS(749), 1,
      anon_sym_continueParent,
    ACTIONS(751), 1,
      anon_sym_preservePayload,
    ACTIONS(753), 1,
      anon_sym_attachPath,
    STATE(160), 1,
      aux_sym_iterate_repeat1,
    STATE(193), 1,
      sym_attachPath,
    STATE(197), 1,
      sym_sequential,
    STATE(199), 1,
      sym_continueParent,
    STATE(203), 1,
      sym_expression,
    STATE(204), 1,
      sym_preservePayload,
  [5376] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
    ACTIONS(804), 1,
      anon_sym_LTinitialDuration_GT,
    ACTIONS(806), 1,
      anon_sym_LTprogressionFactor_GT,
    ACTIONS(808), 1,
      anon_sym_LTmaximumDuration_GT,
    ACTIONS(810), 1,
      anon_sym_LTerrorCodes_GT,
    STATE(164), 6,
      sym__suspend_on_failure_property,
      sym_initial_duration,
      sym_progression_factor,
      sym_maximum_duration,
      sym_error_codes,
      aux_sym_suspend_on_failure_repeat1,
  [5403] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_LTinitialDuration_GT,
    ACTIONS(806), 1,
      anon_sym_LTprogressionFactor_GT,
    ACTIONS(808), 1,
      anon_sym_LTmaximumDuration_GT,
    ACTIONS(810), 1,
      anon_sym_LTerrorCodes_GT,
    ACTIONS(812), 1,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
    STATE(166), 6,
      sym__suspend_on_failure_property,
      sym_initial_duration,
      sym_progression_factor,
      sym_maximum_duration,
      sym_error_codes,
      aux_sym_suspend_on_failure_repeat1,
  [5430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 10,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_scope,
      anon_sym_action,
      anon_sym_type,
      anon_sym_pattern,
      anon_sym_group,
      anon_sym_value,
      anon_sym_expression,
      anon_sym_blocking,
  [5446] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_axis2,
    ACTIONS(816), 9,
      anon_sym_default,
      anon_sym_axis2_DASHclient,
      anon_sym_operation,
      anon_sym_transport,
      anon_sym_registry,
      anon_sym_synapse,
      anon_sym_system,
      anon_sym_env,
      anon_sym_file,
  [5464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 9,
      anon_sym_DQUOTE,
      anon_sym_SLASH_GT,
      anon_sym_scope,
      anon_sym_action,
      anon_sym_type,
      anon_sym_pattern,
      anon_sym_group,
      anon_sym_value,
      anon_sym_expression,
  [5479] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_LT_SLASHhttp_GT,
    ACTIONS(824), 1,
      anon_sym_LTtimeout_GT,
    ACTIONS(826), 1,
      anon_sym_LTmarkForSuspension_GT,
    ACTIONS(828), 1,
      anon_sym_LTsuspendOnFailure_GT,
    STATE(175), 2,
      sym_endpoint_error_property,
      aux_sym_http_endpoint_repeat2,
    STATE(252), 3,
      sym_timeout,
      sym_mark_for_suspending,
      sym_suspend_on_failure,
  [5504] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      anon_sym_LT_SLASHmarkForSuspension_GT,
    ACTIONS(832), 1,
      anon_sym_LTretriesBeforeSuspension_GT,
    ACTIONS(835), 1,
      anon_sym_LTretryDelay_GT,
    ACTIONS(838), 1,
      anon_sym_LTerrorCodes_GT,
    STATE(172), 5,
      sym__mark_for_suspending_property,
      sym_retries_before_suspending,
      sym_retry_delay,
      sym_error_codes,
      aux_sym_mark_for_suspending_repeat1,
  [5527] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_LTerrorCodes_GT,
    ACTIONS(841), 1,
      anon_sym_LT_SLASHmarkForSuspension_GT,
    ACTIONS(843), 1,
      anon_sym_LTretriesBeforeSuspension_GT,
    ACTIONS(845), 1,
      anon_sym_LTretryDelay_GT,
    STATE(178), 5,
      sym__mark_for_suspending_property,
      sym_retries_before_suspending,
      sym_retry_delay,
      sym_error_codes,
      aux_sym_mark_for_suspending_repeat1,
  [5550] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_LT_SLASHhttp_GT,
    ACTIONS(849), 1,
      anon_sym_LTtimeout_GT,
    ACTIONS(852), 1,
      anon_sym_LTmarkForSuspension_GT,
    ACTIONS(855), 1,
      anon_sym_LTsuspendOnFailure_GT,
    STATE(174), 2,
      sym_endpoint_error_property,
      aux_sym_http_endpoint_repeat2,
    STATE(252), 3,
      sym_timeout,
      sym_mark_for_suspending,
      sym_suspend_on_failure,
  [5575] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_LTtimeout_GT,
    ACTIONS(826), 1,
      anon_sym_LTmarkForSuspension_GT,
    ACTIONS(828), 1,
      anon_sym_LTsuspendOnFailure_GT,
    ACTIONS(858), 1,
      anon_sym_LT_SLASHhttp_GT,
    STATE(174), 2,
      sym_endpoint_error_property,
      aux_sym_http_endpoint_repeat2,
    STATE(252), 3,
      sym_timeout,
      sym_mark_for_suspending,
      sym_suspend_on_failure,
  [5600] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_LTtimeout_GT,
    ACTIONS(826), 1,
      anon_sym_LTmarkForSuspension_GT,
    ACTIONS(828), 1,
      anon_sym_LTsuspendOnFailure_GT,
    ACTIONS(860), 1,
      anon_sym_LT_SLASHhttp_GT,
    STATE(174), 2,
      sym_endpoint_error_property,
      aux_sym_http_endpoint_repeat2,
    STATE(252), 3,
      sym_timeout,
      sym_mark_for_suspending,
      sym_suspend_on_failure,
  [5625] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_LTtimeout_GT,
    ACTIONS(826), 1,
      anon_sym_LTmarkForSuspension_GT,
    ACTIONS(828), 1,
      anon_sym_LTsuspendOnFailure_GT,
    ACTIONS(858), 1,
      anon_sym_LT_SLASHhttp_GT,
    STATE(176), 2,
      sym_endpoint_error_property,
      aux_sym_http_endpoint_repeat2,
    STATE(252), 3,
      sym_timeout,
      sym_mark_for_suspending,
      sym_suspend_on_failure,
  [5650] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_LTerrorCodes_GT,
    ACTIONS(843), 1,
      anon_sym_LTretriesBeforeSuspension_GT,
    ACTIONS(845), 1,
      anon_sym_LTretryDelay_GT,
    ACTIONS(862), 1,
      anon_sym_LT_SLASHmarkForSuspension_GT,
    STATE(172), 5,
      sym__mark_for_suspending_property,
      sym_retries_before_suspending,
      sym_retry_delay,
      sym_error_codes,
      aux_sym_mark_for_suspending_repeat1,
  [5673] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_DQUOTE,
    ACTIONS(652), 1,
      sym__unsigned_int,
    ACTIONS(864), 1,
      anon_sym_RBRACE,
    STATE(286), 1,
      sym_pair,
    ACTIONS(650), 2,
      sym__float,
      sym__int,
    STATE(497), 2,
      sym_string,
      sym_number,
  [5697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 8,
      anon_sym_SLASH_GT,
      anon_sym_scope,
      anon_sym_action,
      anon_sym_type,
      anon_sym_pattern,
      anon_sym_group,
      anon_sym_value,
      anon_sym_expression,
  [5711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 8,
      anon_sym_STRING,
      anon_sym_INTEGER,
      anon_sym_BOOLEAN,
      anon_sym_DOUBLE,
      anon_sym_FLOAT,
      anon_sym_LONG,
      anon_sym_SHORT,
      anon_sym_OM,
  [5725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 8,
      anon_sym_SLASH_GT,
      anon_sym_scope,
      anon_sym_action,
      anon_sym_type,
      anon_sym_pattern,
      anon_sym_group,
      anon_sym_value,
      anon_sym_expression,
  [5739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 8,
      anon_sym_SLASH_GT,
      anon_sym_scope,
      anon_sym_action,
      anon_sym_type,
      anon_sym_pattern,
      anon_sym_group,
      anon_sym_value,
      anon_sym_expression,
  [5753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 8,
      anon_sym_SLASH_GT,
      anon_sym_scope,
      anon_sym_action,
      anon_sym_type,
      anon_sym_pattern,
      anon_sym_group,
      anon_sym_value,
      anon_sym_expression,
  [5767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 8,
      anon_sym_LT_SLASHmarkForSuspension_GT,
      anon_sym_LTretriesBeforeSuspension_GT,
      anon_sym_LTretryDelay_GT,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
      anon_sym_LTinitialDuration_GT,
      anon_sym_LTprogressionFactor_GT,
      anon_sym_LTmaximumDuration_GT,
      anon_sym_LTerrorCodes_GT,
  [5781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 8,
      anon_sym_LT_SLASHmarkForSuspension_GT,
      anon_sym_LTretriesBeforeSuspension_GT,
      anon_sym_LTretryDelay_GT,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
      anon_sym_LTinitialDuration_GT,
      anon_sym_LTprogressionFactor_GT,
      anon_sym_LTmaximumDuration_GT,
      anon_sym_LTerrorCodes_GT,
  [5795] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      anon_sym_LT_SLASHaggregate_GT,
    ACTIONS(880), 1,
      anon_sym_LTcorrelateOn,
    ACTIONS(882), 1,
      anon_sym_LTcompleteCondition,
    ACTIONS(884), 1,
      anon_sym_LTonComplete,
    STATE(210), 1,
      sym_correlateOn,
    STATE(300), 1,
      sym_complete_condition,
    STATE(615), 1,
      sym_on_complete,
  [5820] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_LT_SLASHtimeout_GT,
    ACTIONS(888), 1,
      anon_sym_LTduration_GT,
    ACTIONS(890), 1,
      anon_sym_LTresponseAction_GT,
    STATE(191), 4,
      sym__timeout_property,
      sym_duration,
      sym_response_action,
      aux_sym_timeout_repeat1,
  [5839] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_DQUOTE,
    ACTIONS(652), 1,
      sym__unsigned_int,
    STATE(363), 1,
      sym_pair,
    ACTIONS(650), 2,
      sym__float,
      sym__int,
    STATE(497), 2,
      sym_string,
      sym_number,
  [5860] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      anon_sym_LTduration_GT,
    ACTIONS(890), 1,
      anon_sym_LTresponseAction_GT,
    ACTIONS(892), 1,
      anon_sym_LT_SLASHtimeout_GT,
    STATE(188), 4,
      sym__timeout_property,
      sym_duration,
      sym_response_action,
      aux_sym_timeout_repeat1,
  [5879] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_LT_SLASHtimeout_GT,
    ACTIONS(896), 1,
      anon_sym_LTduration_GT,
    ACTIONS(899), 1,
      anon_sym_LTresponseAction_GT,
    STATE(191), 4,
      sym__timeout_property,
      sym_duration,
      sym_response_action,
      aux_sym_timeout_repeat1,
  [5898] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      anon_sym_LTcorrelateOn,
    ACTIONS(882), 1,
      anon_sym_LTcompleteCondition,
    ACTIONS(884), 1,
      anon_sym_LTonComplete,
    ACTIONS(902), 1,
      anon_sym_LT_SLASHaggregate_GT,
    STATE(223), 1,
      sym_correlateOn,
    STATE(297), 1,
      sym_complete_condition,
    STATE(552), 1,
      sym_on_complete,
  [5923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 6,
      anon_sym_GT,
      anon_sym_expression,
      anon_sym_sequential,
      anon_sym_continueParent,
      anon_sym_preservePayload,
      anon_sym_attachPath,
  [5935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 6,
      anon_sym_GT,
      anon_sym_expression,
      anon_sym_sequential,
      anon_sym_continueParent,
      anon_sym_preservePayload,
      anon_sym_attachPath,
  [5947] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      anon_sym_GT,
    ACTIONS(910), 1,
      anon_sym_uri_DASHtemplate,
    ACTIONS(912), 1,
      anon_sym_method,
    STATE(201), 3,
      sym__endpoint_attribute,
      sym_method,
      aux_sym_http_endpoint_repeat1,
  [5965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 6,
      anon_sym_GT,
      anon_sym_expression,
      anon_sym_sequential,
      anon_sym_continueParent,
      anon_sym_preservePayload,
      anon_sym_attachPath,
  [5977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 6,
      anon_sym_GT,
      anon_sym_expression,
      anon_sym_sequential,
      anon_sym_continueParent,
      anon_sym_preservePayload,
      anon_sym_attachPath,
  [5989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(918), 6,
      anon_sym_GT,
      anon_sym_expression,
      anon_sym_sequential,
      anon_sym_continueParent,
      anon_sym_preservePayload,
      anon_sym_attachPath,
  [6001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 6,
      anon_sym_GT,
      anon_sym_expression,
      anon_sym_sequential,
      anon_sym_continueParent,
      anon_sym_preservePayload,
      anon_sym_attachPath,
  [6013] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(922), 1,
      anon_sym_LBRACK,
    ACTIONS(924), 1,
      anon_sym_RPAREN,
    ACTIONS(926), 1,
      anon_sym_DOT,
    STATE(202), 3,
      sym_json_path_array,
      sym_json_path_object,
      aux_sym_json_path_repeat1,
  [6031] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(928), 1,
      anon_sym_GT,
    ACTIONS(930), 1,
      anon_sym_uri_DASHtemplate,
    ACTIONS(933), 1,
      anon_sym_method,
    STATE(201), 3,
      sym__endpoint_attribute,
      sym_method,
      aux_sym_http_endpoint_repeat1,
  [6049] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(922), 1,
      anon_sym_LBRACK,
    ACTIONS(926), 1,
      anon_sym_DOT,
    ACTIONS(936), 1,
      anon_sym_RPAREN,
    STATE(205), 3,
      sym_json_path_array,
      sym_json_path_object,
      aux_sym_json_path_repeat1,
  [6067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 6,
      anon_sym_GT,
      anon_sym_expression,
      anon_sym_sequential,
      anon_sym_continueParent,
      anon_sym_preservePayload,
      anon_sym_attachPath,
  [6079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(940), 6,
      anon_sym_GT,
      anon_sym_expression,
      anon_sym_sequential,
      anon_sym_continueParent,
      anon_sym_preservePayload,
      anon_sym_attachPath,
  [6091] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(942), 1,
      anon_sym_LBRACK,
    ACTIONS(945), 1,
      anon_sym_RPAREN,
    ACTIONS(947), 1,
      anon_sym_DOT,
    STATE(205), 3,
      sym_json_path_array,
      sym_json_path_object,
      aux_sym_json_path_repeat1,
  [6109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 6,
      anon_sym_GT,
      anon_sym_expression,
      anon_sym_sequential,
      anon_sym_continueParent,
      anon_sym_preservePayload,
      anon_sym_attachPath,
  [6121] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      anon_sym_uri_DASHtemplate,
    ACTIONS(912), 1,
      anon_sym_method,
    ACTIONS(952), 1,
      anon_sym_GT,
    STATE(195), 3,
      sym__endpoint_attribute,
      sym_method,
      aux_sym_http_endpoint_repeat1,
  [6139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 5,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SQUOTE,
  [6150] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      ts_builtin_sym_end,
    ACTIONS(956), 1,
      anon_sym_LTsequence,
    STATE(209), 3,
      sym__definition,
      sym_sequence_definition,
      aux_sym_document_repeat1,
  [6165] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_LTcompleteCondition,
    ACTIONS(884), 1,
      anon_sym_LTonComplete,
    ACTIONS(959), 1,
      anon_sym_LT_SLASHaggregate_GT,
    STATE(301), 1,
      sym_complete_condition,
    STATE(636), 1,
      sym_on_complete,
  [6184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 5,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
      anon_sym_LTinitialDuration_GT,
      anon_sym_LTprogressionFactor_GT,
      anon_sym_LTmaximumDuration_GT,
      anon_sym_LTerrorCodes_GT,
  [6195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 5,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
      anon_sym_LTinitialDuration_GT,
      anon_sym_LTprogressionFactor_GT,
      anon_sym_LTmaximumDuration_GT,
      anon_sym_LTerrorCodes_GT,
  [6206] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      anon_sym_GT,
    ACTIONS(967), 1,
      anon_sym_blocking,
    ACTIONS(969), 1,
      anon_sym_name,
    STATE(277), 1,
      sym_name,
    STATE(555), 1,
      sym_blocking,
  [6225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 5,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
      anon_sym_LTinitialDuration_GT,
      anon_sym_LTprogressionFactor_GT,
      anon_sym_LTmaximumDuration_GT,
      anon_sym_LTerrorCodes_GT,
  [6236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 5,
      anon_sym_GT,
      anon_sym_LT_SLASHhttp_GT,
      anon_sym_LTtimeout_GT,
      anon_sym_LTmarkForSuspension_GT,
      anon_sym_LTsuspendOnFailure_GT,
  [6247] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LTsequence,
    ACTIONS(975), 1,
      ts_builtin_sym_end,
    STATE(224), 3,
      sym__definition,
      sym_sequence_definition,
      aux_sym_document_repeat1,
  [6262] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      anon_sym_GT,
    ACTIONS(979), 1,
      anon_sym_sequence,
    ACTIONS(981), 1,
      anon_sym_to,
    ACTIONS(983), 1,
      anon_sym_soapAction,
    ACTIONS(985), 1,
      anon_sym_endpoint,
  [6281] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LTsequence,
    ACTIONS(975), 1,
      ts_builtin_sym_end,
    STATE(209), 3,
      sym__definition,
      sym_sequence_definition,
      aux_sym_document_repeat1,
  [6296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_LT_SLASHformat_GT,
  [6307] = 5,
    ACTIONS(989), 1,
      anon_sym_DQUOTE,
    ACTIONS(993), 1,
      sym_comment,
    STATE(240), 1,
      aux_sym_string_content_repeat1,
    STATE(501), 1,
      sym_string_content,
    ACTIONS(991), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [6324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_LT_SLASHformat_GT,
  [6335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(997), 5,
      anon_sym_GT,
      anon_sym_LT_SLASHhttp_GT,
      anon_sym_LTtimeout_GT,
      anon_sym_LTmarkForSuspension_GT,
      anon_sym_LTsuspendOnFailure_GT,
  [6346] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_LTcompleteCondition,
    ACTIONS(884), 1,
      anon_sym_LTonComplete,
    ACTIONS(999), 1,
      anon_sym_LT_SLASHaggregate_GT,
    STATE(299), 1,
      sym_complete_condition,
    STATE(724), 1,
      sym_on_complete,
  [6365] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LTsequence,
    ACTIONS(1001), 1,
      ts_builtin_sym_end,
    STATE(209), 3,
      sym__definition,
      sym_sequence_definition,
      aux_sym_document_repeat1,
  [6380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_LT_SLASHformat_GT,
  [6390] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 1,
      anon_sym_LTendpoint,
    ACTIONS(1007), 1,
      anon_sym_LTkey,
    STATE(591), 1,
      sym_endpoint_reference,
    STATE(592), 1,
      sym_endpoint,
  [6406] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 1,
      anon_sym_LT_SLASHlog_GT,
    ACTIONS(1011), 1,
      anon_sym_LTproperty,
    STATE(227), 2,
      sym_property,
      aux_sym_log_repeat1,
  [6420] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_LTproperty,
    ACTIONS(1014), 1,
      anon_sym_LT_SLASHlog_GT,
    STATE(258), 2,
      sym_property,
      aux_sym_log_repeat1,
  [6434] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      sym__unsigned_int,
    STATE(344), 1,
      sym_number,
    ACTIONS(650), 2,
      sym__float,
      sym__int,
  [6448] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      sym__unsigned_int,
    STATE(596), 1,
      sym_number,
    ACTIONS(650), 2,
      sym__float,
      sym__int,
  [6462] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      sym__unsigned_int,
    STATE(595), 1,
      sym_number,
    ACTIONS(650), 2,
      sym__float,
      sym__int,
  [6476] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      sym__unsigned_int,
    STATE(594), 1,
      sym_number,
    ACTIONS(650), 2,
      sym__float,
      sym__int,
  [6490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1016), 4,
      anon_sym_LT_SLASHhttp_GT,
      anon_sym_LTtimeout_GT,
      anon_sym_LTmarkForSuspension_GT,
      anon_sym_LTsuspendOnFailure_GT,
  [6500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 4,
      anon_sym_LT_SLASHmarkForSuspension_GT,
      anon_sym_LTretriesBeforeSuspension_GT,
      anon_sym_LTretryDelay_GT,
      anon_sym_LTerrorCodes_GT,
  [6510] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      sym__unsigned_int,
    STATE(268), 1,
      sym_number,
    ACTIONS(650), 2,
      sym__float,
      sym__int,
  [6524] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      sym__unsigned_int,
    STATE(590), 1,
      sym_number,
    ACTIONS(650), 2,
      sym__float,
      sym__int,
  [6538] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      sym__unsigned_int,
    STATE(589), 1,
      sym_number,
    ACTIONS(650), 2,
      sym__float,
      sym__int,
  [6552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1020), 4,
      anon_sym_LT_SLASHhttp_GT,
      anon_sym_LTtimeout_GT,
      anon_sym_LTmarkForSuspension_GT,
      anon_sym_LTsuspendOnFailure_GT,
  [6562] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      sym__unsigned_int,
    STATE(604), 1,
      sym_number,
    ACTIONS(650), 2,
      sym__float,
      sym__int,
  [6576] = 4,
    ACTIONS(993), 1,
      sym_comment,
    ACTIONS(1022), 1,
      anon_sym_DQUOTE,
    STATE(264), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(1024), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [6590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1026), 4,
      anon_sym_LT_SLASHmarkForSuspension_GT,
      anon_sym_LTretriesBeforeSuspension_GT,
      anon_sym_LTretryDelay_GT,
      anon_sym_LTerrorCodes_GT,
  [6600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1028), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_LT_SLASHformat_GT,
  [6610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1030), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_LT_SLASHformat_GT,
  [6620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1032), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_LT_SLASHformat_GT,
  [6630] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      sym__unsigned_int,
    STATE(751), 1,
      sym_number,
    ACTIONS(650), 2,
      sym__float,
      sym__int,
  [6644] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      sym__unsigned_int,
    STATE(571), 1,
      sym_number,
    ACTIONS(650), 2,
      sym__float,
      sym__int,
  [6658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1034), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_LT_SLASHformat_GT,
  [6668] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 1,
      anon_sym_LTendpoint,
    ACTIONS(1007), 1,
      anon_sym_LTkey,
    STATE(585), 1,
      sym_endpoint_reference,
    STATE(586), 1,
      sym_endpoint,
  [6684] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 1,
      anon_sym_GT,
    ACTIONS(1038), 1,
      anon_sym_sequence,
    ACTIONS(1040), 1,
      anon_sym_soapAction,
    ACTIONS(1042), 1,
      anon_sym_endpoint,
  [6700] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 1,
      anon_sym_GT,
    ACTIONS(1046), 1,
      anon_sym_sequence,
    ACTIONS(1048), 1,
      anon_sym_id,
    STATE(342), 1,
      sym_id,
  [6716] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      sym__unsigned_int,
    STATE(613), 1,
      sym_number,
    ACTIONS(650), 2,
      sym__float,
      sym__int,
  [6730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1050), 4,
      anon_sym_LT_SLASHhttp_GT,
      anon_sym_LTtimeout_GT,
      anon_sym_LTmarkForSuspension_GT,
      anon_sym_LTsuspendOnFailure_GT,
  [6740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1052), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_LT_SLASHformat_GT,
  [6750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1054), 4,
      anon_sym_full,
      anon_sym_simple,
      anon_sym_custom,
      anon_sym_headers,
  [6760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1056), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_LT_SLASHformat_GT,
  [6770] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 1,
      anon_sym_LTendpoint,
    ACTIONS(1007), 1,
      anon_sym_LTkey,
    STATE(579), 1,
      sym_endpoint,
    STATE(584), 1,
      sym_endpoint_reference,
  [6786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1058), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_LT_SLASHformat_GT,
  [6796] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_LTproperty,
    ACTIONS(1060), 1,
      anon_sym_LT_SLASHlog_GT,
    STATE(227), 2,
      sym_property,
      aux_sym_log_repeat1,
  [6810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1062), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_LT_SLASHformat_GT,
  [6820] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      sym__unsigned_int,
    STATE(660), 1,
      sym_number,
    ACTIONS(650), 2,
      sym__float,
      sym__int,
  [6834] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 1,
      anon_sym_LTendpoint,
    ACTIONS(1007), 1,
      anon_sym_LTkey,
    STATE(517), 1,
      sym_endpoint_reference,
    STATE(519), 1,
      sym_endpoint,
  [6850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1064), 4,
      anon_sym_LT_SLASHhttp_GT,
      anon_sym_LTtimeout_GT,
      anon_sym_LTmarkForSuspension_GT,
      anon_sym_LTsuspendOnFailure_GT,
  [6860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1066), 4,
      anon_sym_LT_SLASHhttp_GT,
      anon_sym_LTtimeout_GT,
      anon_sym_LTmarkForSuspension_GT,
      anon_sym_LTsuspendOnFailure_GT,
  [6870] = 4,
    ACTIONS(993), 1,
      sym_comment,
    ACTIONS(1068), 1,
      anon_sym_DQUOTE,
    STATE(264), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(1070), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [6884] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1073), 1,
      anon_sym_COMMA,
    ACTIONS(1076), 1,
      anon_sym_RBRACE,
    STATE(265), 1,
      aux_sym_object_repeat1,
  [6897] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(705), 1,
      sym_boolean,
    ACTIONS(1078), 2,
      anon_sym_true,
      anon_sym_false,
  [6908] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(718), 1,
      sym_boolean,
    ACTIONS(1078), 2,
      anon_sym_true,
      anon_sym_false,
  [6919] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1080), 1,
      anon_sym_COMMA,
    ACTIONS(1082), 1,
      anon_sym_LT_SLASHerrorCodes_GT,
    STATE(294), 1,
      aux_sym_error_codes_repeat1,
  [6932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 3,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [6941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1086), 3,
      anon_sym_LT_SLASHtimeout_GT,
      anon_sym_LTduration_GT,
      anon_sym_LTresponseAction_GT,
  [6950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 3,
      anon_sym_LT_SLASHtimeout_GT,
      anon_sym_LTduration_GT,
      anon_sym_LTresponseAction_GT,
  [6959] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1090), 1,
      anon_sym_GT,
    ACTIONS(1092), 1,
      anon_sym_sequence,
    ACTIONS(1094), 1,
      anon_sym_endpoint,
  [6972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 1,
      anon_sym_LThttp,
    STATE(676), 2,
      sym__endpoint_type,
      sym_http_endpoint,
  [6983] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      anon_sym_LTarg,
    ACTIONS(1100), 1,
      anon_sym_LT_SLASHargs_GT,
    STATE(289), 1,
      aux_sym_args_repeat1,
  [6996] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 1,
      anon_sym_COMMA,
    ACTIONS(1104), 1,
      anon_sym_RBRACE,
    STATE(265), 1,
      aux_sym_object_repeat1,
  [7009] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(703), 1,
      sym_boolean,
    ACTIONS(1078), 2,
      anon_sym_true,
      anon_sym_false,
  [7020] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      anon_sym_blocking,
    ACTIONS(1106), 1,
      anon_sym_GT,
    STATE(620), 1,
      sym_blocking,
  [7033] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1108), 1,
      anon_sym_COMMA,
    ACTIONS(1111), 1,
      anon_sym_RBRACK,
    STATE(278), 1,
      aux_sym_array_repeat1,
  [7046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1113), 3,
      anon_sym_LT_SLASHaggregate_GT,
      anon_sym_LTcompleteCondition,
      anon_sym_LTonComplete,
  [7055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 1,
      anon_sym_LThttp,
    STATE(542), 2,
      sym__endpoint_type,
      sym_http_endpoint,
  [7066] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      anon_sym_name,
    ACTIONS(1115), 1,
      anon_sym_GT,
    STATE(617), 1,
      sym_name,
  [7079] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1117), 1,
      anon_sym_LT_SLASHfilter_GT,
    ACTIONS(1119), 1,
      anon_sym_LTelse_GT,
    STATE(611), 1,
      sym_else,
  [7092] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1121), 1,
      anon_sym_GT,
    ACTIONS(1123), 1,
      anon_sym_sequence,
    ACTIONS(1125), 1,
      anon_sym_endpoint,
  [7105] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1127), 1,
      anon_sym_QMARK_GT,
    ACTIONS(1129), 1,
      anon_sym_encoding,
    STATE(556), 1,
      sym_encoding_declaration,
  [7118] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1131), 1,
      anon_sym_COMMA,
    ACTIONS(1133), 1,
      anon_sym_RBRACK,
    STATE(278), 1,
      aux_sym_array_repeat1,
  [7131] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 1,
      anon_sym_COMMA,
    ACTIONS(1135), 1,
      anon_sym_RBRACE,
    STATE(275), 1,
      aux_sym_object_repeat1,
  [7144] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1119), 1,
      anon_sym_LTelse_GT,
    ACTIONS(1137), 1,
      anon_sym_LT_SLASHfilter_GT,
    STATE(627), 1,
      sym_else,
  [7157] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1131), 1,
      anon_sym_COMMA,
    ACTIONS(1139), 1,
      anon_sym_RBRACK,
    STATE(285), 1,
      aux_sym_array_repeat1,
  [7170] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1141), 1,
      anon_sym_LTarg,
    ACTIONS(1144), 1,
      anon_sym_LT_SLASHargs_GT,
    STATE(289), 1,
      aux_sym_args_repeat1,
  [7183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1146), 3,
      anon_sym_never,
      anon_sym_discard,
      anon_sym_fault,
  [7192] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1148), 1,
      anon_sym_LT_SLASHcompleteCondition_GT,
    ACTIONS(1150), 1,
      anon_sym_LTmessageCount,
    STATE(738), 1,
      sym_message_count,
  [7205] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_LTtimeout_GT,
    ACTIONS(1152), 1,
      anon_sym_GT,
    STATE(639), 1,
      sym_timeout,
  [7218] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      anon_sym_LTarg,
    ACTIONS(1154), 1,
      anon_sym_LT_SLASHargs_GT,
    STATE(274), 1,
      aux_sym_args_repeat1,
  [7231] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1080), 1,
      anon_sym_COMMA,
    ACTIONS(1156), 1,
      anon_sym_LT_SLASHerrorCodes_GT,
    STATE(307), 1,
      aux_sym_error_codes_repeat1,
  [7244] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1158), 1,
      anon_sym_GT,
    ACTIONS(1160), 1,
      anon_sym_key,
    STATE(533), 1,
      sym_key,
  [7257] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      anon_sym_blocking,
    ACTIONS(1162), 1,
      anon_sym_GT,
    STATE(527), 1,
      sym_blocking,
  [7270] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_LTonComplete,
    ACTIONS(1164), 1,
      anon_sym_LT_SLASHaggregate_GT,
    STATE(721), 1,
      sym_on_complete,
  [7283] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      anon_sym_xpath,
    ACTIONS(1168), 1,
      anon_sym_source,
    STATE(581), 1,
      sym_source,
  [7296] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_LTonComplete,
    ACTIONS(1170), 1,
      anon_sym_LT_SLASHaggregate_GT,
    STATE(529), 1,
      sym_on_complete,
  [7309] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_LTonComplete,
    ACTIONS(1172), 1,
      anon_sym_LT_SLASHaggregate_GT,
    STATE(635), 1,
      sym_on_complete,
  [7322] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_LTonComplete,
    ACTIONS(1174), 1,
      anon_sym_LT_SLASHaggregate_GT,
    STATE(561), 1,
      sym_on_complete,
  [7335] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1176), 1,
      anon_sym_LTargs_SLASH_GT,
    ACTIONS(1178), 1,
      anon_sym_LTargs_GT,
    STATE(681), 1,
      sym_args,
  [7348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1180), 3,
      anon_sym_GT,
      anon_sym_uri_DASHtemplate,
      anon_sym_method,
  [7357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1182), 3,
      anon_sym_GT,
      anon_sym_uri_DASHtemplate,
      anon_sym_method,
  [7366] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1150), 1,
      anon_sym_LTmessageCount,
    ACTIONS(1184), 1,
      anon_sym_LT_SLASHcompleteCondition_GT,
    STATE(563), 1,
      sym_message_count,
  [7379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1186), 3,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [7388] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1188), 1,
      anon_sym_COMMA,
    ACTIONS(1191), 1,
      anon_sym_LT_SLASHerrorCodes_GT,
    STATE(307), 1,
      aux_sym_error_codes_repeat1,
  [7401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1193), 2,
      anon_sym_LT_SLASHsend_GT,
      anon_sym_LT_SLASHcall_GT,
  [7409] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1195), 1,
      anon_sym_value,
    ACTIONS(1197), 1,
      anon_sym_expression,
  [7419] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1199), 1,
      anon_sym_version,
    STATE(284), 1,
      sym_version_info,
  [7429] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LTsequence,
    STATE(752), 1,
      sym_sequence,
  [7439] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1201), 1,
      anon_sym_max,
    STATE(539), 1,
      sym_max,
  [7449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1203), 2,
      anon_sym_LT_SLASHaggregate_GT,
      anon_sym_LTonComplete,
  [7457] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 1,
      aux_sym_identifier_token1,
    STATE(749), 1,
      sym_identifier,
  [7467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LTsequence,
    STATE(743), 1,
      sym_sequence,
  [7477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1207), 2,
      anon_sym_LT_SLASHaggregate_GT,
      anon_sym_LTonComplete,
  [7485] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LTsequence,
    STATE(742), 1,
      sym_sequence,
  [7495] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LTsequence,
    STATE(740), 1,
      sym_sequence,
  [7505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LTsequence,
    STATE(739), 1,
      sym_sequence,
  [7515] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1209), 1,
      anon_sym_GT,
    ACTIONS(1211), 1,
      anon_sym_endpoint,
  [7525] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 1,
      aux_sym_identifier_token1,
    STATE(729), 1,
      sym_identifier,
  [7535] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 1,
      aux_sym_identifier_token1,
    STATE(728), 1,
      sym_identifier,
  [7545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 1,
      aux_sym_identifier_token1,
    STATE(727), 1,
      sym_identifier,
  [7555] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 1,
      aux_sym_identifier_token1,
    STATE(726), 1,
      sym_identifier,
  [7565] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LTsequence,
    STATE(715), 1,
      sym_sequence,
  [7575] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LTsequence,
    STATE(713), 1,
      sym_sequence,
  [7585] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LTsequence,
    STATE(712), 1,
      sym_sequence,
  [7595] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LTsequence,
    STATE(709), 1,
      sym_sequence,
  [7605] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LTsequence,
    STATE(482), 1,
      sym_sequence,
  [7615] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LTsequence,
    STATE(707), 1,
      sym_sequence,
  [7625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LTsequence,
    STATE(706), 1,
      sym_sequence,
  [7635] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1213), 1,
      anon_sym_GT,
    ACTIONS(1215), 1,
      anon_sym_endpoint,
  [7645] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1217), 1,
      anon_sym_GT,
    ACTIONS(1219), 1,
      anon_sym_endpoint,
  [7655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1221), 2,
      anon_sym_LTarg,
      anon_sym_LT_SLASHargs_GT,
  [7663] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 1,
      aux_sym_identifier_token1,
    STATE(689), 1,
      sym_identifier,
  [7673] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 1,
      aux_sym_identifier_token1,
    STATE(688), 1,
      sym_identifier,
  [7683] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 1,
      aux_sym_identifier_token1,
    STATE(687), 1,
      sym_identifier,
  [7693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 1,
      aux_sym_identifier_token1,
    STATE(686), 1,
      sym_identifier,
  [7703] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 1,
      aux_sym_identifier_token1,
    STATE(685), 1,
      sym_identifier,
  [7713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1223), 2,
      anon_sym_LT_SLASHsend_GT,
      anon_sym_LT_SLASHcall_GT,
  [7721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 1,
      aux_sym_identifier_token1,
    STATE(684), 1,
      sym_identifier,
  [7731] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1225), 1,
      anon_sym_GT,
    ACTIONS(1227), 1,
      anon_sym_sequence,
  [7741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1229), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
  [7749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1191), 2,
      anon_sym_COMMA,
      anon_sym_LT_SLASHerrorCodes_GT,
  [7757] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LTsequence,
    STATE(671), 1,
      sym_sequence,
  [7767] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LTsequence,
    STATE(668), 1,
      sym_sequence,
  [7777] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LTsequence,
    STATE(664), 1,
      sym_sequence,
  [7787] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LTsequence,
    STATE(662), 1,
      sym_sequence,
  [7797] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 1,
      aux_sym_identifier_token1,
    STATE(200), 1,
      sym_identifier,
  [7807] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      anon_sym_name,
    STATE(565), 1,
      sym_name,
  [7817] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1231), 1,
      anon_sym_LTthen_GT,
    STATE(287), 1,
      sym_then,
  [7827] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 1,
      anon_sym_LTendpoint,
    STATE(614), 1,
      sym_endpoint,
  [7837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1233), 2,
      anon_sym_DQUOTE,
      anon_sym_GT,
  [7845] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1235), 1,
      anon_sym_GT,
    ACTIONS(1237), 1,
      anon_sym_sequence,
  [7855] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1239), 1,
      anon_sym_LTtarget,
    STATE(551), 1,
      sym_target,
  [7865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_expression,
    STATE(656), 1,
      sym_expression,
  [7875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1241), 2,
      ts_builtin_sym_end,
      anon_sym_LTsequence,
  [7883] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_value,
    STATE(656), 1,
      sym_value,
  [7893] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1243), 1,
      anon_sym_LTformat,
    STATE(302), 1,
      sym_format,
  [7903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1111), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1245), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [7919] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 1,
      aux_sym_identifier_token1,
    STATE(545), 1,
      sym_identifier,
  [7929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [7937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1247), 2,
      anon_sym_true,
      anon_sym_false,
  [7945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1249), 1,
      anon_sym_GT,
    ACTIONS(1251), 1,
      anon_sym_endpoint,
  [7955] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LTsequence,
    STATE(641), 1,
      sym_sequence,
  [7965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_expression,
    STATE(354), 1,
      sym_expression,
  [7975] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_expression,
    STATE(640), 1,
      sym_expression,
  [7985] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LTsequence,
    STATE(546), 1,
      sym_sequence,
  [7995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1253), 2,
      anon_sym_LT_SLASHaggregate_GT,
      anon_sym_LTonComplete,
  [8003] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1255), 1,
      anon_sym_GT,
    ACTIONS(1257), 1,
      anon_sym_SLASH_GT,
  [8013] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LTsequence,
    STATE(583), 1,
      sym_sequence,
  [8023] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LTsequence,
    STATE(608), 1,
      sym_sequence,
  [8033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1259), 2,
      ts_builtin_sym_end,
      anon_sym_LTsequence,
  [8041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1261), 2,
      anon_sym_LT_SLASHfilter_GT,
      anon_sym_LTelse_GT,
  [8049] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 1,
      aux_sym_identifier_token1,
    STATE(478), 1,
      sym_identifier,
  [8059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1263), 1,
      aux_sym_identifier_token1,
    STATE(55), 1,
      sym_identifier,
  [8069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 1,
      aux_sym_identifier_token1,
    STATE(535), 1,
      sym_identifier,
  [8079] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 1,
      aux_sym_identifier_token1,
    STATE(731), 1,
      sym_identifier,
  [8089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1265), 2,
      ts_builtin_sym_end,
      anon_sym_LTsequence,
  [8097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1267), 2,
      anon_sym_xml,
      anon_sym_json,
  [8105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 1,
      aux_sym_identifier_token1,
    STATE(481), 1,
      sym_identifier,
  [8115] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      anon_sym_level,
    STATE(371), 1,
      sym_level,
  [8125] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1271), 1,
      anon_sym_regex,
    STATE(483), 1,
      sym_regex,
  [8135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1273), 2,
      anon_sym_LT_SLASHfilter_GT,
      anon_sym_LTelse_GT,
  [8143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      anon_sym_name,
    STATE(163), 1,
      sym_name,
  [8153] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_expression,
    STATE(250), 1,
      sym_expression,
  [8163] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1048), 1,
      anon_sym_id,
    STATE(619), 1,
      sym_id,
  [8173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1275), 1,
      anon_sym_media_DASHtype,
    STATE(499), 1,
      sym_media_type,
  [8183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1277), 2,
      anon_sym_QMARK_GT,
      anon_sym_encoding,
  [8191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1279), 2,
      ts_builtin_sym_end,
      anon_sym_LTsequence,
  [8199] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 1,
      aux_sym_identifier_token1,
    STATE(554), 1,
      sym_identifier,
  [8209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 1,
      anon_sym_LTendpoint,
    STATE(638), 1,
      sym_endpoint,
  [8219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1281), 2,
      anon_sym_LT_SLASHaggregate_GT,
      anon_sym_LTonComplete,
  [8227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 2,
      anon_sym_set,
      anon_sym_remove,
  [8235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 1,
      aux_sym_identifier_token1,
    STATE(488), 1,
      sym_identifier,
  [8245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1283), 2,
      anon_sym_GT,
      anon_sym_sequence,
  [8253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 1,
      aux_sym_identifier_token1,
    STATE(269), 1,
      sym_identifier,
  [8263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1271), 1,
      anon_sym_regex,
    STATE(660), 1,
      sym_regex,
  [8273] = 3,
    ACTIONS(993), 1,
      sym_comment,
    ACTIONS(1285), 1,
      aux_sym_value_token1,
    STATE(603), 1,
      sym_expression_string,
  [8283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 1,
      aux_sym_identifier_token1,
    STATE(652), 1,
      sym_identifier,
  [8293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 1,
      aux_sym_identifier_token1,
    STATE(599), 1,
      sym_identifier,
  [8303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1287), 1,
      anon_sym_DOLLAR_DOT,
    STATE(646), 1,
      sym_json_path,
  [8313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1289), 2,
      anon_sym_LTargs_SLASH_GT,
      anon_sym_LTargs_GT,
  [8321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1291), 1,
      anon_sym_min,
    STATE(312), 1,
      sym_min,
  [8331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 1,
      aux_sym_identifier_token1,
    STATE(577), 1,
      sym_identifier,
  [8341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 1,
      aux_sym_identifier_token1,
    STATE(576), 1,
      sym_identifier,
  [8351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 1,
      aux_sym_identifier_token1,
    STATE(575), 1,
      sym_identifier,
  [8361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 1,
      aux_sym_identifier_token1,
    STATE(574), 1,
      sym_identifier,
  [8371] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1231), 1,
      anon_sym_LTthen_GT,
    STATE(282), 1,
      sym_then,
  [8381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1293), 1,
      anon_sym_LT_SLASHpayloadFactory_GT,
  [8388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1295), 1,
      anon_sym_DQUOTE,
  [8395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1297), 1,
      anon_sym_LPAREN,
  [8402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1299), 1,
      anon_sym_LPAREN,
  [8409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1301), 1,
      anon_sym_LPAREN,
  [8416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1303), 1,
      anon_sym_LPAREN,
  [8423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1305), 1,
      anon_sym_LPAREN,
  [8430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1307), 1,
      anon_sym_LPAREN,
  [8437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1309), 1,
      anon_sym_LT_SLASHformat_GT,
  [8444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1311), 1,
      anon_sym_EQ,
  [8451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1313), 1,
      anon_sym_LPAREN,
  [8458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1315), 1,
      anon_sym_LPAREN,
  [8465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1317), 1,
      anon_sym_LT_SLASHendpoint_GT,
  [8472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1319), 1,
      anon_sym_LPAREN,
  [8479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1321), 1,
      anon_sym_LPAREN,
  [8486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1323), 1,
      anon_sym_LPAREN,
  [8493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1325), 1,
      anon_sym_LPAREN,
  [8500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1327), 1,
      anon_sym_DQUOTE,
  [8507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1329), 1,
      anon_sym_DQUOTE,
  [8514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1331), 1,
      anon_sym_LPAREN,
  [8521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1333), 1,
      anon_sym_LPAREN,
  [8528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1335), 1,
      anon_sym_DQUOTE,
  [8535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1337), 1,
      anon_sym_LPAREN,
  [8542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1339), 1,
      anon_sym_DQUOTE,
  [8549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1341), 1,
      anon_sym_LPAREN,
  [8556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1343), 1,
      anon_sym_SLASH_GT,
  [8563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1345), 1,
      anon_sym_RPAREN,
  [8570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1347), 1,
      anon_sym_RPAREN,
  [8577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1349), 1,
      anon_sym_RPAREN,
  [8584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1351), 1,
      anon_sym_LPAREN,
  [8591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1353), 1,
      anon_sym_DQUOTE,
  [8598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1355), 1,
      anon_sym_RPAREN,
  [8605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1357), 1,
      anon_sym_RPAREN,
  [8612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1359), 1,
      anon_sym_RPAREN,
  [8619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1361), 1,
      anon_sym_RPAREN,
  [8626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1363), 1,
      anon_sym_RPAREN,
  [8633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1365), 1,
      anon_sym_RPAREN,
  [8640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1367), 1,
      anon_sym_RPAREN,
  [8647] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1369), 1,
      anon_sym_RPAREN,
  [8654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1371), 1,
      anon_sym_RPAREN,
  [8661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1373), 1,
      anon_sym_RPAREN,
  [8668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1375), 1,
      anon_sym_RPAREN,
  [8675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1377), 1,
      anon_sym_RPAREN,
  [8682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1379), 1,
      anon_sym_RPAREN,
  [8689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1381), 1,
      anon_sym_RPAREN,
  [8696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1383), 1,
      anon_sym_RPAREN,
  [8703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1385), 1,
      anon_sym_RPAREN,
  [8710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1387), 1,
      anon_sym_RPAREN,
  [8717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1389), 1,
      anon_sym_RPAREN,
  [8724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1391), 1,
      anon_sym_RPAREN,
  [8731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1393), 1,
      anon_sym_RPAREN,
  [8738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1395), 1,
      anon_sym_RPAREN,
  [8745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1397), 1,
      anon_sym_RPAREN,
  [8752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1399), 1,
      anon_sym_RPAREN,
  [8759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1401), 1,
      anon_sym_RPAREN,
  [8766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1403), 1,
      anon_sym_RPAREN,
  [8773] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1405), 1,
      anon_sym_RPAREN,
  [8780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1407), 1,
      anon_sym_RPAREN,
  [8787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1409), 1,
      anon_sym_RPAREN,
  [8794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1411), 1,
      anon_sym_RPAREN,
  [8801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1413), 1,
      anon_sym_RPAREN,
  [8808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1415), 1,
      anon_sym_RPAREN,
  [8815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1417), 1,
      anon_sym_RPAREN,
  [8822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1419), 1,
      anon_sym_RPAREN,
  [8829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1421), 1,
      anon_sym_RPAREN,
  [8836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1423), 1,
      anon_sym_RPAREN,
  [8843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1425), 1,
      anon_sym_RPAREN,
  [8850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1427), 1,
      anon_sym_SQUOTE,
  [8857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1429), 1,
      anon_sym_LPAREN,
  [8864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1431), 1,
      anon_sym_GT,
  [8871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1433), 1,
      anon_sym_DQUOTE,
  [8878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1435), 1,
      anon_sym_LT_SLASHtarget_GT,
  [8885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1437), 1,
      anon_sym_GT,
  [8892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1439), 1,
      anon_sym_LT_SLASHfilter_GT,
  [8899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1441), 1,
      anon_sym_LPAREN,
  [8906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1443), 1,
      anon_sym_DQUOTE,
  [8913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1445), 1,
      anon_sym_LT_SLASHcompleteCondition_GT,
  [8920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1447), 1,
      anon_sym_DQUOTE,
  [8927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1449), 1,
      anon_sym_LPAREN,
  [8934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1451), 1,
      anon_sym_LT_SLASHiterate_GT,
  [8941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1453), 1,
      anon_sym_DQUOTE,
  [8948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1455), 1,
      anon_sym_DQUOTE,
  [8955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1457), 1,
      anon_sym_DQUOTE,
  [8962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1459), 1,
      anon_sym_DQUOTE,
  [8969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1461), 1,
      anon_sym_LPAREN,
  [8976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1463), 1,
      anon_sym_LPAREN,
  [8983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1465), 1,
      anon_sym_COLON,
  [8990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1467), 1,
      anon_sym_LPAREN,
  [8997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1469), 1,
      anon_sym_GT,
  [9004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1471), 1,
      anon_sym_LPAREN,
  [9011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1473), 1,
      anon_sym_DQUOTE,
  [9018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1475), 1,
      anon_sym_LPAREN,
  [9025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1477), 1,
      anon_sym_LPAREN,
  [9032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      anon_sym_EQ,
  [9039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1481), 1,
      anon_sym_EQ,
  [9046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1483), 1,
      anon_sym_LT_SLASHpayloadFactory_GT,
  [9053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1485), 1,
      anon_sym_LPAREN,
  [9060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1487), 1,
      anon_sym_LPAREN,
  [9067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1489), 1,
      anon_sym_LPAREN,
  [9074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1491), 1,
      anon_sym_LPAREN,
  [9081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1493), 1,
      anon_sym_LPAREN,
  [9088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1495), 1,
      anon_sym_LPAREN,
  [9095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1497), 1,
      anon_sym_LPAREN,
  [9102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1499), 1,
      anon_sym_LPAREN,
  [9109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1501), 1,
      anon_sym_LPAREN,
  [9116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1503), 1,
      anon_sym_LPAREN,
  [9123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1505), 1,
      anon_sym_LT_SLASHcall_GT,
  [9130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1507), 1,
      anon_sym_LT_SLASHendpoint_GT,
  [9137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1509), 1,
      anon_sym_LT_SLASHcall_GT,
  [9144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1511), 1,
      anon_sym_LPAREN,
  [9151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1513), 1,
      anon_sym_LPAREN,
  [9158] = 2,
    ACTIONS(993), 1,
      sym_comment,
    ACTIONS(1515), 1,
      aux_sym_value_token1,
  [9165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1517), 1,
      anon_sym_SQUOTE,
  [9172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1519), 1,
      anon_sym_LT_SLASHcall_GT,
  [9179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1521), 1,
      ts_builtin_sym_end,
  [9186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1523), 1,
      anon_sym_EQ,
  [9193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1525), 1,
      anon_sym_GT,
  [9200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1527), 1,
      anon_sym_COLON,
  [9207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1529), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [9214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1531), 1,
      anon_sym_DQUOTE,
  [9221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1533), 1,
      anon_sym_EQ,
  [9228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1535), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [9235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1537), 1,
      anon_sym_GT,
  [9242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1539), 1,
      anon_sym_EQ,
  [9249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1541), 1,
      anon_sym_DQUOTE,
  [9256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1543), 1,
      anon_sym_DQUOTE,
  [9263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1545), 1,
      anon_sym_EQ,
  [9270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1547), 1,
      sym_encoding,
  [9277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1549), 1,
      anon_sym_SLASH_GT,
  [9284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1551), 1,
      anon_sym_DQUOTE,
  [9291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1553), 1,
      anon_sym_EQ,
  [9298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1555), 1,
      anon_sym_LT_SLASHendpoint_GT,
  [9305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1557), 1,
      anon_sym_DQUOTE,
  [9312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1559), 1,
      anon_sym_EQ,
  [9319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1561), 1,
      anon_sym_DQUOTE,
  [9326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1563), 1,
      anon_sym_LT_SLASHforeach_GT,
  [9333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1565), 1,
      anon_sym_GT,
  [9340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1567), 1,
      anon_sym_DQUOTE,
  [9347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1569), 1,
      anon_sym_LT_SLASHfilter_GT,
  [9354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1571), 1,
      anon_sym_GT,
  [9361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1573), 1,
      anon_sym_LT_SLASHiterate_GT,
  [9368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1575), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [9375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1577), 1,
      anon_sym_DQUOTE,
  [9382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1579), 1,
      anon_sym_DQUOTE,
  [9389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1581), 1,
      anon_sym_GT,
  [9396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1583), 1,
      anon_sym_QMARK_GT,
  [9403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1585), 1,
      anon_sym_EQ,
  [9410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1587), 1,
      anon_sym_DQUOTE,
  [9417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1589), 1,
      sym_version_number,
  [9424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1591), 1,
      anon_sym_DQUOTE,
  [9431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1593), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [9438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1595), 1,
      anon_sym_EQ,
  [9445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1597), 1,
      anon_sym_LT_SLASHcompleteCondition_GT,
  [9452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1599), 1,
      anon_sym_EQ,
  [9459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1601), 1,
      anon_sym_GT,
  [9466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1603), 1,
      anon_sym_EQ,
  [9473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1605), 1,
      anon_sym_RPAREN,
  [9480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1607), 1,
      anon_sym_EQ,
  [9487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1609), 1,
      anon_sym_GT,
  [9494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1611), 1,
      anon_sym_EQ,
  [9501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1613), 1,
      anon_sym_DQUOTE,
  [9508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1615), 1,
      anon_sym_EQ,
  [9515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1617), 1,
      anon_sym_GT,
  [9522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1619), 1,
      anon_sym_DQUOTE,
  [9529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1621), 1,
      anon_sym_DQUOTE,
  [9536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1623), 1,
      anon_sym_DQUOTE,
  [9543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1625), 1,
      anon_sym_DQUOTE,
  [9550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1627), 1,
      anon_sym_EQ,
  [9557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1629), 1,
      anon_sym_LT_SLASHcall_GT,
  [9564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1631), 1,
      anon_sym_EQ,
  [9571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1633), 1,
      anon_sym_GT,
  [9578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1635), 1,
      anon_sym_GT,
  [9585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1637), 1,
      anon_sym_LT_SLASHforeach_GT,
  [9592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1639), 1,
      anon_sym_LT_SLASHcall_GT,
  [9599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1641), 1,
      anon_sym_LT_SLASHcall_GT,
  [9606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1643), 1,
      anon_sym_LT_SLASHcall_GT,
  [9613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1645), 1,
      anon_sym_DQUOTE,
  [9620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1647), 1,
      anon_sym_DQUOTE,
  [9627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1649), 1,
      anon_sym_LT_SLASHretriesBeforeSuspension_GT,
  [9634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1651), 1,
      anon_sym_LT_SLASHretryDelay_GT,
  [9641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1653), 1,
      anon_sym_LT_SLASHcall_GT,
  [9648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1655), 1,
      anon_sym_LT_SLASHcall_GT,
  [9655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1657), 1,
      anon_sym_DQUOTE,
  [9662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1659), 1,
      anon_sym_LT_SLASHinitialDuration_GT,
  [9669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1661), 1,
      anon_sym_LT_SLASHprogressionFactor_GT,
  [9676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1663), 1,
      anon_sym_LT_SLASHmaximumDuration_GT,
  [9683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1665), 1,
      anon_sym_DQUOTE,
  [9690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1667), 1,
      anon_sym_DQUOTE,
  [9697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1669), 1,
      anon_sym_DQUOTE,
  [9704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1671), 1,
      anon_sym_DQUOTE,
  [9711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1673), 1,
      anon_sym_LT_SLASHendpoint_GT,
  [9718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1675), 1,
      anon_sym_DQUOTE,
  [9725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1677), 1,
      anon_sym_DQUOTE,
  [9732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1679), 1,
      anon_sym_RBRACK,
  [9739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1681), 1,
      anon_sym_DQUOTE,
  [9746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1683), 1,
      anon_sym_DQUOTE,
  [9753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1685), 1,
      anon_sym_DQUOTE,
  [9760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1687), 1,
      anon_sym_LT_SLASHforeach_GT,
  [9767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1689), 1,
      anon_sym_LPAREN,
  [9774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1691), 1,
      anon_sym_DQUOTE,
  [9781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1693), 1,
      anon_sym_LT_SLASHfilter_GT,
  [9788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1695), 1,
      anon_sym_max,
  [9795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1697), 1,
      anon_sym_DQUOTE,
  [9802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1699), 1,
      anon_sym_LT_SLASHsend_GT,
  [9809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1701), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [9816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1703), 1,
      anon_sym_EQ,
  [9823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1705), 1,
      anon_sym_GT,
  [9830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1707), 1,
      anon_sym_GT,
  [9837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1709), 1,
      anon_sym_GT,
  [9844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1711), 1,
      anon_sym_GT,
  [9851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1713), 1,
      anon_sym_EQ,
  [9858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1715), 1,
      anon_sym_EQ,
  [9865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1717), 1,
      anon_sym_EQ,
  [9872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1719), 1,
      anon_sym_EQ,
  [9879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1721), 1,
      anon_sym_EQ,
  [9886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1723), 1,
      anon_sym_EQ,
  [9893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1725), 1,
      anon_sym_LT_SLASHfilter_GT,
  [9900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1727), 1,
      anon_sym_DQUOTE,
  [9907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1729), 1,
      anon_sym_QMARK_GT,
  [9914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1731), 1,
      anon_sym_DQUOTE,
  [9921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1733), 1,
      anon_sym_DQUOTE,
  [9928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1735), 1,
      anon_sym_DQUOTE,
  [9935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1737), 1,
      anon_sym_DQUOTE,
  [9942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1739), 1,
      anon_sym_DQUOTE,
  [9949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1741), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [9956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1743), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [9963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1745), 1,
      anon_sym_DQUOTE,
  [9970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1747), 1,
      anon_sym_LT_SLASHsend_GT,
  [9977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1749), 1,
      anon_sym_GT,
  [9984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1751), 1,
      anon_sym_SLASH_GT,
  [9991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1753), 1,
      anon_sym_LT_SLASHforeach_GT,
  [9998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1755), 1,
      anon_sym_DQUOTE,
  [10005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1757), 1,
      anon_sym_SLASH_GT,
  [10012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1759), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [10019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1761), 1,
      anon_sym_DQUOTE,
  [10026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1763), 1,
      anon_sym_RPAREN,
  [10033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1765), 1,
      anon_sym_EQ,
  [10040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1767), 1,
      anon_sym_EQ,
  [10047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1769), 1,
      anon_sym_EQ,
  [10054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1771), 1,
      anon_sym_EQ,
  [10061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1773), 1,
      anon_sym_EQ,
  [10068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1775), 1,
      anon_sym_DQUOTE,
  [10075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1777), 1,
      anon_sym_EQ,
  [10082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1779), 1,
      anon_sym_EQ,
  [10089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1781), 1,
      anon_sym_DQUOTE,
  [10096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1783), 1,
      anon_sym_DQUOTE,
  [10103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1785), 1,
      anon_sym_EQ,
  [10110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1787), 1,
      anon_sym_DQUOTE,
  [10117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1789), 1,
      anon_sym_DQUOTE,
  [10124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1791), 1,
      anon_sym_DQUOTE,
  [10131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1793), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [10138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1795), 1,
      anon_sym_LT_SLASHtarget_GT,
  [10145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1797), 1,
      anon_sym_DQUOTE,
  [10152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1799), 1,
      anon_sym_LT_SLASHtarget_GT,
  [10159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1801), 1,
      anon_sym_DQUOTE,
  [10166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1803), 1,
      anon_sym_DQUOTE,
  [10173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1805), 1,
      anon_sym_DQUOTE,
  [10180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1807), 1,
      anon_sym_LT_SLASHtarget_GT,
  [10187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1809), 1,
      anon_sym_DQUOTE,
  [10194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1811), 1,
      anon_sym_DQUOTE,
  [10201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1813), 1,
      anon_sym_LT_SLASHtarget_GT,
  [10208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1815), 1,
      anon_sym_SLASH_GT,
  [10215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1817), 1,
      anon_sym_LT_SLASHiterate_GT,
  [10222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1819), 1,
      anon_sym_GT,
  [10229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1821), 1,
      anon_sym_LT_SLASHiterate_GT,
  [10236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1823), 1,
      anon_sym_LT_SLASHendpoint_GT,
  [10243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1825), 1,
      anon_sym_EQ,
  [10250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1827), 1,
      anon_sym_EQ,
  [10257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1829), 1,
      anon_sym_LT_SLASHiterate_GT,
  [10264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1831), 1,
      anon_sym_GT,
  [10271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1833), 1,
      anon_sym_LT_SLASHpayloadFactory_GT,
  [10278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1835), 1,
      anon_sym_LT_SLASHiterate_GT,
  [10285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1837), 1,
      anon_sym_LT_SLASHpayloadFactory_GT,
  [10292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1839), 1,
      anon_sym_DQUOTE,
  [10299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1841), 1,
      anon_sym_DQUOTE,
  [10306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1843), 1,
      anon_sym_DQUOTE,
  [10313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1845), 1,
      anon_sym_DQUOTE,
  [10320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1847), 1,
      anon_sym_DQUOTE,
  [10327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1849), 1,
      anon_sym_DQUOTE,
  [10334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1851), 1,
      anon_sym_GT,
  [10341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1853), 1,
      anon_sym_DQUOTE,
  [10348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1855), 1,
      anon_sym_EQ,
  [10355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1857), 1,
      anon_sym_GT,
  [10362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1859), 1,
      anon_sym_EQ,
  [10369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1861), 1,
      anon_sym_GT,
  [10376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1863), 1,
      anon_sym_EQ,
  [10383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1865), 1,
      anon_sym_EQ,
  [10390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1867), 1,
      anon_sym_EQ,
  [10397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1869), 1,
      anon_sym_EQ,
  [10404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1871), 1,
      anon_sym_EQ,
  [10411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1873), 1,
      anon_sym_EQ,
  [10418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1875), 1,
      anon_sym_DQUOTE,
  [10425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1877), 1,
      anon_sym_DQUOTE,
  [10432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1879), 1,
      anon_sym_EQ,
  [10439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1881), 1,
      anon_sym_DQUOTE,
  [10446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1883), 1,
      anon_sym_LT_SLASHtarget_GT,
  [10453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1885), 1,
      anon_sym_LT_SLASHtarget_GT,
  [10460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1887), 1,
      anon_sym_DQUOTE,
  [10467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1889), 1,
      anon_sym_LT_SLASHtarget_GT,
  [10474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1891), 1,
      anon_sym_DQUOTE,
  [10481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1893), 1,
      anon_sym_DQUOTE,
  [10488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1895), 1,
      anon_sym_LT_SLASHtarget_GT,
  [10495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1897), 1,
      anon_sym_LT_SLASHtarget_GT,
  [10502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1899), 1,
      anon_sym_DQUOTE,
  [10509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1901), 1,
      anon_sym_LT_SLASHtarget_GT,
  [10516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1903), 1,
      anon_sym_LT_SLASHiterate_GT,
  [10523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1905), 1,
      anon_sym_LT_SLASHiterate_GT,
  [10530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1907), 1,
      anon_sym_DQUOTE,
  [10537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1909), 1,
      anon_sym_LT_SLASHiterate_GT,
  [10544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1911), 1,
      anon_sym_DQUOTE,
  [10551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1913), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [10558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1915), 1,
      anon_sym_LT_SLASHiterate_GT,
  [10565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1917), 1,
      anon_sym_LT_SLASHiterate_GT,
  [10572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1919), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [10579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1921), 1,
      anon_sym_LT_SLASHiterate_GT,
  [10586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1923), 1,
      anon_sym_DQUOTE,
  [10593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1925), 1,
      anon_sym_DQUOTE,
  [10600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1927), 1,
      anon_sym_DQUOTE,
  [10607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1929), 1,
      anon_sym_DQUOTE,
  [10614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1931), 1,
      anon_sym_GT,
  [10621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1933), 1,
      anon_sym_DQUOTE,
  [10628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1935), 1,
      anon_sym_GT,
  [10635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1937), 1,
      anon_sym_GT,
  [10642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1939), 1,
      anon_sym_DQUOTE,
  [10649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1941), 1,
      anon_sym_EQ,
  [10656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1943), 1,
      anon_sym_EQ,
  [10663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1945), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [10670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1947), 1,
      anon_sym_LT_SLASHcompleteCondition_GT,
  [10677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1949), 1,
      anon_sym_LT_SLASHtarget_GT,
  [10684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1951), 1,
      anon_sym_LT_SLASHtarget_GT,
  [10691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1953), 1,
      anon_sym_DQUOTE,
  [10698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1955), 1,
      anon_sym_LT_SLASHtarget_GT,
  [10705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1957), 1,
      anon_sym_LT_SLASHtarget_GT,
  [10712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1959), 1,
      anon_sym_LT_SLASHiterate_GT,
  [10719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1961), 1,
      anon_sym_LT_SLASHiterate_GT,
  [10726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1963), 1,
      anon_sym_LT_SLASHresponseAction_GT,
  [10733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1965), 1,
      anon_sym_LT_SLASHiterate_GT,
  [10740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1967), 1,
      anon_sym_LT_SLASHiterate_GT,
  [10747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1969), 1,
      anon_sym_DQUOTE,
  [10754] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1971), 1,
      anon_sym_GT,
  [10761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1973), 1,
      anon_sym_LT_SLASHduration_GT,
  [10768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1975), 1,
      anon_sym_LT_SLASHtarget_GT,
  [10775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1977), 1,
      anon_sym_LT_SLASHiterate_GT,
  [10782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1979), 1,
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
  [SMALL_STATE(90)] = 2796,
  [SMALL_STATE(91)] = 2859,
  [SMALL_STATE(92)] = 2922,
  [SMALL_STATE(93)] = 2985,
  [SMALL_STATE(94)] = 3048,
  [SMALL_STATE(95)] = 3111,
  [SMALL_STATE(96)] = 3174,
  [SMALL_STATE(97)] = 3237,
  [SMALL_STATE(98)] = 3300,
  [SMALL_STATE(99)] = 3363,
  [SMALL_STATE(100)] = 3426,
  [SMALL_STATE(101)] = 3489,
  [SMALL_STATE(102)] = 3552,
  [SMALL_STATE(103)] = 3615,
  [SMALL_STATE(104)] = 3678,
  [SMALL_STATE(105)] = 3705,
  [SMALL_STATE(106)] = 3732,
  [SMALL_STATE(107)] = 3759,
  [SMALL_STATE(108)] = 3786,
  [SMALL_STATE(109)] = 3812,
  [SMALL_STATE(110)] = 3838,
  [SMALL_STATE(111)] = 3863,
  [SMALL_STATE(112)] = 3888,
  [SMALL_STATE(113)] = 3913,
  [SMALL_STATE(114)] = 3938,
  [SMALL_STATE(115)] = 3963,
  [SMALL_STATE(116)] = 3988,
  [SMALL_STATE(117)] = 4013,
  [SMALL_STATE(118)] = 4038,
  [SMALL_STATE(119)] = 4063,
  [SMALL_STATE(120)] = 4088,
  [SMALL_STATE(121)] = 4113,
  [SMALL_STATE(122)] = 4138,
  [SMALL_STATE(123)] = 4163,
  [SMALL_STATE(124)] = 4188,
  [SMALL_STATE(125)] = 4213,
  [SMALL_STATE(126)] = 4238,
  [SMALL_STATE(127)] = 4263,
  [SMALL_STATE(128)] = 4288,
  [SMALL_STATE(129)] = 4313,
  [SMALL_STATE(130)] = 4338,
  [SMALL_STATE(131)] = 4363,
  [SMALL_STATE(132)] = 4388,
  [SMALL_STATE(133)] = 4413,
  [SMALL_STATE(134)] = 4438,
  [SMALL_STATE(135)] = 4463,
  [SMALL_STATE(136)] = 4488,
  [SMALL_STATE(137)] = 4513,
  [SMALL_STATE(138)] = 4556,
  [SMALL_STATE(139)] = 4581,
  [SMALL_STATE(140)] = 4606,
  [SMALL_STATE(141)] = 4631,
  [SMALL_STATE(142)] = 4656,
  [SMALL_STATE(143)] = 4681,
  [SMALL_STATE(144)] = 4706,
  [SMALL_STATE(145)] = 4731,
  [SMALL_STATE(146)] = 4756,
  [SMALL_STATE(147)] = 4781,
  [SMALL_STATE(148)] = 4806,
  [SMALL_STATE(149)] = 4831,
  [SMALL_STATE(150)] = 4856,
  [SMALL_STATE(151)] = 4881,
  [SMALL_STATE(152)] = 4906,
  [SMALL_STATE(153)] = 4931,
  [SMALL_STATE(154)] = 4971,
  [SMALL_STATE(155)] = 4993,
  [SMALL_STATE(156)] = 5033,
  [SMALL_STATE(157)] = 5073,
  [SMALL_STATE(158)] = 5093,
  [SMALL_STATE(159)] = 5112,
  [SMALL_STATE(160)] = 5152,
  [SMALL_STATE(161)] = 5192,
  [SMALL_STATE(162)] = 5232,
  [SMALL_STATE(163)] = 5272,
  [SMALL_STATE(164)] = 5312,
  [SMALL_STATE(165)] = 5339,
  [SMALL_STATE(166)] = 5376,
  [SMALL_STATE(167)] = 5403,
  [SMALL_STATE(168)] = 5430,
  [SMALL_STATE(169)] = 5446,
  [SMALL_STATE(170)] = 5464,
  [SMALL_STATE(171)] = 5479,
  [SMALL_STATE(172)] = 5504,
  [SMALL_STATE(173)] = 5527,
  [SMALL_STATE(174)] = 5550,
  [SMALL_STATE(175)] = 5575,
  [SMALL_STATE(176)] = 5600,
  [SMALL_STATE(177)] = 5625,
  [SMALL_STATE(178)] = 5650,
  [SMALL_STATE(179)] = 5673,
  [SMALL_STATE(180)] = 5697,
  [SMALL_STATE(181)] = 5711,
  [SMALL_STATE(182)] = 5725,
  [SMALL_STATE(183)] = 5739,
  [SMALL_STATE(184)] = 5753,
  [SMALL_STATE(185)] = 5767,
  [SMALL_STATE(186)] = 5781,
  [SMALL_STATE(187)] = 5795,
  [SMALL_STATE(188)] = 5820,
  [SMALL_STATE(189)] = 5839,
  [SMALL_STATE(190)] = 5860,
  [SMALL_STATE(191)] = 5879,
  [SMALL_STATE(192)] = 5898,
  [SMALL_STATE(193)] = 5923,
  [SMALL_STATE(194)] = 5935,
  [SMALL_STATE(195)] = 5947,
  [SMALL_STATE(196)] = 5965,
  [SMALL_STATE(197)] = 5977,
  [SMALL_STATE(198)] = 5989,
  [SMALL_STATE(199)] = 6001,
  [SMALL_STATE(200)] = 6013,
  [SMALL_STATE(201)] = 6031,
  [SMALL_STATE(202)] = 6049,
  [SMALL_STATE(203)] = 6067,
  [SMALL_STATE(204)] = 6079,
  [SMALL_STATE(205)] = 6091,
  [SMALL_STATE(206)] = 6109,
  [SMALL_STATE(207)] = 6121,
  [SMALL_STATE(208)] = 6139,
  [SMALL_STATE(209)] = 6150,
  [SMALL_STATE(210)] = 6165,
  [SMALL_STATE(211)] = 6184,
  [SMALL_STATE(212)] = 6195,
  [SMALL_STATE(213)] = 6206,
  [SMALL_STATE(214)] = 6225,
  [SMALL_STATE(215)] = 6236,
  [SMALL_STATE(216)] = 6247,
  [SMALL_STATE(217)] = 6262,
  [SMALL_STATE(218)] = 6281,
  [SMALL_STATE(219)] = 6296,
  [SMALL_STATE(220)] = 6307,
  [SMALL_STATE(221)] = 6324,
  [SMALL_STATE(222)] = 6335,
  [SMALL_STATE(223)] = 6346,
  [SMALL_STATE(224)] = 6365,
  [SMALL_STATE(225)] = 6380,
  [SMALL_STATE(226)] = 6390,
  [SMALL_STATE(227)] = 6406,
  [SMALL_STATE(228)] = 6420,
  [SMALL_STATE(229)] = 6434,
  [SMALL_STATE(230)] = 6448,
  [SMALL_STATE(231)] = 6462,
  [SMALL_STATE(232)] = 6476,
  [SMALL_STATE(233)] = 6490,
  [SMALL_STATE(234)] = 6500,
  [SMALL_STATE(235)] = 6510,
  [SMALL_STATE(236)] = 6524,
  [SMALL_STATE(237)] = 6538,
  [SMALL_STATE(238)] = 6552,
  [SMALL_STATE(239)] = 6562,
  [SMALL_STATE(240)] = 6576,
  [SMALL_STATE(241)] = 6590,
  [SMALL_STATE(242)] = 6600,
  [SMALL_STATE(243)] = 6610,
  [SMALL_STATE(244)] = 6620,
  [SMALL_STATE(245)] = 6630,
  [SMALL_STATE(246)] = 6644,
  [SMALL_STATE(247)] = 6658,
  [SMALL_STATE(248)] = 6668,
  [SMALL_STATE(249)] = 6684,
  [SMALL_STATE(250)] = 6700,
  [SMALL_STATE(251)] = 6716,
  [SMALL_STATE(252)] = 6730,
  [SMALL_STATE(253)] = 6740,
  [SMALL_STATE(254)] = 6750,
  [SMALL_STATE(255)] = 6760,
  [SMALL_STATE(256)] = 6770,
  [SMALL_STATE(257)] = 6786,
  [SMALL_STATE(258)] = 6796,
  [SMALL_STATE(259)] = 6810,
  [SMALL_STATE(260)] = 6820,
  [SMALL_STATE(261)] = 6834,
  [SMALL_STATE(262)] = 6850,
  [SMALL_STATE(263)] = 6860,
  [SMALL_STATE(264)] = 6870,
  [SMALL_STATE(265)] = 6884,
  [SMALL_STATE(266)] = 6897,
  [SMALL_STATE(267)] = 6908,
  [SMALL_STATE(268)] = 6919,
  [SMALL_STATE(269)] = 6932,
  [SMALL_STATE(270)] = 6941,
  [SMALL_STATE(271)] = 6950,
  [SMALL_STATE(272)] = 6959,
  [SMALL_STATE(273)] = 6972,
  [SMALL_STATE(274)] = 6983,
  [SMALL_STATE(275)] = 6996,
  [SMALL_STATE(276)] = 7009,
  [SMALL_STATE(277)] = 7020,
  [SMALL_STATE(278)] = 7033,
  [SMALL_STATE(279)] = 7046,
  [SMALL_STATE(280)] = 7055,
  [SMALL_STATE(281)] = 7066,
  [SMALL_STATE(282)] = 7079,
  [SMALL_STATE(283)] = 7092,
  [SMALL_STATE(284)] = 7105,
  [SMALL_STATE(285)] = 7118,
  [SMALL_STATE(286)] = 7131,
  [SMALL_STATE(287)] = 7144,
  [SMALL_STATE(288)] = 7157,
  [SMALL_STATE(289)] = 7170,
  [SMALL_STATE(290)] = 7183,
  [SMALL_STATE(291)] = 7192,
  [SMALL_STATE(292)] = 7205,
  [SMALL_STATE(293)] = 7218,
  [SMALL_STATE(294)] = 7231,
  [SMALL_STATE(295)] = 7244,
  [SMALL_STATE(296)] = 7257,
  [SMALL_STATE(297)] = 7270,
  [SMALL_STATE(298)] = 7283,
  [SMALL_STATE(299)] = 7296,
  [SMALL_STATE(300)] = 7309,
  [SMALL_STATE(301)] = 7322,
  [SMALL_STATE(302)] = 7335,
  [SMALL_STATE(303)] = 7348,
  [SMALL_STATE(304)] = 7357,
  [SMALL_STATE(305)] = 7366,
  [SMALL_STATE(306)] = 7379,
  [SMALL_STATE(307)] = 7388,
  [SMALL_STATE(308)] = 7401,
  [SMALL_STATE(309)] = 7409,
  [SMALL_STATE(310)] = 7419,
  [SMALL_STATE(311)] = 7429,
  [SMALL_STATE(312)] = 7439,
  [SMALL_STATE(313)] = 7449,
  [SMALL_STATE(314)] = 7457,
  [SMALL_STATE(315)] = 7467,
  [SMALL_STATE(316)] = 7477,
  [SMALL_STATE(317)] = 7485,
  [SMALL_STATE(318)] = 7495,
  [SMALL_STATE(319)] = 7505,
  [SMALL_STATE(320)] = 7515,
  [SMALL_STATE(321)] = 7525,
  [SMALL_STATE(322)] = 7535,
  [SMALL_STATE(323)] = 7545,
  [SMALL_STATE(324)] = 7555,
  [SMALL_STATE(325)] = 7565,
  [SMALL_STATE(326)] = 7575,
  [SMALL_STATE(327)] = 7585,
  [SMALL_STATE(328)] = 7595,
  [SMALL_STATE(329)] = 7605,
  [SMALL_STATE(330)] = 7615,
  [SMALL_STATE(331)] = 7625,
  [SMALL_STATE(332)] = 7635,
  [SMALL_STATE(333)] = 7645,
  [SMALL_STATE(334)] = 7655,
  [SMALL_STATE(335)] = 7663,
  [SMALL_STATE(336)] = 7673,
  [SMALL_STATE(337)] = 7683,
  [SMALL_STATE(338)] = 7693,
  [SMALL_STATE(339)] = 7703,
  [SMALL_STATE(340)] = 7713,
  [SMALL_STATE(341)] = 7721,
  [SMALL_STATE(342)] = 7731,
  [SMALL_STATE(343)] = 7741,
  [SMALL_STATE(344)] = 7749,
  [SMALL_STATE(345)] = 7757,
  [SMALL_STATE(346)] = 7767,
  [SMALL_STATE(347)] = 7777,
  [SMALL_STATE(348)] = 7787,
  [SMALL_STATE(349)] = 7797,
  [SMALL_STATE(350)] = 7807,
  [SMALL_STATE(351)] = 7817,
  [SMALL_STATE(352)] = 7827,
  [SMALL_STATE(353)] = 7837,
  [SMALL_STATE(354)] = 7845,
  [SMALL_STATE(355)] = 7855,
  [SMALL_STATE(356)] = 7865,
  [SMALL_STATE(357)] = 7875,
  [SMALL_STATE(358)] = 7883,
  [SMALL_STATE(359)] = 7893,
  [SMALL_STATE(360)] = 7903,
  [SMALL_STATE(361)] = 7911,
  [SMALL_STATE(362)] = 7919,
  [SMALL_STATE(363)] = 7929,
  [SMALL_STATE(364)] = 7937,
  [SMALL_STATE(365)] = 7945,
  [SMALL_STATE(366)] = 7955,
  [SMALL_STATE(367)] = 7965,
  [SMALL_STATE(368)] = 7975,
  [SMALL_STATE(369)] = 7985,
  [SMALL_STATE(370)] = 7995,
  [SMALL_STATE(371)] = 8003,
  [SMALL_STATE(372)] = 8013,
  [SMALL_STATE(373)] = 8023,
  [SMALL_STATE(374)] = 8033,
  [SMALL_STATE(375)] = 8041,
  [SMALL_STATE(376)] = 8049,
  [SMALL_STATE(377)] = 8059,
  [SMALL_STATE(378)] = 8069,
  [SMALL_STATE(379)] = 8079,
  [SMALL_STATE(380)] = 8089,
  [SMALL_STATE(381)] = 8097,
  [SMALL_STATE(382)] = 8105,
  [SMALL_STATE(383)] = 8115,
  [SMALL_STATE(384)] = 8125,
  [SMALL_STATE(385)] = 8135,
  [SMALL_STATE(386)] = 8143,
  [SMALL_STATE(387)] = 8153,
  [SMALL_STATE(388)] = 8163,
  [SMALL_STATE(389)] = 8173,
  [SMALL_STATE(390)] = 8183,
  [SMALL_STATE(391)] = 8191,
  [SMALL_STATE(392)] = 8199,
  [SMALL_STATE(393)] = 8209,
  [SMALL_STATE(394)] = 8219,
  [SMALL_STATE(395)] = 8227,
  [SMALL_STATE(396)] = 8235,
  [SMALL_STATE(397)] = 8245,
  [SMALL_STATE(398)] = 8253,
  [SMALL_STATE(399)] = 8263,
  [SMALL_STATE(400)] = 8273,
  [SMALL_STATE(401)] = 8283,
  [SMALL_STATE(402)] = 8293,
  [SMALL_STATE(403)] = 8303,
  [SMALL_STATE(404)] = 8313,
  [SMALL_STATE(405)] = 8321,
  [SMALL_STATE(406)] = 8331,
  [SMALL_STATE(407)] = 8341,
  [SMALL_STATE(408)] = 8351,
  [SMALL_STATE(409)] = 8361,
  [SMALL_STATE(410)] = 8371,
  [SMALL_STATE(411)] = 8381,
  [SMALL_STATE(412)] = 8388,
  [SMALL_STATE(413)] = 8395,
  [SMALL_STATE(414)] = 8402,
  [SMALL_STATE(415)] = 8409,
  [SMALL_STATE(416)] = 8416,
  [SMALL_STATE(417)] = 8423,
  [SMALL_STATE(418)] = 8430,
  [SMALL_STATE(419)] = 8437,
  [SMALL_STATE(420)] = 8444,
  [SMALL_STATE(421)] = 8451,
  [SMALL_STATE(422)] = 8458,
  [SMALL_STATE(423)] = 8465,
  [SMALL_STATE(424)] = 8472,
  [SMALL_STATE(425)] = 8479,
  [SMALL_STATE(426)] = 8486,
  [SMALL_STATE(427)] = 8493,
  [SMALL_STATE(428)] = 8500,
  [SMALL_STATE(429)] = 8507,
  [SMALL_STATE(430)] = 8514,
  [SMALL_STATE(431)] = 8521,
  [SMALL_STATE(432)] = 8528,
  [SMALL_STATE(433)] = 8535,
  [SMALL_STATE(434)] = 8542,
  [SMALL_STATE(435)] = 8549,
  [SMALL_STATE(436)] = 8556,
  [SMALL_STATE(437)] = 8563,
  [SMALL_STATE(438)] = 8570,
  [SMALL_STATE(439)] = 8577,
  [SMALL_STATE(440)] = 8584,
  [SMALL_STATE(441)] = 8591,
  [SMALL_STATE(442)] = 8598,
  [SMALL_STATE(443)] = 8605,
  [SMALL_STATE(444)] = 8612,
  [SMALL_STATE(445)] = 8619,
  [SMALL_STATE(446)] = 8626,
  [SMALL_STATE(447)] = 8633,
  [SMALL_STATE(448)] = 8640,
  [SMALL_STATE(449)] = 8647,
  [SMALL_STATE(450)] = 8654,
  [SMALL_STATE(451)] = 8661,
  [SMALL_STATE(452)] = 8668,
  [SMALL_STATE(453)] = 8675,
  [SMALL_STATE(454)] = 8682,
  [SMALL_STATE(455)] = 8689,
  [SMALL_STATE(456)] = 8696,
  [SMALL_STATE(457)] = 8703,
  [SMALL_STATE(458)] = 8710,
  [SMALL_STATE(459)] = 8717,
  [SMALL_STATE(460)] = 8724,
  [SMALL_STATE(461)] = 8731,
  [SMALL_STATE(462)] = 8738,
  [SMALL_STATE(463)] = 8745,
  [SMALL_STATE(464)] = 8752,
  [SMALL_STATE(465)] = 8759,
  [SMALL_STATE(466)] = 8766,
  [SMALL_STATE(467)] = 8773,
  [SMALL_STATE(468)] = 8780,
  [SMALL_STATE(469)] = 8787,
  [SMALL_STATE(470)] = 8794,
  [SMALL_STATE(471)] = 8801,
  [SMALL_STATE(472)] = 8808,
  [SMALL_STATE(473)] = 8815,
  [SMALL_STATE(474)] = 8822,
  [SMALL_STATE(475)] = 8829,
  [SMALL_STATE(476)] = 8836,
  [SMALL_STATE(477)] = 8843,
  [SMALL_STATE(478)] = 8850,
  [SMALL_STATE(479)] = 8857,
  [SMALL_STATE(480)] = 8864,
  [SMALL_STATE(481)] = 8871,
  [SMALL_STATE(482)] = 8878,
  [SMALL_STATE(483)] = 8885,
  [SMALL_STATE(484)] = 8892,
  [SMALL_STATE(485)] = 8899,
  [SMALL_STATE(486)] = 8906,
  [SMALL_STATE(487)] = 8913,
  [SMALL_STATE(488)] = 8920,
  [SMALL_STATE(489)] = 8927,
  [SMALL_STATE(490)] = 8934,
  [SMALL_STATE(491)] = 8941,
  [SMALL_STATE(492)] = 8948,
  [SMALL_STATE(493)] = 8955,
  [SMALL_STATE(494)] = 8962,
  [SMALL_STATE(495)] = 8969,
  [SMALL_STATE(496)] = 8976,
  [SMALL_STATE(497)] = 8983,
  [SMALL_STATE(498)] = 8990,
  [SMALL_STATE(499)] = 8997,
  [SMALL_STATE(500)] = 9004,
  [SMALL_STATE(501)] = 9011,
  [SMALL_STATE(502)] = 9018,
  [SMALL_STATE(503)] = 9025,
  [SMALL_STATE(504)] = 9032,
  [SMALL_STATE(505)] = 9039,
  [SMALL_STATE(506)] = 9046,
  [SMALL_STATE(507)] = 9053,
  [SMALL_STATE(508)] = 9060,
  [SMALL_STATE(509)] = 9067,
  [SMALL_STATE(510)] = 9074,
  [SMALL_STATE(511)] = 9081,
  [SMALL_STATE(512)] = 9088,
  [SMALL_STATE(513)] = 9095,
  [SMALL_STATE(514)] = 9102,
  [SMALL_STATE(515)] = 9109,
  [SMALL_STATE(516)] = 9116,
  [SMALL_STATE(517)] = 9123,
  [SMALL_STATE(518)] = 9130,
  [SMALL_STATE(519)] = 9137,
  [SMALL_STATE(520)] = 9144,
  [SMALL_STATE(521)] = 9151,
  [SMALL_STATE(522)] = 9158,
  [SMALL_STATE(523)] = 9165,
  [SMALL_STATE(524)] = 9172,
  [SMALL_STATE(525)] = 9179,
  [SMALL_STATE(526)] = 9186,
  [SMALL_STATE(527)] = 9193,
  [SMALL_STATE(528)] = 9200,
  [SMALL_STATE(529)] = 9207,
  [SMALL_STATE(530)] = 9214,
  [SMALL_STATE(531)] = 9221,
  [SMALL_STATE(532)] = 9228,
  [SMALL_STATE(533)] = 9235,
  [SMALL_STATE(534)] = 9242,
  [SMALL_STATE(535)] = 9249,
  [SMALL_STATE(536)] = 9256,
  [SMALL_STATE(537)] = 9263,
  [SMALL_STATE(538)] = 9270,
  [SMALL_STATE(539)] = 9277,
  [SMALL_STATE(540)] = 9284,
  [SMALL_STATE(541)] = 9291,
  [SMALL_STATE(542)] = 9298,
  [SMALL_STATE(543)] = 9305,
  [SMALL_STATE(544)] = 9312,
  [SMALL_STATE(545)] = 9319,
  [SMALL_STATE(546)] = 9326,
  [SMALL_STATE(547)] = 9333,
  [SMALL_STATE(548)] = 9340,
  [SMALL_STATE(549)] = 9347,
  [SMALL_STATE(550)] = 9354,
  [SMALL_STATE(551)] = 9361,
  [SMALL_STATE(552)] = 9368,
  [SMALL_STATE(553)] = 9375,
  [SMALL_STATE(554)] = 9382,
  [SMALL_STATE(555)] = 9389,
  [SMALL_STATE(556)] = 9396,
  [SMALL_STATE(557)] = 9403,
  [SMALL_STATE(558)] = 9410,
  [SMALL_STATE(559)] = 9417,
  [SMALL_STATE(560)] = 9424,
  [SMALL_STATE(561)] = 9431,
  [SMALL_STATE(562)] = 9438,
  [SMALL_STATE(563)] = 9445,
  [SMALL_STATE(564)] = 9452,
  [SMALL_STATE(565)] = 9459,
  [SMALL_STATE(566)] = 9466,
  [SMALL_STATE(567)] = 9473,
  [SMALL_STATE(568)] = 9480,
  [SMALL_STATE(569)] = 9487,
  [SMALL_STATE(570)] = 9494,
  [SMALL_STATE(571)] = 9501,
  [SMALL_STATE(572)] = 9508,
  [SMALL_STATE(573)] = 9515,
  [SMALL_STATE(574)] = 9522,
  [SMALL_STATE(575)] = 9529,
  [SMALL_STATE(576)] = 9536,
  [SMALL_STATE(577)] = 9543,
  [SMALL_STATE(578)] = 9550,
  [SMALL_STATE(579)] = 9557,
  [SMALL_STATE(580)] = 9564,
  [SMALL_STATE(581)] = 9571,
  [SMALL_STATE(582)] = 9578,
  [SMALL_STATE(583)] = 9585,
  [SMALL_STATE(584)] = 9592,
  [SMALL_STATE(585)] = 9599,
  [SMALL_STATE(586)] = 9606,
  [SMALL_STATE(587)] = 9613,
  [SMALL_STATE(588)] = 9620,
  [SMALL_STATE(589)] = 9627,
  [SMALL_STATE(590)] = 9634,
  [SMALL_STATE(591)] = 9641,
  [SMALL_STATE(592)] = 9648,
  [SMALL_STATE(593)] = 9655,
  [SMALL_STATE(594)] = 9662,
  [SMALL_STATE(595)] = 9669,
  [SMALL_STATE(596)] = 9676,
  [SMALL_STATE(597)] = 9683,
  [SMALL_STATE(598)] = 9690,
  [SMALL_STATE(599)] = 9697,
  [SMALL_STATE(600)] = 9704,
  [SMALL_STATE(601)] = 9711,
  [SMALL_STATE(602)] = 9718,
  [SMALL_STATE(603)] = 9725,
  [SMALL_STATE(604)] = 9732,
  [SMALL_STATE(605)] = 9739,
  [SMALL_STATE(606)] = 9746,
  [SMALL_STATE(607)] = 9753,
  [SMALL_STATE(608)] = 9760,
  [SMALL_STATE(609)] = 9767,
  [SMALL_STATE(610)] = 9774,
  [SMALL_STATE(611)] = 9781,
  [SMALL_STATE(612)] = 9788,
  [SMALL_STATE(613)] = 9795,
  [SMALL_STATE(614)] = 9802,
  [SMALL_STATE(615)] = 9809,
  [SMALL_STATE(616)] = 9816,
  [SMALL_STATE(617)] = 9823,
  [SMALL_STATE(618)] = 9830,
  [SMALL_STATE(619)] = 9837,
  [SMALL_STATE(620)] = 9844,
  [SMALL_STATE(621)] = 9851,
  [SMALL_STATE(622)] = 9858,
  [SMALL_STATE(623)] = 9865,
  [SMALL_STATE(624)] = 9872,
  [SMALL_STATE(625)] = 9879,
  [SMALL_STATE(626)] = 9886,
  [SMALL_STATE(627)] = 9893,
  [SMALL_STATE(628)] = 9900,
  [SMALL_STATE(629)] = 9907,
  [SMALL_STATE(630)] = 9914,
  [SMALL_STATE(631)] = 9921,
  [SMALL_STATE(632)] = 9928,
  [SMALL_STATE(633)] = 9935,
  [SMALL_STATE(634)] = 9942,
  [SMALL_STATE(635)] = 9949,
  [SMALL_STATE(636)] = 9956,
  [SMALL_STATE(637)] = 9963,
  [SMALL_STATE(638)] = 9970,
  [SMALL_STATE(639)] = 9977,
  [SMALL_STATE(640)] = 9984,
  [SMALL_STATE(641)] = 9991,
  [SMALL_STATE(642)] = 9998,
  [SMALL_STATE(643)] = 10005,
  [SMALL_STATE(644)] = 10012,
  [SMALL_STATE(645)] = 10019,
  [SMALL_STATE(646)] = 10026,
  [SMALL_STATE(647)] = 10033,
  [SMALL_STATE(648)] = 10040,
  [SMALL_STATE(649)] = 10047,
  [SMALL_STATE(650)] = 10054,
  [SMALL_STATE(651)] = 10061,
  [SMALL_STATE(652)] = 10068,
  [SMALL_STATE(653)] = 10075,
  [SMALL_STATE(654)] = 10082,
  [SMALL_STATE(655)] = 10089,
  [SMALL_STATE(656)] = 10096,
  [SMALL_STATE(657)] = 10103,
  [SMALL_STATE(658)] = 10110,
  [SMALL_STATE(659)] = 10117,
  [SMALL_STATE(660)] = 10124,
  [SMALL_STATE(661)] = 10131,
  [SMALL_STATE(662)] = 10138,
  [SMALL_STATE(663)] = 10145,
  [SMALL_STATE(664)] = 10152,
  [SMALL_STATE(665)] = 10159,
  [SMALL_STATE(666)] = 10166,
  [SMALL_STATE(667)] = 10173,
  [SMALL_STATE(668)] = 10180,
  [SMALL_STATE(669)] = 10187,
  [SMALL_STATE(670)] = 10194,
  [SMALL_STATE(671)] = 10201,
  [SMALL_STATE(672)] = 10208,
  [SMALL_STATE(673)] = 10215,
  [SMALL_STATE(674)] = 10222,
  [SMALL_STATE(675)] = 10229,
  [SMALL_STATE(676)] = 10236,
  [SMALL_STATE(677)] = 10243,
  [SMALL_STATE(678)] = 10250,
  [SMALL_STATE(679)] = 10257,
  [SMALL_STATE(680)] = 10264,
  [SMALL_STATE(681)] = 10271,
  [SMALL_STATE(682)] = 10278,
  [SMALL_STATE(683)] = 10285,
  [SMALL_STATE(684)] = 10292,
  [SMALL_STATE(685)] = 10299,
  [SMALL_STATE(686)] = 10306,
  [SMALL_STATE(687)] = 10313,
  [SMALL_STATE(688)] = 10320,
  [SMALL_STATE(689)] = 10327,
  [SMALL_STATE(690)] = 10334,
  [SMALL_STATE(691)] = 10341,
  [SMALL_STATE(692)] = 10348,
  [SMALL_STATE(693)] = 10355,
  [SMALL_STATE(694)] = 10362,
  [SMALL_STATE(695)] = 10369,
  [SMALL_STATE(696)] = 10376,
  [SMALL_STATE(697)] = 10383,
  [SMALL_STATE(698)] = 10390,
  [SMALL_STATE(699)] = 10397,
  [SMALL_STATE(700)] = 10404,
  [SMALL_STATE(701)] = 10411,
  [SMALL_STATE(702)] = 10418,
  [SMALL_STATE(703)] = 10425,
  [SMALL_STATE(704)] = 10432,
  [SMALL_STATE(705)] = 10439,
  [SMALL_STATE(706)] = 10446,
  [SMALL_STATE(707)] = 10453,
  [SMALL_STATE(708)] = 10460,
  [SMALL_STATE(709)] = 10467,
  [SMALL_STATE(710)] = 10474,
  [SMALL_STATE(711)] = 10481,
  [SMALL_STATE(712)] = 10488,
  [SMALL_STATE(713)] = 10495,
  [SMALL_STATE(714)] = 10502,
  [SMALL_STATE(715)] = 10509,
  [SMALL_STATE(716)] = 10516,
  [SMALL_STATE(717)] = 10523,
  [SMALL_STATE(718)] = 10530,
  [SMALL_STATE(719)] = 10537,
  [SMALL_STATE(720)] = 10544,
  [SMALL_STATE(721)] = 10551,
  [SMALL_STATE(722)] = 10558,
  [SMALL_STATE(723)] = 10565,
  [SMALL_STATE(724)] = 10572,
  [SMALL_STATE(725)] = 10579,
  [SMALL_STATE(726)] = 10586,
  [SMALL_STATE(727)] = 10593,
  [SMALL_STATE(728)] = 10600,
  [SMALL_STATE(729)] = 10607,
  [SMALL_STATE(730)] = 10614,
  [SMALL_STATE(731)] = 10621,
  [SMALL_STATE(732)] = 10628,
  [SMALL_STATE(733)] = 10635,
  [SMALL_STATE(734)] = 10642,
  [SMALL_STATE(735)] = 10649,
  [SMALL_STATE(736)] = 10656,
  [SMALL_STATE(737)] = 10663,
  [SMALL_STATE(738)] = 10670,
  [SMALL_STATE(739)] = 10677,
  [SMALL_STATE(740)] = 10684,
  [SMALL_STATE(741)] = 10691,
  [SMALL_STATE(742)] = 10698,
  [SMALL_STATE(743)] = 10705,
  [SMALL_STATE(744)] = 10712,
  [SMALL_STATE(745)] = 10719,
  [SMALL_STATE(746)] = 10726,
  [SMALL_STATE(747)] = 10733,
  [SMALL_STATE(748)] = 10740,
  [SMALL_STATE(749)] = 10747,
  [SMALL_STATE(750)] = 10754,
  [SMALL_STATE(751)] = 10761,
  [SMALL_STATE(752)] = 10768,
  [SMALL_STATE(753)] = 10775,
  [SMALL_STATE(754)] = 10782,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(511),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(609),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(528),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(516),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(515),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(514),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(512),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(511),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(5),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(5),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(510),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(509),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(508),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(507),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(502),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(500),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(440),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(498),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(496),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(495),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(489),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(485),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(479),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(609),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(435),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(433),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(431),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(430),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(427),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(426),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(425),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(424),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(422),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(421),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(418),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(417),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(416),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(415),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(414),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(413),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(503),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(513),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(520),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(521),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(523),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(528),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(528),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath, 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substring_after_function, 4),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substring_after_function, 4),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_function, 4),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_function, 4),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_function, 4),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_function, 4),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_function, 4),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_function, 4),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_function, 4),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_function, 4),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_function, 4),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_function, 4),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_false_function, 4),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_false_function, 4),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_true_function, 4),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_true_function, 4),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_synapse_xpath_property, 3),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_synapse_xpath_property, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translate_function, 4),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_translate_function, 4),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base64_encode, 4),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base64_encode, 4),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_available_function, 4),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_available_function, 4),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unparsed_entity_url_function, 4),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unparsed_entity_url_function, 4),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ceiling_function, 4),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ceiling_function, 4),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choose_function, 4),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choose_function, 4),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concat_function, 4),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concat_function, 4),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains_function, 4),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contains_function, 4),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_count_function, 4),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_count_function, 4),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_property, 5),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_property, 5),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_current_function, 4),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_current_function, 4),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_function, 4),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document_function, 4),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floor_function, 4),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floor_function, 4),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_number_function, 4),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format_number_function, 4),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_available_function, 4),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_available_function, 4),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generate_id_function, 4),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generate_id_function, 4),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lang_function, 4),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lang_function, 4),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_function, 4),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_last_function, 4),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_name_function, 4),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_name_function, 4),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_uri_function, 4),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_uri_function, 4),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normalize_space_function, 4),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normalize_space_function, 4),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_function, 4),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_function, 4),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base64_decode, 4),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base64_decode, 4),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_position_function, 4),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_position_function, 4),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_round_function, 4),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_round_function, 4),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_property_function, 4),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_property_function, 4),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sum_function, 4),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sum_function, 4),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substring_before_function, 4),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substring_before_function, 4),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_starts_with_function, 4),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_starts_with_function, 4),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substring_function, 4),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substring_function, 4),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_function, 4),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_function, 4),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_length_function, 4),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_length_function, 4),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(295),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(125),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(118),
  [420] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(296),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(383),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(386),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(213),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(387),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(298),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(187),
  [441] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(388),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(165),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_definition_repeat1, 2), SHIFT_REPEAT(389),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 5, .production_id = 14),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 5, .production_id = 14),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 3),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 3),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 4),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 4),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 4, .production_id = 14),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 4, .production_id = 14),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3, .production_id = 1),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 3, .production_id = 1),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 16),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, .production_id = 16),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4, .production_id = 21),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 4, .production_id = 21),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iterate, 5, .production_id = 36),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iterate, 5, .production_id = 36),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_send, 5, .production_id = 24),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_send, 5, .production_id = 24),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach, 11, .production_id = 59),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach, 11, .production_id = 59),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log, 5, .production_id = 7),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log, 5, .production_id = 7),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mediator, 1),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mediator, 1),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 10, .production_id = 57),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 10, .production_id = 57),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach, 10, .production_id = 56),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach, 10, .production_id = 56),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_send, 1),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_send, 1),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 24),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5, .production_id = 24),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4, .production_id = 23),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 4, .production_id = 23),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5, .production_id = 35),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 5, .production_id = 35),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5, .production_id = 34),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 5, .production_id = 34),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 3, .production_id = 10),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 3, .production_id = 10),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5, .production_id = 33),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 5, .production_id = 33),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_respond, 1),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_respond, 1),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 3, .production_id = 11),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 3, .production_id = 11),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5, .production_id = 32),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 5, .production_id = 32),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 3, .production_id = 12),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 3, .production_id = 12),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log, 3, .production_id = 7),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log, 3, .production_id = 7),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4, .production_id = 22),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 4, .production_id = 22),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 18),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, .production_id = 18),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 25),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5, .production_id = 25),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4, .production_id = 20),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 4, .production_id = 20),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 6, .production_id = 39),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 6, .production_id = 39),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 15),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, .production_id = 15),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 26),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5, .production_id = 26),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 6, .production_id = 38),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 6, .production_id = 38),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 27),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5, .production_id = 27),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 7, .production_id = 51),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 7, .production_id = 51),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 6, .production_id = 46),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 6, .production_id = 46),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 5, .production_id = 29),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 5, .production_id = 29),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 2),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 2),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payload_factory, 6, .production_id = 47),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_payload_factory, 6, .production_id = 47),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_send, 4, .production_id = 15),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_send, 4, .production_id = 15),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach, 6, .production_id = 40),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach, 6, .production_id = 40),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 9, .production_id = 54),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 9, .production_id = 54),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 6, .production_id = 41),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 6, .production_id = 41),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log, 4, .production_id = 7),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log, 4, .production_id = 7),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach, 5, .production_id = 28),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach, 5, .production_id = 28),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 6, .production_id = 44),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 6, .production_id = 44),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 6, .production_id = 45),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 6, .production_id = 45),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 5),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 2, .production_id = 17),
  [722] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 2, .production_id = 17), SHIFT_REPEAT(648),
  [725] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 2, .production_id = 17), SHIFT_REPEAT(735),
  [728] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 2, .production_id = 17), SHIFT_REPEAT(420),
  [731] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 2, .production_id = 17), SHIFT_REPEAT(570),
  [734] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 2, .production_id = 17), SHIFT_REPEAT(624),
  [737] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 2, .production_id = 17), SHIFT_REPEAT(544),
  [740] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 2, .production_id = 17), SHIFT_REPEAT(568),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_iterate_repeat1, 2, .production_id = 13),
  [757] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_iterate_repeat1, 2, .production_id = 13), SHIFT_REPEAT(568),
  [760] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_iterate_repeat1, 2, .production_id = 13), SHIFT_REPEAT(621),
  [763] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_iterate_repeat1, 2, .production_id = 13), SHIFT_REPEAT(622),
  [766] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_iterate_repeat1, 2, .production_id = 13), SHIFT_REPEAT(623),
  [769] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_iterate_repeat1, 2, .production_id = 13), SHIFT_REPEAT(625),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_suspend_on_failure_repeat1, 2),
  [790] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_suspend_on_failure_repeat1, 2), SHIFT_REPEAT(232),
  [793] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_suspend_on_failure_repeat1, 2), SHIFT_REPEAT(231),
  [796] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_suspend_on_failure_repeat1, 2), SHIFT_REPEAT(230),
  [799] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_suspend_on_failure_repeat1, 2), SHIFT_REPEAT(235),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 5),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(660),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 5),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mark_for_suspending_repeat1, 2),
  [832] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mark_for_suspending_repeat1, 2), SHIFT_REPEAT(237),
  [835] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mark_for_suspending_repeat1, 2), SHIFT_REPEAT(236),
  [838] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mark_for_suspending_repeat1, 2), SHIFT_REPEAT(235),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat2, 2),
  [849] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat2, 2), SHIFT_REPEAT(190),
  [852] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat2, 2), SHIFT_REPEAT(173),
  [855] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat2, 2), SHIFT_REPEAT(167),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 1, .production_id = 8),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__property_attribute, 5),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__property_attribute, 1, .production_id = 6),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__property_attribute, 1, .production_id = 9),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_codes, 3),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_codes, 4),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_timeout_repeat1, 2),
  [896] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_timeout_repeat1, 2), SHIFT_REPEAT(245),
  [899] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_timeout_repeat1, 2), SHIFT_REPEAT(290),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_iterate_repeat1, 1, .production_id = 5),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential, 5),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attachPath, 5),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_iterate_repeat1, 1, .production_id = 2),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continueParent, 5),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_iterate_repeat1, 1, .production_id = 3),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_path, 2),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat1, 2),
  [930] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat1, 2), SHIFT_REPEAT(678),
  [933] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat1, 2), SHIFT_REPEAT(677),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_path, 3),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_iterate_repeat1, 1, .production_id = 6),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_iterate_repeat1, 1, .production_id = 4),
  [942] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_path_repeat1, 2), SHIFT_REPEAT(239),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_path_repeat1, 2),
  [947] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_path_repeat1, 2), SHIFT_REPEAT(398),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preservePayload, 5),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [956] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(350),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maximum_duration, 3, .production_id = 42),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_progression_factor, 3, .production_id = 42),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initial_duration, 3, .production_id = 42),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timeout, 3),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [989] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [993] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timeout, 2),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_false, 1),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_log_repeat1, 2),
  [1011] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_repeat1, 2), SHIFT_REPEAT(386),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_suspend_on_failure, 2),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_delay, 3, .production_id = 42),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mark_for_suspending, 2),
  [1022] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_content, 1),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retries_before_suspending, 3, .production_id = 42),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endpoint_error_property, 1),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_true, 1),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_suspend_on_failure, 3),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mark_for_suspending, 3),
  [1068] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [1070] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(264),
  [1073] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(189),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_path_object, 2),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_action, 3),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration, 3, .production_id = 42),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(153),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_correlateOn, 3, .production_id = 19),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(309),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__endpoint_attribute, 5),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 5),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_path_array, 3),
  [1188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_error_codes_repeat1, 2), SHIFT_REPEAT(229),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_error_codes_repeat1, 2),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endpoint, 5, .production_id = 48),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complete_condition, 4, .production_id = 30),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complete_condition, 4, .production_id = 31),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [1221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 7),
  [1223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endpoint, 4, .production_id = 37),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_level, 5),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 5),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_definition, 5, .production_id = 1),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 55),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complete_condition, 3),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_declaration, 3),
  [1261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then, 2),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_definition, 4, .production_id = 1),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then, 3),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_info, 3),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_declaration, 4),
  [1281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complete_condition, 5, .production_id = 43),
  [1283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 5),
  [1285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(602),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format, 4, .production_id = 53),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [1293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 2),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_endpoint, 3),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_eval, 3),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 6, .production_id = 49),
  [1439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else, 3),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_count, 4, .production_id = 50),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 4, .production_id = 52),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 3),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_endpoint, 4),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(655),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endpoint_reference, 6),
  [1521] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_complete, 5, .production_id = 19),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else, 2),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_type, 5),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_endpoint, 5),
  [1675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_string, 1),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_min, 5),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_encoding_declaration, 3),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_max, 5),
  [1759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_complete, 9, .production_id = 58),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_complete, 10, .production_id = 58),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 9, .production_id = 60),
  [1819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blocking, 5),
  [1821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 9, .production_id = 61),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 9, .production_id = 62),
  [1831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 5),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 9, .production_id = 63),
  [1837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 1),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [1897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [1903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 14, .production_id = 64),
  [1905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 14, .production_id = 65),
  [1907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 14, .production_id = 66),
  [1911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [1913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 14, .production_id = 67),
  [1917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 14, .production_id = 68),
  [1919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 14, .production_id = 69),
  [1923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [1925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [1929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [1931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [1945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_complete, 4, .production_id = 19),
  [1947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [1951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [1959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 19, .production_id = 70),
  [1961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 19, .production_id = 71),
  [1963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 19, .production_id = 72),
  [1967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 19, .production_id = 73),
  [1969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [1977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 24, .production_id = 74),
  [1979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
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
