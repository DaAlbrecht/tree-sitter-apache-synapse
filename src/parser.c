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
#define STATE_COUNT 851
#define LARGE_STATE_COUNT 47
#define SYMBOL_COUNT 398
#define ALIAS_COUNT 0
#define TOKEN_COUNT 237
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 38
#define MAX_ALIAS_SEQUENCE_LENGTH 24
#define PRODUCTION_ID_COUNT 81

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
  anon_sym_LTapi = 14,
  anon_sym_GT = 15,
  anon_sym_LT_SLASHapi_GT = 16,
  anon_sym_LTresource = 17,
  anon_sym_LT_SLASHresource_GT = 18,
  anon_sym_LTinSequence_GT = 19,
  anon_sym_LT_SLASHinSequence_GT = 20,
  anon_sym_LToutSequence_GT = 21,
  anon_sym_LT_SLASHoutSequence_GT = 22,
  anon_sym_LTfaultSequence_GT = 23,
  anon_sym_LT_SLASHfaultSequence_GT = 24,
  anon_sym_methods = 25,
  anon_sym_EQ = 26,
  anon_sym_uri_DASHtemplate = 27,
  anon_sym_xmlns = 28,
  anon_sym_name = 29,
  anon_sym_context = 30,
  anon_sym_hostname = 31,
  anon_sym_port = 32,
  anon_sym_version = 33,
  anon_sym_swagger = 34,
  anon_sym_LTsequence = 35,
  anon_sym_LT_SLASHsequence_GT = 36,
  anon_sym_LTrespond_SLASH_GT = 37,
  anon_sym_LTsend_SLASH_GT = 38,
  anon_sym_LTsend = 39,
  anon_sym_LT_SLASHsend_GT = 40,
  anon_sym_LTlog = 41,
  anon_sym_LT_SLASHlog_GT = 42,
  anon_sym_SLASH_GT = 43,
  anon_sym_LTproperty = 44,
  anon_sym_scope = 45,
  anon_sym_default = 46,
  anon_sym_axis2 = 47,
  anon_sym_axis2_DASHclient = 48,
  anon_sym_operation = 49,
  anon_sym_transport = 50,
  anon_sym_registry = 51,
  anon_sym_synapse = 52,
  anon_sym_system = 53,
  anon_sym_env = 54,
  anon_sym_file = 55,
  anon_sym_action = 56,
  anon_sym_set = 57,
  anon_sym_remove = 58,
  anon_sym_type = 59,
  anon_sym_STRING = 60,
  anon_sym_INTEGER = 61,
  anon_sym_BOOLEAN = 62,
  anon_sym_DOUBLE = 63,
  anon_sym_FLOAT = 64,
  anon_sym_LONG = 65,
  anon_sym_SHORT = 66,
  anon_sym_OM = 67,
  anon_sym_pattern = 68,
  anon_sym_group = 69,
  anon_sym_LTcall = 70,
  anon_sym_LT_SLASHcall_GT = 71,
  anon_sym_LTforeach = 72,
  anon_sym_sequence = 73,
  anon_sym_LT_SLASHforeach_GT = 74,
  anon_sym_LTfilter = 75,
  anon_sym_xpath = 76,
  anon_sym_LT_SLASHfilter_GT = 77,
  anon_sym_LTaggregate_GT = 78,
  anon_sym_LTaggregate = 79,
  anon_sym_LT_SLASHaggregate_GT = 80,
  anon_sym_LTiterate = 81,
  anon_sym_LT_SLASHiterate_GT = 82,
  anon_sym_LTpayloadFactory = 83,
  anon_sym_LT_SLASHpayloadFactory_GT = 84,
  anon_sym_media_DASHtype = 85,
  anon_sym_xml = 86,
  anon_sym_json = 87,
  anon_sym_LTformat = 88,
  anon_sym_LT_SLASHformat_GT = 89,
  anon_sym_LTargs_SLASH_GT = 90,
  anon_sym_LTargs_GT = 91,
  anon_sym_LTarg = 92,
  anon_sym_LT_SLASHargs_GT = 93,
  anon_sym_evaluator = 94,
  anon_sym_sequential = 95,
  anon_sym_continueParent = 96,
  anon_sym_preservePayload = 97,
  anon_sym_attachPath = 98,
  anon_sym_LTtarget = 99,
  anon_sym_to = 100,
  anon_sym_soapAction = 101,
  anon_sym_endpoint = 102,
  anon_sym_LT_SLASHtarget_GT = 103,
  anon_sym_LTcorrelateOn = 104,
  anon_sym_LTcompleteCondition = 105,
  anon_sym_LT_SLASHcompleteCondition_GT = 106,
  anon_sym_LTonComplete = 107,
  anon_sym_LT_SLASHonComplete_GT = 108,
  anon_sym_LTmessageCount = 109,
  anon_sym_min = 110,
  anon_sym_max = 111,
  anon_sym_key = 112,
  anon_sym_LTthen_GT = 113,
  anon_sym_LT_SLASHthen_GT = 114,
  anon_sym_LTelse_GT = 115,
  anon_sym_LT_SLASHelse_GT = 116,
  anon_sym_source = 117,
  anon_sym_regex = 118,
  anon_sym_LTendpoint = 119,
  anon_sym_LT_SLASHendpoint_GT = 120,
  anon_sym_LThttp = 121,
  anon_sym_LT_SLASHhttp_GT = 122,
  anon_sym_method = 123,
  anon_sym_GET = 124,
  anon_sym_POST = 125,
  anon_sym_PUT = 126,
  anon_sym_DELETE = 127,
  anon_sym_HEAD = 128,
  anon_sym_OPTIONS = 129,
  anon_sym_PATCH = 130,
  anon_sym_get = 131,
  anon_sym_post = 132,
  anon_sym_put = 133,
  anon_sym_delete = 134,
  anon_sym_head = 135,
  anon_sym_options = 136,
  anon_sym_patch = 137,
  anon_sym_LTtimeout_GT = 138,
  anon_sym_LT_SLASHtimeout_GT = 139,
  anon_sym_LTmarkForSuspension_GT = 140,
  anon_sym_LT_SLASHmarkForSuspension_GT = 141,
  anon_sym_LTretriesBeforeSuspension_GT = 142,
  anon_sym_LT_SLASHretriesBeforeSuspension_GT = 143,
  anon_sym_LTretryDelay_GT = 144,
  anon_sym_LT_SLASHretryDelay_GT = 145,
  anon_sym_LTsuspendOnFailure_GT = 146,
  anon_sym_LT_SLASHsuspendOnFailure_GT = 147,
  anon_sym_LTinitialDuration_GT = 148,
  anon_sym_LT_SLASHinitialDuration_GT = 149,
  anon_sym_LTprogressionFactor_GT = 150,
  anon_sym_LT_SLASHprogressionFactor_GT = 151,
  anon_sym_LTmaximumDuration_GT = 152,
  anon_sym_LT_SLASHmaximumDuration_GT = 153,
  anon_sym_LTerrorCodes_GT = 154,
  anon_sym_LT_SLASHerrorCodes_GT = 155,
  anon_sym_LTduration_GT = 156,
  anon_sym_LT_SLASHduration_GT = 157,
  anon_sym_LTresponseAction_GT = 158,
  anon_sym_never = 159,
  anon_sym_discard = 160,
  anon_sym_fault = 161,
  anon_sym_LT_SLASHresponseAction_GT = 162,
  anon_sym_LTkey = 163,
  anon_sym_blocking = 164,
  anon_sym_value = 165,
  aux_sym_value_token1 = 166,
  anon_sym_expression = 167,
  anon_sym_json_DASHeval_LPAREN = 168,
  anon_sym_RPAREN = 169,
  anon_sym_id = 170,
  anon_sym_level = 171,
  anon_sym_full = 172,
  anon_sym_simple = 173,
  anon_sym_custom = 174,
  anon_sym_headers = 175,
  aux_sym_identifier_token1 = 176,
  sym__float = 177,
  sym__unsigned_int = 178,
  sym__int = 179,
  anon_sym_LT_QMARKxml = 180,
  anon_sym_QMARK_GT = 181,
  sym_version_number = 182,
  anon_sym_encoding = 183,
  sym_encoding = 184,
  sym__xpath_node = 185,
  anon_sym_SLASH = 186,
  anon_sym_SLASH_SLASH = 187,
  anon_sym_DOT_DOT = 188,
  anon_sym_DOT = 189,
  anon_sym_AT = 190,
  anon_sym_boolean = 191,
  anon_sym_LPAREN = 192,
  anon_sym_ceiling = 193,
  anon_sym_choose = 194,
  anon_sym_concat = 195,
  anon_sym_contains = 196,
  anon_sym_count = 197,
  anon_sym_current = 198,
  anon_sym_document = 199,
  anon_sym_element_DASHavailable = 200,
  anon_sym_floor = 201,
  anon_sym_format_DASHnumber = 202,
  anon_sym_function_DASHavailable = 203,
  anon_sym_generate_DASHid = 204,
  anon_sym_lang = 205,
  anon_sym_last = 206,
  anon_sym_local_DASHname = 207,
  anon_sym_namespace_DASHuri = 208,
  anon_sym_normalize_DASHspace = 209,
  anon_sym_not = 210,
  anon_sym_number = 211,
  anon_sym_position = 212,
  anon_sym_round = 213,
  anon_sym_starts_DASHwith = 214,
  anon_sym_string = 215,
  anon_sym_string_DASHlength = 216,
  anon_sym_substring = 217,
  anon_sym_substring_DASHafter = 218,
  anon_sym_substring_DASHbefore = 219,
  anon_sym_sum = 220,
  anon_sym_system_DASHproperty = 221,
  anon_sym_translate = 222,
  anon_sym_unparsed_DASHentity_DASHurl = 223,
  anon_sym_base64Encode = 224,
  anon_sym_base64Decode = 225,
  anon_sym_get_DASHproperty_LPAREN = 226,
  anon_sym_SQUOTE = 227,
  anon_sym_DOLLARbody = 228,
  anon_sym_DOLLARheader = 229,
  anon_sym_DOLLARaxis2 = 230,
  anon_sym_ctx = 231,
  anon_sym_DOLLARtrp = 232,
  anon_sym_DOLLARurl = 233,
  anon_sym_DOLLARfunc = 234,
  anon_sym_DOLLARenv = 235,
  anon_sym_DOLLAR_DOT = 236,
  sym_document = 237,
  sym__value = 238,
  sym_object = 239,
  sym_pair = 240,
  sym_array = 241,
  sym_string = 242,
  sym_string_content = 243,
  sym_number = 244,
  sym_true = 245,
  sym_false = 246,
  sym__definition = 247,
  sym_api_definition = 248,
  sym_resource_definition = 249,
  sym_mediation_sequences = 250,
  sym_in_sequence = 251,
  sym_out_sequence = 252,
  sym_fault_sequence = 253,
  sym_resource_attribute = 254,
  sym_api_attribute = 255,
  sym_context = 256,
  sym_hostname = 257,
  sym_port = 258,
  sym_version = 259,
  sym_swagger = 260,
  sym_sequence_definition = 261,
  sym_mediator = 262,
  sym_respond = 263,
  sym_send = 264,
  sym_log = 265,
  sym_property = 266,
  sym__property_attribute = 267,
  sym_call = 268,
  sym_foreach = 269,
  sym_filter = 270,
  sym_aggregate = 271,
  sym_iterate = 272,
  sym_payload_factory = 273,
  sym_media_type = 274,
  sym_format = 275,
  sym_args = 276,
  sym_arg = 277,
  sym_evaluator = 278,
  sym_sequential = 279,
  sym_continueParent = 280,
  sym_preservePayload = 281,
  sym_attachPath = 282,
  sym_sequence = 283,
  sym_target = 284,
  sym_correlateOn = 285,
  sym_complete_condition = 286,
  sym_on_complete = 287,
  sym_message_count = 288,
  sym_min = 289,
  sym_max = 290,
  sym_key = 291,
  sym_then = 292,
  sym_else = 293,
  sym_source = 294,
  sym_regex = 295,
  sym_endpoint = 296,
  sym__endpoint_type = 297,
  sym_http_endpoint = 298,
  sym__endpoint_attribute = 299,
  sym_method = 300,
  sym_endpoint_error_property = 301,
  sym_timeout = 302,
  sym_mark_for_suspending = 303,
  sym__mark_for_suspending_property = 304,
  sym_retries_before_suspending = 305,
  sym_retry_delay = 306,
  sym_suspend_on_failure = 307,
  sym__suspend_on_failure_property = 308,
  sym_initial_duration = 309,
  sym_progression_factor = 310,
  sym_maximum_duration = 311,
  sym_error_codes = 312,
  sym__timeout_property = 313,
  sym_duration = 314,
  sym_response_action = 315,
  sym_endpoint_reference = 316,
  sym_blocking = 317,
  sym_value = 318,
  sym_expression = 319,
  sym_json_eval = 320,
  sym_name = 321,
  sym_id = 322,
  sym_level = 323,
  sym_identifier = 324,
  sym_boolean = 325,
  sym_expression_string = 326,
  sym_xml_declaration = 327,
  sym_version_info = 328,
  sym_encoding_declaration = 329,
  sym_xpath = 330,
  sym__xpath_selectors = 331,
  sym__xPath_extension_functions = 332,
  sym__xpath_function = 333,
  sym_boolean_function = 334,
  sym_ceiling_function = 335,
  sym_choose_function = 336,
  sym_concat_function = 337,
  sym_contains_function = 338,
  sym_count_function = 339,
  sym_current_function = 340,
  sym_document_function = 341,
  sym_element_available_function = 342,
  sym_false_function = 343,
  sym_floor_function = 344,
  sym_format_number_function = 345,
  sym_function_available_function = 346,
  sym_generate_id_function = 347,
  sym_id_function = 348,
  sym_key_function = 349,
  sym_lang_function = 350,
  sym_last_function = 351,
  sym_local_name_function = 352,
  sym_name_function = 353,
  sym_namespace_uri_function = 354,
  sym_normalize_space_function = 355,
  sym_not_function = 356,
  sym_number_function = 357,
  sym_position_function = 358,
  sym_round_function = 359,
  sym_starts_with_function = 360,
  sym_string_function = 361,
  sym_string_length_function = 362,
  sym_substring_function = 363,
  sym_substring_after_function = 364,
  sym_substring_before_function = 365,
  sym_sum_function = 366,
  sym_system_property_function = 367,
  sym_translate_function = 368,
  sym_true_function = 369,
  sym_unparsed_entity_url_function = 370,
  sym_base64_encode = 371,
  sym_base64_decode = 372,
  sym_get_property = 373,
  sym__xpath_string = 374,
  sym_synapse_xpath_property = 375,
  sym_json_path = 376,
  sym_json_path_array = 377,
  sym_json_path_object = 378,
  aux_sym_document_repeat1 = 379,
  aux_sym_object_repeat1 = 380,
  aux_sym_array_repeat1 = 381,
  aux_sym_string_content_repeat1 = 382,
  aux_sym_api_definition_repeat1 = 383,
  aux_sym_in_sequence_repeat1 = 384,
  aux_sym_api_attribute_repeat1 = 385,
  aux_sym_log_repeat1 = 386,
  aux_sym_property_repeat1 = 387,
  aux_sym_iterate_repeat1 = 388,
  aux_sym_args_repeat1 = 389,
  aux_sym_http_endpoint_repeat1 = 390,
  aux_sym_http_endpoint_repeat2 = 391,
  aux_sym_timeout_repeat1 = 392,
  aux_sym_mark_for_suspending_repeat1 = 393,
  aux_sym_suspend_on_failure_repeat1 = 394,
  aux_sym_error_codes_repeat1 = 395,
  aux_sym_xpath_repeat1 = 396,
  aux_sym_json_path_repeat1 = 397,
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
  [anon_sym_LTapi] = "<api",
  [anon_sym_GT] = ">",
  [anon_sym_LT_SLASHapi_GT] = "</api>",
  [anon_sym_LTresource] = "<resource",
  [anon_sym_LT_SLASHresource_GT] = "</resource>",
  [anon_sym_LTinSequence_GT] = "<inSequence>",
  [anon_sym_LT_SLASHinSequence_GT] = "</inSequence>",
  [anon_sym_LToutSequence_GT] = "<outSequence>",
  [anon_sym_LT_SLASHoutSequence_GT] = "</outSequence>",
  [anon_sym_LTfaultSequence_GT] = "<faultSequence>",
  [anon_sym_LT_SLASHfaultSequence_GT] = "</faultSequence>",
  [anon_sym_methods] = "methods",
  [anon_sym_EQ] = "=",
  [anon_sym_uri_DASHtemplate] = "uri-template",
  [anon_sym_xmlns] = "xmlns",
  [anon_sym_name] = "name",
  [anon_sym_context] = "context",
  [anon_sym_hostname] = "hostname",
  [anon_sym_port] = "port",
  [anon_sym_version] = "version",
  [anon_sym_swagger] = "swagger",
  [anon_sym_LTsequence] = "<sequence",
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
  [anon_sym_LT_SLASHargs_GT] = "</args>",
  [anon_sym_evaluator] = "evaluator",
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
  [anon_sym_value] = "value",
  [aux_sym_value_token1] = "value_token1",
  [anon_sym_expression] = "expression",
  [anon_sym_json_DASHeval_LPAREN] = "json-eval(",
  [anon_sym_RPAREN] = ")",
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
  [sym_api_definition] = "api_definition",
  [sym_resource_definition] = "resource_definition",
  [sym_mediation_sequences] = "mediation_sequences",
  [sym_in_sequence] = "in_sequence",
  [sym_out_sequence] = "out_sequence",
  [sym_fault_sequence] = "fault_sequence",
  [sym_resource_attribute] = "resource_attribute",
  [sym_api_attribute] = "api_attribute",
  [sym_context] = "context",
  [sym_hostname] = "hostname",
  [sym_port] = "port",
  [sym_version] = "version",
  [sym_swagger] = "swagger",
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
  [sym_arg] = "arg",
  [sym_evaluator] = "evaluator",
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
  [aux_sym_api_definition_repeat1] = "api_definition_repeat1",
  [aux_sym_in_sequence_repeat1] = "in_sequence_repeat1",
  [aux_sym_api_attribute_repeat1] = "api_attribute_repeat1",
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
  [anon_sym_LTapi] = anon_sym_LTapi,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_SLASHapi_GT] = anon_sym_LT_SLASHapi_GT,
  [anon_sym_LTresource] = anon_sym_LTresource,
  [anon_sym_LT_SLASHresource_GT] = anon_sym_LT_SLASHresource_GT,
  [anon_sym_LTinSequence_GT] = anon_sym_LTinSequence_GT,
  [anon_sym_LT_SLASHinSequence_GT] = anon_sym_LT_SLASHinSequence_GT,
  [anon_sym_LToutSequence_GT] = anon_sym_LToutSequence_GT,
  [anon_sym_LT_SLASHoutSequence_GT] = anon_sym_LT_SLASHoutSequence_GT,
  [anon_sym_LTfaultSequence_GT] = anon_sym_LTfaultSequence_GT,
  [anon_sym_LT_SLASHfaultSequence_GT] = anon_sym_LT_SLASHfaultSequence_GT,
  [anon_sym_methods] = anon_sym_methods,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_uri_DASHtemplate] = anon_sym_uri_DASHtemplate,
  [anon_sym_xmlns] = anon_sym_xmlns,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_context] = anon_sym_context,
  [anon_sym_hostname] = anon_sym_hostname,
  [anon_sym_port] = anon_sym_port,
  [anon_sym_version] = anon_sym_version,
  [anon_sym_swagger] = anon_sym_swagger,
  [anon_sym_LTsequence] = anon_sym_LTsequence,
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
  [anon_sym_LT_SLASHargs_GT] = anon_sym_LT_SLASHargs_GT,
  [anon_sym_evaluator] = anon_sym_evaluator,
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
  [anon_sym_value] = anon_sym_value,
  [aux_sym_value_token1] = aux_sym_value_token1,
  [anon_sym_expression] = anon_sym_expression,
  [anon_sym_json_DASHeval_LPAREN] = anon_sym_json_DASHeval_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
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
  [sym_api_definition] = sym_api_definition,
  [sym_resource_definition] = sym_resource_definition,
  [sym_mediation_sequences] = sym_mediation_sequences,
  [sym_in_sequence] = sym_in_sequence,
  [sym_out_sequence] = sym_out_sequence,
  [sym_fault_sequence] = sym_fault_sequence,
  [sym_resource_attribute] = sym_resource_attribute,
  [sym_api_attribute] = sym_api_attribute,
  [sym_context] = sym_context,
  [sym_hostname] = sym_hostname,
  [sym_port] = sym_port,
  [sym_version] = sym_version,
  [sym_swagger] = sym_swagger,
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
  [sym_arg] = sym_arg,
  [sym_evaluator] = sym_evaluator,
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
  [aux_sym_api_definition_repeat1] = aux_sym_api_definition_repeat1,
  [aux_sym_in_sequence_repeat1] = aux_sym_in_sequence_repeat1,
  [aux_sym_api_attribute_repeat1] = aux_sym_api_attribute_repeat1,
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
  [anon_sym_LTapi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHapi_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTresource] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHresource_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTinSequence_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHinSequence_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LToutSequence_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHoutSequence_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTfaultSequence_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHfaultSequence_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_methods] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uri_DASHtemplate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xmlns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_context] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hostname] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_port] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_version] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swagger] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTsequence] = {
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
  [anon_sym_LT_SLASHargs_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_evaluator] = {
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
  [sym_api_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_resource_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_mediation_sequences] = {
    .visible = true,
    .named = true,
  },
  [sym_in_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_out_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_fault_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_resource_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_api_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_context] = {
    .visible = true,
    .named = true,
  },
  [sym_hostname] = {
    .visible = true,
    .named = true,
  },
  [sym_port] = {
    .visible = true,
    .named = true,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [sym_swagger] = {
    .visible = true,
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
  [sym_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_evaluator] = {
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
  [aux_sym_api_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_in_sequence_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_api_attribute_repeat1] = {
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
  field_arg = 1,
  field_args = 2,
  field_attachPath = 3,
  field_blocking = 4,
  field_complete_condition = 5,
  field_continueParent = 6,
  field_correlateOn = 7,
  field_else = 8,
  field_endpoint = 9,
  field_endpoint_reference = 10,
  field_endpoint_type = 11,
  field_evaluator = 12,
  field_expression = 13,
  field_fault = 14,
  field_format = 15,
  field_id = 16,
  field_in = 17,
  field_key = 18,
  field_level = 19,
  field_max = 20,
  field_media_type = 21,
  field_message_count = 22,
  field_min = 23,
  field_name = 24,
  field_number = 25,
  field_on_complete = 26,
  field_out = 27,
  field_preservePayload = 28,
  field_regex = 29,
  field_sequence = 30,
  field_sequential = 31,
  field_soapAction = 32,
  field_source = 33,
  field_target = 34,
  field_then = 35,
  field_timeout = 36,
  field_to = 37,
  field_value = 38,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arg] = "arg",
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
  [field_evaluator] = "evaluator",
  [field_expression] = "expression",
  [field_fault] = "fault",
  [field_format] = "format",
  [field_id] = "id",
  [field_in] = "in",
  [field_key] = "key",
  [field_level] = "level",
  [field_max] = "max",
  [field_media_type] = "media_type",
  [field_message_count] = "message_count",
  [field_min] = "min",
  [field_name] = "name",
  [field_number] = "number",
  [field_on_complete] = "on_complete",
  [field_out] = "out",
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
  [37] = {.index = 70, .length = 3},
  [38] = {.index = 73, .length = 1},
  [39] = {.index = 74, .length = 3},
  [40] = {.index = 77, .length = 3},
  [41] = {.index = 80, .length = 3},
  [42] = {.index = 83, .length = 3},
  [43] = {.index = 86, .length = 1},
  [44] = {.index = 87, .length = 2},
  [45] = {.index = 89, .length = 3},
  [46] = {.index = 92, .length = 3},
  [47] = {.index = 95, .length = 3},
  [48] = {.index = 98, .length = 3},
  [49] = {.index = 101, .length = 2},
  [50] = {.index = 103, .length = 1},
  [51] = {.index = 104, .length = 2},
  [52] = {.index = 106, .length = 4},
  [53] = {.index = 110, .length = 1},
  [54] = {.index = 111, .length = 1},
  [55] = {.index = 112, .length = 1},
  [56] = {.index = 113, .length = 2},
  [57] = {.index = 115, .length = 1},
  [58] = {.index = 116, .length = 2},
  [59] = {.index = 118, .length = 2},
  [60] = {.index = 120, .length = 1},
  [61] = {.index = 121, .length = 2},
  [62] = {.index = 123, .length = 7},
  [63] = {.index = 130, .length = 2},
  [64] = {.index = 132, .length = 6},
  [65] = {.index = 138, .length = 8},
  [66] = {.index = 146, .length = 6},
  [67] = {.index = 152, .length = 6},
  [68] = {.index = 158, .length = 6},
  [69] = {.index = 164, .length = 6},
  [70] = {.index = 170, .length = 11},
  [71] = {.index = 181, .length = 11},
  [72] = {.index = 192, .length = 11},
  [73] = {.index = 203, .length = 11},
  [74] = {.index = 214, .length = 11},
  [75] = {.index = 225, .length = 11},
  [76] = {.index = 236, .length = 16},
  [77] = {.index = 252, .length = 16},
  [78] = {.index = 268, .length = 16},
  [79] = {.index = 284, .length = 16},
  [80] = {.index = 300, .length = 21},
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
    {field_fault, 2},
    {field_in, 0},
    {field_out, 1},
  [73] =
    {field_endpoint_type, 2},
  [74] =
    {field_blocking, 2},
    {field_endpoint, 4},
    {field_name, 1},
  [77] =
    {field_blocking, 2},
    {field_endpoint_reference, 4},
    {field_name, 1},
  [80] =
    {field_expression, 1},
    {field_id, 2},
    {field_sequence, 4},
  [83] =
    {field_else, 4},
    {field_source, 1},
    {field_then, 3},
  [86] =
    {field_number, 1},
  [87] =
    {field_message_count, 3},
    {field_timeout, 1},
  [89] =
    {field_complete_condition, 4},
    {field_correlateOn, 3},
    {field_id, 1},
  [92] =
    {field_correlateOn, 3},
    {field_id, 1},
    {field_on_complete, 4},
  [95] =
    {field_complete_condition, 3},
    {field_id, 1},
    {field_on_complete, 4},
  [98] =
    {field_args, 4},
    {field_format, 3},
    {field_media_type, 1},
  [101] =
    {field_endpoint_type, 3},
    {field_name, 1},
  [103] =
    {field_regex, 5},
  [104] =
    {field_max, 2},
    {field_min, 1},
  [106] =
    {field_complete_condition, 4},
    {field_correlateOn, 3},
    {field_id, 1},
    {field_on_complete, 5},
  [110] =
    {field_sequence, 2},
  [111] =
    {field_value, 2},
  [112] =
    {field_arg, 1, .inherited = true},
  [113] =
    {field_arg, 0, .inherited = true},
    {field_arg, 1, .inherited = true},
  [115] =
    {field_arg, 1},
  [116] =
    {field_evaluator, 0},
    {field_value, 1},
  [118] =
    {field_evaluator, 0},
    {field_expression, 1},
  [120] =
    {field_then, 7},
  [121] =
    {field_key, 0},
    {field_value, 2},
  [123] =
    {field_expression, 1},
    {field_sequence, 2},
    {field_sequence, 3},
    {field_sequence, 4},
    {field_sequence, 5},
    {field_sequence, 6},
    {field_sequence, 8},
  [130] =
    {field_else, 8},
    {field_then, 7},
  [132] =
    {field_expression, 1},
    {field_sequence, 2},
    {field_sequence, 3},
    {field_sequence, 4},
    {field_sequence, 5},
    {field_sequence, 6},
  [138] =
    {field_expression, 1},
    {field_id, 2},
    {field_sequence, 3},
    {field_sequence, 4},
    {field_sequence, 5},
    {field_sequence, 6},
    {field_sequence, 7},
    {field_sequence, 9},
  [146] =
    {field_sequence, 1},
    {field_sequence, 2},
    {field_sequence, 3},
    {field_sequence, 4},
    {field_sequence, 5},
    {field_sequence, 7},
  [152] =
    {field_sequence, 7},
    {field_to, 1},
    {field_to, 2},
    {field_to, 3},
    {field_to, 4},
    {field_to, 5},
  [158] =
    {field_sequence, 7},
    {field_soapAction, 1},
    {field_soapAction, 2},
    {field_soapAction, 3},
    {field_soapAction, 4},
    {field_soapAction, 5},
  [164] =
    {field_endpoint, 1},
    {field_endpoint, 2},
    {field_endpoint, 3},
    {field_endpoint, 4},
    {field_endpoint, 5},
    {field_sequence, 7},
  [170] =
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
  [181] =
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
  [192] =
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
  [203] =
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
  [214] =
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
  [225] =
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
  [236] =
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
  [252] =
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
  [268] =
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
  [284] =
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
  [300] =
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
  [224] = 50,
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
  [755] = 755,
  [756] = 756,
  [757] = 757,
  [758] = 758,
  [759] = 759,
  [760] = 760,
  [761] = 761,
  [762] = 762,
  [763] = 763,
  [764] = 764,
  [765] = 765,
  [766] = 766,
  [767] = 767,
  [768] = 768,
  [769] = 769,
  [770] = 770,
  [771] = 771,
  [772] = 772,
  [773] = 773,
  [774] = 774,
  [775] = 775,
  [776] = 776,
  [777] = 777,
  [778] = 778,
  [779] = 779,
  [780] = 780,
  [781] = 781,
  [782] = 782,
  [783] = 783,
  [784] = 784,
  [785] = 785,
  [786] = 786,
  [787] = 787,
  [788] = 788,
  [789] = 789,
  [790] = 790,
  [791] = 791,
  [792] = 792,
  [793] = 793,
  [794] = 794,
  [795] = 795,
  [796] = 796,
  [797] = 797,
  [798] = 798,
  [799] = 799,
  [800] = 800,
  [801] = 801,
  [802] = 802,
  [803] = 803,
  [804] = 804,
  [805] = 805,
  [806] = 806,
  [807] = 807,
  [808] = 808,
  [809] = 809,
  [810] = 810,
  [811] = 811,
  [812] = 812,
  [813] = 813,
  [814] = 814,
  [815] = 815,
  [816] = 816,
  [817] = 817,
  [818] = 818,
  [819] = 819,
  [820] = 820,
  [821] = 821,
  [822] = 822,
  [823] = 823,
  [824] = 824,
  [825] = 825,
  [826] = 826,
  [827] = 827,
  [828] = 828,
  [829] = 829,
  [830] = 830,
  [831] = 831,
  [832] = 832,
  [833] = 833,
  [834] = 834,
  [835] = 835,
  [836] = 836,
  [837] = 837,
  [838] = 838,
  [839] = 839,
  [840] = 840,
  [841] = 841,
  [842] = 842,
  [843] = 843,
  [844] = 844,
  [845] = 845,
  [846] = 846,
  [847] = 847,
  [848] = 848,
  [849] = 849,
  [850] = 850,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1088);
      if (lookahead == '"') ADVANCE(1095);
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(1887);
      if (lookahead == '(') ADVANCE(1852);
      if (lookahead == ')') ADVANCE(1347);
      if (lookahead == ',') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1083);
      if (lookahead == '.') ADVANCE(1849);
      if (lookahead == '/') ADVANCE(1845);
      if (lookahead == ':') ADVANCE(1092);
      if (lookahead == '<') ADVANCE(3);
      if (lookahead == '=') ADVANCE(1127);
      if (lookahead == '>') ADVANCE(1115);
      if (lookahead == '?') ADVANCE(32);
      if (lookahead == '@') ADVANCE(1850);
      if (lookahead == 'B') ADVANCE(1415);
      if (lookahead == 'D') ADVANCE(1390);
      if (lookahead == 'F') ADVANCE(1402);
      if (lookahead == 'G') ADVANCE(1386);
      if (lookahead == 'H') ADVANCE(1387);
      if (lookahead == 'I') ADVANCE(1409);
      if (lookahead == 'L') ADVANCE(1412);
      if (lookahead == 'O') ADVANCE(1406);
      if (lookahead == 'P') ADVANCE(1378);
      if (lookahead == 'S') ADVANCE(1399);
      if (lookahead == '[') ADVANCE(1093);
      if (lookahead == '\\') ADVANCE(1082);
      if (lookahead == ']') ADVANCE(1094);
      if (lookahead == 'a') ADVANCE(1481);
      if (lookahead == 'b') ADVANCE(1442);
      if (lookahead == 'c') ADVANCE(1533);
      if (lookahead == 'd') ADVANCE(1510);
      if (lookahead == 'e') ADVANCE(1609);
      if (lookahead == 'f') ADVANCE(1436);
      if (lookahead == 'g') ADVANCE(1511);
      if (lookahead == 'h') ADVANCE(1535);
      if (lookahead == 'i') ADVANCE(1499);
      if (lookahead == 'j') ADVANCE(1761);
      if (lookahead == 'k') ADVANCE(1512);
      if (lookahead == 'l') ADVANCE(1437);
      if (lookahead == 'm') ADVANCE(1444);
      if (lookahead == 'n') ADVANCE(1439);
      if (lookahead == 'o') ADVANCE(1713);
      if (lookahead == 'p') ADVANCE(1447);
      if (lookahead == 'r') ADVANCE(1513);
      if (lookahead == 's') ADVANCE(1486);
      if (lookahead == 't') ADVANCE(1683);
      if (lookahead == 'u') ADVANCE(1654);
      if (lookahead == 'v') ADVANCE(1445);
      if (lookahead == 'x') ADVANCE(1631);
      if (lookahead == '{') ADVANCE(1089);
      if (lookahead == '}') ADVANCE(1091);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1087)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1836);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '"') ADVANCE(1095);
      if (lookahead == '<') ADVANCE(1096);
      if (lookahead == '\\') ADVANCE(1082);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1102);
      if (lookahead != 0) ADVANCE(1104);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '/') ADVANCE(222);
      if (lookahead == '?') ADVANCE(1063);
      if (lookahead == 'a') ADVANCE(467);
      if (lookahead == 'c') ADVANCE(188);
      if (lookahead == 'd') ADVANCE(1013);
      if (lookahead == 'e') ADVANCE(555);
      if (lookahead == 'f') ADVANCE(194);
      if (lookahead == 'h') ADVANCE(948);
      if (lookahead == 'i') ADVANCE(628);
      if (lookahead == 'k') ADVANCE(323);
      if (lookahead == 'l') ADVANCE(706);
      if (lookahead == 'm') ADVANCE(186);
      if (lookahead == 'o') ADVANCE(629);
      if (lookahead == 'p') ADVANCE(189);
      if (lookahead == 'r') ADVANCE(324);
      if (lookahead == 's') ADVANCE(325);
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '/') ADVANCE(218);
      if (lookahead == 'a') ADVANCE(834);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == 'a') ADVANCE(859);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(1095);
      if (lookahead == '$') ADVANCE(185);
      if (lookahead == ')') ADVANCE(1347);
      if (lookahead == '.') ADVANCE(1849);
      if (lookahead == '/') ADVANCE(1844);
      if (lookahead == '<') ADVANCE(4);
      if (lookahead == '@') ADVANCE(1850);
      if (lookahead == 'b') ADVANCE(1443);
      if (lookahead == 'c') ADVANCE(1534);
      if (lookahead == 'd') ADVANCE(1681);
      if (lookahead == 'e') ADVANCE(1610);
      if (lookahead == 'f') ADVANCE(1463);
      if (lookahead == 'g') ADVANCE(1536);
      if (lookahead == 'i') ADVANCE(1499);
      if (lookahead == 'j') ADVANCE(1775);
      if (lookahead == 'k') ADVANCE(1512);
      if (lookahead == 'l') ADVANCE(1438);
      if (lookahead == 'n') ADVANCE(1440);
      if (lookahead == 'p') ADVANCE(1696);
      if (lookahead == 'r') ADVANCE(1682);
      if (lookahead == 's') ADVANCE(1777);
      if (lookahead == 't') ADVANCE(1750);
      if (lookahead == 'u') ADVANCE(1655);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(1095);
      if (lookahead == '\'') ADVANCE(1887);
      if (lookahead == ')') ADVANCE(1347);
      if (lookahead == '-') ADVANCE(1083);
      if (lookahead == '.') ADVANCE(1848);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '>') ADVANCE(1115);
      if (lookahead == '?') ADVANCE(32);
      if (lookahead == 'B') ADVANCE(151);
      if (lookahead == 'D') ADVANCE(116);
      if (lookahead == 'F') ADVANCE(138);
      if (lookahead == 'G') ADVANCE(112);
      if (lookahead == 'H') ADVANCE(115);
      if (lookahead == 'I') ADVANCE(144);
      if (lookahead == 'L') ADVANCE(147);
      if (lookahead == 'O') ADVANCE(141);
      if (lookahead == 'P') ADVANCE(88);
      if (lookahead == 'S') ADVANCE(134);
      if (lookahead == '[') ADVANCE(1093);
      if (lookahead == ']') ADVANCE(1094);
      if (lookahead == 'a') ADVANCE(289);
      if (lookahead == 'b') ADVANCE(576);
      if (lookahead == 'c') ADVANCE(750);
      if (lookahead == 'd') ADVANCE(341);
      if (lookahead == 'e') ADVANCE(634);
      if (lookahead == 'f') ADVANCE(187);
      if (lookahead == 'g') ADVANCE(387);
      if (lookahead == 'h') ADVANCE(419);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == 'l') ADVANCE(359);
      if (lookahead == 'm') ADVANCE(193);
      if (lookahead == 'n') ADVANCE(230);
      if (lookahead == 'o') ADVANCE(777);
      if (lookahead == 'p') ADVANCE(216);
      if (lookahead == 'r') ADVANCE(342);
      if (lookahead == 's') ADVANCE(290);
      if (lookahead == 't') ADVANCE(705);
      if (lookahead == 'u') ADVANCE(842);
      if (lookahead == 'v') ADVANCE(214);
      if (lookahead == 'x') ADVANCE(613);
      if (lookahead == '{') ADVANCE(1089);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1836);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(1095);
      if (lookahead == '<') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == '<') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(1028);
      if (lookahead == 'f') ADVANCE(1029);
      if (lookahead == 'h') ADVANCE(441);
      if (lookahead == 'j') ADVANCE(914);
      if (lookahead == 'm') ADVANCE(404);
      if (lookahead == 's') ADVANCE(532);
      if (lookahead == 'x') ADVANCE(614);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(1840);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(1843);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(1346);
      END_STATE();
    case 13:
      if (lookahead == '(') ADVANCE(1886);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(1086);
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
      if (lookahead == '-') ADVANCE(952);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(45);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(966);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(1021);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(1896);
      if (lookahead == 'a') ADVANCE(1062);
      if (lookahead == 'b') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(627);
      if (lookahead == 'f') ADVANCE(1012);
      if (lookahead == 'h') ADVANCE(322);
      if (lookahead == 't') ADVANCE(814);
      if (lookahead == 'u') ADVANCE(815);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(1085);
      END_STATE();
    case 24:
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '>') ADVANCE(1227);
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(54);
      END_STATE();
    case 26:
      if (lookahead == '1') ADVANCE(23);
      if (lookahead == 'U') ADVANCE(181);
      END_STATE();
    case 27:
      if (lookahead == '2') ADVANCE(1890);
      END_STATE();
    case 28:
      if (lookahead == '2') ADVANCE(1157);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1834);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(1151);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(1839);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(1116);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(1150);
      END_STATE();
    case 35:
      if (lookahead == '>') ADVANCE(1262);
      END_STATE();
    case 36:
      if (lookahead == '>') ADVANCE(1260);
      END_STATE();
    case 37:
      if (lookahead == '>') ADVANCE(1230);
      END_STATE();
    case 38:
      if (lookahead == '>') ADVANCE(1203);
      END_STATE();
    case 39:
      if (lookahead == '>') ADVANCE(1263);
      END_STATE();
    case 40:
      if (lookahead == '>') ADVANCE(1271);
      END_STATE();
    case 41:
      if (lookahead == '>') ADVANCE(1148);
      END_STATE();
    case 42:
      if (lookahead == '>') ADVANCE(1261);
      END_STATE();
    case 43:
      if (lookahead == '>') ADVANCE(1226);
      END_STATE();
    case 44:
      if (lookahead == '>') ADVANCE(1146);
      END_STATE();
    case 45:
      if (lookahead == '>') ADVANCE(1112);
      END_STATE();
    case 46:
      if (lookahead == '>') ADVANCE(1211);
      END_STATE();
    case 47:
      if (lookahead == '>') ADVANCE(1225);
      END_STATE();
    case 48:
      if (lookahead == '>') ADVANCE(1248);
      END_STATE();
    case 49:
      if (lookahead == '>') ADVANCE(1302);
      END_STATE();
    case 50:
      if (lookahead == '>') ADVANCE(1207);
      END_STATE();
    case 51:
      if (lookahead == '>') ADVANCE(1216);
      END_STATE();
    case 52:
      if (lookahead == '>') ADVANCE(1303);
      END_STATE();
    case 53:
      if (lookahead == '>') ADVANCE(1320);
      END_STATE();
    case 54:
      if (lookahead == '>') ADVANCE(1145);
      END_STATE();
    case 55:
      if (lookahead == '>') ADVANCE(1321);
      END_STATE();
    case 56:
      if (lookahead == '>') ADVANCE(1269);
      END_STATE();
    case 57:
      if (lookahead == '>') ADVANCE(1118);
      END_STATE();
    case 58:
      if (lookahead == '>') ADVANCE(1144);
      END_STATE();
    case 59:
      if (lookahead == '>') ADVANCE(1214);
      END_STATE();
    case 60:
      if (lookahead == '>') ADVANCE(1318);
      END_STATE();
    case 61:
      if (lookahead == '>') ADVANCE(1119);
      END_STATE();
    case 62:
      if (lookahead == '>') ADVANCE(1308);
      END_STATE();
    case 63:
      if (lookahead == '>') ADVANCE(1319);
      END_STATE();
    case 64:
      if (lookahead == '>') ADVANCE(1120);
      END_STATE();
    case 65:
      if (lookahead == '>') ADVANCE(1253);
      END_STATE();
    case 66:
      if (lookahead == '>') ADVANCE(1309);
      END_STATE();
    case 67:
      if (lookahead == '>') ADVANCE(1121);
      END_STATE();
    case 68:
      if (lookahead == '>') ADVANCE(1122);
      END_STATE();
    case 69:
      if (lookahead == '>') ADVANCE(1123);
      END_STATE();
    case 70:
      if (lookahead == '>') ADVANCE(1124);
      END_STATE();
    case 71:
      if (lookahead == '>') ADVANCE(1322);
      END_STATE();
    case 72:
      if (lookahead == '>') ADVANCE(1218);
      END_STATE();
    case 73:
      if (lookahead == '>') ADVANCE(1329);
      END_STATE();
    case 74:
      if (lookahead == '>') ADVANCE(1312);
      END_STATE();
    case 75:
      if (lookahead == '>') ADVANCE(1316);
      END_STATE();
    case 76:
      if (lookahead == '>') ADVANCE(1313);
      END_STATE();
    case 77:
      if (lookahead == '>') ADVANCE(1317);
      END_STATE();
    case 78:
      if (lookahead == '>') ADVANCE(1310);
      END_STATE();
    case 79:
      if (lookahead == '>') ADVANCE(1311);
      END_STATE();
    case 80:
      if (lookahead == '>') ADVANCE(1304);
      END_STATE();
    case 81:
      if (lookahead == '>') ADVANCE(1314);
      END_STATE();
    case 82:
      if (lookahead == '>') ADVANCE(1251);
      END_STATE();
    case 83:
      if (lookahead == '>') ADVANCE(1305);
      END_STATE();
    case 84:
      if (lookahead == '>') ADVANCE(1315);
      END_STATE();
    case 85:
      if (lookahead == '>') ADVANCE(1306);
      END_STATE();
    case 86:
      if (lookahead == '>') ADVANCE(1307);
      END_STATE();
    case 87:
      if (lookahead == 'A') ADVANCE(105);
      END_STATE();
    case 88:
      if (lookahead == 'A') ADVANCE(180);
      if (lookahead == 'O') ADVANCE(163);
      if (lookahead == 'U') ADVANCE(176);
      END_STATE();
    case 89:
      if (lookahead == 'A') ADVANCE(143);
      END_STATE();
    case 90:
      if (lookahead == 'A') ADVANCE(295);
      END_STATE();
    case 91:
      if (lookahead == 'A') ADVANCE(178);
      END_STATE();
    case 92:
      if (lookahead == 'A') ADVANCE(292);
      END_STATE();
    case 93:
      if (lookahead == 'A') ADVANCE(296);
      END_STATE();
    case 94:
      if (lookahead == 'B') ADVANCE(332);
      END_STATE();
    case 95:
      if (lookahead == 'B') ADVANCE(139);
      END_STATE();
    case 96:
      if (lookahead == 'B') ADVANCE(460);
      END_STATE();
    case 97:
      if (lookahead == 'C') ADVANCE(133);
      END_STATE();
    case 98:
      if (lookahead == 'C') ADVANCE(769);
      END_STATE();
    case 99:
      if (lookahead == 'C') ADVANCE(732);
      END_STATE();
    case 100:
      if (lookahead == 'C') ADVANCE(737);
      END_STATE();
    case 101:
      if (lookahead == 'C') ADVANCE(735);
      END_STATE();
    case 102:
      if (lookahead == 'C') ADVANCE(742);
      END_STATE();
    case 103:
      if (lookahead == 'C') ADVANCE(768);
      END_STATE();
    case 104:
      if (lookahead == 'C') ADVANCE(771);
      END_STATE();
    case 105:
      if (lookahead == 'D') ADVANCE(1282);
      END_STATE();
    case 106:
      if (lookahead == 'D') ADVANCE(380);
      END_STATE();
    case 107:
      if (lookahead == 'D') ADVANCE(418);
      END_STATE();
    case 108:
      if (lookahead == 'D') ADVANCE(1045);
      END_STATE();
    case 109:
      if (lookahead == 'D') ADVANCE(1047);
      END_STATE();
    case 110:
      if (lookahead == 'D') ADVANCE(1049);
      END_STATE();
    case 111:
      if (lookahead == 'D') ADVANCE(1050);
      END_STATE();
    case 112:
      if (lookahead == 'E') ADVANCE(174);
      END_STATE();
    case 113:
      if (lookahead == 'E') ADVANCE(1280);
      END_STATE();
    case 114:
      if (lookahead == 'E') ADVANCE(1188);
      END_STATE();
    case 115:
      if (lookahead == 'E') ADVANCE(87);
      END_STATE();
    case 116:
      if (lookahead == 'E') ADVANCE(140);
      if (lookahead == 'O') ADVANCE(184);
      END_STATE();
    case 117:
      if (lookahead == 'E') ADVANCE(132);
      END_STATE();
    case 118:
      if (lookahead == 'E') ADVANCE(159);
      END_STATE();
    case 119:
      if (lookahead == 'E') ADVANCE(89);
      END_STATE();
    case 120:
      if (lookahead == 'E') ADVANCE(183);
      END_STATE();
    case 121:
      if (lookahead == 'F') ADVANCE(15);
      END_STATE();
    case 122:
      if (lookahead == 'F') ADVANCE(202);
      END_STATE();
    case 123:
      if (lookahead == 'F') ADVANCE(718);
      END_STATE();
    case 124:
      if (lookahead == 'F') ADVANCE(229);
      END_STATE();
    case 125:
      if (lookahead == 'F') ADVANCE(246);
      END_STATE();
    case 126:
      if (lookahead == 'F') ADVANCE(250);
      END_STATE();
    case 127:
      if (lookahead == 'F') ADVANCE(251);
      END_STATE();
    case 128:
      if (lookahead == 'F') ADVANCE(252);
      END_STATE();
    case 129:
      if (lookahead == 'F') ADVANCE(773);
      END_STATE();
    case 130:
      if (lookahead == 'G') ADVANCE(1192);
      END_STATE();
    case 131:
      if (lookahead == 'G') ADVANCE(1182);
      END_STATE();
    case 132:
      if (lookahead == 'G') ADVANCE(118);
      END_STATE();
    case 133:
      if (lookahead == 'H') ADVANCE(1286);
      END_STATE();
    case 134:
      if (lookahead == 'H') ADVANCE(148);
      if (lookahead == 'T') ADVANCE(160);
      END_STATE();
    case 135:
      if (lookahead == 'I') ADVANCE(145);
      END_STATE();
    case 136:
      if (lookahead == 'I') ADVANCE(152);
      END_STATE();
    case 137:
      if (lookahead == 'L') ADVANCE(119);
      END_STATE();
    case 138:
      if (lookahead == 'L') ADVANCE(149);
      END_STATE();
    case 139:
      if (lookahead == 'L') ADVANCE(114);
      END_STATE();
    case 140:
      if (lookahead == 'L') ADVANCE(120);
      END_STATE();
    case 141:
      if (lookahead == 'M') ADVANCE(1196);
      if (lookahead == 'P') ADVANCE(175);
      END_STATE();
    case 142:
      if (lookahead == 'N') ADVANCE(130);
      END_STATE();
    case 143:
      if (lookahead == 'N') ADVANCE(1186);
      END_STATE();
    case 144:
      if (lookahead == 'N') ADVANCE(182);
      END_STATE();
    case 145:
      if (lookahead == 'N') ADVANCE(131);
      END_STATE();
    case 146:
      if (lookahead == 'N') ADVANCE(162);
      END_STATE();
    case 147:
      if (lookahead == 'O') ADVANCE(142);
      END_STATE();
    case 148:
      if (lookahead == 'O') ADVANCE(161);
      END_STATE();
    case 149:
      if (lookahead == 'O') ADVANCE(91);
      END_STATE();
    case 150:
      if (lookahead == 'O') ADVANCE(137);
      END_STATE();
    case 151:
      if (lookahead == 'O') ADVANCE(150);
      END_STATE();
    case 152:
      if (lookahead == 'O') ADVANCE(146);
      END_STATE();
    case 153:
      if (lookahead == 'O') ADVANCE(677);
      END_STATE();
    case 154:
      if (lookahead == 'O') ADVANCE(632);
      END_STATE();
    case 155:
      if (lookahead == 'O') ADVANCE(694);
      END_STATE();
    case 156:
      if (lookahead == 'P') ADVANCE(239);
      END_STATE();
    case 157:
      if (lookahead == 'P') ADVANCE(257);
      END_STATE();
    case 158:
      if (lookahead == 'P') ADVANCE(221);
      END_STATE();
    case 159:
      if (lookahead == 'R') ADVANCE(1184);
      END_STATE();
    case 160:
      if (lookahead == 'R') ADVANCE(135);
      END_STATE();
    case 161:
      if (lookahead == 'R') ADVANCE(179);
      END_STATE();
    case 162:
      if (lookahead == 'S') ADVANCE(1284);
      END_STATE();
    case 163:
      if (lookahead == 'S') ADVANCE(177);
      END_STATE();
    case 164:
      if (lookahead == 'S') ADVANCE(1035);
      END_STATE();
    case 165:
      if (lookahead == 'S') ADVANCE(326);
      if (lookahead == 'i') ADVANCE(954);
      END_STATE();
    case 166:
      if (lookahead == 'S') ADVANCE(445);
      if (lookahead == 'i') ADVANCE(1011);
      END_STATE();
    case 167:
      if (lookahead == 'S') ADVANCE(447);
      END_STATE();
    case 168:
      if (lookahead == 'S') ADVANCE(448);
      END_STATE();
    case 169:
      if (lookahead == 'S') ADVANCE(449);
      END_STATE();
    case 170:
      if (lookahead == 'S') ADVANCE(450);
      END_STATE();
    case 171:
      if (lookahead == 'S') ADVANCE(1044);
      END_STATE();
    case 172:
      if (lookahead == 'S') ADVANCE(1046);
      END_STATE();
    case 173:
      if (lookahead == 'S') ADVANCE(1048);
      END_STATE();
    case 174:
      if (lookahead == 'T') ADVANCE(1274);
      END_STATE();
    case 175:
      if (lookahead == 'T') ADVANCE(136);
      END_STATE();
    case 176:
      if (lookahead == 'T') ADVANCE(1278);
      END_STATE();
    case 177:
      if (lookahead == 'T') ADVANCE(1276);
      END_STATE();
    case 178:
      if (lookahead == 'T') ADVANCE(1190);
      END_STATE();
    case 179:
      if (lookahead == 'T') ADVANCE(1194);
      END_STATE();
    case 180:
      if (lookahead == 'T') ADVANCE(97);
      END_STATE();
    case 181:
      if (lookahead == 'T') ADVANCE(121);
      END_STATE();
    case 182:
      if (lookahead == 'T') ADVANCE(117);
      END_STATE();
    case 183:
      if (lookahead == 'T') ADVANCE(113);
      END_STATE();
    case 184:
      if (lookahead == 'U') ADVANCE(95);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(1062);
      if (lookahead == 'b') ADVANCE(703);
      if (lookahead == 'e') ADVANCE(627);
      if (lookahead == 'f') ADVANCE(1012);
      if (lookahead == 'h') ADVANCE(322);
      if (lookahead == 't') ADVANCE(814);
      if (lookahead == 'u') ADVANCE(815);
      END_STATE();
    case 186:
      if (lookahead == 'a') ADVANCE(817);
      if (lookahead == 'e') ADVANCE(896);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(591);
      if (lookahead == 'i') ADVANCE(586);
      END_STATE();
    case 188:
      if (lookahead == 'a') ADVANCE(568);
      if (lookahead == 'o') ADVANCE(609);
      END_STATE();
    case 189:
      if (lookahead == 'a') ADVANCE(1075);
      if (lookahead == 'r') ADVANCE(704);
      END_STATE();
    case 190:
      if (lookahead == 'a') ADVANCE(267);
      END_STATE();
    case 191:
      if (lookahead == 'a') ADVANCE(465);
      if (lookahead == 'b') ADVANCE(442);
      END_STATE();
    case 192:
      if (lookahead == 'a') ADVANCE(263);
      END_STATE();
    case 193:
      if (lookahead == 'a') ADVANCE(1064);
      if (lookahead == 'e') ADVANCE(314);
      if (lookahead == 'i') ADVANCE(635);
      END_STATE();
    case 194:
      if (lookahead == 'a') ADVANCE(1015);
      if (lookahead == 'i') ADVANCE(567);
      if (lookahead == 'o') ADVANCE(816);
      END_STATE();
    case 195:
      if (lookahead == 'a') ADVANCE(309);
      END_STATE();
    case 196:
      if (lookahead == 'a') ADVANCE(269);
      END_STATE();
    case 197:
      if (lookahead == 'a') ADVANCE(832);
      if (lookahead == 'h') ADVANCE(358);
      if (lookahead == 'i') ADVANCE(612);
      END_STATE();
    case 198:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 199:
      if (lookahead == 'a') ADVANCE(932);
      END_STATE();
    case 200:
      if (lookahead == 'a') ADVANCE(306);
      END_STATE();
    case 201:
      if (lookahead == 'a') ADVANCE(1076);
      END_STATE();
    case 202:
      if (lookahead == 'a') ADVANCE(273);
      END_STATE();
    case 203:
      if (lookahead == 'a') ADVANCE(963);
      END_STATE();
    case 204:
      if (lookahead == 'a') ADVANCE(483);
      END_STATE();
    case 205:
      if (lookahead == 'a') ADVANCE(271);
      END_STATE();
    case 206:
      if (lookahead == 'a') ADVANCE(512);
      END_STATE();
    case 207:
      if (lookahead == 'a') ADVANCE(302);
      END_STATE();
    case 208:
      if (lookahead == 'a') ADVANCE(794);
      if (lookahead == 'u') ADVANCE(865);
      END_STATE();
    case 209:
      if (lookahead == 'a') ADVANCE(566);
      END_STATE();
    case 210:
      if (lookahead == 'a') ADVANCE(790);
      END_STATE();
    case 211:
      if (lookahead == 'a') ADVANCE(559);
      END_STATE();
    case 212:
      if (lookahead == 'a') ADVANCE(305);
      END_STATE();
    case 213:
      if (lookahead == 'a') ADVANCE(655);
      if (lookahead == 'u') ADVANCE(345);
      END_STATE();
    case 214:
      if (lookahead == 'a') ADVANCE(590);
      if (lookahead == 'e') ADVANCE(867);
      END_STATE();
    case 215:
      if (lookahead == 'a') ADVANCE(573);
      END_STATE();
    case 216:
      if (lookahead == 'a') ADVANCE(938);
      if (lookahead == 'o') ADVANCE(850);
      if (lookahead == 'r') ADVANCE(423);
      if (lookahead == 'u') ADVANCE(939);
      END_STATE();
    case 217:
      if (lookahead == 'a') ADVANCE(563);
      END_STATE();
    case 218:
      if (lookahead == 'a') ADVANCE(829);
      END_STATE();
    case 219:
      if (lookahead == 'a') ADVANCE(843);
      END_STATE();
    case 220:
      if (lookahead == 'a') ADVANCE(959);
      END_STATE();
    case 221:
      if (lookahead == 'a') ADVANCE(961);
      END_STATE();
    case 222:
      if (lookahead == 'a') ADVANCE(488);
      if (lookahead == 'c') ADVANCE(224);
      if (lookahead == 'd') ADVANCE(1043);
      if (lookahead == 'e') ADVANCE(588);
      if (lookahead == 'f') ADVANCE(260);
      if (lookahead == 'h') ADVANCE(982);
      if (lookahead == 'i') ADVANCE(700);
      if (lookahead == 'l') ADVANCE(708);
      if (lookahead == 'm') ADVANCE(262);
      if (lookahead == 'o') ADVANCE(701);
      if (lookahead == 'p') ADVANCE(259);
      if (lookahead == 'r') ADVANCE(429);
      if (lookahead == 's') ADVANCE(410);
      if (lookahead == 't') ADVANCE(244);
      END_STATE();
    case 223:
      if (lookahead == 'a') ADVANCE(1054);
      END_STATE();
    case 224:
      if (lookahead == 'a') ADVANCE(572);
      if (lookahead == 'o') ADVANCE(625);
      END_STATE();
    case 225:
      if (lookahead == 'a') ADVANCE(615);
      END_STATE();
    case 226:
      if (lookahead == 'a') ADVANCE(1026);
      END_STATE();
    case 227:
      if (lookahead == 'a') ADVANCE(956);
      END_STATE();
    case 228:
      if (lookahead == 'a') ADVANCE(1077);
      END_STATE();
    case 229:
      if (lookahead == 'a') ADVANCE(514);
      END_STATE();
    case 230:
      if (lookahead == 'a') ADVANCE(616);
      if (lookahead == 'e') ADVANCE(1058);
      if (lookahead == 'u') ADVANCE(579);
      END_STATE();
    case 231:
      if (lookahead == 'a') ADVANCE(969);
      END_STATE();
    case 232:
      if (lookahead == 'a') ADVANCE(481);
      END_STATE();
    case 233:
      if (lookahead == 'a') ADVANCE(617);
      END_STATE();
    case 234:
      if (lookahead == 'a') ADVANCE(972);
      END_STATE();
    case 235:
      if (lookahead == 'a') ADVANCE(974);
      END_STATE();
    case 236:
      if (lookahead == 'a') ADVANCE(992);
      END_STATE();
    case 237:
      if (lookahead == 'a') ADVANCE(975);
      END_STATE();
    case 238:
      if (lookahead == 'a') ADVANCE(976);
      END_STATE();
    case 239:
      if (lookahead == 'a') ADVANCE(868);
      END_STATE();
    case 240:
      if (lookahead == 'a') ADVANCE(979);
      END_STATE();
    case 241:
      if (lookahead == 'a') ADVANCE(284);
      END_STATE();
    case 242:
      if (lookahead == 'a') ADVANCE(264);
      END_STATE();
    case 243:
      if (lookahead == 'a') ADVANCE(317);
      END_STATE();
    case 244:
      if (lookahead == 'a') ADVANCE(860);
      if (lookahead == 'h') ADVANCE(414);
      if (lookahead == 'i') ADVANCE(620);
      END_STATE();
    case 245:
      if (lookahead == 'a') ADVANCE(994);
      END_STATE();
    case 246:
      if (lookahead == 'a') ADVANCE(291);
      END_STATE();
    case 247:
      if (lookahead == 'a') ADVANCE(534);
      END_STATE();
    case 248:
      if (lookahead == 'a') ADVANCE(1060);
      END_STATE();
    case 249:
      if (lookahead == 'a') ADVANCE(998);
      END_STATE();
    case 250:
      if (lookahead == 'a') ADVANCE(546);
      END_STATE();
    case 251:
      if (lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 252:
      if (lookahead == 'a') ADVANCE(294);
      END_STATE();
    case 253:
      if (lookahead == 'a') ADVANCE(1002);
      END_STATE();
    case 254:
      if (lookahead == 'a') ADVANCE(1003);
      END_STATE();
    case 255:
      if (lookahead == 'a') ADVANCE(1004);
      END_STATE();
    case 256:
      if (lookahead == 'a') ADVANCE(1005);
      END_STATE();
    case 257:
      if (lookahead == 'a') ADVANCE(1080);
      END_STATE();
    case 258:
      if (lookahead == 'a') ADVANCE(319);
      END_STATE();
    case 259:
      if (lookahead == 'a') ADVANCE(1081);
      if (lookahead == 'r') ADVANCE(762);
      END_STATE();
    case 260:
      if (lookahead == 'a') ADVANCE(1051);
      if (lookahead == 'i') ADVANCE(593);
      if (lookahead == 'o') ADVANCE(858);
      END_STATE();
    case 261:
      if (lookahead == 'a') ADVANCE(605);
      END_STATE();
    case 262:
      if (lookahead == 'a') ADVANCE(884);
      END_STATE();
    case 263:
      if (lookahead == 'b') ADVANCE(584);
      END_STATE();
    case 264:
      if (lookahead == 'b') ADVANCE(585);
      END_STATE();
    case 265:
      if (lookahead == 'b') ADVANCE(384);
      END_STATE();
    case 266:
      if (lookahead == 'c') ADVANCE(1894);
      END_STATE();
    case 267:
      if (lookahead == 'c') ADVANCE(490);
      END_STATE();
    case 268:
      if (lookahead == 'c') ADVANCE(553);
      END_STATE();
    case 269:
      if (lookahead == 'c') ADVANCE(497);
      END_STATE();
    case 270:
      if (lookahead == 'c') ADVANCE(493);
      if (lookahead == 't') ADVANCE(395);
      END_STATE();
    case 271:
      if (lookahead == 'c') ADVANCE(495);
      END_STATE();
    case 272:
      if (lookahead == 'c') ADVANCE(571);
      END_STATE();
    case 273:
      if (lookahead == 'c') ADVANCE(986);
      END_STATE();
    case 274:
      if (lookahead == 'c') ADVANCE(328);
      END_STATE();
    case 275:
      if (lookahead == 'c') ADVANCE(330);
      END_STATE();
    case 276:
      if (lookahead == 'c') ADVANCE(391);
      END_STATE();
    case 277:
      if (lookahead == 'c') ADVANCE(392);
      END_STATE();
    case 278:
      if (lookahead == 'c') ADVANCE(396);
      END_STATE();
    case 279:
      if (lookahead == 'c') ADVANCE(399);
      END_STATE();
    case 280:
      if (lookahead == 'c') ADVANCE(402);
      END_STATE();
    case 281:
      if (lookahead == 'c') ADVANCE(403);
      END_STATE();
    case 282:
      if (lookahead == 'c') ADVANCE(405);
      END_STATE();
    case 283:
      if (lookahead == 'c') ADVANCE(406);
      END_STATE();
    case 284:
      if (lookahead == 'c') ADVANCE(337);
      END_STATE();
    case 285:
      if (lookahead == 'c') ADVANCE(352);
      END_STATE();
    case 286:
      if (lookahead == 'c') ADVANCE(355);
      if (lookahead == 't') ADVANCE(529);
      END_STATE();
    case 287:
      if (lookahead == 'c') ADVANCE(219);
      END_STATE();
    case 288:
      if (lookahead == 'c') ADVANCE(716);
      if (lookahead == 'd') ADVANCE(800);
      if (lookahead == 'v') ADVANCE(1170);
      END_STATE();
    case 289:
      if (lookahead == 'c') ADVANCE(987);
      if (lookahead == 't') ADVANCE(964);
      if (lookahead == 'x') ADVANCE(510);
      END_STATE();
    case 290:
      if (lookahead == 'c') ADVANCE(752);
      if (lookahead == 'e') ADVANCE(807);
      if (lookahead == 'o') ADVANCE(208);
      if (lookahead == 'w') ADVANCE(204);
      if (lookahead == 'y') ADVANCE(660);
      END_STATE();
    case 291:
      if (lookahead == 'c') ADVANCE(989);
      END_STATE();
    case 292:
      if (lookahead == 'c') ADVANCE(995);
      END_STATE();
    case 293:
      if (lookahead == 'c') ADVANCE(990);
      END_STATE();
    case 294:
      if (lookahead == 'c') ADVANCE(991);
      END_STATE();
    case 295:
      if (lookahead == 'c') ADVANCE(1000);
      END_STATE();
    case 296:
      if (lookahead == 'c') ADVANCE(1001);
      END_STATE();
    case 297:
      if (lookahead == 'd') ADVANCE(1147);
      END_STATE();
    case 298:
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead == 's') ADVANCE(329);
      END_STATE();
    case 299:
      if (lookahead == 'd') ADVANCE(153);
      END_STATE();
    case 300:
      if (lookahead == 'd') ADVANCE(1864);
      END_STATE();
    case 301:
      if (lookahead == 'd') ADVANCE(1348);
      END_STATE();
    case 302:
      if (lookahead == 'd') ADVANCE(1296);
      END_STATE();
    case 303:
      if (lookahead == 'd') ADVANCE(1272);
      END_STATE();
    case 304:
      if (lookahead == 'd') ADVANCE(1325);
      END_STATE();
    case 305:
      if (lookahead == 'd') ADVANCE(1237);
      END_STATE();
    case 306:
      if (lookahead == 'd') ADVANCE(122);
      END_STATE();
    case 307:
      if (lookahead == 'd') ADVANCE(779);
      END_STATE();
    case 308:
      if (lookahead == 'd') ADVANCE(1068);
      END_STATE();
    case 309:
      if (lookahead == 'd') ADVANCE(374);
      END_STATE();
    case 310:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 311:
      if (lookahead == 'd') ADVANCE(528);
      END_STATE();
    case 312:
      if (lookahead == 'd') ADVANCE(892);
      END_STATE();
    case 313:
      if (lookahead == 'd') ADVANCE(372);
      END_STATE();
    case 314:
      if (lookahead == 'd') ADVANCE(517);
      if (lookahead == 't') ADVANCE(498);
      END_STATE();
    case 315:
      if (lookahead == 'd') ADVANCE(417);
      END_STATE();
    case 316:
      if (lookahead == 'd') ADVANCE(523);
      END_STATE();
    case 317:
      if (lookahead == 'd') ADVANCE(401);
      END_STATE();
    case 318:
      if (lookahead == 'd') ADVANCE(547);
      END_STATE();
    case 319:
      if (lookahead == 'd') ADVANCE(125);
      END_STATE();
    case 320:
      if (lookahead == 'd') ADVANCE(795);
      END_STATE();
    case 321:
      if (lookahead == 'd') ADVANCE(155);
      END_STATE();
    case 322:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 323:
      if (lookahead == 'e') ADVANCE(1067);
      END_STATE();
    case 324:
      if (lookahead == 'e') ADVANCE(885);
      END_STATE();
    case 325:
      if (lookahead == 'e') ADVANCE(644);
      if (lookahead == 'u') ADVANCE(895);
      END_STATE();
    case 326:
      if (lookahead == 'e') ADVANCE(808);
      END_STATE();
    case 327:
      if (lookahead == 'e') ADVANCE(1215);
      END_STATE();
    case 328:
      if (lookahead == 'e') ADVANCE(1117);
      END_STATE();
    case 329:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 330:
      if (lookahead == 'e') ADVANCE(1143);
      END_STATE();
    case 331:
      if (lookahead == 'e') ADVANCE(1213);
      END_STATE();
    case 332:
      if (lookahead == 'e') ADVANCE(463);
      END_STATE();
    case 333:
      if (lookahead == 'e') ADVANCE(1867);
      END_STATE();
    case 334:
      if (lookahead == 'e') ADVANCE(1219);
      END_STATE();
    case 335:
      if (lookahead == 'e') ADVANCE(1252);
      END_STATE();
    case 336:
      if (lookahead == 'e') ADVANCE(1128);
      END_STATE();
    case 337:
      if (lookahead == 'e') ADVANCE(1869);
      END_STATE();
    case 338:
      if (lookahead == 'e') ADVANCE(1879);
      END_STATE();
    case 339:
      if (lookahead == 'e') ADVANCE(1860);
      END_STATE();
    case 340:
      if (lookahead == 'e') ADVANCE(1863);
      END_STATE();
    case 341:
      if (lookahead == 'e') ADVANCE(462);
      if (lookahead == 'i') ADVANCE(901);
      END_STATE();
    case 342:
      if (lookahead == 'e') ADVANCE(473);
      END_STATE();
    case 343:
      if (lookahead == 'e') ADVANCE(1172);
      END_STATE();
    case 344:
      if (lookahead == 'e') ADVANCE(1131);
      END_STATE();
    case 345:
      if (lookahead == 'e') ADVANCE(1106);
      END_STATE();
    case 346:
      if (lookahead == 'e') ADVANCE(1180);
      END_STATE();
    case 347:
      if (lookahead == 'e') ADVANCE(1108);
      END_STATE();
    case 348:
      if (lookahead == 'e') ADVANCE(1153);
      END_STATE();
    case 349:
      if (lookahead == 'e') ADVANCE(1333);
      END_STATE();
    case 350:
      if (lookahead == 'e') ADVANCE(1294);
      END_STATE();
    case 351:
      if (lookahead == 'e') ADVANCE(1178);
      END_STATE();
    case 352:
      if (lookahead == 'e') ADVANCE(1264);
      END_STATE();
    case 353:
      if (lookahead == 'e') ADVANCE(1166);
      END_STATE();
    case 354:
      if (lookahead == 'e') ADVANCE(1135);
      END_STATE();
    case 355:
      if (lookahead == 'e') ADVANCE(1205);
      END_STATE();
    case 356:
      if (lookahead == 'e') ADVANCE(1354);
      END_STATE();
    case 357:
      if (lookahead == 'e') ADVANCE(1057);
      END_STATE();
    case 358:
      if (lookahead == 'e') ADVANCE(645);
      END_STATE();
    case 359:
      if (lookahead == 'e') ADVANCE(1055);
      END_STATE();
    case 360:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 361:
      if (lookahead == 'e') ADVANCE(1065);
      if (lookahead == 'i') ADVANCE(905);
      END_STATE();
    case 362:
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == 'm') ADVANCE(199);
      END_STATE();
    case 363:
      if (lookahead == 'e') ADVANCE(1066);
      if (lookahead == 'i') ADVANCE(683);
      END_STATE();
    case 364:
      if (lookahead == 'e') ADVANCE(679);
      END_STATE();
    case 365:
      if (lookahead == 'e') ADVANCE(647);
      END_STATE();
    case 366:
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead == 'm') ADVANCE(203);
      END_STATE();
    case 367:
      if (lookahead == 'e') ADVANCE(933);
      END_STATE();
    case 368:
      if (lookahead == 'e') ADVANCE(607);
      END_STATE();
    case 369:
      if (lookahead == 'e') ADVANCE(485);
      END_STATE();
    case 370:
      if (lookahead == 'e') ADVANCE(888);
      END_STATE();
    case 371:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 372:
      if (lookahead == 'e') ADVANCE(904);
      END_STATE();
    case 373:
      if (lookahead == 'e') ADVANCE(709);
      END_STATE();
    case 374:
      if (lookahead == 'e') ADVANCE(819);
      END_STATE();
    case 375:
      if (lookahead == 'e') ADVANCE(599);
      END_STATE();
    case 376:
      if (lookahead == 'e') ADVANCE(820);
      END_STATE();
    case 377:
      if (lookahead == 'e') ADVANCE(649);
      END_STATE();
    case 378:
      if (lookahead == 'e') ADVANCE(835);
      END_STATE();
    case 379:
      if (lookahead == 'e') ADVANCE(682);
      END_STATE();
    case 380:
      if (lookahead == 'e') ADVANCE(574);
      END_STATE();
    case 381:
      if (lookahead == 'e') ADVANCE(844);
      END_STATE();
    case 382:
      if (lookahead == 'e') ADVANCE(680);
      END_STATE();
    case 383:
      if (lookahead == 'e') ADVANCE(841);
      END_STATE();
    case 384:
      if (lookahead == 'e') ADVANCE(821);
      END_STATE();
    case 385:
      if (lookahead == 'e') ADVANCE(846);
      END_STATE();
    case 386:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 387:
      if (lookahead == 'e') ADVANCE(937);
      if (lookahead == 'r') ADVANCE(712);
      END_STATE();
    case 388:
      if (lookahead == 'e') ADVANCE(822);
      END_STATE();
    case 389:
      if (lookahead == 'e') ADVANCE(562);
      END_STATE();
    case 390:
      if (lookahead == 'e') ADVANCE(643);
      END_STATE();
    case 391:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 392:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 393:
      if (lookahead == 'e') ADVANCE(823);
      END_STATE();
    case 394:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 395:
      if (lookahead == 'e') ADVANCE(849);
      END_STATE();
    case 396:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 397:
      if (lookahead == 'e') ADVANCE(864);
      END_STATE();
    case 398:
      if (lookahead == 'e') ADVANCE(824);
      END_STATE();
    case 399:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 400:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 401:
      if (lookahead == 'e') ADVANCE(847);
      END_STATE();
    case 402:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 403:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 404:
      if (lookahead == 'e') ADVANCE(996);
      END_STATE();
    case 405:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 406:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 407:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 408:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 409:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 410:
      if (lookahead == 'e') ADVANCE(646);
      if (lookahead == 'u') ADVANCE(929);
      END_STATE();
    case 411:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 412:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 413:
      if (lookahead == 'e') ADVANCE(900);
      END_STATE();
    case 414:
      if (lookahead == 'e') ADVANCE(651);
      END_STATE();
    case 415:
      if (lookahead == 'e') ADVANCE(618);
      END_STATE();
    case 416:
      if (lookahead == 'e') ADVANCE(965);
      END_STATE();
    case 417:
      if (lookahead == 'e') ADVANCE(906);
      END_STATE();
    case 418:
      if (lookahead == 'e') ADVANCE(589);
      END_STATE();
    case 419:
      if (lookahead == 'e') ADVANCE(207);
      if (lookahead == 'o') ADVANCE(903);
      END_STATE();
    case 420:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 421:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 422:
      if (lookahead == 'e') ADVANCE(656);
      END_STATE();
    case 423:
      if (lookahead == 'e') ADVANCE(917);
      END_STATE();
    case 424:
      if (lookahead == 'e') ADVANCE(997);
      END_STATE();
    case 425:
      if (lookahead == 'e') ADVANCE(665);
      END_STATE();
    case 426:
      if (lookahead == 'e') ADVANCE(977);
      END_STATE();
    case 427:
      if (lookahead == 'e') ADVANCE(978);
      END_STATE();
    case 428:
      if (lookahead == 'e') ADVANCE(981);
      END_STATE();
    case 429:
      if (lookahead == 'e') ADVANCE(910);
      END_STATE();
    case 430:
      if (lookahead == 'e') ADVANCE(861);
      END_STATE();
    case 431:
      if (lookahead == 'e') ADVANCE(684);
      END_STATE();
    case 432:
      if (lookahead == 'e') ADVANCE(763);
      END_STATE();
    case 433:
      if (lookahead == 'e') ADVANCE(918);
      END_STATE();
    case 434:
      if (lookahead == 'e') ADVANCE(869);
      END_STATE();
    case 435:
      if (lookahead == 'e') ADVANCE(685);
      END_STATE();
    case 436:
      if (lookahead == 'e') ADVANCE(687);
      END_STATE();
    case 437:
      if (lookahead == 'e') ADVANCE(688);
      END_STATE();
    case 438:
      if (lookahead == 'e') ADVANCE(689);
      END_STATE();
    case 439:
      if (lookahead == 'e') ADVANCE(690);
      END_STATE();
    case 440:
      if (lookahead == 'e') ADVANCE(691);
      END_STATE();
    case 441:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 442:
      if (lookahead == 'e') ADVANCE(464);
      END_STATE();
    case 443:
      if (lookahead == 'e') ADVANCE(866);
      if (lookahead == 't') ADVANCE(520);
      END_STATE();
    case 444:
      if (lookahead == 'e') ADVANCE(486);
      END_STATE();
    case 445:
      if (lookahead == 'e') ADVANCE(809);
      END_STATE();
    case 446:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 447:
      if (lookahead == 'e') ADVANCE(810);
      END_STATE();
    case 448:
      if (lookahead == 'e') ADVANCE(811);
      END_STATE();
    case 449:
      if (lookahead == 'e') ADVANCE(812);
      END_STATE();
    case 450:
      if (lookahead == 'e') ADVANCE(813);
      END_STATE();
    case 451:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 452:
      if (lookahead == 'e') ADVANCE(695);
      END_STATE();
    case 453:
      if (lookahead == 'e') ADVANCE(1007);
      END_STATE();
    case 454:
      if (lookahead == 'e') ADVANCE(697);
      END_STATE();
    case 455:
      if (lookahead == 'e') ADVANCE(699);
      END_STATE();
    case 456:
      if (lookahead == 'e') ADVANCE(702);
      END_STATE();
    case 457:
      if (lookahead == 'e') ADVANCE(928);
      END_STATE();
    case 458:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 459:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 460:
      if (lookahead == 'e') ADVANCE(466);
      END_STATE();
    case 461:
      if (lookahead == 'e') ADVANCE(930);
      END_STATE();
    case 462:
      if (lookahead == 'f') ADVANCE(226);
      if (lookahead == 'l') ADVANCE(428);
      END_STATE();
    case 463:
      if (lookahead == 'f') ADVANCE(747);
      END_STATE();
    case 464:
      if (lookahead == 'f') ADVANCE(749);
      END_STATE();
    case 465:
      if (lookahead == 'f') ADVANCE(993);
      END_STATE();
    case 466:
      if (lookahead == 'f') ADVANCE(774);
      END_STATE();
    case 467:
      if (lookahead == 'g') ADVANCE(476);
      if (lookahead == 'p') ADVANCE(500);
      if (lookahead == 'r') ADVANCE(468);
      END_STATE();
    case 468:
      if (lookahead == 'g') ADVANCE(1229);
      END_STATE();
    case 469:
      if (lookahead == 'g') ADVANCE(1149);
      END_STATE();
    case 470:
      if (lookahead == 'g') ADVANCE(1228);
      END_STATE();
    case 471:
      if (lookahead == 'g') ADVANCE(1331);
      END_STATE();
    case 472:
      if (lookahead == 'g') ADVANCE(1841);
      END_STATE();
    case 473:
      if (lookahead == 'g') ADVANCE(361);
      if (lookahead == 'm') ADVANCE(743);
      END_STATE();
    case 474:
      if (lookahead == 'g') ADVANCE(34);
      END_STATE();
    case 475:
      if (lookahead == 'g') ADVANCE(897);
      END_STATE();
    case 476:
      if (lookahead == 'g') ADVANCE(836);
      END_STATE();
    case 477:
      if (lookahead == 'g') ADVANCE(887);
      END_STATE();
    case 478:
      if (lookahead == 'g') ADVANCE(367);
      END_STATE();
    case 479:
      if (lookahead == 'g') ADVANCE(953);
      END_STATE();
    case 480:
      if (lookahead == 'g') ADVANCE(416);
      END_STATE();
    case 481:
      if (lookahead == 'g') ADVANCE(409);
      END_STATE();
    case 482:
      if (lookahead == 'g') ADVANCE(848);
      if (lookahead == 'p') ADVANCE(378);
      END_STATE();
    case 483:
      if (lookahead == 'g') ADVANCE(484);
      END_STATE();
    case 484:
      if (lookahead == 'g') ADVANCE(398);
      END_STATE();
    case 485:
      if (lookahead == 'g') ADVANCE(235);
      END_STATE();
    case 486:
      if (lookahead == 'g') ADVANCE(238);
      END_STATE();
    case 487:
      if (lookahead == 'g') ADVANCE(872);
      END_STATE();
    case 488:
      if (lookahead == 'g') ADVANCE(487);
      if (lookahead == 'p') ADVANCE(502);
      if (lookahead == 'r') ADVANCE(475);
      END_STATE();
    case 489:
      if (lookahead == 'g') ADVANCE(882);
      END_STATE();
    case 490:
      if (lookahead == 'h') ADVANCE(1204);
      END_STATE();
    case 491:
      if (lookahead == 'h') ADVANCE(1874);
      END_STATE();
    case 492:
      if (lookahead == 'h') ADVANCE(1876);
      END_STATE();
    case 493:
      if (lookahead == 'h') ADVANCE(1300);
      END_STATE();
    case 494:
      if (lookahead == 'h') ADVANCE(1209);
      END_STATE();
    case 495:
      if (lookahead == 'h') ADVANCE(158);
      END_STATE();
    case 496:
      if (lookahead == 'h') ADVANCE(1239);
      END_STATE();
    case 497:
      if (lookahead == 'h') ADVANCE(50);
      END_STATE();
    case 498:
      if (lookahead == 'h') ADVANCE(717);
      END_STATE();
    case 499:
      if (lookahead == 'h') ADVANCE(720);
      END_STATE();
    case 500:
      if (lookahead == 'i') ADVANCE(1114);
      END_STATE();
    case 501:
      if (lookahead == 'i') ADVANCE(1868);
      END_STATE();
    case 502:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 503:
      if (lookahead == 'i') ADVANCE(611);
      END_STATE();
    case 504:
      if (lookahead == 'i') ADVANCE(886);
      END_STATE();
    case 505:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 506:
      if (lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 507:
      if (lookahead == 'i') ADVANCE(300);
      END_STATE();
    case 508:
      if (lookahead == 'i') ADVANCE(652);
      END_STATE();
    case 509:
      if (lookahead == 'i') ADVANCE(949);
      END_STATE();
    case 510:
      if (lookahead == 'i') ADVANCE(893);
      END_STATE();
    case 511:
      if (lookahead == 'i') ADVANCE(741);
      END_STATE();
    case 512:
      if (lookahead == 'i') ADVANCE(575);
      END_STATE();
    case 513:
      if (lookahead == 'i') ADVANCE(738);
      END_STATE();
    case 514:
      if (lookahead == 'i') ADVANCE(592);
      END_STATE();
    case 515:
      if (lookahead == 'i') ADVANCE(719);
      END_STATE();
    case 516:
      if (lookahead == 'i') ADVANCE(962);
      END_STATE();
    case 517:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 518:
      if (lookahead == 'i') ADVANCE(370);
      if (lookahead == 'y') ADVANCE(106);
      END_STATE();
    case 519:
      if (lookahead == 'i') ADVANCE(721);
      END_STATE();
    case 520:
      if (lookahead == 'i') ADVANCE(724);
      END_STATE();
    case 521:
      if (lookahead == 'i') ADVANCE(725);
      END_STATE();
    case 522:
      if (lookahead == 'i') ADVANCE(653);
      END_STATE();
    case 523:
      if (lookahead == 'i') ADVANCE(654);
      END_STATE();
    case 524:
      if (lookahead == 'i') ADVANCE(422);
      END_STATE();
    case 525:
      if (lookahead == 'i') ADVANCE(686);
      END_STATE();
    case 526:
      if (lookahead == 'i') ADVANCE(726);
      END_STATE();
    case 527:
      if (lookahead == 'i') ADVANCE(727);
      END_STATE();
    case 528:
      if (lookahead == 'i') ADVANCE(985);
      END_STATE();
    case 529:
      if (lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 530:
      if (lookahead == 'i') ADVANCE(728);
      END_STATE();
    case 531:
      if (lookahead == 'i') ADVANCE(664);
      END_STATE();
    case 532:
      if (lookahead == 'i') ADVANCE(619);
      END_STATE();
    case 533:
      if (lookahead == 'i') ADVANCE(746);
      END_STATE();
    case 534:
      if (lookahead == 'i') ADVANCE(595);
      END_STATE();
    case 535:
      if (lookahead == 'i') ADVANCE(748);
      END_STATE();
    case 536:
      if (lookahead == 'i') ADVANCE(751);
      END_STATE();
    case 537:
      if (lookahead == 'i') ADVANCE(753);
      END_STATE();
    case 538:
      if (lookahead == 'i') ADVANCE(754);
      END_STATE();
    case 539:
      if (lookahead == 'i') ADVANCE(755);
      END_STATE();
    case 540:
      if (lookahead == 'i') ADVANCE(756);
      END_STATE();
    case 541:
      if (lookahead == 'i') ADVANCE(757);
      END_STATE();
    case 542:
      if (lookahead == 'i') ADVANCE(758);
      END_STATE();
    case 543:
      if (lookahead == 'i') ADVANCE(759);
      END_STATE();
    case 544:
      if (lookahead == 'i') ADVANCE(760);
      END_STATE();
    case 545:
      if (lookahead == 'i') ADVANCE(761);
      END_STATE();
    case 546:
      if (lookahead == 'i') ADVANCE(597);
      END_STATE();
    case 547:
      if (lookahead == 'i') ADVANCE(1006);
      END_STATE();
    case 548:
      if (lookahead == 'i') ADVANCE(772);
      END_STATE();
    case 549:
      if (lookahead == 'i') ADVANCE(261);
      END_STATE();
    case 550:
      if (lookahead == 'i') ADVANCE(626);
      END_STATE();
    case 551:
      if (lookahead == 'i') ADVANCE(461);
      if (lookahead == 'y') ADVANCE(107);
      END_STATE();
    case 552:
      if (lookahead == 'k') ADVANCE(123);
      END_STATE();
    case 553:
      if (lookahead == 'k') ADVANCE(522);
      END_STATE();
    case 554:
      if (lookahead == 'k') ADVANCE(129);
      END_STATE();
    case 555:
      if (lookahead == 'l') ADVANCE(898);
      if (lookahead == 'n') ADVANCE(307);
      if (lookahead == 'r') ADVANCE(830);
      END_STATE();
    case 556:
      if (lookahead == 'l') ADVANCE(1893);
      END_STATE();
    case 557:
      if (lookahead == 'l') ADVANCE(1838);
      END_STATE();
    case 558:
      if (lookahead == 'l') ADVANCE(1202);
      END_STATE();
    case 559:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 560:
      if (lookahead == 'l') ADVANCE(1883);
      END_STATE();
    case 561:
      if (lookahead == 'l') ADVANCE(1110);
      END_STATE();
    case 562:
      if (lookahead == 'l') ADVANCE(1350);
      END_STATE();
    case 563:
      if (lookahead == 'l') ADVANCE(1233);
      END_STATE();
    case 564:
      if (lookahead == 'l') ADVANCE(1220);
      END_STATE();
    case 565:
      if (lookahead == 'l') ADVANCE(1352);
      END_STATE();
    case 566:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 567:
      if (lookahead == 'l') ADVANCE(983);
      END_STATE();
    case 568:
      if (lookahead == 'l') ADVANCE(558);
      END_STATE();
    case 569:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 570:
      if (lookahead == 'l') ADVANCE(733);
      END_STATE();
    case 571:
      if (lookahead == 'l') ADVANCE(524);
      END_STATE();
    case 572:
      if (lookahead == 'l') ADVANCE(569);
      END_STATE();
    case 573:
      if (lookahead == 'l') ADVANCE(1032);
      END_STATE();
    case 574:
      if (lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 575:
      if (lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 576:
      if (lookahead == 'l') ADVANCE(714);
      END_STATE();
    case 577:
      if (lookahead == 'l') ADVANCE(657);
      END_STATE();
    case 578:
      if (lookahead == 'l') ADVANCE(424);
      END_STATE();
    case 579:
      if (lookahead == 'l') ADVANCE(561);
      END_STATE();
    case 580:
      if (lookahead == 'l') ADVANCE(565);
      END_STATE();
    case 581:
      if (lookahead == 'l') ADVANCE(377);
      END_STATE();
    case 582:
      if (lookahead == 'l') ADVANCE(942);
      END_STATE();
    case 583:
      if (lookahead == 'l') ADVANCE(944);
      END_STATE();
    case 584:
      if (lookahead == 'l') ADVANCE(339);
      END_STATE();
    case 585:
      if (lookahead == 'l') ADVANCE(340);
      END_STATE();
    case 586:
      if (lookahead == 'l') ADVANCE(343);
      END_STATE();
    case 587:
      if (lookahead == 'l') ADVANCE(356);
      END_STATE();
    case 588:
      if (lookahead == 'l') ADVANCE(902);
      if (lookahead == 'n') ADVANCE(320);
      if (lookahead == 'r') ADVANCE(876);
      END_STATE();
    case 589:
      if (lookahead == 'l') ADVANCE(228);
      END_STATE();
    case 590:
      if (lookahead == 'l') ADVANCE(1023);
      END_STATE();
    case 591:
      if (lookahead == 'l') ADVANCE(908);
      if (lookahead == 'u') ADVANCE(582);
      END_STATE();
    case 592:
      if (lookahead == 'l') ADVANCE(1033);
      END_STATE();
    case 593:
      if (lookahead == 'l') ADVANCE(988);
      END_STATE();
    case 594:
      if (lookahead == 'l') ADVANCE(745);
      END_STATE();
    case 595:
      if (lookahead == 'l') ADVANCE(242);
      END_STATE();
    case 596:
      if (lookahead == 'l') ADVANCE(426);
      END_STATE();
    case 597:
      if (lookahead == 'l') ADVANCE(1034);
      END_STATE();
    case 598:
      if (lookahead == 'l') ADVANCE(427);
      END_STATE();
    case 599:
      if (lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 600:
      if (lookahead == 'l') ADVANCE(240);
      END_STATE();
    case 601:
      if (lookahead == 'l') ADVANCE(770);
      END_STATE();
    case 602:
      if (lookahead == 'l') ADVANCE(1009);
      END_STATE();
    case 603:
      if (lookahead == 'l') ADVANCE(1010);
      END_STATE();
    case 604:
      if (lookahead == 'l') ADVANCE(453);
      END_STATE();
    case 605:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 606:
      if (lookahead == 'm') ADVANCE(265);
      END_STATE();
    case 607:
      if (lookahead == 'm') ADVANCE(1168);
      END_STATE();
    case 608:
      if (lookahead == 'm') ADVANCE(1356);
      END_STATE();
    case 609:
      if (lookahead == 'm') ADVANCE(781);
      if (lookahead == 'r') ADVANCE(839);
      END_STATE();
    case 610:
      if (lookahead == 'm') ADVANCE(557);
      END_STATE();
    case 611:
      if (lookahead == 'm') ADVANCE(1014);
      END_STATE();
    case 612:
      if (lookahead == 'm') ADVANCE(373);
      END_STATE();
    case 613:
      if (lookahead == 'm') ADVANCE(577);
      if (lookahead == 'p') ADVANCE(220);
      END_STATE();
    case 614:
      if (lookahead == 'm') ADVANCE(564);
      END_STATE();
    case 615:
      if (lookahead == 'm') ADVANCE(333);
      END_STATE();
    case 616:
      if (lookahead == 'm') ADVANCE(344);
      END_STATE();
    case 617:
      if (lookahead == 'm') ADVANCE(354);
      END_STATE();
    case 618:
      if (lookahead == 'm') ADVANCE(797);
      END_STATE();
    case 619:
      if (lookahead == 'm') ADVANCE(791);
      END_STATE();
    case 620:
      if (lookahead == 'm') ADVANCE(432);
      END_STATE();
    case 621:
      if (lookahead == 'm') ADVANCE(796);
      END_STATE();
    case 622:
      if (lookahead == 'm') ADVANCE(801);
      END_STATE();
    case 623:
      if (lookahead == 'm') ADVANCE(109);
      END_STATE();
    case 624:
      if (lookahead == 'm') ADVANCE(111);
      END_STATE();
    case 625:
      if (lookahead == 'm') ADVANCE(805);
      END_STATE();
    case 626:
      if (lookahead == 'm') ADVANCE(1052);
      END_STATE();
    case 627:
      if (lookahead == 'n') ADVANCE(1053);
      END_STATE();
    case 628:
      if (lookahead == 'n') ADVANCE(165);
      if (lookahead == 't') ADVANCE(430);
      END_STATE();
    case 629:
      if (lookahead == 'n') ADVANCE(98);
      if (lookahead == 'u') ADVANCE(931);
      END_STATE();
    case 630:
      if (lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 631:
      if (lookahead == 'n') ADVANCE(298);
      END_STATE();
    case 632:
      if (lookahead == 'n') ADVANCE(1249);
      END_STATE();
    case 633:
      if (lookahead == 'n') ADVANCE(1250);
      END_STATE();
    case 634:
      if (lookahead == 'n') ADVANCE(288);
      if (lookahead == 'v') ADVANCE(215);
      if (lookahead == 'x') ADVANCE(799);
      END_STATE();
    case 635:
      if (lookahead == 'n') ADVANCE(1255);
      END_STATE();
    case 636:
      if (lookahead == 'n') ADVANCE(1174);
      END_STATE();
    case 637:
      if (lookahead == 'n') ADVANCE(1198);
      END_STATE();
    case 638:
      if (lookahead == 'n') ADVANCE(1139);
      END_STATE();
    case 639:
      if (lookahead == 'n') ADVANCE(1160);
      END_STATE();
    case 640:
      if (lookahead == 'n') ADVANCE(1344);
      END_STATE();
    case 641:
      if (lookahead == 'n') ADVANCE(1244);
      END_STATE();
    case 642:
      if (lookahead == 'n') ADVANCE(1222);
      END_STATE();
    case 643:
      if (lookahead == 'n') ADVANCE(286);
      END_STATE();
    case 644:
      if (lookahead == 'n') ADVANCE(297);
      if (lookahead == 'q') ADVANCE(1018);
      END_STATE();
    case 645:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 646:
      if (lookahead == 'n') ADVANCE(310);
      if (lookahead == 'q') ADVANCE(1036);
      END_STATE();
    case 647:
      if (lookahead == 'n') ADVANCE(299);
      END_STATE();
    case 648:
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 649:
      if (lookahead == 'n') ADVANCE(479);
      END_STATE();
    case 650:
      if (lookahead == 'n') ADVANCE(311);
      END_STATE();
    case 651:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 652:
      if (lookahead == 'n') ADVANCE(934);
      END_STATE();
    case 653:
      if (lookahead == 'n') ADVANCE(471);
      END_STATE();
    case 654:
      if (lookahead == 'n') ADVANCE(472);
      END_STATE();
    case 655:
      if (lookahead == 'n') ADVANCE(911);
      END_STATE();
    case 656:
      if (lookahead == 'n') ADVANCE(935);
      END_STATE();
    case 657:
      if (lookahead == 'n') ADVANCE(889);
      END_STATE();
    case 658:
      if (lookahead == 'n') ADVANCE(890);
      END_STATE();
    case 659:
      if (lookahead == 'n') ADVANCE(936);
      END_STATE();
    case 660:
      if (lookahead == 'n') ADVANCE(210);
      if (lookahead == 's') ADVANCE(980);
      END_STATE();
    case 661:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 662:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 663:
      if (lookahead == 'n') ADVANCE(950);
      END_STATE();
    case 664:
      if (lookahead == 'n') ADVANCE(945);
      END_STATE();
    case 665:
      if (lookahead == 'n') ADVANCE(947);
      END_STATE();
    case 666:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 667:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 668:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 669:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 670:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 671:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 672:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 673:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 674:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 675:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 676:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 677:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 678:
      if (lookahead == 'n') ADVANCE(1016);
      END_STATE();
    case 679:
      if (lookahead == 'n') ADVANCE(275);
      END_STATE();
    case 680:
      if (lookahead == 'n') ADVANCE(919);
      END_STATE();
    case 681:
      if (lookahead == 'n') ADVANCE(923);
      END_STATE();
    case 682:
      if (lookahead == 'n') ADVANCE(984);
      END_STATE();
    case 683:
      if (lookahead == 'n') ADVANCE(1024);
      END_STATE();
    case 684:
      if (lookahead == 'n') ADVANCE(277);
      END_STATE();
    case 685:
      if (lookahead == 'n') ADVANCE(278);
      END_STATE();
    case 686:
      if (lookahead == 'n') ADVANCE(970);
      END_STATE();
    case 687:
      if (lookahead == 'n') ADVANCE(279);
      END_STATE();
    case 688:
      if (lookahead == 'n') ADVANCE(280);
      END_STATE();
    case 689:
      if (lookahead == 'n') ADVANCE(281);
      END_STATE();
    case 690:
      if (lookahead == 'n') ADVANCE(282);
      END_STATE();
    case 691:
      if (lookahead == 'n') ADVANCE(283);
      END_STATE();
    case 692:
      if (lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 693:
      if (lookahead == 'n') ADVANCE(318);
      END_STATE();
    case 694:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 695:
      if (lookahead == 'n') ADVANCE(920);
      END_STATE();
    case 696:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 697:
      if (lookahead == 'n') ADVANCE(921);
      END_STATE();
    case 698:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 699:
      if (lookahead == 'n') ADVANCE(922);
      END_STATE();
    case 700:
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 701:
      if (lookahead == 'n') ADVANCE(104);
      if (lookahead == 'u') ADVANCE(1008);
      END_STATE();
    case 702:
      if (lookahead == 'n') ADVANCE(321);
      END_STATE();
    case 703:
      if (lookahead == 'o') ADVANCE(308);
      END_STATE();
    case 704:
      if (lookahead == 'o') ADVANCE(482);
      END_STATE();
    case 705:
      if (lookahead == 'o') ADVANCE(1242);
      if (lookahead == 'r') ADVANCE(213);
      if (lookahead == 'y') ADVANCE(786);
      END_STATE();
    case 706:
      if (lookahead == 'o') ADVANCE(469);
      END_STATE();
    case 707:
      if (lookahead == 'o') ADVANCE(631);
      END_STATE();
    case 708:
      if (lookahead == 'o') ADVANCE(474);
      END_STATE();
    case 709:
      if (lookahead == 'o') ADVANCE(1027);
      END_STATE();
    case 710:
      if (lookahead == 'o') ADVANCE(508);
      END_STATE();
    case 711:
      if (lookahead == 'o') ADVANCE(681);
      END_STATE();
    case 712:
      if (lookahead == 'o') ADVANCE(1017);
      END_STATE();
    case 713:
      if (lookahead == 'o') ADVANCE(608);
      END_STATE();
    case 714:
      if (lookahead == 'o') ADVANCE(268);
      END_STATE();
    case 715:
      if (lookahead == 'o') ADVANCE(826);
      END_STATE();
    case 716:
      if (lookahead == 'o') ADVANCE(316);
      END_STATE();
    case 717:
      if (lookahead == 'o') ADVANCE(303);
      END_STATE();
    case 718:
      if (lookahead == 'o') ADVANCE(827);
      END_STATE();
    case 719:
      if (lookahead == 'o') ADVANCE(633);
      END_STATE();
    case 720:
      if (lookahead == 'o') ADVANCE(312);
      END_STATE();
    case 721:
      if (lookahead == 'o') ADVANCE(636);
      END_STATE();
    case 722:
      if (lookahead == 'o') ADVANCE(833);
      END_STATE();
    case 723:
      if (lookahead == 'o') ADVANCE(863);
      END_STATE();
    case 724:
      if (lookahead == 'o') ADVANCE(658);
      END_STATE();
    case 725:
      if (lookahead == 'o') ADVANCE(638);
      END_STATE();
    case 726:
      if (lookahead == 'o') ADVANCE(639);
      END_STATE();
    case 727:
      if (lookahead == 'o') ADVANCE(640);
      END_STATE();
    case 728:
      if (lookahead == 'o') ADVANCE(641);
      END_STATE();
    case 729:
      if (lookahead == 'o') ADVANCE(642);
      END_STATE();
    case 730:
      if (lookahead == 'o') ADVANCE(851);
      END_STATE();
    case 731:
      if (lookahead == 'o') ADVANCE(825);
      END_STATE();
    case 732:
      if (lookahead == 'o') ADVANCE(1030);
      END_STATE();
    case 733:
      if (lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 734:
      if (lookahead == 'o') ADVANCE(1019);
      if (lookahead == 'p') ADVANCE(707);
      END_STATE();
    case 735:
      if (lookahead == 'o') ADVANCE(313);
      END_STATE();
    case 736:
      if (lookahead == 'o') ADVANCE(789);
      END_STATE();
    case 737:
      if (lookahead == 'o') ADVANCE(650);
      END_STATE();
    case 738:
      if (lookahead == 'o') ADVANCE(696);
      END_STATE();
    case 739:
      if (lookahead == 'o') ADVANCE(852);
      END_STATE();
    case 740:
      if (lookahead == 'o') ADVANCE(1025);
      if (lookahead == 'p') ADVANCE(711);
      END_STATE();
    case 741:
      if (lookahead == 'o') ADVANCE(661);
      END_STATE();
    case 742:
      if (lookahead == 'o') ADVANCE(315);
      END_STATE();
    case 743:
      if (lookahead == 'o') ADVANCE(1056);
      END_STATE();
    case 744:
      if (lookahead == 'o') ADVANCE(854);
      END_STATE();
    case 745:
      if (lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 746:
      if (lookahead == 'o') ADVANCE(662);
      END_STATE();
    case 747:
      if (lookahead == 'o') ADVANCE(853);
      END_STATE();
    case 748:
      if (lookahead == 'o') ADVANCE(666);
      END_STATE();
    case 749:
      if (lookahead == 'o') ADVANCE(855);
      END_STATE();
    case 750:
      if (lookahead == 'o') ADVANCE(663);
      END_STATE();
    case 751:
      if (lookahead == 'o') ADVANCE(667);
      END_STATE();
    case 752:
      if (lookahead == 'o') ADVANCE(787);
      END_STATE();
    case 753:
      if (lookahead == 'o') ADVANCE(668);
      END_STATE();
    case 754:
      if (lookahead == 'o') ADVANCE(669);
      END_STATE();
    case 755:
      if (lookahead == 'o') ADVANCE(670);
      END_STATE();
    case 756:
      if (lookahead == 'o') ADVANCE(671);
      END_STATE();
    case 757:
      if (lookahead == 'o') ADVANCE(672);
      END_STATE();
    case 758:
      if (lookahead == 'o') ADVANCE(673);
      END_STATE();
    case 759:
      if (lookahead == 'o') ADVANCE(674);
      END_STATE();
    case 760:
      if (lookahead == 'o') ADVANCE(675);
      END_STATE();
    case 761:
      if (lookahead == 'o') ADVANCE(676);
      END_STATE();
    case 762:
      if (lookahead == 'o') ADVANCE(489);
      END_STATE();
    case 763:
      if (lookahead == 'o') ADVANCE(1031);
      END_STATE();
    case 764:
      if (lookahead == 'o') ADVANCE(525);
      END_STATE();
    case 765:
      if (lookahead == 'o') ADVANCE(792);
      END_STATE();
    case 766:
      if (lookahead == 'o') ADVANCE(531);
      END_STATE();
    case 767:
      if (lookahead == 'o') ADVANCE(871);
      END_STATE();
    case 768:
      if (lookahead == 'o') ADVANCE(693);
      END_STATE();
    case 769:
      if (lookahead == 'o') ADVANCE(621);
      END_STATE();
    case 770:
      if (lookahead == 'o') ADVANCE(258);
      END_STATE();
    case 771:
      if (lookahead == 'o') ADVANCE(622);
      END_STATE();
    case 772:
      if (lookahead == 'o') ADVANCE(698);
      END_STATE();
    case 773:
      if (lookahead == 'o') ADVANCE(881);
      END_STATE();
    case 774:
      if (lookahead == 'o') ADVANCE(883);
      END_STATE();
    case 775:
      if (lookahead == 'p') ADVANCE(1892);
      END_STATE();
    case 776:
      if (lookahead == 'p') ADVANCE(1270);
      END_STATE();
    case 777:
      if (lookahead == 'p') ADVANCE(443);
      END_STATE();
    case 778:
      if (lookahead == 'p') ADVANCE(1200);
      END_STATE();
    case 779:
      if (lookahead == 'p') ADVANCE(710);
      END_STATE();
    case 780:
      if (lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 781:
      if (lookahead == 'p') ADVANCE(578);
      END_STATE();
    case 782:
      if (lookahead == 'p') ADVANCE(241);
      END_STATE();
    case 783:
      if (lookahead == 'p') ADVANCE(365);
      END_STATE();
    case 784:
      if (lookahead == 'p') ADVANCE(334);
      END_STATE();
    case 785:
      if (lookahead == 'p') ADVANCE(382);
      END_STATE();
    case 786:
      if (lookahead == 'p') ADVANCE(346);
      END_STATE();
    case 787:
      if (lookahead == 'p') ADVANCE(348);
      END_STATE();
    case 788:
      if (lookahead == 'p') ADVANCE(838);
      END_STATE();
    case 789:
      if (lookahead == 'p') ADVANCE(383);
      END_STATE();
    case 790:
      if (lookahead == 'p') ADVANCE(909);
      END_STATE();
    case 791:
      if (lookahead == 'p') ADVANCE(587);
      END_STATE();
    case 792:
      if (lookahead == 'p') ADVANCE(385);
      END_STATE();
    case 793:
      if (lookahead == 'p') ADVANCE(730);
      END_STATE();
    case 794:
      if (lookahead == 'p') ADVANCE(92);
      END_STATE();
    case 795:
      if (lookahead == 'p') ADVANCE(764);
      END_STATE();
    case 796:
      if (lookahead == 'p') ADVANCE(596);
      END_STATE();
    case 797:
      if (lookahead == 'p') ADVANCE(600);
      END_STATE();
    case 798:
      if (lookahead == 'p') ADVANCE(873);
      END_STATE();
    case 799:
      if (lookahead == 'p') ADVANCE(874);
      END_STATE();
    case 800:
      if (lookahead == 'p') ADVANCE(766);
      END_STATE();
    case 801:
      if (lookahead == 'p') ADVANCE(598);
      END_STATE();
    case 802:
      if (lookahead == 'p') ADVANCE(452);
      END_STATE();
    case 803:
      if (lookahead == 'p') ADVANCE(454);
      END_STATE();
    case 804:
      if (lookahead == 'p') ADVANCE(455);
      END_STATE();
    case 805:
      if (lookahead == 'p') ADVANCE(604);
      END_STATE();
    case 806:
      if (lookahead == 'p') ADVANCE(456);
      END_STATE();
    case 807:
      if (lookahead == 'q') ADVANCE(1022);
      if (lookahead == 't') ADVANCE(1176);
      END_STATE();
    case 808:
      if (lookahead == 'q') ADVANCE(1037);
      END_STATE();
    case 809:
      if (lookahead == 'q') ADVANCE(1038);
      END_STATE();
    case 810:
      if (lookahead == 'q') ADVANCE(1039);
      END_STATE();
    case 811:
      if (lookahead == 'q') ADVANCE(1040);
      END_STATE();
    case 812:
      if (lookahead == 'q') ADVANCE(1041);
      END_STATE();
    case 813:
      if (lookahead == 'q') ADVANCE(1042);
      END_STATE();
    case 814:
      if (lookahead == 'r') ADVANCE(775);
      END_STATE();
    case 815:
      if (lookahead == 'r') ADVANCE(556);
      END_STATE();
    case 816:
      if (lookahead == 'r') ADVANCE(362);
      END_STATE();
    case 817:
      if (lookahead == 'r') ADVANCE(552);
      if (lookahead == 'x') ADVANCE(503);
      END_STATE();
    case 818:
      if (lookahead == 'r') ADVANCE(518);
      END_STATE();
    case 819:
      if (lookahead == 'r') ADVANCE(1889);
      END_STATE();
    case 820:
      if (lookahead == 'r') ADVANCE(1208);
      END_STATE();
    case 821:
      if (lookahead == 'r') ADVANCE(1862);
      END_STATE();
    case 822:
      if (lookahead == 'r') ADVANCE(1878);
      END_STATE();
    case 823:
      if (lookahead == 'r') ADVANCE(1323);
      END_STATE();
    case 824:
      if (lookahead == 'r') ADVANCE(1141);
      END_STATE();
    case 825:
      if (lookahead == 'r') ADVANCE(1231);
      END_STATE();
    case 826:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 827:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 828:
      if (lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 829:
      if (lookahead == 'r') ADVANCE(475);
      END_STATE();
    case 830:
      if (lookahead == 'r') ADVANCE(715);
      END_STATE();
    case 831:
      if (lookahead == 'r') ADVANCE(274);
      END_STATE();
    case 832:
      if (lookahead == 'r') ADVANCE(478);
      END_STATE();
    case 833:
      if (lookahead == 'r') ADVANCE(1070);
      END_STATE();
    case 834:
      if (lookahead == 'r') ADVANCE(470);
      END_STATE();
    case 835:
      if (lookahead == 'r') ADVANCE(955);
      END_STATE();
    case 836:
      if (lookahead == 'r') ADVANCE(369);
      END_STATE();
    case 837:
      if (lookahead == 'r') ADVANCE(1072);
      END_STATE();
    case 838:
      if (lookahead == 'r') ADVANCE(736);
      END_STATE();
    case 839:
      if (lookahead == 'r') ADVANCE(375);
      END_STATE();
    case 840:
      if (lookahead == 'r') ADVANCE(501);
      END_STATE();
    case 841:
      if (lookahead == 'r') ADVANCE(958);
      END_STATE();
    case 842:
      if (lookahead == 'r') ADVANCE(505);
      END_STATE();
    case 843:
      if (lookahead == 'r') ADVANCE(304);
      END_STATE();
    case 844:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 845:
      if (lookahead == 'r') ADVANCE(560);
      END_STATE();
    case 846:
      if (lookahead == 'r') ADVANCE(960);
      END_STATE();
    case 847:
      if (lookahead == 'r') ADVANCE(891);
      END_STATE();
    case 848:
      if (lookahead == 'r') ADVANCE(413);
      END_STATE();
    case 849:
      if (lookahead == 'r') ADVANCE(637);
      END_STATE();
    case 850:
      if (lookahead == 'r') ADVANCE(940);
      if (lookahead == 's') ADVANCE(941);
      END_STATE();
    case 851:
      if (lookahead == 'r') ADVANCE(946);
      END_STATE();
    case 852:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 853:
      if (lookahead == 'r') ADVANCE(458);
      END_STATE();
    case 854:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 855:
      if (lookahead == 'r') ADVANCE(338);
      END_STATE();
    case 856:
      if (lookahead == 'r') ADVANCE(407);
      END_STATE();
    case 857:
      if (lookahead == 'r') ADVANCE(408);
      END_STATE();
    case 858:
      if (lookahead == 'r') ADVANCE(366);
      END_STATE();
    case 859:
      if (lookahead == 'r') ADVANCE(477);
      END_STATE();
    case 860:
      if (lookahead == 'r') ADVANCE(480);
      END_STATE();
    case 861:
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 862:
      if (lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 863:
      if (lookahead == 'r') ADVANCE(1078);
      END_STATE();
    case 864:
      if (lookahead == 'r') ADVANCE(1059);
      END_STATE();
    case 865:
      if (lookahead == 'r') ADVANCE(285);
      END_STATE();
    case 866:
      if (lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 867:
      if (lookahead == 'r') ADVANCE(915);
      END_STATE();
    case 868:
      if (lookahead == 'r') ADVANCE(425);
      END_STATE();
    case 869:
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 870:
      if (lookahead == 'r') ADVANCE(551);
      END_STATE();
    case 871:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 872:
      if (lookahead == 'r') ADVANCE(444);
      END_STATE();
    case 873:
      if (lookahead == 'r') ADVANCE(765);
      END_STATE();
    case 874:
      if (lookahead == 'r') ADVANCE(433);
      END_STATE();
    case 875:
      if (lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 876:
      if (lookahead == 'r') ADVANCE(767);
      END_STATE();
    case 877:
      if (lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 878:
      if (lookahead == 'r') ADVANCE(254);
      END_STATE();
    case 879:
      if (lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 880:
      if (lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 881:
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 882:
      if (lookahead == 'r') ADVANCE(457);
      END_STATE();
    case 883:
      if (lookahead == 'r') ADVANCE(459);
      END_STATE();
    case 884:
      if (lookahead == 'r') ADVANCE(554);
      if (lookahead == 'x') ADVANCE(550);
      END_STATE();
    case 885:
      if (lookahead == 's') ADVANCE(734);
      if (lookahead == 't') ADVANCE(818);
      END_STATE();
    case 886:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 887:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 888:
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 889:
      if (lookahead == 's') ADVANCE(1129);
      END_STATE();
    case 890:
      if (lookahead == 's') ADVANCE(1298);
      END_STATE();
    case 891:
      if (lookahead == 's') ADVANCE(1358);
      END_STATE();
    case 892:
      if (lookahead == 's') ADVANCE(1125);
      END_STATE();
    case 893:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 894:
      if (lookahead == 's') ADVANCE(232);
      END_STATE();
    case 895:
      if (lookahead == 's') ADVANCE(783);
      END_STATE();
    case 896:
      if (lookahead == 's') ADVANCE(894);
      END_STATE();
    case 897:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 898:
      if (lookahead == 's') ADVANCE(360);
      END_STATE();
    case 899:
      if (lookahead == 's') ADVANCE(782);
      END_STATE();
    case 900:
      if (lookahead == 's') ADVANCE(912);
      END_STATE();
    case 901:
      if (lookahead == 's') ADVANCE(287);
      END_STATE();
    case 902:
      if (lookahead == 's') ADVANCE(371);
      END_STATE();
    case 903:
      if (lookahead == 's') ADVANCE(999);
      END_STATE();
    case 904:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 905:
      if (lookahead == 's') ADVANCE(973);
      END_STATE();
    case 906:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 907:
      if (lookahead == 's') ADVANCE(971);
      END_STATE();
    case 908:
      if (lookahead == 's') ADVANCE(347);
      END_STATE();
    case 909:
      if (lookahead == 's') ADVANCE(353);
      END_STATE();
    case 910:
      if (lookahead == 's') ADVANCE(740);
      if (lookahead == 't') ADVANCE(870);
      END_STATE();
    case 911:
      if (lookahead == 's') ADVANCE(793);
      END_STATE();
    case 912:
      if (lookahead == 's') ADVANCE(513);
      END_STATE();
    case 913:
      if (lookahead == 's') ADVANCE(785);
      END_STATE();
    case 914:
      if (lookahead == 's') ADVANCE(729);
      END_STATE();
    case 915:
      if (lookahead == 's') ADVANCE(521);
      END_STATE();
    case 916:
      if (lookahead == 's') ADVANCE(527);
      END_STATE();
    case 917:
      if (lookahead == 's') ADVANCE(397);
      END_STATE();
    case 918:
      if (lookahead == 's') ADVANCE(916);
      END_STATE();
    case 919:
      if (lookahead == 's') ADVANCE(541);
      END_STATE();
    case 920:
      if (lookahead == 's') ADVANCE(543);
      END_STATE();
    case 921:
      if (lookahead == 's') ADVANCE(544);
      END_STATE();
    case 922:
      if (lookahead == 's') ADVANCE(545);
      END_STATE();
    case 923:
      if (lookahead == 's') ADVANCE(451);
      END_STATE();
    case 924:
      if (lookahead == 's') ADVANCE(802);
      END_STATE();
    case 925:
      if (lookahead == 's') ADVANCE(803);
      END_STATE();
    case 926:
      if (lookahead == 's') ADVANCE(804);
      END_STATE();
    case 927:
      if (lookahead == 's') ADVANCE(548);
      END_STATE();
    case 928:
      if (lookahead == 's') ADVANCE(927);
      END_STATE();
    case 929:
      if (lookahead == 's') ADVANCE(806);
      END_STATE();
    case 930:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 931:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 932:
      if (lookahead == 't') ADVANCE(1224);
      END_STATE();
    case 933:
      if (lookahead == 't') ADVANCE(1241);
      END_STATE();
    case 934:
      if (lookahead == 't') ADVANCE(1268);
      END_STATE();
    case 935:
      if (lookahead == 't') ADVANCE(1159);
      END_STATE();
    case 936:
      if (lookahead == 't') ADVANCE(1254);
      END_STATE();
    case 937:
      if (lookahead == 't') ADVANCE(1288);
      END_STATE();
    case 938:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 939:
      if (lookahead == 't') ADVANCE(1292);
      END_STATE();
    case 940:
      if (lookahead == 't') ADVANCE(1137);
      END_STATE();
    case 941:
      if (lookahead == 't') ADVANCE(1290);
      END_STATE();
    case 942:
      if (lookahead == 't') ADVANCE(1327);
      END_STATE();
    case 943:
      if (lookahead == 't') ADVANCE(1133);
      END_STATE();
    case 944:
      if (lookahead == 't') ADVANCE(1155);
      END_STATE();
    case 945:
      if (lookahead == 't') ADVANCE(1246);
      END_STATE();
    case 946:
      if (lookahead == 't') ADVANCE(1162);
      END_STATE();
    case 947:
      if (lookahead == 't') ADVANCE(1235);
      END_STATE();
    case 948:
      if (lookahead == 't') ADVANCE(951);
      END_STATE();
    case 949:
      if (lookahead == 't') ADVANCE(491);
      END_STATE();
    case 950:
      if (lookahead == 't') ADVANCE(363);
      END_STATE();
    case 951:
      if (lookahead == 't') ADVANCE(776);
      END_STATE();
    case 952:
      if (lookahead == 't') ADVANCE(1079);
      END_STATE();
    case 953:
      if (lookahead == 't') ADVANCE(492);
      END_STATE();
    case 954:
      if (lookahead == 't') ADVANCE(506);
      END_STATE();
    case 955:
      if (lookahead == 't') ADVANCE(1069);
      END_STATE();
    case 956:
      if (lookahead == 't') ADVANCE(511);
      END_STATE();
    case 957:
      if (lookahead == 't') ADVANCE(780);
      END_STATE();
    case 958:
      if (lookahead == 't') ADVANCE(1073);
      END_STATE();
    case 959:
      if (lookahead == 't') ADVANCE(494);
      END_STATE();
    case 960:
      if (lookahead == 't') ADVANCE(1071);
      END_STATE();
    case 961:
      if (lookahead == 't') ADVANCE(496);
      END_STATE();
    case 962:
      if (lookahead == 't') ADVANCE(1074);
      END_STATE();
    case 963:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 964:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 965:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 966:
      if (lookahead == 't') ADVANCE(415);
      END_STATE();
    case 967:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 968:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 969:
      if (lookahead == 't') ADVANCE(327);
      END_STATE();
    case 970:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 971:
      if (lookahead == 't') ADVANCE(713);
      END_STATE();
    case 972:
      if (lookahead == 't') ADVANCE(386);
      END_STATE();
    case 973:
      if (lookahead == 't') ADVANCE(837);
      END_STATE();
    case 974:
      if (lookahead == 't') ADVANCE(331);
      END_STATE();
    case 975:
      if (lookahead == 't') ADVANCE(411);
      END_STATE();
    case 976:
      if (lookahead == 't') ADVANCE(394);
      END_STATE();
    case 977:
      if (lookahead == 't') ADVANCE(335);
      END_STATE();
    case 978:
      if (lookahead == 't') ADVANCE(400);
      END_STATE();
    case 979:
      if (lookahead == 't') ADVANCE(336);
      END_STATE();
    case 980:
      if (lookahead == 't') ADVANCE(368);
      END_STATE();
    case 981:
      if (lookahead == 't') ADVANCE(350);
      END_STATE();
    case 982:
      if (lookahead == 't') ADVANCE(957);
      END_STATE();
    case 983:
      if (lookahead == 't') ADVANCE(376);
      END_STATE();
    case 984:
      if (lookahead == 't') ADVANCE(516);
      END_STATE();
    case 985:
      if (lookahead == 't') ADVANCE(515);
      END_STATE();
    case 986:
      if (lookahead == 't') ADVANCE(722);
      END_STATE();
    case 987:
      if (lookahead == 't') ADVANCE(519);
      END_STATE();
    case 988:
      if (lookahead == 't') ADVANCE(381);
      END_STATE();
    case 989:
      if (lookahead == 't') ADVANCE(723);
      END_STATE();
    case 990:
      if (lookahead == 't') ADVANCE(739);
      END_STATE();
    case 991:
      if (lookahead == 't') ADVANCE(744);
      END_STATE();
    case 992:
      if (lookahead == 't') ADVANCE(526);
      END_STATE();
    case 993:
      if (lookahead == 't') ADVANCE(388);
      END_STATE();
    case 994:
      if (lookahead == 't') ADVANCE(731);
      END_STATE();
    case 995:
      if (lookahead == 't') ADVANCE(530);
      END_STATE();
    case 996:
      if (lookahead == 't') ADVANCE(499);
      END_STATE();
    case 997:
      if (lookahead == 't') ADVANCE(420);
      END_STATE();
    case 998:
      if (lookahead == 't') ADVANCE(533);
      END_STATE();
    case 999:
      if (lookahead == 't') ADVANCE(692);
      END_STATE();
    case 1000:
      if (lookahead == 't') ADVANCE(535);
      END_STATE();
    case 1001:
      if (lookahead == 't') ADVANCE(536);
      END_STATE();
    case 1002:
      if (lookahead == 't') ADVANCE(537);
      END_STATE();
    case 1003:
      if (lookahead == 't') ADVANCE(538);
      END_STATE();
    case 1004:
      if (lookahead == 't') ADVANCE(539);
      END_STATE();
    case 1005:
      if (lookahead == 't') ADVANCE(540);
      END_STATE();
    case 1006:
      if (lookahead == 't') ADVANCE(542);
      END_STATE();
    case 1007:
      if (lookahead == 't') ADVANCE(446);
      END_STATE();
    case 1008:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 1009:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 1010:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 1011:
      if (lookahead == 't') ADVANCE(549);
      END_STATE();
    case 1012:
      if (lookahead == 'u') ADVANCE(630);
      END_STATE();
    case 1013:
      if (lookahead == 'u') ADVANCE(828);
      END_STATE();
    case 1014:
      if (lookahead == 'u') ADVANCE(623);
      END_STATE();
    case 1015:
      if (lookahead == 'u') ADVANCE(602);
      END_STATE();
    case 1016:
      if (lookahead == 'u') ADVANCE(606);
      END_STATE();
    case 1017:
      if (lookahead == 'u') ADVANCE(778);
      END_STATE();
    case 1018:
      if (lookahead == 'u') ADVANCE(364);
      END_STATE();
    case 1019:
      if (lookahead == 'u') ADVANCE(831);
      END_STATE();
    case 1020:
      if (lookahead == 'u') ADVANCE(840);
      END_STATE();
    case 1021:
      if (lookahead == 'u') ADVANCE(845);
      END_STATE();
    case 1022:
      if (lookahead == 'u') ADVANCE(390);
      END_STATE();
    case 1023:
      if (lookahead == 'u') ADVANCE(349);
      END_STATE();
    case 1024:
      if (lookahead == 'u') ADVANCE(412);
      END_STATE();
    case 1025:
      if (lookahead == 'u') ADVANCE(862);
      END_STATE();
    case 1026:
      if (lookahead == 'u') ADVANCE(583);
      END_STATE();
    case 1027:
      if (lookahead == 'u') ADVANCE(967);
      END_STATE();
    case 1028:
      if (lookahead == 'u') ADVANCE(907);
      END_STATE();
    case 1029:
      if (lookahead == 'u') ADVANCE(580);
      END_STATE();
    case 1030:
      if (lookahead == 'u') ADVANCE(659);
      END_STATE();
    case 1031:
      if (lookahead == 'u') ADVANCE(968);
      END_STATE();
    case 1032:
      if (lookahead == 'u') ADVANCE(245);
      END_STATE();
    case 1033:
      if (lookahead == 'u') ADVANCE(856);
      END_STATE();
    case 1034:
      if (lookahead == 'u') ADVANCE(857);
      END_STATE();
    case 1035:
      if (lookahead == 'u') ADVANCE(913);
      END_STATE();
    case 1036:
      if (lookahead == 'u') ADVANCE(431);
      END_STATE();
    case 1037:
      if (lookahead == 'u') ADVANCE(435);
      END_STATE();
    case 1038:
      if (lookahead == 'u') ADVANCE(436);
      END_STATE();
    case 1039:
      if (lookahead == 'u') ADVANCE(437);
      END_STATE();
    case 1040:
      if (lookahead == 'u') ADVANCE(438);
      END_STATE();
    case 1041:
      if (lookahead == 'u') ADVANCE(439);
      END_STATE();
    case 1042:
      if (lookahead == 'u') ADVANCE(440);
      END_STATE();
    case 1043:
      if (lookahead == 'u') ADVANCE(875);
      END_STATE();
    case 1044:
      if (lookahead == 'u') ADVANCE(924);
      END_STATE();
    case 1045:
      if (lookahead == 'u') ADVANCE(877);
      END_STATE();
    case 1046:
      if (lookahead == 'u') ADVANCE(925);
      END_STATE();
    case 1047:
      if (lookahead == 'u') ADVANCE(878);
      END_STATE();
    case 1048:
      if (lookahead == 'u') ADVANCE(926);
      END_STATE();
    case 1049:
      if (lookahead == 'u') ADVANCE(879);
      END_STATE();
    case 1050:
      if (lookahead == 'u') ADVANCE(880);
      END_STATE();
    case 1051:
      if (lookahead == 'u') ADVANCE(603);
      END_STATE();
    case 1052:
      if (lookahead == 'u') ADVANCE(624);
      END_STATE();
    case 1053:
      if (lookahead == 'v') ADVANCE(1895);
      END_STATE();
    case 1054:
      if (lookahead == 'v') ADVANCE(206);
      END_STATE();
    case 1055:
      if (lookahead == 'v') ADVANCE(389);
      END_STATE();
    case 1056:
      if (lookahead == 'v') ADVANCE(351);
      END_STATE();
    case 1057:
      if (lookahead == 'v') ADVANCE(211);
      END_STATE();
    case 1058:
      if (lookahead == 'v') ADVANCE(393);
      END_STATE();
    case 1059:
      if (lookahead == 'v') ADVANCE(421);
      END_STATE();
    case 1060:
      if (lookahead == 'v') ADVANCE(247);
      END_STATE();
    case 1061:
      if (lookahead == 'w') ADVANCE(509);
      END_STATE();
    case 1062:
      if (lookahead == 'x') ADVANCE(504);
      END_STATE();
    case 1063:
      if (lookahead == 'x') ADVANCE(610);
      END_STATE();
    case 1064:
      if (lookahead == 'x') ADVANCE(1257);
      END_STATE();
    case 1065:
      if (lookahead == 'x') ADVANCE(1266);
      END_STATE();
    case 1066:
      if (lookahead == 'x') ADVANCE(943);
      END_STATE();
    case 1067:
      if (lookahead == 'y') ADVANCE(1330);
      END_STATE();
    case 1068:
      if (lookahead == 'y') ADVANCE(1888);
      END_STATE();
    case 1069:
      if (lookahead == 'y') ADVANCE(1152);
      END_STATE();
    case 1070:
      if (lookahead == 'y') ADVANCE(1217);
      END_STATE();
    case 1071:
      if (lookahead == 'y') ADVANCE(1881);
      END_STATE();
    case 1072:
      if (lookahead == 'y') ADVANCE(1164);
      END_STATE();
    case 1073:
      if (lookahead == 'y') ADVANCE(13);
      END_STATE();
    case 1074:
      if (lookahead == 'y') ADVANCE(21);
      END_STATE();
    case 1075:
      if (lookahead == 'y') ADVANCE(570);
      END_STATE();
    case 1076:
      if (lookahead == 'y') ADVANCE(62);
      END_STATE();
    case 1077:
      if (lookahead == 'y') ADVANCE(66);
      END_STATE();
    case 1078:
      if (lookahead == 'y') ADVANCE(72);
      END_STATE();
    case 1079:
      if (lookahead == 'y') ADVANCE(784);
      END_STATE();
    case 1080:
      if (lookahead == 'y') ADVANCE(594);
      END_STATE();
    case 1081:
      if (lookahead == 'y') ADVANCE(601);
      END_STATE();
    case 1082:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(1105);
      END_STATE();
    case 1083:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1837);
      END_STATE();
    case 1084:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1835);
      END_STATE();
    case 1085:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 1086:
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(17);
      END_STATE();
    case 1087:
      if (eof) ADVANCE(1088);
      if (lookahead == '"') ADVANCE(1095);
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(1887);
      if (lookahead == '(') ADVANCE(1852);
      if (lookahead == ')') ADVANCE(1347);
      if (lookahead == ',') ADVANCE(1090);
      if (lookahead == '-') ADVANCE(1083);
      if (lookahead == '.') ADVANCE(1849);
      if (lookahead == '/') ADVANCE(1845);
      if (lookahead == ':') ADVANCE(1092);
      if (lookahead == '<') ADVANCE(3);
      if (lookahead == '=') ADVANCE(1127);
      if (lookahead == '>') ADVANCE(1115);
      if (lookahead == '?') ADVANCE(32);
      if (lookahead == '@') ADVANCE(1850);
      if (lookahead == 'B') ADVANCE(1415);
      if (lookahead == 'D') ADVANCE(1390);
      if (lookahead == 'F') ADVANCE(1402);
      if (lookahead == 'G') ADVANCE(1386);
      if (lookahead == 'H') ADVANCE(1387);
      if (lookahead == 'I') ADVANCE(1409);
      if (lookahead == 'L') ADVANCE(1412);
      if (lookahead == 'O') ADVANCE(1406);
      if (lookahead == 'P') ADVANCE(1378);
      if (lookahead == 'S') ADVANCE(1399);
      if (lookahead == '[') ADVANCE(1093);
      if (lookahead == ']') ADVANCE(1094);
      if (lookahead == 'a') ADVANCE(1481);
      if (lookahead == 'b') ADVANCE(1442);
      if (lookahead == 'c') ADVANCE(1533);
      if (lookahead == 'd') ADVANCE(1510);
      if (lookahead == 'e') ADVANCE(1609);
      if (lookahead == 'f') ADVANCE(1436);
      if (lookahead == 'g') ADVANCE(1511);
      if (lookahead == 'h') ADVANCE(1535);
      if (lookahead == 'i') ADVANCE(1499);
      if (lookahead == 'j') ADVANCE(1761);
      if (lookahead == 'k') ADVANCE(1512);
      if (lookahead == 'l') ADVANCE(1437);
      if (lookahead == 'm') ADVANCE(1444);
      if (lookahead == 'n') ADVANCE(1439);
      if (lookahead == 'o') ADVANCE(1713);
      if (lookahead == 'p') ADVANCE(1447);
      if (lookahead == 'r') ADVANCE(1513);
      if (lookahead == 's') ADVANCE(1486);
      if (lookahead == 't') ADVANCE(1683);
      if (lookahead == 'u') ADVANCE(1654);
      if (lookahead == 'v') ADVANCE(1445);
      if (lookahead == 'x') ADVANCE(1631);
      if (lookahead == '{') ADVANCE(1089);
      if (lookahead == '}') ADVANCE(1091);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1087)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1836);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '!') ADVANCE(1101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1104);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '-') ADVANCE(1104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1100);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '-') ADVANCE(1103);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1104);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '-') ADVANCE(1097);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1104);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '-') ADVANCE(1098);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1100);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '-') ADVANCE(1099);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1104);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '<') ADVANCE(1096);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1104);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '>') ADVANCE(1104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1104);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1104);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1343);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(anon_sym_LTapi);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(anon_sym_LT_SLASHapi_GT);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(anon_sym_LTresource);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(anon_sym_LT_SLASHresource_GT);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(anon_sym_LTinSequence_GT);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(anon_sym_LT_SLASHinSequence_GT);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(anon_sym_LToutSequence_GT);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(anon_sym_LT_SLASHoutSequence_GT);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(anon_sym_LTfaultSequence_GT);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(anon_sym_LT_SLASHfaultSequence_GT);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(anon_sym_methods);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(anon_sym_methods);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(anon_sym_uri_DASHtemplate);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(anon_sym_xmlns);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(anon_sym_xmlns);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(anon_sym_name);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 's') ADVANCE(1721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(anon_sym_context);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(anon_sym_context);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(anon_sym_hostname);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(anon_sym_hostname);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(anon_sym_port);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(anon_sym_port);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(anon_sym_version);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(anon_sym_swagger);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(anon_sym_swagger);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(anon_sym_LTsequence);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(anon_sym_LT_SLASHsequence_GT);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(anon_sym_LTrespond_SLASH_GT);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(anon_sym_LTsend_SLASH_GT);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(anon_sym_LTsend);
      if (lookahead == '/') ADVANCE(44);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(anon_sym_LT_SLASHsend_GT);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(anon_sym_LTlog);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(anon_sym_LT_SLASHlog_GT);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(anon_sym_LTproperty);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(anon_sym_scope);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(anon_sym_scope);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(anon_sym_axis2);
      if (lookahead == '-') ADVANCE(272);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(anon_sym_axis2);
      if (lookahead == '-') ADVANCE(272);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(anon_sym_axis2_DASHclient);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(anon_sym_operation);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(anon_sym_operation);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(anon_sym_transport);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(anon_sym_transport);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(anon_sym_registry);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(anon_sym_registry);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(anon_sym_synapse);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(anon_sym_synapse);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(anon_sym_system);
      if (lookahead == '-') ADVANCE(798);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(anon_sym_env);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(anon_sym_env);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(anon_sym_file);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(anon_sym_action);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(anon_sym_action);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(anon_sym_remove);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(anon_sym_remove);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(anon_sym_STRING);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(anon_sym_STRING);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(anon_sym_INTEGER);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(anon_sym_INTEGER);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(anon_sym_BOOLEAN);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(anon_sym_BOOLEAN);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(anon_sym_DOUBLE);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(anon_sym_DOUBLE);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(anon_sym_FLOAT);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(anon_sym_FLOAT);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(anon_sym_LONG);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(anon_sym_LONG);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(anon_sym_SHORT);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(anon_sym_SHORT);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(anon_sym_OM);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(anon_sym_OM);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(anon_sym_pattern);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(anon_sym_pattern);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(anon_sym_group);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(anon_sym_LTcall);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(anon_sym_LT_SLASHcall_GT);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(anon_sym_LTforeach);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(anon_sym_sequence);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(anon_sym_sequence);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(anon_sym_LT_SLASHforeach_GT);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(anon_sym_LTfilter);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(anon_sym_xpath);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(anon_sym_xpath);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(anon_sym_LT_SLASHfilter_GT);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(anon_sym_LTaggregate_GT);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(anon_sym_LTaggregate);
      if (lookahead == '>') ADVANCE(1212);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(anon_sym_LT_SLASHaggregate_GT);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(anon_sym_LTiterate);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(anon_sym_LT_SLASHiterate_GT);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(anon_sym_LTpayloadFactory);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(anon_sym_LT_SLASHpayloadFactory_GT);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(anon_sym_media_DASHtype);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(anon_sym_xml);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'n') ADVANCE(1754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(anon_sym_json);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(anon_sym_json);
      if (lookahead == '-') ADVANCE(357);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(anon_sym_LTformat);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(anon_sym_LT_SLASHformat_GT);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(anon_sym_LTargs_SLASH_GT);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(anon_sym_LTargs_GT);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(anon_sym_LTarg);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(anon_sym_LTarg);
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(anon_sym_LT_SLASHargs_GT);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(anon_sym_evaluator);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(anon_sym_evaluator);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(anon_sym_sequential);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(anon_sym_sequential);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(anon_sym_continueParent);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(anon_sym_continueParent);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(anon_sym_preservePayload);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(anon_sym_preservePayload);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(anon_sym_attachPath);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(anon_sym_attachPath);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(anon_sym_LTtarget);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(anon_sym_to);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(anon_sym_soapAction);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(anon_sym_soapAction);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(anon_sym_endpoint);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(anon_sym_endpoint);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(anon_sym_LT_SLASHtarget_GT);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(anon_sym_LTcorrelateOn);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(anon_sym_LTcompleteCondition);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(anon_sym_LT_SLASHcompleteCondition_GT);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(anon_sym_LTonComplete);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(anon_sym_LT_SLASHonComplete_GT);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(anon_sym_LTmessageCount);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(anon_sym_min);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(anon_sym_max);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(anon_sym_key);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(anon_sym_LTthen_GT);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(anon_sym_LT_SLASHthen_GT);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(anon_sym_LTelse_GT);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(anon_sym_LT_SLASHelse_GT);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(anon_sym_source);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(anon_sym_source);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(anon_sym_regex);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(anon_sym_regex);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(anon_sym_LTendpoint);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(anon_sym_LT_SLASHendpoint_GT);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(anon_sym_LThttp);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(anon_sym_LT_SLASHhttp_GT);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(anon_sym_method);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 's') ADVANCE(1126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(anon_sym_get);
      if (lookahead == '-') ADVANCE(788);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(anon_sym_post);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(anon_sym_post);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(anon_sym_put);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(anon_sym_put);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(anon_sym_head);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(anon_sym_head);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(anon_sym_options);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(anon_sym_options);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(anon_sym_patch);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(anon_sym_patch);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(anon_sym_LTtimeout_GT);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(anon_sym_LT_SLASHtimeout_GT);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(anon_sym_LTmarkForSuspension_GT);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmarkForSuspension_GT);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(anon_sym_LTretriesBeforeSuspension_GT);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(anon_sym_LT_SLASHretriesBeforeSuspension_GT);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(anon_sym_LTretryDelay_GT);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(anon_sym_LT_SLASHretryDelay_GT);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(anon_sym_LTsuspendOnFailure_GT);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(anon_sym_LT_SLASHsuspendOnFailure_GT);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(anon_sym_LTinitialDuration_GT);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(anon_sym_LT_SLASHinitialDuration_GT);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(anon_sym_LTprogressionFactor_GT);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(anon_sym_LT_SLASHprogressionFactor_GT);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(anon_sym_LTmaximumDuration_GT);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmaximumDuration_GT);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(anon_sym_LTerrorCodes_GT);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(anon_sym_LT_SLASHerrorCodes_GT);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(anon_sym_LTduration_GT);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(anon_sym_LT_SLASHduration_GT);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(anon_sym_LTresponseAction_GT);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(anon_sym_never);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(anon_sym_never);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(anon_sym_discard);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(anon_sym_discard);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(anon_sym_fault);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(anon_sym_fault);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(anon_sym_LT_SLASHresponseAction_GT);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(anon_sym_LTkey);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(anon_sym_blocking);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(anon_sym_blocking);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(anon_sym_value);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '!') ADVANCE(1340);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1343);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '-') ADVANCE(1343);
      if (lookahead != 0) ADVANCE(1337);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '-') ADVANCE(1339);
      if (lookahead != 0) ADVANCE(1337);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '-') ADVANCE(1336);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1343);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '-') ADVANCE(1342);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1343);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '-') ADVANCE(1338);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1343);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '<') ADVANCE(1335);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1341);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1343);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '>') ADVANCE(1113);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1343);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1343);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(anon_sym_expression);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(anon_sym_expression);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(anon_sym_json_DASHeval_LPAREN);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(anon_sym_id);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(anon_sym_id);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(anon_sym_level);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(anon_sym_level);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(anon_sym_full);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(anon_sym_full);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(anon_sym_simple);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(anon_sym_simple);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(anon_sym_custom);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(anon_sym_custom);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(anon_sym_headers);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(anon_sym_headers);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(1061);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(788);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(648);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(952);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(678);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(357);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(379);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(899);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(966);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(1020);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(798);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == '2') ADVANCE(1158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == '4') ADVANCE(1385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == '6') ADVANCE(1375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'A') ADVANCE(1384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'A') ADVANCE(1428);
      if (lookahead == 'O') ADVANCE(1425);
      if (lookahead == 'U') ADVANCE(1429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'A') ADVANCE(1408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'A') ADVANCE(1431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'A') ADVANCE(1498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'B') ADVANCE(1404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'C') ADVANCE(1398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'D') ADVANCE(1283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'D') ADVANCE(1543);
      if (lookahead == 'E') ADVANCE(1679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'E') ADVANCE(1426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'E') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'E') ADVANCE(1281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'E') ADVANCE(1189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'E') ADVANCE(1405);
      if (lookahead == 'O') ADVANCE(1435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'E') ADVANCE(1397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'E') ADVANCE(1421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'E') ADVANCE(1379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'E') ADVANCE(1434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'G') ADVANCE(1193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'G') ADVANCE(1183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'G') ADVANCE(1392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'H') ADVANCE(1287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'H') ADVANCE(1414);
      if (lookahead == 'T') ADVANCE(1422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'I') ADVANCE(1411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'I') ADVANCE(1417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'L') ADVANCE(1413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'L') ADVANCE(1393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'L') ADVANCE(1389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'L') ADVANCE(1394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'M') ADVANCE(1197);
      if (lookahead == 'P') ADVANCE(1427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'N') ADVANCE(1395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'N') ADVANCE(1187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'N') ADVANCE(1433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'N') ADVANCE(1424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'N') ADVANCE(1396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'O') ADVANCE(1407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'O') ADVANCE(1380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'O') ADVANCE(1423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'O') ADVANCE(1416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'O') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'O') ADVANCE(1410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'P') ADVANCE(1478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'P') ADVANCE(1448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'P') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'R') ADVANCE(1185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'R') ADVANCE(1400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'R') ADVANCE(1432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'S') ADVANCE(1285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'S') ADVANCE(1430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'T') ADVANCE(1275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'T') ADVANCE(1401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'T') ADVANCE(1383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'T') ADVANCE(1279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'T') ADVANCE(1277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'T') ADVANCE(1191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'T') ADVANCE(1195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'T') ADVANCE(1391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'T') ADVANCE(1388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'U') ADVANCE(1382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'a') ADVANCE(1622);
      if (lookahead == 'i') ADVANCE(1612);
      if (lookahead == 'l') ADVANCE(1695);
      if (lookahead == 'o') ADVANCE(1733);
      if (lookahead == 'u') ADVANCE(1613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'a') ADVANCE(1641);
      if (lookahead == 'e') ADVANCE(1821);
      if (lookahead == 'o') ADVANCE(1492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'a') ADVANCE(1641);
      if (lookahead == 'o') ADVANCE(1492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'a') ADVANCE(1633);
      if (lookahead == 'e') ADVANCE(1823);
      if (lookahead == 'o') ADVANCE(1734);
      if (lookahead == 'u') ADVANCE(1615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'a') ADVANCE(1633);
      if (lookahead == 'o') ADVANCE(1734);
      if (lookahead == 'u') ADVANCE(1628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'a') ADVANCE(1500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'a') ADVANCE(1759);
      if (lookahead == 'l') ADVANCE(1685);
      if (lookahead == 'o') ADVANCE(1706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'a') ADVANCE(1759);
      if (lookahead == 'o') ADVANCE(1706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'a') ADVANCE(1826);
      if (lookahead == 'e') ADVANCE(1505);
      if (lookahead == 'i') ADVANCE(1642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'a') ADVANCE(1624);
      if (lookahead == 'e') ADVANCE(1736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'a') ADVANCE(1573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'a') ADVANCE(1791);
      if (lookahead == 'o') ADVANCE(1738);
      if (lookahead == 'r') ADVANCE(1561);
      if (lookahead == 'u') ADVANCE(1778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'a') ADVANCE(1831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'a') ADVANCE(1661);
      if (lookahead == 'u') ADVANCE(1517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'a') ADVANCE(1818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'a') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'a') ADVANCE(1742);
      if (lookahead == 'r') ADVANCE(1584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'a') ADVANCE(1715);
      if (lookahead == 'u') ADVANCE(1737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'a') ADVANCE(1594);
      if (lookahead == 'e') ADVANCE(1828);
      if (lookahead == 'i') ADVANCE(1678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'a') ADVANCE(1594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'a') ADVANCE(1504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'a') ADVANCE(1723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'a') ADVANCE(1611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'a') ADVANCE(1792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'a') ADVANCE(1608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'a') ADVANCE(1749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'a') ADVANCE(1735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'a') ADVANCE(1623);
      if (lookahead == 'l') ADVANCE(1695);
      if (lookahead == 'o') ADVANCE(1733);
      if (lookahead == 'u') ADVANCE(1658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'a') ADVANCE(1645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'a') ADVANCE(1783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'a') ADVANCE(1808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'a') ADVANCE(1796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'a') ADVANCE(1363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'a') ADVANCE(1614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'a') ADVANCE(1616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'a') ADVANCE(1803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'a') ADVANCE(1491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'a') ADVANCE(1634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'a') ADVANCE(1805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'a') ADVANCE(1671);
      if (lookahead == 'u') ADVANCE(1517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'a') ADVANCE(1806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'a') ADVANCE(1811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'a') ADVANCE(1751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'b') ADVANCE(1765);
      if (lookahead == 'm') ADVANCE(1880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'b') ADVANCE(1552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'c') ADVANCE(1793);
      if (lookahead == 't') ADVANCE(1795);
      if (lookahead == 'x') ADVANCE(1583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'c') ADVANCE(1603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'c') ADVANCE(1820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'c') ADVANCE(1575);
      if (lookahead == 't') ADVANCE(1553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'c') ADVANCE(1577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'c') ADVANCE(1707);
      if (lookahead == 'e') ADVANCE(1724);
      if (lookahead == 'i') ADVANCE(1632);
      if (lookahead == 'o') ADVANCE(1453);
      if (lookahead == 't') ADVANCE(1452);
      if (lookahead == 'u') ADVANCE(1479);
      if (lookahead == 'w') ADVANCE(1446);
      if (lookahead == 'y') ADVANCE(1664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'c') ADVANCE(1684);
      if (lookahead == 'd') ADVANCE(1718);
      if (lookahead == 'v') ADVANCE(1171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'c') ADVANCE(1692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'c') ADVANCE(1526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'c') ADVANCE(1529);
      if (lookahead == 't') ADVANCE(1596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'c') ADVANCE(1542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'c') ADVANCE(1458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'c') ADVANCE(1465);
      if (lookahead == 't') ADVANCE(1454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'c') ADVANCE(1465);
      if (lookahead == 't') ADVANCE(1455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'c') ADVANCE(1462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'c') ADVANCE(1710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'c') ADVANCE(1809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'c') ADVANCE(1812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'd') ADVANCE(1349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'd') ADVANCE(1297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'd') ADVANCE(1873);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'd') ADVANCE(1273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'd') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'd') ADVANCE(1238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'd') ADVANCE(1585);
      if (lookahead == 't') ADVANCE(1579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'd') ADVANCE(1368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'd') ADVANCE(1531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'd') ADVANCE(1532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'd') ADVANCE(1589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1565);
      if (lookahead == 'i') ADVANCE(1760);
      if (lookahead == 'o') ADVANCE(1483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1662);
      if (lookahead == 'r') ADVANCE(1687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1566);
      if (lookahead == 'o') ADVANCE(1813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1882);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1885);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1884);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1582);
      if (lookahead == 'h') ADVANCE(1690);
      if (lookahead == 'o') ADVANCE(1640);
      if (lookahead == 't') ADVANCE(1825);
      if (lookahead == 'u') ADVANCE(1731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1582);
      if (lookahead == 'h') ADVANCE(1690);
      if (lookahead == 'o') ADVANCE(1656);
      if (lookahead == 't') ADVANCE(1825);
      if (lookahead == 'u') ADVANCE(1732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1441);
      if (lookahead == 'o') ADVANCE(1762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1827);
      if (lookahead == 'i') ADVANCE(1770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1739);
      if (lookahead == 't') ADVANCE(1590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'e') ADVANCE(1676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'f') ADVANCE(1450);
      if (lookahead == 'l') ADVANCE(1559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'g') ADVANCE(1537);
      if (lookahead == 'm') ADVANCE(1711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'g') ADVANCE(1865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'g') ADVANCE(1875);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'g') ADVANCE(1853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'g') ADVANCE(1332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'g') ADVANCE(1842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'g') ADVANCE(1877);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'g') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1574:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'g') ADVANCE(1555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'h') ADVANCE(1301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'h') ADVANCE(1210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'h') ADVANCE(1420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'h') ADVANCE(1240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1579:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'h') ADVANCE(1688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1580:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'i') ADVANCE(1370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1581:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'i') ADVANCE(1832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'i') ADVANCE(1625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1583:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'i') ADVANCE(1752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1584:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'i') ADVANCE(1657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1585:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'i') ADVANCE(1468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1586:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'i') ADVANCE(1659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1587:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'i') ADVANCE(1694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1588:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'i') ADVANCE(1660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1589:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'i') ADVANCE(1665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1590:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'i') ADVANCE(1708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1591:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'i') ADVANCE(1698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'i') ADVANCE(1666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1593:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'i') ADVANCE(1700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1594:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'i') ADVANCE(1670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1595:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'i') ADVANCE(1701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1596:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'i') ADVANCE(1460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1597:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'i') ADVANCE(1702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1598:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'i') ADVANCE(1675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1599:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'i') ADVANCE(1703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1600:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'i') ADVANCE(1704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1601:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'i') ADVANCE(1810);
      if (lookahead == 't') ADVANCE(1291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1602:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'i') ADVANCE(1810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1603:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'k') ADVANCE(1588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1604:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'l') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1605:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'l') ADVANCE(1353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1606:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'l') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1607:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'l') ADVANCE(1351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1608:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'l') ADVANCE(1234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1609:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'l') ADVANCE(1556);
      if (lookahead == 'n') ADVANCE(1487);
      if (lookahead == 'v') ADVANCE(1469);
      if (lookahead == 'x') ADVANCE(1720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1610:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'l') ADVANCE(1556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1611:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'l') ADVANCE(1362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1612:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'l') ADVANCE(1515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1613:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'l') ADVANCE(1605);
      if (lookahead == 'n') ADVANCE(1497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1614:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'l') ADVANCE(1819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1615:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'l') ADVANCE(1606);
      if (lookahead == 'm') ADVANCE(1480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1616:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'l') ADVANCE(1581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1617:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'l') ADVANCE(1550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1618:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'l') ADVANCE(1782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1619:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'l') ADVANCE(1786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1620:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'l') ADVANCE(1697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1621:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'l') ADVANCE(1525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1622:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'l') ADVANCE(1766);
      if (lookahead == 'u') ADVANCE(1618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1623:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'l') ADVANCE(1766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1624:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'l') ADVANCE(1816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1625:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'l') ADVANCE(1586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1626:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'l') ADVANCE(1476);
      if (lookahead == 'p') ADVANCE(1709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1627:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'l') ADVANCE(1476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1628:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'm') ADVANCE(1480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1629:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'm') ADVANCE(1357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1630:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'm') ADVANCE(1169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1631:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'm') ADVANCE(1604);
      if (lookahead == 'p') ADVANCE(1459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1632:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'm') ADVANCE(1722);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1633:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'm') ADVANCE(1516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1634:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'm') ADVANCE(1528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1635:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'm') ADVANCE(1470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1636:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'm') ADVANCE(1466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1637:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'm') ADVANCE(1562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1638:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'm') ADVANCE(1563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1639:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'm') ADVANCE(1372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1640:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'n') ADVANCE(1493);
      if (lookahead == 'u') ADVANCE(1667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1641:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'n') ADVANCE(1567);
      if (lookahead == 's') ADVANCE(1779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1642:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'n') ADVANCE(1256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1643:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'n') ADVANCE(1223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1644:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'n') ADVANCE(1175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1645:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'n') ADVANCE(1851);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1646:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'n') ADVANCE(1199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1647:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'n') ADVANCE(1140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1648:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'n') ADVANCE(1872);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1649:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'n') ADVANCE(1161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1650:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'n') ADVANCE(1345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1651:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'n') ADVANCE(1245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1652:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'n') ADVANCE(1490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1653:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'n') ADVANCE(1501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1654:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'n') ADVANCE(1716);
      if (lookahead == 'r') ADVANCE(1580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1655:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'n') ADVANCE(1716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1656:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'n') ADVANCE(1494);
      if (lookahead == 'u') ADVANCE(1667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1657:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'n') ADVANCE(1568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1658:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'n') ADVANCE(1497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1659:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'n') ADVANCE(1569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1660:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'n') ADVANCE(1570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1661:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'n') ADVANCE(1753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1662:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'n') ADVANCE(1545);
      if (lookahead == 't') ADVANCE(1289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1663:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'n') ADVANCE(1545);
      if (lookahead == 't') ADVANCE(1361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1664:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'n') ADVANCE(1457);
      if (lookahead == 's') ADVANCE(1802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1665:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'n') ADVANCE(1571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1666:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'n') ADVANCE(1572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1667:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'n') ADVANCE(1781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1668:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'n') ADVANCE(1756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1669:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'n') ADVANCE(1473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1670:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'n') ADVANCE(1757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1671:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'n') ADVANCE(1764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1672:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'n') ADVANCE(1785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1673:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'n') ADVANCE(1794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1674:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'n') ADVANCE(1787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1675:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'n') ADVANCE(1788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1676:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'n') ADVANCE(1790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1677:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'n') ADVANCE(1367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1678:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'n') ADVANCE(1817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1679:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'n') ADVANCE(1496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1680:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'n') ADVANCE(1373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1681:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'o') ADVANCE(1483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1682:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'o') ADVANCE(1813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1683:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'o') ADVANCE(1243);
      if (lookahead == 'r') ADVANCE(1449);
      if (lookahead == 'y') ADVANCE(1717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1684:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'o') ADVANCE(1509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1685:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'o') ADVANCE(1482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1686:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'o') ADVANCE(1643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1687:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'o') ADVANCE(1814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1688:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'o') ADVANCE(1502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1689:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'o') ADVANCE(1629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1690:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'o') ADVANCE(1712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1691:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'o') ADVANCE(1725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1692:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'o') ADVANCE(1507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1693:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'o') ADVANCE(1598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1694:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'o') ADVANCE(1644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1695:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'o') ADVANCE(1691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1696:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'o') ADVANCE(1763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1697:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'o') ADVANCE(1456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1698:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'o') ADVANCE(1647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1699:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'o') ADVANCE(1729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1700:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'o') ADVANCE(1680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1701:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'o') ADVANCE(1648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1702:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'o') ADVANCE(1649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1703:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'o') ADVANCE(1650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1704:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'o') ADVANCE(1651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1705:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'o') ADVANCE(1677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1706:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'o') ADVANCE(1617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1707:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'o') ADVANCE(1719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1708:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'o') ADVANCE(1668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1709:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'o') ADVANCE(1745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1710:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'o') ADVANCE(1508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1711:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'o') ADVANCE(1822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1712:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'o') ADVANCE(1767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1713:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'p') ADVANCE(1538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1714:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'p') ADVANCE(1201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1715:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'p') ADVANCE(1381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1716:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'p') ADVANCE(1461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1717:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'p') ADVANCE(1518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1718:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'p') ADVANCE(1693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1719:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'p') ADVANCE(1520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1720:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'p') ADVANCE(1743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1721:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'p') ADVANCE(1472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1722:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'p') ADVANCE(1621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1723:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'p') ADVANCE(1768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1724:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'q') ADVANCE(1815);
      if (lookahead == 't') ADVANCE(1177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1725:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'r') ADVANCE(1861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1726:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'r') ADVANCE(1324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1727:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'r') ADVANCE(1871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1728:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'r') ADVANCE(1142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1729:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'r') ADVANCE(1232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1730:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'r') ADVANCE(1830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1731:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'r') ADVANCE(1741);
      if (lookahead == 's') ADVANCE(1799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1732:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'r') ADVANCE(1741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1733:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'r') ADVANCE(1636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1734:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'r') ADVANCE(1635);
      if (lookahead == 't') ADVANCE(1870);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1735:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'r') ADVANCE(1503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1736:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'r') ADVANCE(1771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1737:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'r') ADVANCE(1489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1738:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'r') ADVANCE(1780);
      if (lookahead == 's') ADVANCE(1601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1739:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'r') ADVANCE(1477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1740:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'r') ADVANCE(1755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1741:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'r') ADVANCE(1558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1742:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'r') ADVANCE(1798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1743:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'r') ADVANCE(1548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1744:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'r') ADVANCE(1646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1745:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'r') ADVANCE(1789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1746:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'r') ADVANCE(1824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1747:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'r') ADVANCE(1474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1748:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'r') ADVANCE(1592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1749:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'r') ADVANCE(1769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1750:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'r') ADVANCE(1475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1751:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'r') ADVANCE(1564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1752:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 's') ADVANCE(1374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1753:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 's') ADVANCE(1626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1754:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 's') ADVANCE(1130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1755:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 's') ADVANCE(1359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1756:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 's') ADVANCE(1299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1757:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 's') ADVANCE(1856);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1758:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 's') ADVANCE(1360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1759:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 's') ADVANCE(1514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1760:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 's') ADVANCE(1495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1761:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 's') ADVANCE(1686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1762:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 's') ADVANCE(1797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1763:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 's') ADVANCE(1602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1764:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 's') ADVANCE(1627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1765:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 's') ADVANCE(1800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1766:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 's') ADVANCE(1519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1767:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 's') ADVANCE(1522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1768:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 's') ADVANCE(1527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1769:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 's') ADVANCE(1541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1770:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 's') ADVANCE(1801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1771:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 's') ADVANCE(1591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1772:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 's') ADVANCE(1554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1773:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 's') ADVANCE(1807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1774:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 's') ADVANCE(1599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1775:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 's') ADVANCE(1705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1776:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 's') ADVANCE(1774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1777:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 't') ADVANCE(1452);
      if (lookahead == 'u') ADVANCE(1479);
      if (lookahead == 'y') ADVANCE(1773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1778:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 't') ADVANCE(1293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1779:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 't') ADVANCE(1866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1780:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 't') ADVANCE(1138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1781:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 't') ADVANCE(1857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1782:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 't') ADVANCE(1328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1783:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 't') ADVANCE(1855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1784:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 't') ADVANCE(1134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1785:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 't') ADVANCE(1858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1786:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 't') ADVANCE(1156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1787:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 't') ADVANCE(1859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1788:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 't') ADVANCE(1247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1789:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 't') ADVANCE(1163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1790:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 't') ADVANCE(1236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1791:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 't') ADVANCE(1484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1792:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 't') ADVANCE(1576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1793:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 't') ADVANCE(1587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1794:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 't') ADVANCE(1364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1795:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 't') ADVANCE(1451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1796:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 't') ADVANCE(1578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1797:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 't') ADVANCE(1669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1798:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 't') ADVANCE(1758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1799:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 't') ADVANCE(1689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1800:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 't') ADVANCE(1748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1801:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 't') ADVANCE(1730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1802:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 't') ADVANCE(1540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1803:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 't') ADVANCE(1699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1804:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 't') ADVANCE(1523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1805:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 't') ADVANCE(1539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1806:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 't') ADVANCE(1530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1807:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 't') ADVANCE(1546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1808:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 't') ADVANCE(1365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1809:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 't') ADVANCE(1593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1810:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 't') ADVANCE(1595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1811:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 't') ADVANCE(1597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1812:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 't') ADVANCE(1600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1813:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'u') ADVANCE(1653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1814:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'u') ADVANCE(1714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1815:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'u') ADVANCE(1551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1816:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'u') ADVANCE(1521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1817:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'u') ADVANCE(1557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1818:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'u') ADVANCE(1619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1819:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'u') ADVANCE(1471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1820:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'u') ADVANCE(1638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1821:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'v') ADVANCE(1544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1822:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'v') ADVANCE(1524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1823:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'v') ADVANCE(1549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1824:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'v') ADVANCE(1560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1825:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'x') ADVANCE(1891);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1826:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'x') ADVANCE(1258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1827:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'x') ADVANCE(1267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1828:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'x') ADVANCE(1784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1829:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'y') ADVANCE(1259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1830:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'y') ADVANCE(1165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1831:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'y') ADVANCE(1620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1832:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (lookahead == 'z') ADVANCE(1547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1833);
      END_STATE();
    case 1833:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1834:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1834);
      END_STATE();
    case 1835:
      ACCEPT_TOKEN(sym__float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1835);
      END_STATE();
    case 1836:
      ACCEPT_TOKEN(sym__unsigned_int);
      if (lookahead == '.') ADVANCE(1084);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1836);
      END_STATE();
    case 1837:
      ACCEPT_TOKEN(sym__int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1837);
      END_STATE();
    case 1838:
      ACCEPT_TOKEN(anon_sym_LT_QMARKxml);
      END_STATE();
    case 1839:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 1840:
      ACCEPT_TOKEN(sym_version_number);
      END_STATE();
    case 1841:
      ACCEPT_TOKEN(anon_sym_encoding);
      END_STATE();
    case 1842:
      ACCEPT_TOKEN(anon_sym_encoding);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1843:
      ACCEPT_TOKEN(sym_encoding);
      END_STATE();
    case 1844:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(1846);
      END_STATE();
    case 1845:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(1846);
      if (lookahead == '>') ADVANCE(1151);
      END_STATE();
    case 1846:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 1847:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 1848:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 1849:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(1847);
      END_STATE();
    case 1850:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 1851:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1852:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 1853:
      ACCEPT_TOKEN(anon_sym_ceiling);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1854:
      ACCEPT_TOKEN(anon_sym_choose);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1855:
      ACCEPT_TOKEN(anon_sym_concat);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1856:
      ACCEPT_TOKEN(anon_sym_contains);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1857:
      ACCEPT_TOKEN(anon_sym_count);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1858:
      ACCEPT_TOKEN(anon_sym_current);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1859:
      ACCEPT_TOKEN(anon_sym_document);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1860:
      ACCEPT_TOKEN(anon_sym_element_DASHavailable);
      END_STATE();
    case 1861:
      ACCEPT_TOKEN(anon_sym_floor);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1862:
      ACCEPT_TOKEN(anon_sym_format_DASHnumber);
      END_STATE();
    case 1863:
      ACCEPT_TOKEN(anon_sym_function_DASHavailable);
      END_STATE();
    case 1864:
      ACCEPT_TOKEN(anon_sym_generate_DASHid);
      END_STATE();
    case 1865:
      ACCEPT_TOKEN(anon_sym_lang);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1866:
      ACCEPT_TOKEN(anon_sym_last);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1867:
      ACCEPT_TOKEN(anon_sym_local_DASHname);
      END_STATE();
    case 1868:
      ACCEPT_TOKEN(anon_sym_namespace_DASHuri);
      END_STATE();
    case 1869:
      ACCEPT_TOKEN(anon_sym_normalize_DASHspace);
      END_STATE();
    case 1870:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1871:
      ACCEPT_TOKEN(anon_sym_number);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1872:
      ACCEPT_TOKEN(anon_sym_position);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1873:
      ACCEPT_TOKEN(anon_sym_round);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1874:
      ACCEPT_TOKEN(anon_sym_starts_DASHwith);
      END_STATE();
    case 1875:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == '-') ADVANCE(581);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1876:
      ACCEPT_TOKEN(anon_sym_string_DASHlength);
      END_STATE();
    case 1877:
      ACCEPT_TOKEN(anon_sym_substring);
      if (lookahead == '-') ADVANCE(191);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1878:
      ACCEPT_TOKEN(anon_sym_substring_DASHafter);
      END_STATE();
    case 1879:
      ACCEPT_TOKEN(anon_sym_substring_DASHbefore);
      END_STATE();
    case 1880:
      ACCEPT_TOKEN(anon_sym_sum);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1881:
      ACCEPT_TOKEN(anon_sym_system_DASHproperty);
      END_STATE();
    case 1882:
      ACCEPT_TOKEN(anon_sym_translate);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1883:
      ACCEPT_TOKEN(anon_sym_unparsed_DASHentity_DASHurl);
      END_STATE();
    case 1884:
      ACCEPT_TOKEN(anon_sym_base64Encode);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1885:
      ACCEPT_TOKEN(anon_sym_base64Decode);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1886:
      ACCEPT_TOKEN(anon_sym_get_DASHproperty_LPAREN);
      END_STATE();
    case 1887:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 1888:
      ACCEPT_TOKEN(anon_sym_DOLLARbody);
      END_STATE();
    case 1889:
      ACCEPT_TOKEN(anon_sym_DOLLARheader);
      END_STATE();
    case 1890:
      ACCEPT_TOKEN(anon_sym_DOLLARaxis2);
      END_STATE();
    case 1891:
      ACCEPT_TOKEN(anon_sym_ctx);
      if (lookahead == '.') ADVANCE(1834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1833);
      END_STATE();
    case 1892:
      ACCEPT_TOKEN(anon_sym_DOLLARtrp);
      END_STATE();
    case 1893:
      ACCEPT_TOKEN(anon_sym_DOLLARurl);
      END_STATE();
    case 1894:
      ACCEPT_TOKEN(anon_sym_DOLLARfunc);
      END_STATE();
    case 1895:
      ACCEPT_TOKEN(anon_sym_DOLLARenv);
      END_STATE();
    case 1896:
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
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 7},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 7},
  [166] = {.lex_state = 7},
  [167] = {.lex_state = 7},
  [168] = {.lex_state = 7},
  [169] = {.lex_state = 7},
  [170] = {.lex_state = 7},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 7},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 7},
  [188] = {.lex_state = 7},
  [189] = {.lex_state = 7},
  [190] = {.lex_state = 7},
  [191] = {.lex_state = 7},
  [192] = {.lex_state = 7},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 7},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 7},
  [205] = {.lex_state = 7},
  [206] = {.lex_state = 7},
  [207] = {.lex_state = 7},
  [208] = {.lex_state = 7},
  [209] = {.lex_state = 7},
  [210] = {.lex_state = 7},
  [211] = {.lex_state = 7},
  [212] = {.lex_state = 7},
  [213] = {.lex_state = 7},
  [214] = {.lex_state = 7},
  [215] = {.lex_state = 7},
  [216] = {.lex_state = 7},
  [217] = {.lex_state = 7},
  [218] = {.lex_state = 7},
  [219] = {.lex_state = 7},
  [220] = {.lex_state = 7},
  [221] = {.lex_state = 7},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 7},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 1},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 7},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 7},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 7},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 1},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 9},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 7},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 1},
  [273] = {.lex_state = 7},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 7},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 7},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 7},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 7},
  [288] = {.lex_state = 7},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 7},
  [298] = {.lex_state = 6},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 7},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 7},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 7},
  [310] = {.lex_state = 7},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 7},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 6},
  [322] = {.lex_state = 7},
  [323] = {.lex_state = 6},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 7},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 7},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 30},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 7},
  [342] = {.lex_state = 30},
  [343] = {.lex_state = 30},
  [344] = {.lex_state = 7},
  [345] = {.lex_state = 30},
  [346] = {.lex_state = 30},
  [347] = {.lex_state = 30},
  [348] = {.lex_state = 30},
  [349] = {.lex_state = 30},
  [350] = {.lex_state = 7},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 7},
  [353] = {.lex_state = 7},
  [354] = {.lex_state = 7},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 7},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 7},
  [365] = {.lex_state = 30},
  [366] = {.lex_state = 7},
  [367] = {.lex_state = 7},
  [368] = {.lex_state = 30},
  [369] = {.lex_state = 30},
  [370] = {.lex_state = 30},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 7},
  [373] = {.lex_state = 30},
  [374] = {.lex_state = 30},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 30},
  [377] = {.lex_state = 30},
  [378] = {.lex_state = 7},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 7},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 30},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 1341},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 9},
  [389] = {.lex_state = 30},
  [390] = {.lex_state = 7},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 7},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 7},
  [395] = {.lex_state = 7},
  [396] = {.lex_state = 9},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 7},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 7},
  [404] = {.lex_state = 1341},
  [405] = {.lex_state = 6},
  [406] = {.lex_state = 7},
  [407] = {.lex_state = 7},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 7},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 7},
  [414] = {.lex_state = 30},
  [415] = {.lex_state = 30},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 30},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 7},
  [420] = {.lex_state = 30},
  [421] = {.lex_state = 1341},
  [422] = {.lex_state = 7},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 30},
  [425] = {.lex_state = 30},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 7},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 30},
  [430] = {.lex_state = 30},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 30},
  [434] = {.lex_state = 30},
  [435] = {.lex_state = 7},
  [436] = {.lex_state = 30},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 7},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 30},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 9},
  [443] = {.lex_state = 30},
  [444] = {.lex_state = 7},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 1341},
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
  [479] = {.lex_state = 7},
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
  [522] = {.lex_state = 0},
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
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 7},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 7},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 7},
  [551] = {.lex_state = 7},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 7},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
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
  [590] = {.lex_state = 7},
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
  [638] = {.lex_state = 7},
  [639] = {.lex_state = 7},
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
  [664] = {.lex_state = 7},
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
  [681] = {.lex_state = 9},
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
  [695] = {.lex_state = 7},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 9},
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
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 7},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 0},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 0},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 0},
  [811] = {.lex_state = 0},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 0},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 0},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 0},
  [833] = {.lex_state = 0},
  [834] = {.lex_state = 0},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 0},
  [837] = {.lex_state = 0},
  [838] = {.lex_state = 0},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 0},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 0},
  [845] = {.lex_state = 0},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 0},
  [850] = {.lex_state = 0},
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
    [anon_sym_LTapi] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHapi_GT] = ACTIONS(1),
    [anon_sym_LTresource] = ACTIONS(1),
    [anon_sym_LT_SLASHresource_GT] = ACTIONS(1),
    [anon_sym_LTinSequence_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHinSequence_GT] = ACTIONS(1),
    [anon_sym_LToutSequence_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHoutSequence_GT] = ACTIONS(1),
    [anon_sym_LTfaultSequence_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHfaultSequence_GT] = ACTIONS(1),
    [anon_sym_methods] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_uri_DASHtemplate] = ACTIONS(1),
    [anon_sym_xmlns] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_context] = ACTIONS(1),
    [anon_sym_hostname] = ACTIONS(1),
    [anon_sym_port] = ACTIONS(1),
    [anon_sym_version] = ACTIONS(1),
    [anon_sym_swagger] = ACTIONS(1),
    [anon_sym_LTsequence] = ACTIONS(1),
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
    [anon_sym_LT_SLASHargs_GT] = ACTIONS(1),
    [anon_sym_evaluator] = ACTIONS(1),
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
    [anon_sym_value] = ACTIONS(1),
    [anon_sym_expression] = ACTIONS(1),
    [anon_sym_json_DASHeval_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [sym_document] = STATE(806),
    [sym__definition] = STATE(203),
    [sym_api_definition] = STATE(203),
    [sym_sequence_definition] = STATE(203),
    [sym_xml_declaration] = STATE(198),
    [aux_sym_document_repeat1] = STATE(203),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LTapi] = ACTIONS(7),
    [anon_sym_LTsequence] = ACTIONS(9),
    [anon_sym_LT_QMARKxml] = ACTIONS(11),
  },
  [2] = {
    [sym_json_eval] = STATE(827),
    [sym_xpath] = STATE(827),
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
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_name] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_json_DASHeval_LPAREN] = ACTIONS(21),
    [anon_sym_id] = ACTIONS(23),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [sym__xpath_node] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_boolean] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(33),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [anon_sym_current] = ACTIONS(41),
    [anon_sym_document] = ACTIONS(43),
    [anon_sym_element_DASHavailable] = ACTIONS(45),
    [anon_sym_floor] = ACTIONS(47),
    [anon_sym_format_DASHnumber] = ACTIONS(49),
    [anon_sym_function_DASHavailable] = ACTIONS(51),
    [anon_sym_generate_DASHid] = ACTIONS(53),
    [anon_sym_lang] = ACTIONS(55),
    [anon_sym_last] = ACTIONS(57),
    [anon_sym_local_DASHname] = ACTIONS(59),
    [anon_sym_namespace_DASHuri] = ACTIONS(61),
    [anon_sym_normalize_DASHspace] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_number] = ACTIONS(67),
    [anon_sym_position] = ACTIONS(69),
    [anon_sym_round] = ACTIONS(71),
    [anon_sym_starts_DASHwith] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_string_DASHlength] = ACTIONS(77),
    [anon_sym_substring] = ACTIONS(79),
    [anon_sym_substring_DASHafter] = ACTIONS(81),
    [anon_sym_substring_DASHbefore] = ACTIONS(83),
    [anon_sym_sum] = ACTIONS(85),
    [anon_sym_system_DASHproperty] = ACTIONS(87),
    [anon_sym_translate] = ACTIONS(89),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(91),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64Decode] = ACTIONS(95),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(97),
    [anon_sym_DOLLARbody] = ACTIONS(99),
    [anon_sym_DOLLARheader] = ACTIONS(99),
    [anon_sym_DOLLARaxis2] = ACTIONS(99),
    [anon_sym_ctx] = ACTIONS(101),
    [anon_sym_DOLLARtrp] = ACTIONS(99),
    [anon_sym_DOLLARurl] = ACTIONS(99),
    [anon_sym_DOLLARfunc] = ACTIONS(99),
    [anon_sym_DOLLARenv] = ACTIONS(99),
  },
  [3] = {
    [sym_json_eval] = STATE(707),
    [sym_xpath] = STATE(707),
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
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_name] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_json_DASHeval_LPAREN] = ACTIONS(21),
    [anon_sym_id] = ACTIONS(23),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [sym__xpath_node] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_boolean] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(33),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [anon_sym_current] = ACTIONS(41),
    [anon_sym_document] = ACTIONS(43),
    [anon_sym_element_DASHavailable] = ACTIONS(45),
    [anon_sym_floor] = ACTIONS(47),
    [anon_sym_format_DASHnumber] = ACTIONS(49),
    [anon_sym_function_DASHavailable] = ACTIONS(51),
    [anon_sym_generate_DASHid] = ACTIONS(53),
    [anon_sym_lang] = ACTIONS(55),
    [anon_sym_last] = ACTIONS(57),
    [anon_sym_local_DASHname] = ACTIONS(59),
    [anon_sym_namespace_DASHuri] = ACTIONS(61),
    [anon_sym_normalize_DASHspace] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_number] = ACTIONS(67),
    [anon_sym_position] = ACTIONS(69),
    [anon_sym_round] = ACTIONS(71),
    [anon_sym_starts_DASHwith] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_string_DASHlength] = ACTIONS(77),
    [anon_sym_substring] = ACTIONS(79),
    [anon_sym_substring_DASHafter] = ACTIONS(81),
    [anon_sym_substring_DASHbefore] = ACTIONS(83),
    [anon_sym_sum] = ACTIONS(85),
    [anon_sym_system_DASHproperty] = ACTIONS(87),
    [anon_sym_translate] = ACTIONS(89),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(91),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64Decode] = ACTIONS(95),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(97),
    [anon_sym_DOLLARbody] = ACTIONS(99),
    [anon_sym_DOLLARheader] = ACTIONS(99),
    [anon_sym_DOLLARaxis2] = ACTIONS(99),
    [anon_sym_ctx] = ACTIONS(101),
    [anon_sym_DOLLARtrp] = ACTIONS(99),
    [anon_sym_DOLLARurl] = ACTIONS(99),
    [anon_sym_DOLLARfunc] = ACTIONS(99),
    [anon_sym_DOLLARenv] = ACTIONS(99),
  },
  [4] = {
    [sym_json_eval] = STATE(732),
    [sym_xpath] = STATE(732),
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
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_name] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_json_DASHeval_LPAREN] = ACTIONS(21),
    [anon_sym_id] = ACTIONS(23),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [sym__xpath_node] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_boolean] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(33),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [anon_sym_current] = ACTIONS(41),
    [anon_sym_document] = ACTIONS(43),
    [anon_sym_element_DASHavailable] = ACTIONS(45),
    [anon_sym_floor] = ACTIONS(47),
    [anon_sym_format_DASHnumber] = ACTIONS(49),
    [anon_sym_function_DASHavailable] = ACTIONS(51),
    [anon_sym_generate_DASHid] = ACTIONS(53),
    [anon_sym_lang] = ACTIONS(55),
    [anon_sym_last] = ACTIONS(57),
    [anon_sym_local_DASHname] = ACTIONS(59),
    [anon_sym_namespace_DASHuri] = ACTIONS(61),
    [anon_sym_normalize_DASHspace] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_number] = ACTIONS(67),
    [anon_sym_position] = ACTIONS(69),
    [anon_sym_round] = ACTIONS(71),
    [anon_sym_starts_DASHwith] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_string_DASHlength] = ACTIONS(77),
    [anon_sym_substring] = ACTIONS(79),
    [anon_sym_substring_DASHafter] = ACTIONS(81),
    [anon_sym_substring_DASHbefore] = ACTIONS(83),
    [anon_sym_sum] = ACTIONS(85),
    [anon_sym_system_DASHproperty] = ACTIONS(87),
    [anon_sym_translate] = ACTIONS(89),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(91),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64Decode] = ACTIONS(95),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(97),
    [anon_sym_DOLLARbody] = ACTIONS(99),
    [anon_sym_DOLLARheader] = ACTIONS(99),
    [anon_sym_DOLLARaxis2] = ACTIONS(99),
    [anon_sym_ctx] = ACTIONS(101),
    [anon_sym_DOLLARtrp] = ACTIONS(99),
    [anon_sym_DOLLARurl] = ACTIONS(99),
    [anon_sym_DOLLARfunc] = ACTIONS(99),
    [anon_sym_DOLLARenv] = ACTIONS(99),
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
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_true] = ACTIONS(105),
    [anon_sym_false] = ACTIONS(108),
    [sym_comment] = ACTIONS(3),
    [anon_sym_name] = ACTIONS(111),
    [anon_sym_key] = ACTIONS(114),
    [anon_sym_RPAREN] = ACTIONS(103),
    [anon_sym_id] = ACTIONS(117),
    [aux_sym_identifier_token1] = ACTIONS(120),
    [sym__xpath_node] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(120),
    [anon_sym_SLASH_SLASH] = ACTIONS(123),
    [anon_sym_DOT_DOT] = ACTIONS(123),
    [anon_sym_DOT] = ACTIONS(120),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_boolean] = ACTIONS(126),
    [anon_sym_ceiling] = ACTIONS(129),
    [anon_sym_choose] = ACTIONS(132),
    [anon_sym_concat] = ACTIONS(135),
    [anon_sym_contains] = ACTIONS(138),
    [anon_sym_count] = ACTIONS(141),
    [anon_sym_current] = ACTIONS(144),
    [anon_sym_document] = ACTIONS(147),
    [anon_sym_element_DASHavailable] = ACTIONS(150),
    [anon_sym_floor] = ACTIONS(153),
    [anon_sym_format_DASHnumber] = ACTIONS(156),
    [anon_sym_function_DASHavailable] = ACTIONS(159),
    [anon_sym_generate_DASHid] = ACTIONS(162),
    [anon_sym_lang] = ACTIONS(165),
    [anon_sym_last] = ACTIONS(168),
    [anon_sym_local_DASHname] = ACTIONS(171),
    [anon_sym_namespace_DASHuri] = ACTIONS(174),
    [anon_sym_normalize_DASHspace] = ACTIONS(177),
    [anon_sym_not] = ACTIONS(180),
    [anon_sym_number] = ACTIONS(183),
    [anon_sym_position] = ACTIONS(186),
    [anon_sym_round] = ACTIONS(189),
    [anon_sym_starts_DASHwith] = ACTIONS(192),
    [anon_sym_string] = ACTIONS(195),
    [anon_sym_string_DASHlength] = ACTIONS(198),
    [anon_sym_substring] = ACTIONS(201),
    [anon_sym_substring_DASHafter] = ACTIONS(204),
    [anon_sym_substring_DASHbefore] = ACTIONS(207),
    [anon_sym_sum] = ACTIONS(210),
    [anon_sym_system_DASHproperty] = ACTIONS(213),
    [anon_sym_translate] = ACTIONS(216),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(219),
    [anon_sym_base64Encode] = ACTIONS(222),
    [anon_sym_base64Decode] = ACTIONS(225),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(228),
    [anon_sym_DOLLARbody] = ACTIONS(231),
    [anon_sym_DOLLARheader] = ACTIONS(231),
    [anon_sym_DOLLARaxis2] = ACTIONS(231),
    [anon_sym_ctx] = ACTIONS(234),
    [anon_sym_DOLLARtrp] = ACTIONS(231),
    [anon_sym_DOLLARurl] = ACTIONS(231),
    [anon_sym_DOLLARfunc] = ACTIONS(231),
    [anon_sym_DOLLARenv] = ACTIONS(231),
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
    [anon_sym_DQUOTE] = ACTIONS(237),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_name] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(237),
    [anon_sym_id] = ACTIONS(23),
    [aux_sym_identifier_token1] = ACTIONS(239),
    [sym__xpath_node] = ACTIONS(239),
    [anon_sym_SLASH] = ACTIONS(239),
    [anon_sym_SLASH_SLASH] = ACTIONS(241),
    [anon_sym_DOT_DOT] = ACTIONS(241),
    [anon_sym_DOT] = ACTIONS(239),
    [anon_sym_AT] = ACTIONS(241),
    [anon_sym_boolean] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(33),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [anon_sym_current] = ACTIONS(41),
    [anon_sym_document] = ACTIONS(43),
    [anon_sym_element_DASHavailable] = ACTIONS(45),
    [anon_sym_floor] = ACTIONS(47),
    [anon_sym_format_DASHnumber] = ACTIONS(49),
    [anon_sym_function_DASHavailable] = ACTIONS(51),
    [anon_sym_generate_DASHid] = ACTIONS(53),
    [anon_sym_lang] = ACTIONS(55),
    [anon_sym_last] = ACTIONS(57),
    [anon_sym_local_DASHname] = ACTIONS(59),
    [anon_sym_namespace_DASHuri] = ACTIONS(61),
    [anon_sym_normalize_DASHspace] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_number] = ACTIONS(67),
    [anon_sym_position] = ACTIONS(69),
    [anon_sym_round] = ACTIONS(71),
    [anon_sym_starts_DASHwith] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_string_DASHlength] = ACTIONS(77),
    [anon_sym_substring] = ACTIONS(79),
    [anon_sym_substring_DASHafter] = ACTIONS(81),
    [anon_sym_substring_DASHbefore] = ACTIONS(83),
    [anon_sym_sum] = ACTIONS(85),
    [anon_sym_system_DASHproperty] = ACTIONS(87),
    [anon_sym_translate] = ACTIONS(89),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(91),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64Decode] = ACTIONS(95),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(97),
    [anon_sym_DOLLARbody] = ACTIONS(99),
    [anon_sym_DOLLARheader] = ACTIONS(99),
    [anon_sym_DOLLARaxis2] = ACTIONS(99),
    [anon_sym_ctx] = ACTIONS(101),
    [anon_sym_DOLLARtrp] = ACTIONS(99),
    [anon_sym_DOLLARurl] = ACTIONS(99),
    [anon_sym_DOLLARfunc] = ACTIONS(99),
    [anon_sym_DOLLARenv] = ACTIONS(99),
  },
  [7] = {
    [sym_xpath] = STATE(513),
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
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_name] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(23),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [sym__xpath_node] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_boolean] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(33),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [anon_sym_current] = ACTIONS(41),
    [anon_sym_document] = ACTIONS(43),
    [anon_sym_element_DASHavailable] = ACTIONS(45),
    [anon_sym_floor] = ACTIONS(47),
    [anon_sym_format_DASHnumber] = ACTIONS(49),
    [anon_sym_function_DASHavailable] = ACTIONS(51),
    [anon_sym_generate_DASHid] = ACTIONS(53),
    [anon_sym_lang] = ACTIONS(55),
    [anon_sym_last] = ACTIONS(57),
    [anon_sym_local_DASHname] = ACTIONS(59),
    [anon_sym_namespace_DASHuri] = ACTIONS(61),
    [anon_sym_normalize_DASHspace] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_number] = ACTIONS(67),
    [anon_sym_position] = ACTIONS(69),
    [anon_sym_round] = ACTIONS(71),
    [anon_sym_starts_DASHwith] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_string_DASHlength] = ACTIONS(77),
    [anon_sym_substring] = ACTIONS(79),
    [anon_sym_substring_DASHafter] = ACTIONS(81),
    [anon_sym_substring_DASHbefore] = ACTIONS(83),
    [anon_sym_sum] = ACTIONS(85),
    [anon_sym_system_DASHproperty] = ACTIONS(87),
    [anon_sym_translate] = ACTIONS(89),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(91),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64Decode] = ACTIONS(95),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(97),
    [anon_sym_DOLLARbody] = ACTIONS(99),
    [anon_sym_DOLLARheader] = ACTIONS(99),
    [anon_sym_DOLLARaxis2] = ACTIONS(99),
    [anon_sym_ctx] = ACTIONS(101),
    [anon_sym_DOLLARtrp] = ACTIONS(99),
    [anon_sym_DOLLARurl] = ACTIONS(99),
    [anon_sym_DOLLARfunc] = ACTIONS(99),
    [anon_sym_DOLLARenv] = ACTIONS(99),
  },
  [8] = {
    [sym_xpath] = STATE(488),
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
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_name] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(23),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [sym__xpath_node] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_boolean] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(33),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [anon_sym_current] = ACTIONS(41),
    [anon_sym_document] = ACTIONS(43),
    [anon_sym_element_DASHavailable] = ACTIONS(45),
    [anon_sym_floor] = ACTIONS(47),
    [anon_sym_format_DASHnumber] = ACTIONS(49),
    [anon_sym_function_DASHavailable] = ACTIONS(51),
    [anon_sym_generate_DASHid] = ACTIONS(53),
    [anon_sym_lang] = ACTIONS(55),
    [anon_sym_last] = ACTIONS(57),
    [anon_sym_local_DASHname] = ACTIONS(59),
    [anon_sym_namespace_DASHuri] = ACTIONS(61),
    [anon_sym_normalize_DASHspace] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_number] = ACTIONS(67),
    [anon_sym_position] = ACTIONS(69),
    [anon_sym_round] = ACTIONS(71),
    [anon_sym_starts_DASHwith] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_string_DASHlength] = ACTIONS(77),
    [anon_sym_substring] = ACTIONS(79),
    [anon_sym_substring_DASHafter] = ACTIONS(81),
    [anon_sym_substring_DASHbefore] = ACTIONS(83),
    [anon_sym_sum] = ACTIONS(85),
    [anon_sym_system_DASHproperty] = ACTIONS(87),
    [anon_sym_translate] = ACTIONS(89),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(91),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64Decode] = ACTIONS(95),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(97),
    [anon_sym_DOLLARbody] = ACTIONS(99),
    [anon_sym_DOLLARheader] = ACTIONS(99),
    [anon_sym_DOLLARaxis2] = ACTIONS(99),
    [anon_sym_ctx] = ACTIONS(101),
    [anon_sym_DOLLARtrp] = ACTIONS(99),
    [anon_sym_DOLLARurl] = ACTIONS(99),
    [anon_sym_DOLLARfunc] = ACTIONS(99),
    [anon_sym_DOLLARenv] = ACTIONS(99),
  },
  [9] = {
    [sym_xpath] = STATE(595),
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
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_name] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(23),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [sym__xpath_node] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_boolean] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(33),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [anon_sym_current] = ACTIONS(41),
    [anon_sym_document] = ACTIONS(43),
    [anon_sym_element_DASHavailable] = ACTIONS(45),
    [anon_sym_floor] = ACTIONS(47),
    [anon_sym_format_DASHnumber] = ACTIONS(49),
    [anon_sym_function_DASHavailable] = ACTIONS(51),
    [anon_sym_generate_DASHid] = ACTIONS(53),
    [anon_sym_lang] = ACTIONS(55),
    [anon_sym_last] = ACTIONS(57),
    [anon_sym_local_DASHname] = ACTIONS(59),
    [anon_sym_namespace_DASHuri] = ACTIONS(61),
    [anon_sym_normalize_DASHspace] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_number] = ACTIONS(67),
    [anon_sym_position] = ACTIONS(69),
    [anon_sym_round] = ACTIONS(71),
    [anon_sym_starts_DASHwith] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_string_DASHlength] = ACTIONS(77),
    [anon_sym_substring] = ACTIONS(79),
    [anon_sym_substring_DASHafter] = ACTIONS(81),
    [anon_sym_substring_DASHbefore] = ACTIONS(83),
    [anon_sym_sum] = ACTIONS(85),
    [anon_sym_system_DASHproperty] = ACTIONS(87),
    [anon_sym_translate] = ACTIONS(89),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(91),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64Decode] = ACTIONS(95),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(97),
    [anon_sym_DOLLARbody] = ACTIONS(99),
    [anon_sym_DOLLARheader] = ACTIONS(99),
    [anon_sym_DOLLARaxis2] = ACTIONS(99),
    [anon_sym_ctx] = ACTIONS(101),
    [anon_sym_DOLLARtrp] = ACTIONS(99),
    [anon_sym_DOLLARurl] = ACTIONS(99),
    [anon_sym_DOLLARfunc] = ACTIONS(99),
    [anon_sym_DOLLARenv] = ACTIONS(99),
  },
  [10] = {
    [sym_xpath] = STATE(520),
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
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_name] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(23),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [sym__xpath_node] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_boolean] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(33),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [anon_sym_current] = ACTIONS(41),
    [anon_sym_document] = ACTIONS(43),
    [anon_sym_element_DASHavailable] = ACTIONS(45),
    [anon_sym_floor] = ACTIONS(47),
    [anon_sym_format_DASHnumber] = ACTIONS(49),
    [anon_sym_function_DASHavailable] = ACTIONS(51),
    [anon_sym_generate_DASHid] = ACTIONS(53),
    [anon_sym_lang] = ACTIONS(55),
    [anon_sym_last] = ACTIONS(57),
    [anon_sym_local_DASHname] = ACTIONS(59),
    [anon_sym_namespace_DASHuri] = ACTIONS(61),
    [anon_sym_normalize_DASHspace] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_number] = ACTIONS(67),
    [anon_sym_position] = ACTIONS(69),
    [anon_sym_round] = ACTIONS(71),
    [anon_sym_starts_DASHwith] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_string_DASHlength] = ACTIONS(77),
    [anon_sym_substring] = ACTIONS(79),
    [anon_sym_substring_DASHafter] = ACTIONS(81),
    [anon_sym_substring_DASHbefore] = ACTIONS(83),
    [anon_sym_sum] = ACTIONS(85),
    [anon_sym_system_DASHproperty] = ACTIONS(87),
    [anon_sym_translate] = ACTIONS(89),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(91),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64Decode] = ACTIONS(95),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(97),
    [anon_sym_DOLLARbody] = ACTIONS(99),
    [anon_sym_DOLLARheader] = ACTIONS(99),
    [anon_sym_DOLLARaxis2] = ACTIONS(99),
    [anon_sym_ctx] = ACTIONS(101),
    [anon_sym_DOLLARtrp] = ACTIONS(99),
    [anon_sym_DOLLARurl] = ACTIONS(99),
    [anon_sym_DOLLARfunc] = ACTIONS(99),
    [anon_sym_DOLLARenv] = ACTIONS(99),
  },
  [11] = {
    [sym_xpath] = STATE(519),
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
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_name] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(23),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [sym__xpath_node] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_boolean] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(33),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [anon_sym_current] = ACTIONS(41),
    [anon_sym_document] = ACTIONS(43),
    [anon_sym_element_DASHavailable] = ACTIONS(45),
    [anon_sym_floor] = ACTIONS(47),
    [anon_sym_format_DASHnumber] = ACTIONS(49),
    [anon_sym_function_DASHavailable] = ACTIONS(51),
    [anon_sym_generate_DASHid] = ACTIONS(53),
    [anon_sym_lang] = ACTIONS(55),
    [anon_sym_last] = ACTIONS(57),
    [anon_sym_local_DASHname] = ACTIONS(59),
    [anon_sym_namespace_DASHuri] = ACTIONS(61),
    [anon_sym_normalize_DASHspace] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_number] = ACTIONS(67),
    [anon_sym_position] = ACTIONS(69),
    [anon_sym_round] = ACTIONS(71),
    [anon_sym_starts_DASHwith] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_string_DASHlength] = ACTIONS(77),
    [anon_sym_substring] = ACTIONS(79),
    [anon_sym_substring_DASHafter] = ACTIONS(81),
    [anon_sym_substring_DASHbefore] = ACTIONS(83),
    [anon_sym_sum] = ACTIONS(85),
    [anon_sym_system_DASHproperty] = ACTIONS(87),
    [anon_sym_translate] = ACTIONS(89),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(91),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64Decode] = ACTIONS(95),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(97),
    [anon_sym_DOLLARbody] = ACTIONS(99),
    [anon_sym_DOLLARheader] = ACTIONS(99),
    [anon_sym_DOLLARaxis2] = ACTIONS(99),
    [anon_sym_ctx] = ACTIONS(101),
    [anon_sym_DOLLARtrp] = ACTIONS(99),
    [anon_sym_DOLLARurl] = ACTIONS(99),
    [anon_sym_DOLLARfunc] = ACTIONS(99),
    [anon_sym_DOLLARenv] = ACTIONS(99),
  },
  [12] = {
    [sym_xpath] = STATE(518),
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
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_name] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(23),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [sym__xpath_node] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_boolean] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(33),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [anon_sym_current] = ACTIONS(41),
    [anon_sym_document] = ACTIONS(43),
    [anon_sym_element_DASHavailable] = ACTIONS(45),
    [anon_sym_floor] = ACTIONS(47),
    [anon_sym_format_DASHnumber] = ACTIONS(49),
    [anon_sym_function_DASHavailable] = ACTIONS(51),
    [anon_sym_generate_DASHid] = ACTIONS(53),
    [anon_sym_lang] = ACTIONS(55),
    [anon_sym_last] = ACTIONS(57),
    [anon_sym_local_DASHname] = ACTIONS(59),
    [anon_sym_namespace_DASHuri] = ACTIONS(61),
    [anon_sym_normalize_DASHspace] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_number] = ACTIONS(67),
    [anon_sym_position] = ACTIONS(69),
    [anon_sym_round] = ACTIONS(71),
    [anon_sym_starts_DASHwith] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_string_DASHlength] = ACTIONS(77),
    [anon_sym_substring] = ACTIONS(79),
    [anon_sym_substring_DASHafter] = ACTIONS(81),
    [anon_sym_substring_DASHbefore] = ACTIONS(83),
    [anon_sym_sum] = ACTIONS(85),
    [anon_sym_system_DASHproperty] = ACTIONS(87),
    [anon_sym_translate] = ACTIONS(89),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(91),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64Decode] = ACTIONS(95),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(97),
    [anon_sym_DOLLARbody] = ACTIONS(99),
    [anon_sym_DOLLARheader] = ACTIONS(99),
    [anon_sym_DOLLARaxis2] = ACTIONS(99),
    [anon_sym_ctx] = ACTIONS(101),
    [anon_sym_DOLLARtrp] = ACTIONS(99),
    [anon_sym_DOLLARurl] = ACTIONS(99),
    [anon_sym_DOLLARfunc] = ACTIONS(99),
    [anon_sym_DOLLARenv] = ACTIONS(99),
  },
  [13] = {
    [sym_xpath] = STATE(517),
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
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_name] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(23),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [sym__xpath_node] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_boolean] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(33),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [anon_sym_current] = ACTIONS(41),
    [anon_sym_document] = ACTIONS(43),
    [anon_sym_element_DASHavailable] = ACTIONS(45),
    [anon_sym_floor] = ACTIONS(47),
    [anon_sym_format_DASHnumber] = ACTIONS(49),
    [anon_sym_function_DASHavailable] = ACTIONS(51),
    [anon_sym_generate_DASHid] = ACTIONS(53),
    [anon_sym_lang] = ACTIONS(55),
    [anon_sym_last] = ACTIONS(57),
    [anon_sym_local_DASHname] = ACTIONS(59),
    [anon_sym_namespace_DASHuri] = ACTIONS(61),
    [anon_sym_normalize_DASHspace] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_number] = ACTIONS(67),
    [anon_sym_position] = ACTIONS(69),
    [anon_sym_round] = ACTIONS(71),
    [anon_sym_starts_DASHwith] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_string_DASHlength] = ACTIONS(77),
    [anon_sym_substring] = ACTIONS(79),
    [anon_sym_substring_DASHafter] = ACTIONS(81),
    [anon_sym_substring_DASHbefore] = ACTIONS(83),
    [anon_sym_sum] = ACTIONS(85),
    [anon_sym_system_DASHproperty] = ACTIONS(87),
    [anon_sym_translate] = ACTIONS(89),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(91),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64Decode] = ACTIONS(95),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(97),
    [anon_sym_DOLLARbody] = ACTIONS(99),
    [anon_sym_DOLLARheader] = ACTIONS(99),
    [anon_sym_DOLLARaxis2] = ACTIONS(99),
    [anon_sym_ctx] = ACTIONS(101),
    [anon_sym_DOLLARtrp] = ACTIONS(99),
    [anon_sym_DOLLARurl] = ACTIONS(99),
    [anon_sym_DOLLARfunc] = ACTIONS(99),
    [anon_sym_DOLLARenv] = ACTIONS(99),
  },
  [14] = {
    [sym_xpath] = STATE(516),
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
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_name] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(23),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [sym__xpath_node] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_boolean] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(33),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [anon_sym_current] = ACTIONS(41),
    [anon_sym_document] = ACTIONS(43),
    [anon_sym_element_DASHavailable] = ACTIONS(45),
    [anon_sym_floor] = ACTIONS(47),
    [anon_sym_format_DASHnumber] = ACTIONS(49),
    [anon_sym_function_DASHavailable] = ACTIONS(51),
    [anon_sym_generate_DASHid] = ACTIONS(53),
    [anon_sym_lang] = ACTIONS(55),
    [anon_sym_last] = ACTIONS(57),
    [anon_sym_local_DASHname] = ACTIONS(59),
    [anon_sym_namespace_DASHuri] = ACTIONS(61),
    [anon_sym_normalize_DASHspace] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_number] = ACTIONS(67),
    [anon_sym_position] = ACTIONS(69),
    [anon_sym_round] = ACTIONS(71),
    [anon_sym_starts_DASHwith] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_string_DASHlength] = ACTIONS(77),
    [anon_sym_substring] = ACTIONS(79),
    [anon_sym_substring_DASHafter] = ACTIONS(81),
    [anon_sym_substring_DASHbefore] = ACTIONS(83),
    [anon_sym_sum] = ACTIONS(85),
    [anon_sym_system_DASHproperty] = ACTIONS(87),
    [anon_sym_translate] = ACTIONS(89),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(91),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64Decode] = ACTIONS(95),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(97),
    [anon_sym_DOLLARbody] = ACTIONS(99),
    [anon_sym_DOLLARheader] = ACTIONS(99),
    [anon_sym_DOLLARaxis2] = ACTIONS(99),
    [anon_sym_ctx] = ACTIONS(101),
    [anon_sym_DOLLARtrp] = ACTIONS(99),
    [anon_sym_DOLLARurl] = ACTIONS(99),
    [anon_sym_DOLLARfunc] = ACTIONS(99),
    [anon_sym_DOLLARenv] = ACTIONS(99),
  },
  [15] = {
    [sym_xpath] = STATE(515),
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
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_name] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(23),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [sym__xpath_node] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_boolean] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(33),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [anon_sym_current] = ACTIONS(41),
    [anon_sym_document] = ACTIONS(43),
    [anon_sym_element_DASHavailable] = ACTIONS(45),
    [anon_sym_floor] = ACTIONS(47),
    [anon_sym_format_DASHnumber] = ACTIONS(49),
    [anon_sym_function_DASHavailable] = ACTIONS(51),
    [anon_sym_generate_DASHid] = ACTIONS(53),
    [anon_sym_lang] = ACTIONS(55),
    [anon_sym_last] = ACTIONS(57),
    [anon_sym_local_DASHname] = ACTIONS(59),
    [anon_sym_namespace_DASHuri] = ACTIONS(61),
    [anon_sym_normalize_DASHspace] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_number] = ACTIONS(67),
    [anon_sym_position] = ACTIONS(69),
    [anon_sym_round] = ACTIONS(71),
    [anon_sym_starts_DASHwith] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_string_DASHlength] = ACTIONS(77),
    [anon_sym_substring] = ACTIONS(79),
    [anon_sym_substring_DASHafter] = ACTIONS(81),
    [anon_sym_substring_DASHbefore] = ACTIONS(83),
    [anon_sym_sum] = ACTIONS(85),
    [anon_sym_system_DASHproperty] = ACTIONS(87),
    [anon_sym_translate] = ACTIONS(89),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(91),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64Decode] = ACTIONS(95),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(97),
    [anon_sym_DOLLARbody] = ACTIONS(99),
    [anon_sym_DOLLARheader] = ACTIONS(99),
    [anon_sym_DOLLARaxis2] = ACTIONS(99),
    [anon_sym_ctx] = ACTIONS(101),
    [anon_sym_DOLLARtrp] = ACTIONS(99),
    [anon_sym_DOLLARurl] = ACTIONS(99),
    [anon_sym_DOLLARfunc] = ACTIONS(99),
    [anon_sym_DOLLARenv] = ACTIONS(99),
  },
  [16] = {
    [sym_xpath] = STATE(514),
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
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_name] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(23),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [sym__xpath_node] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_boolean] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(33),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [anon_sym_current] = ACTIONS(41),
    [anon_sym_document] = ACTIONS(43),
    [anon_sym_element_DASHavailable] = ACTIONS(45),
    [anon_sym_floor] = ACTIONS(47),
    [anon_sym_format_DASHnumber] = ACTIONS(49),
    [anon_sym_function_DASHavailable] = ACTIONS(51),
    [anon_sym_generate_DASHid] = ACTIONS(53),
    [anon_sym_lang] = ACTIONS(55),
    [anon_sym_last] = ACTIONS(57),
    [anon_sym_local_DASHname] = ACTIONS(59),
    [anon_sym_namespace_DASHuri] = ACTIONS(61),
    [anon_sym_normalize_DASHspace] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_number] = ACTIONS(67),
    [anon_sym_position] = ACTIONS(69),
    [anon_sym_round] = ACTIONS(71),
    [anon_sym_starts_DASHwith] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_string_DASHlength] = ACTIONS(77),
    [anon_sym_substring] = ACTIONS(79),
    [anon_sym_substring_DASHafter] = ACTIONS(81),
    [anon_sym_substring_DASHbefore] = ACTIONS(83),
    [anon_sym_sum] = ACTIONS(85),
    [anon_sym_system_DASHproperty] = ACTIONS(87),
    [anon_sym_translate] = ACTIONS(89),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(91),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64Decode] = ACTIONS(95),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(97),
    [anon_sym_DOLLARbody] = ACTIONS(99),
    [anon_sym_DOLLARheader] = ACTIONS(99),
    [anon_sym_DOLLARaxis2] = ACTIONS(99),
    [anon_sym_ctx] = ACTIONS(101),
    [anon_sym_DOLLARtrp] = ACTIONS(99),
    [anon_sym_DOLLARurl] = ACTIONS(99),
    [anon_sym_DOLLARfunc] = ACTIONS(99),
    [anon_sym_DOLLARenv] = ACTIONS(99),
  },
  [17] = {
    [sym_xpath] = STATE(480),
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
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_name] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(23),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [sym__xpath_node] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_boolean] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(33),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [anon_sym_current] = ACTIONS(41),
    [anon_sym_document] = ACTIONS(43),
    [anon_sym_element_DASHavailable] = ACTIONS(45),
    [anon_sym_floor] = ACTIONS(47),
    [anon_sym_format_DASHnumber] = ACTIONS(49),
    [anon_sym_function_DASHavailable] = ACTIONS(51),
    [anon_sym_generate_DASHid] = ACTIONS(53),
    [anon_sym_lang] = ACTIONS(55),
    [anon_sym_last] = ACTIONS(57),
    [anon_sym_local_DASHname] = ACTIONS(59),
    [anon_sym_namespace_DASHuri] = ACTIONS(61),
    [anon_sym_normalize_DASHspace] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_number] = ACTIONS(67),
    [anon_sym_position] = ACTIONS(69),
    [anon_sym_round] = ACTIONS(71),
    [anon_sym_starts_DASHwith] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_string_DASHlength] = ACTIONS(77),
    [anon_sym_substring] = ACTIONS(79),
    [anon_sym_substring_DASHafter] = ACTIONS(81),
    [anon_sym_substring_DASHbefore] = ACTIONS(83),
    [anon_sym_sum] = ACTIONS(85),
    [anon_sym_system_DASHproperty] = ACTIONS(87),
    [anon_sym_translate] = ACTIONS(89),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(91),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64Decode] = ACTIONS(95),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(97),
    [anon_sym_DOLLARbody] = ACTIONS(99),
    [anon_sym_DOLLARheader] = ACTIONS(99),
    [anon_sym_DOLLARaxis2] = ACTIONS(99),
    [anon_sym_ctx] = ACTIONS(101),
    [anon_sym_DOLLARtrp] = ACTIONS(99),
    [anon_sym_DOLLARurl] = ACTIONS(99),
    [anon_sym_DOLLARfunc] = ACTIONS(99),
    [anon_sym_DOLLARenv] = ACTIONS(99),
  },
  [18] = {
    [sym_xpath] = STATE(512),
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
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_name] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(23),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [sym__xpath_node] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_boolean] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(33),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [anon_sym_current] = ACTIONS(41),
    [anon_sym_document] = ACTIONS(43),
    [anon_sym_element_DASHavailable] = ACTIONS(45),
    [anon_sym_floor] = ACTIONS(47),
    [anon_sym_format_DASHnumber] = ACTIONS(49),
    [anon_sym_function_DASHavailable] = ACTIONS(51),
    [anon_sym_generate_DASHid] = ACTIONS(53),
    [anon_sym_lang] = ACTIONS(55),
    [anon_sym_last] = ACTIONS(57),
    [anon_sym_local_DASHname] = ACTIONS(59),
    [anon_sym_namespace_DASHuri] = ACTIONS(61),
    [anon_sym_normalize_DASHspace] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_number] = ACTIONS(67),
    [anon_sym_position] = ACTIONS(69),
    [anon_sym_round] = ACTIONS(71),
    [anon_sym_starts_DASHwith] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_string_DASHlength] = ACTIONS(77),
    [anon_sym_substring] = ACTIONS(79),
    [anon_sym_substring_DASHafter] = ACTIONS(81),
    [anon_sym_substring_DASHbefore] = ACTIONS(83),
    [anon_sym_sum] = ACTIONS(85),
    [anon_sym_system_DASHproperty] = ACTIONS(87),
    [anon_sym_translate] = ACTIONS(89),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(91),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64Decode] = ACTIONS(95),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(97),
    [anon_sym_DOLLARbody] = ACTIONS(99),
    [anon_sym_DOLLARheader] = ACTIONS(99),
    [anon_sym_DOLLARaxis2] = ACTIONS(99),
    [anon_sym_ctx] = ACTIONS(101),
    [anon_sym_DOLLARtrp] = ACTIONS(99),
    [anon_sym_DOLLARurl] = ACTIONS(99),
    [anon_sym_DOLLARfunc] = ACTIONS(99),
    [anon_sym_DOLLARenv] = ACTIONS(99),
  },
  [19] = {
    [sym_xpath] = STATE(511),
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
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_name] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(23),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [sym__xpath_node] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_boolean] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(33),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [anon_sym_current] = ACTIONS(41),
    [anon_sym_document] = ACTIONS(43),
    [anon_sym_element_DASHavailable] = ACTIONS(45),
    [anon_sym_floor] = ACTIONS(47),
    [anon_sym_format_DASHnumber] = ACTIONS(49),
    [anon_sym_function_DASHavailable] = ACTIONS(51),
    [anon_sym_generate_DASHid] = ACTIONS(53),
    [anon_sym_lang] = ACTIONS(55),
    [anon_sym_last] = ACTIONS(57),
    [anon_sym_local_DASHname] = ACTIONS(59),
    [anon_sym_namespace_DASHuri] = ACTIONS(61),
    [anon_sym_normalize_DASHspace] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_number] = ACTIONS(67),
    [anon_sym_position] = ACTIONS(69),
    [anon_sym_round] = ACTIONS(71),
    [anon_sym_starts_DASHwith] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_string_DASHlength] = ACTIONS(77),
    [anon_sym_substring] = ACTIONS(79),
    [anon_sym_substring_DASHafter] = ACTIONS(81),
    [anon_sym_substring_DASHbefore] = ACTIONS(83),
    [anon_sym_sum] = ACTIONS(85),
    [anon_sym_system_DASHproperty] = ACTIONS(87),
    [anon_sym_translate] = ACTIONS(89),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(91),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64Decode] = ACTIONS(95),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(97),
    [anon_sym_DOLLARbody] = ACTIONS(99),
    [anon_sym_DOLLARheader] = ACTIONS(99),
    [anon_sym_DOLLARaxis2] = ACTIONS(99),
    [anon_sym_ctx] = ACTIONS(101),
    [anon_sym_DOLLARtrp] = ACTIONS(99),
    [anon_sym_DOLLARurl] = ACTIONS(99),
    [anon_sym_DOLLARfunc] = ACTIONS(99),
    [anon_sym_DOLLARenv] = ACTIONS(99),
  },
  [20] = {
    [sym_xpath] = STATE(510),
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
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_name] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(23),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [sym__xpath_node] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_boolean] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(33),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [anon_sym_current] = ACTIONS(41),
    [anon_sym_document] = ACTIONS(43),
    [anon_sym_element_DASHavailable] = ACTIONS(45),
    [anon_sym_floor] = ACTIONS(47),
    [anon_sym_format_DASHnumber] = ACTIONS(49),
    [anon_sym_function_DASHavailable] = ACTIONS(51),
    [anon_sym_generate_DASHid] = ACTIONS(53),
    [anon_sym_lang] = ACTIONS(55),
    [anon_sym_last] = ACTIONS(57),
    [anon_sym_local_DASHname] = ACTIONS(59),
    [anon_sym_namespace_DASHuri] = ACTIONS(61),
    [anon_sym_normalize_DASHspace] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_number] = ACTIONS(67),
    [anon_sym_position] = ACTIONS(69),
    [anon_sym_round] = ACTIONS(71),
    [anon_sym_starts_DASHwith] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_string_DASHlength] = ACTIONS(77),
    [anon_sym_substring] = ACTIONS(79),
    [anon_sym_substring_DASHafter] = ACTIONS(81),
    [anon_sym_substring_DASHbefore] = ACTIONS(83),
    [anon_sym_sum] = ACTIONS(85),
    [anon_sym_system_DASHproperty] = ACTIONS(87),
    [anon_sym_translate] = ACTIONS(89),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(91),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64Decode] = ACTIONS(95),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(97),
    [anon_sym_DOLLARbody] = ACTIONS(99),
    [anon_sym_DOLLARheader] = ACTIONS(99),
    [anon_sym_DOLLARaxis2] = ACTIONS(99),
    [anon_sym_ctx] = ACTIONS(101),
    [anon_sym_DOLLARtrp] = ACTIONS(99),
    [anon_sym_DOLLARurl] = ACTIONS(99),
    [anon_sym_DOLLARfunc] = ACTIONS(99),
    [anon_sym_DOLLARenv] = ACTIONS(99),
  },
  [21] = {
    [sym_xpath] = STATE(509),
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
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_name] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(23),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [sym__xpath_node] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_boolean] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(33),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [anon_sym_current] = ACTIONS(41),
    [anon_sym_document] = ACTIONS(43),
    [anon_sym_element_DASHavailable] = ACTIONS(45),
    [anon_sym_floor] = ACTIONS(47),
    [anon_sym_format_DASHnumber] = ACTIONS(49),
    [anon_sym_function_DASHavailable] = ACTIONS(51),
    [anon_sym_generate_DASHid] = ACTIONS(53),
    [anon_sym_lang] = ACTIONS(55),
    [anon_sym_last] = ACTIONS(57),
    [anon_sym_local_DASHname] = ACTIONS(59),
    [anon_sym_namespace_DASHuri] = ACTIONS(61),
    [anon_sym_normalize_DASHspace] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_number] = ACTIONS(67),
    [anon_sym_position] = ACTIONS(69),
    [anon_sym_round] = ACTIONS(71),
    [anon_sym_starts_DASHwith] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_string_DASHlength] = ACTIONS(77),
    [anon_sym_substring] = ACTIONS(79),
    [anon_sym_substring_DASHafter] = ACTIONS(81),
    [anon_sym_substring_DASHbefore] = ACTIONS(83),
    [anon_sym_sum] = ACTIONS(85),
    [anon_sym_system_DASHproperty] = ACTIONS(87),
    [anon_sym_translate] = ACTIONS(89),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(91),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64Decode] = ACTIONS(95),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(97),
    [anon_sym_DOLLARbody] = ACTIONS(99),
    [anon_sym_DOLLARheader] = ACTIONS(99),
    [anon_sym_DOLLARaxis2] = ACTIONS(99),
    [anon_sym_ctx] = ACTIONS(101),
    [anon_sym_DOLLARtrp] = ACTIONS(99),
    [anon_sym_DOLLARurl] = ACTIONS(99),
    [anon_sym_DOLLARfunc] = ACTIONS(99),
    [anon_sym_DOLLARenv] = ACTIONS(99),
  },
  [22] = {
    [sym_xpath] = STATE(508),
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
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_name] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(23),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [sym__xpath_node] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_boolean] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(33),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [anon_sym_current] = ACTIONS(41),
    [anon_sym_document] = ACTIONS(43),
    [anon_sym_element_DASHavailable] = ACTIONS(45),
    [anon_sym_floor] = ACTIONS(47),
    [anon_sym_format_DASHnumber] = ACTIONS(49),
    [anon_sym_function_DASHavailable] = ACTIONS(51),
    [anon_sym_generate_DASHid] = ACTIONS(53),
    [anon_sym_lang] = ACTIONS(55),
    [anon_sym_last] = ACTIONS(57),
    [anon_sym_local_DASHname] = ACTIONS(59),
    [anon_sym_namespace_DASHuri] = ACTIONS(61),
    [anon_sym_normalize_DASHspace] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_number] = ACTIONS(67),
    [anon_sym_position] = ACTIONS(69),
    [anon_sym_round] = ACTIONS(71),
    [anon_sym_starts_DASHwith] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_string_DASHlength] = ACTIONS(77),
    [anon_sym_substring] = ACTIONS(79),
    [anon_sym_substring_DASHafter] = ACTIONS(81),
    [anon_sym_substring_DASHbefore] = ACTIONS(83),
    [anon_sym_sum] = ACTIONS(85),
    [anon_sym_system_DASHproperty] = ACTIONS(87),
    [anon_sym_translate] = ACTIONS(89),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(91),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64Decode] = ACTIONS(95),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(97),
    [anon_sym_DOLLARbody] = ACTIONS(99),
    [anon_sym_DOLLARheader] = ACTIONS(99),
    [anon_sym_DOLLARaxis2] = ACTIONS(99),
    [anon_sym_ctx] = ACTIONS(101),
    [anon_sym_DOLLARtrp] = ACTIONS(99),
    [anon_sym_DOLLARurl] = ACTIONS(99),
    [anon_sym_DOLLARfunc] = ACTIONS(99),
    [anon_sym_DOLLARenv] = ACTIONS(99),
  },
  [23] = {
    [sym_xpath] = STATE(507),
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
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_name] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(23),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [sym__xpath_node] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_boolean] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(33),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [anon_sym_current] = ACTIONS(41),
    [anon_sym_document] = ACTIONS(43),
    [anon_sym_element_DASHavailable] = ACTIONS(45),
    [anon_sym_floor] = ACTIONS(47),
    [anon_sym_format_DASHnumber] = ACTIONS(49),
    [anon_sym_function_DASHavailable] = ACTIONS(51),
    [anon_sym_generate_DASHid] = ACTIONS(53),
    [anon_sym_lang] = ACTIONS(55),
    [anon_sym_last] = ACTIONS(57),
    [anon_sym_local_DASHname] = ACTIONS(59),
    [anon_sym_namespace_DASHuri] = ACTIONS(61),
    [anon_sym_normalize_DASHspace] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_number] = ACTIONS(67),
    [anon_sym_position] = ACTIONS(69),
    [anon_sym_round] = ACTIONS(71),
    [anon_sym_starts_DASHwith] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_string_DASHlength] = ACTIONS(77),
    [anon_sym_substring] = ACTIONS(79),
    [anon_sym_substring_DASHafter] = ACTIONS(81),
    [anon_sym_substring_DASHbefore] = ACTIONS(83),
    [anon_sym_sum] = ACTIONS(85),
    [anon_sym_system_DASHproperty] = ACTIONS(87),
    [anon_sym_translate] = ACTIONS(89),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(91),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64Decode] = ACTIONS(95),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(97),
    [anon_sym_DOLLARbody] = ACTIONS(99),
    [anon_sym_DOLLARheader] = ACTIONS(99),
    [anon_sym_DOLLARaxis2] = ACTIONS(99),
    [anon_sym_ctx] = ACTIONS(101),
    [anon_sym_DOLLARtrp] = ACTIONS(99),
    [anon_sym_DOLLARurl] = ACTIONS(99),
    [anon_sym_DOLLARfunc] = ACTIONS(99),
    [anon_sym_DOLLARenv] = ACTIONS(99),
  },
  [24] = {
    [sym_xpath] = STATE(481),
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
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_name] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(23),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [sym__xpath_node] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_boolean] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(33),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [anon_sym_current] = ACTIONS(41),
    [anon_sym_document] = ACTIONS(43),
    [anon_sym_element_DASHavailable] = ACTIONS(45),
    [anon_sym_floor] = ACTIONS(47),
    [anon_sym_format_DASHnumber] = ACTIONS(49),
    [anon_sym_function_DASHavailable] = ACTIONS(51),
    [anon_sym_generate_DASHid] = ACTIONS(53),
    [anon_sym_lang] = ACTIONS(55),
    [anon_sym_last] = ACTIONS(57),
    [anon_sym_local_DASHname] = ACTIONS(59),
    [anon_sym_namespace_DASHuri] = ACTIONS(61),
    [anon_sym_normalize_DASHspace] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_number] = ACTIONS(67),
    [anon_sym_position] = ACTIONS(69),
    [anon_sym_round] = ACTIONS(71),
    [anon_sym_starts_DASHwith] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_string_DASHlength] = ACTIONS(77),
    [anon_sym_substring] = ACTIONS(79),
    [anon_sym_substring_DASHafter] = ACTIONS(81),
    [anon_sym_substring_DASHbefore] = ACTIONS(83),
    [anon_sym_sum] = ACTIONS(85),
    [anon_sym_system_DASHproperty] = ACTIONS(87),
    [anon_sym_translate] = ACTIONS(89),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(91),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64Decode] = ACTIONS(95),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(97),
    [anon_sym_DOLLARbody] = ACTIONS(99),
    [anon_sym_DOLLARheader] = ACTIONS(99),
    [anon_sym_DOLLARaxis2] = ACTIONS(99),
    [anon_sym_ctx] = ACTIONS(101),
    [anon_sym_DOLLARtrp] = ACTIONS(99),
    [anon_sym_DOLLARurl] = ACTIONS(99),
    [anon_sym_DOLLARfunc] = ACTIONS(99),
    [anon_sym_DOLLARenv] = ACTIONS(99),
  },
  [25] = {
    [sym_xpath] = STATE(502),
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
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_name] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(23),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [sym__xpath_node] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_boolean] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(33),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [anon_sym_current] = ACTIONS(41),
    [anon_sym_document] = ACTIONS(43),
    [anon_sym_element_DASHavailable] = ACTIONS(45),
    [anon_sym_floor] = ACTIONS(47),
    [anon_sym_format_DASHnumber] = ACTIONS(49),
    [anon_sym_function_DASHavailable] = ACTIONS(51),
    [anon_sym_generate_DASHid] = ACTIONS(53),
    [anon_sym_lang] = ACTIONS(55),
    [anon_sym_last] = ACTIONS(57),
    [anon_sym_local_DASHname] = ACTIONS(59),
    [anon_sym_namespace_DASHuri] = ACTIONS(61),
    [anon_sym_normalize_DASHspace] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_number] = ACTIONS(67),
    [anon_sym_position] = ACTIONS(69),
    [anon_sym_round] = ACTIONS(71),
    [anon_sym_starts_DASHwith] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_string_DASHlength] = ACTIONS(77),
    [anon_sym_substring] = ACTIONS(79),
    [anon_sym_substring_DASHafter] = ACTIONS(81),
    [anon_sym_substring_DASHbefore] = ACTIONS(83),
    [anon_sym_sum] = ACTIONS(85),
    [anon_sym_system_DASHproperty] = ACTIONS(87),
    [anon_sym_translate] = ACTIONS(89),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(91),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64Decode] = ACTIONS(95),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(97),
    [anon_sym_DOLLARbody] = ACTIONS(99),
    [anon_sym_DOLLARheader] = ACTIONS(99),
    [anon_sym_DOLLARaxis2] = ACTIONS(99),
    [anon_sym_ctx] = ACTIONS(101),
    [anon_sym_DOLLARtrp] = ACTIONS(99),
    [anon_sym_DOLLARurl] = ACTIONS(99),
    [anon_sym_DOLLARfunc] = ACTIONS(99),
    [anon_sym_DOLLARenv] = ACTIONS(99),
  },
  [26] = {
    [sym_xpath] = STATE(483),
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
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_name] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(23),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [sym__xpath_node] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_boolean] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(33),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [anon_sym_current] = ACTIONS(41),
    [anon_sym_document] = ACTIONS(43),
    [anon_sym_element_DASHavailable] = ACTIONS(45),
    [anon_sym_floor] = ACTIONS(47),
    [anon_sym_format_DASHnumber] = ACTIONS(49),
    [anon_sym_function_DASHavailable] = ACTIONS(51),
    [anon_sym_generate_DASHid] = ACTIONS(53),
    [anon_sym_lang] = ACTIONS(55),
    [anon_sym_last] = ACTIONS(57),
    [anon_sym_local_DASHname] = ACTIONS(59),
    [anon_sym_namespace_DASHuri] = ACTIONS(61),
    [anon_sym_normalize_DASHspace] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_number] = ACTIONS(67),
    [anon_sym_position] = ACTIONS(69),
    [anon_sym_round] = ACTIONS(71),
    [anon_sym_starts_DASHwith] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_string_DASHlength] = ACTIONS(77),
    [anon_sym_substring] = ACTIONS(79),
    [anon_sym_substring_DASHafter] = ACTIONS(81),
    [anon_sym_substring_DASHbefore] = ACTIONS(83),
    [anon_sym_sum] = ACTIONS(85),
    [anon_sym_system_DASHproperty] = ACTIONS(87),
    [anon_sym_translate] = ACTIONS(89),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(91),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64Decode] = ACTIONS(95),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(97),
    [anon_sym_DOLLARbody] = ACTIONS(99),
    [anon_sym_DOLLARheader] = ACTIONS(99),
    [anon_sym_DOLLARaxis2] = ACTIONS(99),
    [anon_sym_ctx] = ACTIONS(101),
    [anon_sym_DOLLARtrp] = ACTIONS(99),
    [anon_sym_DOLLARurl] = ACTIONS(99),
    [anon_sym_DOLLARfunc] = ACTIONS(99),
    [anon_sym_DOLLARenv] = ACTIONS(99),
  },
  [27] = {
    [sym_xpath] = STATE(486),
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
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_name] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(23),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [sym__xpath_node] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_boolean] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(33),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [anon_sym_current] = ACTIONS(41),
    [anon_sym_document] = ACTIONS(43),
    [anon_sym_element_DASHavailable] = ACTIONS(45),
    [anon_sym_floor] = ACTIONS(47),
    [anon_sym_format_DASHnumber] = ACTIONS(49),
    [anon_sym_function_DASHavailable] = ACTIONS(51),
    [anon_sym_generate_DASHid] = ACTIONS(53),
    [anon_sym_lang] = ACTIONS(55),
    [anon_sym_last] = ACTIONS(57),
    [anon_sym_local_DASHname] = ACTIONS(59),
    [anon_sym_namespace_DASHuri] = ACTIONS(61),
    [anon_sym_normalize_DASHspace] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_number] = ACTIONS(67),
    [anon_sym_position] = ACTIONS(69),
    [anon_sym_round] = ACTIONS(71),
    [anon_sym_starts_DASHwith] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_string_DASHlength] = ACTIONS(77),
    [anon_sym_substring] = ACTIONS(79),
    [anon_sym_substring_DASHafter] = ACTIONS(81),
    [anon_sym_substring_DASHbefore] = ACTIONS(83),
    [anon_sym_sum] = ACTIONS(85),
    [anon_sym_system_DASHproperty] = ACTIONS(87),
    [anon_sym_translate] = ACTIONS(89),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(91),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64Decode] = ACTIONS(95),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(97),
    [anon_sym_DOLLARbody] = ACTIONS(99),
    [anon_sym_DOLLARheader] = ACTIONS(99),
    [anon_sym_DOLLARaxis2] = ACTIONS(99),
    [anon_sym_ctx] = ACTIONS(101),
    [anon_sym_DOLLARtrp] = ACTIONS(99),
    [anon_sym_DOLLARurl] = ACTIONS(99),
    [anon_sym_DOLLARfunc] = ACTIONS(99),
    [anon_sym_DOLLARenv] = ACTIONS(99),
  },
  [28] = {
    [sym_xpath] = STATE(487),
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
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_name] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(23),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [sym__xpath_node] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_boolean] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(33),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [anon_sym_current] = ACTIONS(41),
    [anon_sym_document] = ACTIONS(43),
    [anon_sym_element_DASHavailable] = ACTIONS(45),
    [anon_sym_floor] = ACTIONS(47),
    [anon_sym_format_DASHnumber] = ACTIONS(49),
    [anon_sym_function_DASHavailable] = ACTIONS(51),
    [anon_sym_generate_DASHid] = ACTIONS(53),
    [anon_sym_lang] = ACTIONS(55),
    [anon_sym_last] = ACTIONS(57),
    [anon_sym_local_DASHname] = ACTIONS(59),
    [anon_sym_namespace_DASHuri] = ACTIONS(61),
    [anon_sym_normalize_DASHspace] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_number] = ACTIONS(67),
    [anon_sym_position] = ACTIONS(69),
    [anon_sym_round] = ACTIONS(71),
    [anon_sym_starts_DASHwith] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_string_DASHlength] = ACTIONS(77),
    [anon_sym_substring] = ACTIONS(79),
    [anon_sym_substring_DASHafter] = ACTIONS(81),
    [anon_sym_substring_DASHbefore] = ACTIONS(83),
    [anon_sym_sum] = ACTIONS(85),
    [anon_sym_system_DASHproperty] = ACTIONS(87),
    [anon_sym_translate] = ACTIONS(89),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(91),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64Decode] = ACTIONS(95),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(97),
    [anon_sym_DOLLARbody] = ACTIONS(99),
    [anon_sym_DOLLARheader] = ACTIONS(99),
    [anon_sym_DOLLARaxis2] = ACTIONS(99),
    [anon_sym_ctx] = ACTIONS(101),
    [anon_sym_DOLLARtrp] = ACTIONS(99),
    [anon_sym_DOLLARurl] = ACTIONS(99),
    [anon_sym_DOLLARfunc] = ACTIONS(99),
    [anon_sym_DOLLARenv] = ACTIONS(99),
  },
  [29] = {
    [sym_xpath] = STATE(501),
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
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_name] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(23),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [sym__xpath_node] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_boolean] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(33),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [anon_sym_current] = ACTIONS(41),
    [anon_sym_document] = ACTIONS(43),
    [anon_sym_element_DASHavailable] = ACTIONS(45),
    [anon_sym_floor] = ACTIONS(47),
    [anon_sym_format_DASHnumber] = ACTIONS(49),
    [anon_sym_function_DASHavailable] = ACTIONS(51),
    [anon_sym_generate_DASHid] = ACTIONS(53),
    [anon_sym_lang] = ACTIONS(55),
    [anon_sym_last] = ACTIONS(57),
    [anon_sym_local_DASHname] = ACTIONS(59),
    [anon_sym_namespace_DASHuri] = ACTIONS(61),
    [anon_sym_normalize_DASHspace] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_number] = ACTIONS(67),
    [anon_sym_position] = ACTIONS(69),
    [anon_sym_round] = ACTIONS(71),
    [anon_sym_starts_DASHwith] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_string_DASHlength] = ACTIONS(77),
    [anon_sym_substring] = ACTIONS(79),
    [anon_sym_substring_DASHafter] = ACTIONS(81),
    [anon_sym_substring_DASHbefore] = ACTIONS(83),
    [anon_sym_sum] = ACTIONS(85),
    [anon_sym_system_DASHproperty] = ACTIONS(87),
    [anon_sym_translate] = ACTIONS(89),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(91),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64Decode] = ACTIONS(95),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(97),
    [anon_sym_DOLLARbody] = ACTIONS(99),
    [anon_sym_DOLLARheader] = ACTIONS(99),
    [anon_sym_DOLLARaxis2] = ACTIONS(99),
    [anon_sym_ctx] = ACTIONS(101),
    [anon_sym_DOLLARtrp] = ACTIONS(99),
    [anon_sym_DOLLARurl] = ACTIONS(99),
    [anon_sym_DOLLARfunc] = ACTIONS(99),
    [anon_sym_DOLLARenv] = ACTIONS(99),
  },
  [30] = {
    [sym_xpath] = STATE(506),
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
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_name] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(23),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [sym__xpath_node] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_boolean] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(33),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [anon_sym_current] = ACTIONS(41),
    [anon_sym_document] = ACTIONS(43),
    [anon_sym_element_DASHavailable] = ACTIONS(45),
    [anon_sym_floor] = ACTIONS(47),
    [anon_sym_format_DASHnumber] = ACTIONS(49),
    [anon_sym_function_DASHavailable] = ACTIONS(51),
    [anon_sym_generate_DASHid] = ACTIONS(53),
    [anon_sym_lang] = ACTIONS(55),
    [anon_sym_last] = ACTIONS(57),
    [anon_sym_local_DASHname] = ACTIONS(59),
    [anon_sym_namespace_DASHuri] = ACTIONS(61),
    [anon_sym_normalize_DASHspace] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_number] = ACTIONS(67),
    [anon_sym_position] = ACTIONS(69),
    [anon_sym_round] = ACTIONS(71),
    [anon_sym_starts_DASHwith] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_string_DASHlength] = ACTIONS(77),
    [anon_sym_substring] = ACTIONS(79),
    [anon_sym_substring_DASHafter] = ACTIONS(81),
    [anon_sym_substring_DASHbefore] = ACTIONS(83),
    [anon_sym_sum] = ACTIONS(85),
    [anon_sym_system_DASHproperty] = ACTIONS(87),
    [anon_sym_translate] = ACTIONS(89),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(91),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64Decode] = ACTIONS(95),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(97),
    [anon_sym_DOLLARbody] = ACTIONS(99),
    [anon_sym_DOLLARheader] = ACTIONS(99),
    [anon_sym_DOLLARaxis2] = ACTIONS(99),
    [anon_sym_ctx] = ACTIONS(101),
    [anon_sym_DOLLARtrp] = ACTIONS(99),
    [anon_sym_DOLLARurl] = ACTIONS(99),
    [anon_sym_DOLLARfunc] = ACTIONS(99),
    [anon_sym_DOLLARenv] = ACTIONS(99),
  },
  [31] = {
    [sym_xpath] = STATE(505),
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
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_name] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(23),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [sym__xpath_node] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_boolean] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(33),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [anon_sym_current] = ACTIONS(41),
    [anon_sym_document] = ACTIONS(43),
    [anon_sym_element_DASHavailable] = ACTIONS(45),
    [anon_sym_floor] = ACTIONS(47),
    [anon_sym_format_DASHnumber] = ACTIONS(49),
    [anon_sym_function_DASHavailable] = ACTIONS(51),
    [anon_sym_generate_DASHid] = ACTIONS(53),
    [anon_sym_lang] = ACTIONS(55),
    [anon_sym_last] = ACTIONS(57),
    [anon_sym_local_DASHname] = ACTIONS(59),
    [anon_sym_namespace_DASHuri] = ACTIONS(61),
    [anon_sym_normalize_DASHspace] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_number] = ACTIONS(67),
    [anon_sym_position] = ACTIONS(69),
    [anon_sym_round] = ACTIONS(71),
    [anon_sym_starts_DASHwith] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_string_DASHlength] = ACTIONS(77),
    [anon_sym_substring] = ACTIONS(79),
    [anon_sym_substring_DASHafter] = ACTIONS(81),
    [anon_sym_substring_DASHbefore] = ACTIONS(83),
    [anon_sym_sum] = ACTIONS(85),
    [anon_sym_system_DASHproperty] = ACTIONS(87),
    [anon_sym_translate] = ACTIONS(89),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(91),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64Decode] = ACTIONS(95),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(97),
    [anon_sym_DOLLARbody] = ACTIONS(99),
    [anon_sym_DOLLARheader] = ACTIONS(99),
    [anon_sym_DOLLARaxis2] = ACTIONS(99),
    [anon_sym_ctx] = ACTIONS(101),
    [anon_sym_DOLLARtrp] = ACTIONS(99),
    [anon_sym_DOLLARurl] = ACTIONS(99),
    [anon_sym_DOLLARfunc] = ACTIONS(99),
    [anon_sym_DOLLARenv] = ACTIONS(99),
  },
  [32] = {
    [sym_xpath] = STATE(504),
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
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_name] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(23),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [sym__xpath_node] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_boolean] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(33),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [anon_sym_current] = ACTIONS(41),
    [anon_sym_document] = ACTIONS(43),
    [anon_sym_element_DASHavailable] = ACTIONS(45),
    [anon_sym_floor] = ACTIONS(47),
    [anon_sym_format_DASHnumber] = ACTIONS(49),
    [anon_sym_function_DASHavailable] = ACTIONS(51),
    [anon_sym_generate_DASHid] = ACTIONS(53),
    [anon_sym_lang] = ACTIONS(55),
    [anon_sym_last] = ACTIONS(57),
    [anon_sym_local_DASHname] = ACTIONS(59),
    [anon_sym_namespace_DASHuri] = ACTIONS(61),
    [anon_sym_normalize_DASHspace] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_number] = ACTIONS(67),
    [anon_sym_position] = ACTIONS(69),
    [anon_sym_round] = ACTIONS(71),
    [anon_sym_starts_DASHwith] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_string_DASHlength] = ACTIONS(77),
    [anon_sym_substring] = ACTIONS(79),
    [anon_sym_substring_DASHafter] = ACTIONS(81),
    [anon_sym_substring_DASHbefore] = ACTIONS(83),
    [anon_sym_sum] = ACTIONS(85),
    [anon_sym_system_DASHproperty] = ACTIONS(87),
    [anon_sym_translate] = ACTIONS(89),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(91),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64Decode] = ACTIONS(95),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(97),
    [anon_sym_DOLLARbody] = ACTIONS(99),
    [anon_sym_DOLLARheader] = ACTIONS(99),
    [anon_sym_DOLLARaxis2] = ACTIONS(99),
    [anon_sym_ctx] = ACTIONS(101),
    [anon_sym_DOLLARtrp] = ACTIONS(99),
    [anon_sym_DOLLARurl] = ACTIONS(99),
    [anon_sym_DOLLARfunc] = ACTIONS(99),
    [anon_sym_DOLLARenv] = ACTIONS(99),
  },
  [33] = {
    [sym_xpath] = STATE(489),
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
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_name] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(23),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [sym__xpath_node] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_boolean] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(33),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [anon_sym_current] = ACTIONS(41),
    [anon_sym_document] = ACTIONS(43),
    [anon_sym_element_DASHavailable] = ACTIONS(45),
    [anon_sym_floor] = ACTIONS(47),
    [anon_sym_format_DASHnumber] = ACTIONS(49),
    [anon_sym_function_DASHavailable] = ACTIONS(51),
    [anon_sym_generate_DASHid] = ACTIONS(53),
    [anon_sym_lang] = ACTIONS(55),
    [anon_sym_last] = ACTIONS(57),
    [anon_sym_local_DASHname] = ACTIONS(59),
    [anon_sym_namespace_DASHuri] = ACTIONS(61),
    [anon_sym_normalize_DASHspace] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_number] = ACTIONS(67),
    [anon_sym_position] = ACTIONS(69),
    [anon_sym_round] = ACTIONS(71),
    [anon_sym_starts_DASHwith] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_string_DASHlength] = ACTIONS(77),
    [anon_sym_substring] = ACTIONS(79),
    [anon_sym_substring_DASHafter] = ACTIONS(81),
    [anon_sym_substring_DASHbefore] = ACTIONS(83),
    [anon_sym_sum] = ACTIONS(85),
    [anon_sym_system_DASHproperty] = ACTIONS(87),
    [anon_sym_translate] = ACTIONS(89),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(91),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64Decode] = ACTIONS(95),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(97),
    [anon_sym_DOLLARbody] = ACTIONS(99),
    [anon_sym_DOLLARheader] = ACTIONS(99),
    [anon_sym_DOLLARaxis2] = ACTIONS(99),
    [anon_sym_ctx] = ACTIONS(101),
    [anon_sym_DOLLARtrp] = ACTIONS(99),
    [anon_sym_DOLLARurl] = ACTIONS(99),
    [anon_sym_DOLLARfunc] = ACTIONS(99),
    [anon_sym_DOLLARenv] = ACTIONS(99),
  },
  [34] = {
    [sym_xpath] = STATE(490),
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
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_name] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(23),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [sym__xpath_node] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_boolean] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(33),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [anon_sym_current] = ACTIONS(41),
    [anon_sym_document] = ACTIONS(43),
    [anon_sym_element_DASHavailable] = ACTIONS(45),
    [anon_sym_floor] = ACTIONS(47),
    [anon_sym_format_DASHnumber] = ACTIONS(49),
    [anon_sym_function_DASHavailable] = ACTIONS(51),
    [anon_sym_generate_DASHid] = ACTIONS(53),
    [anon_sym_lang] = ACTIONS(55),
    [anon_sym_last] = ACTIONS(57),
    [anon_sym_local_DASHname] = ACTIONS(59),
    [anon_sym_namespace_DASHuri] = ACTIONS(61),
    [anon_sym_normalize_DASHspace] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_number] = ACTIONS(67),
    [anon_sym_position] = ACTIONS(69),
    [anon_sym_round] = ACTIONS(71),
    [anon_sym_starts_DASHwith] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_string_DASHlength] = ACTIONS(77),
    [anon_sym_substring] = ACTIONS(79),
    [anon_sym_substring_DASHafter] = ACTIONS(81),
    [anon_sym_substring_DASHbefore] = ACTIONS(83),
    [anon_sym_sum] = ACTIONS(85),
    [anon_sym_system_DASHproperty] = ACTIONS(87),
    [anon_sym_translate] = ACTIONS(89),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(91),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64Decode] = ACTIONS(95),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(97),
    [anon_sym_DOLLARbody] = ACTIONS(99),
    [anon_sym_DOLLARheader] = ACTIONS(99),
    [anon_sym_DOLLARaxis2] = ACTIONS(99),
    [anon_sym_ctx] = ACTIONS(101),
    [anon_sym_DOLLARtrp] = ACTIONS(99),
    [anon_sym_DOLLARurl] = ACTIONS(99),
    [anon_sym_DOLLARfunc] = ACTIONS(99),
    [anon_sym_DOLLARenv] = ACTIONS(99),
  },
  [35] = {
    [sym_xpath] = STATE(491),
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
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_name] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(23),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [sym__xpath_node] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_boolean] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(33),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [anon_sym_current] = ACTIONS(41),
    [anon_sym_document] = ACTIONS(43),
    [anon_sym_element_DASHavailable] = ACTIONS(45),
    [anon_sym_floor] = ACTIONS(47),
    [anon_sym_format_DASHnumber] = ACTIONS(49),
    [anon_sym_function_DASHavailable] = ACTIONS(51),
    [anon_sym_generate_DASHid] = ACTIONS(53),
    [anon_sym_lang] = ACTIONS(55),
    [anon_sym_last] = ACTIONS(57),
    [anon_sym_local_DASHname] = ACTIONS(59),
    [anon_sym_namespace_DASHuri] = ACTIONS(61),
    [anon_sym_normalize_DASHspace] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_number] = ACTIONS(67),
    [anon_sym_position] = ACTIONS(69),
    [anon_sym_round] = ACTIONS(71),
    [anon_sym_starts_DASHwith] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_string_DASHlength] = ACTIONS(77),
    [anon_sym_substring] = ACTIONS(79),
    [anon_sym_substring_DASHafter] = ACTIONS(81),
    [anon_sym_substring_DASHbefore] = ACTIONS(83),
    [anon_sym_sum] = ACTIONS(85),
    [anon_sym_system_DASHproperty] = ACTIONS(87),
    [anon_sym_translate] = ACTIONS(89),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(91),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64Decode] = ACTIONS(95),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(97),
    [anon_sym_DOLLARbody] = ACTIONS(99),
    [anon_sym_DOLLARheader] = ACTIONS(99),
    [anon_sym_DOLLARaxis2] = ACTIONS(99),
    [anon_sym_ctx] = ACTIONS(101),
    [anon_sym_DOLLARtrp] = ACTIONS(99),
    [anon_sym_DOLLARurl] = ACTIONS(99),
    [anon_sym_DOLLARfunc] = ACTIONS(99),
    [anon_sym_DOLLARenv] = ACTIONS(99),
  },
  [36] = {
    [sym_xpath] = STATE(492),
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
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_name] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(23),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [sym__xpath_node] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_boolean] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(33),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [anon_sym_current] = ACTIONS(41),
    [anon_sym_document] = ACTIONS(43),
    [anon_sym_element_DASHavailable] = ACTIONS(45),
    [anon_sym_floor] = ACTIONS(47),
    [anon_sym_format_DASHnumber] = ACTIONS(49),
    [anon_sym_function_DASHavailable] = ACTIONS(51),
    [anon_sym_generate_DASHid] = ACTIONS(53),
    [anon_sym_lang] = ACTIONS(55),
    [anon_sym_last] = ACTIONS(57),
    [anon_sym_local_DASHname] = ACTIONS(59),
    [anon_sym_namespace_DASHuri] = ACTIONS(61),
    [anon_sym_normalize_DASHspace] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_number] = ACTIONS(67),
    [anon_sym_position] = ACTIONS(69),
    [anon_sym_round] = ACTIONS(71),
    [anon_sym_starts_DASHwith] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_string_DASHlength] = ACTIONS(77),
    [anon_sym_substring] = ACTIONS(79),
    [anon_sym_substring_DASHafter] = ACTIONS(81),
    [anon_sym_substring_DASHbefore] = ACTIONS(83),
    [anon_sym_sum] = ACTIONS(85),
    [anon_sym_system_DASHproperty] = ACTIONS(87),
    [anon_sym_translate] = ACTIONS(89),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(91),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64Decode] = ACTIONS(95),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(97),
    [anon_sym_DOLLARbody] = ACTIONS(99),
    [anon_sym_DOLLARheader] = ACTIONS(99),
    [anon_sym_DOLLARaxis2] = ACTIONS(99),
    [anon_sym_ctx] = ACTIONS(101),
    [anon_sym_DOLLARtrp] = ACTIONS(99),
    [anon_sym_DOLLARurl] = ACTIONS(99),
    [anon_sym_DOLLARfunc] = ACTIONS(99),
    [anon_sym_DOLLARenv] = ACTIONS(99),
  },
  [37] = {
    [sym_xpath] = STATE(500),
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
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_name] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(23),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [sym__xpath_node] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_boolean] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(33),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [anon_sym_current] = ACTIONS(41),
    [anon_sym_document] = ACTIONS(43),
    [anon_sym_element_DASHavailable] = ACTIONS(45),
    [anon_sym_floor] = ACTIONS(47),
    [anon_sym_format_DASHnumber] = ACTIONS(49),
    [anon_sym_function_DASHavailable] = ACTIONS(51),
    [anon_sym_generate_DASHid] = ACTIONS(53),
    [anon_sym_lang] = ACTIONS(55),
    [anon_sym_last] = ACTIONS(57),
    [anon_sym_local_DASHname] = ACTIONS(59),
    [anon_sym_namespace_DASHuri] = ACTIONS(61),
    [anon_sym_normalize_DASHspace] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_number] = ACTIONS(67),
    [anon_sym_position] = ACTIONS(69),
    [anon_sym_round] = ACTIONS(71),
    [anon_sym_starts_DASHwith] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_string_DASHlength] = ACTIONS(77),
    [anon_sym_substring] = ACTIONS(79),
    [anon_sym_substring_DASHafter] = ACTIONS(81),
    [anon_sym_substring_DASHbefore] = ACTIONS(83),
    [anon_sym_sum] = ACTIONS(85),
    [anon_sym_system_DASHproperty] = ACTIONS(87),
    [anon_sym_translate] = ACTIONS(89),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(91),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64Decode] = ACTIONS(95),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(97),
    [anon_sym_DOLLARbody] = ACTIONS(99),
    [anon_sym_DOLLARheader] = ACTIONS(99),
    [anon_sym_DOLLARaxis2] = ACTIONS(99),
    [anon_sym_ctx] = ACTIONS(101),
    [anon_sym_DOLLARtrp] = ACTIONS(99),
    [anon_sym_DOLLARurl] = ACTIONS(99),
    [anon_sym_DOLLARfunc] = ACTIONS(99),
    [anon_sym_DOLLARenv] = ACTIONS(99),
  },
  [38] = {
    [sym_xpath] = STATE(494),
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
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_name] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(23),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [sym__xpath_node] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_boolean] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(33),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [anon_sym_current] = ACTIONS(41),
    [anon_sym_document] = ACTIONS(43),
    [anon_sym_element_DASHavailable] = ACTIONS(45),
    [anon_sym_floor] = ACTIONS(47),
    [anon_sym_format_DASHnumber] = ACTIONS(49),
    [anon_sym_function_DASHavailable] = ACTIONS(51),
    [anon_sym_generate_DASHid] = ACTIONS(53),
    [anon_sym_lang] = ACTIONS(55),
    [anon_sym_last] = ACTIONS(57),
    [anon_sym_local_DASHname] = ACTIONS(59),
    [anon_sym_namespace_DASHuri] = ACTIONS(61),
    [anon_sym_normalize_DASHspace] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_number] = ACTIONS(67),
    [anon_sym_position] = ACTIONS(69),
    [anon_sym_round] = ACTIONS(71),
    [anon_sym_starts_DASHwith] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_string_DASHlength] = ACTIONS(77),
    [anon_sym_substring] = ACTIONS(79),
    [anon_sym_substring_DASHafter] = ACTIONS(81),
    [anon_sym_substring_DASHbefore] = ACTIONS(83),
    [anon_sym_sum] = ACTIONS(85),
    [anon_sym_system_DASHproperty] = ACTIONS(87),
    [anon_sym_translate] = ACTIONS(89),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(91),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64Decode] = ACTIONS(95),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(97),
    [anon_sym_DOLLARbody] = ACTIONS(99),
    [anon_sym_DOLLARheader] = ACTIONS(99),
    [anon_sym_DOLLARaxis2] = ACTIONS(99),
    [anon_sym_ctx] = ACTIONS(101),
    [anon_sym_DOLLARtrp] = ACTIONS(99),
    [anon_sym_DOLLARurl] = ACTIONS(99),
    [anon_sym_DOLLARfunc] = ACTIONS(99),
    [anon_sym_DOLLARenv] = ACTIONS(99),
  },
  [39] = {
    [sym_xpath] = STATE(495),
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
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_name] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(23),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [sym__xpath_node] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_boolean] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(33),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [anon_sym_current] = ACTIONS(41),
    [anon_sym_document] = ACTIONS(43),
    [anon_sym_element_DASHavailable] = ACTIONS(45),
    [anon_sym_floor] = ACTIONS(47),
    [anon_sym_format_DASHnumber] = ACTIONS(49),
    [anon_sym_function_DASHavailable] = ACTIONS(51),
    [anon_sym_generate_DASHid] = ACTIONS(53),
    [anon_sym_lang] = ACTIONS(55),
    [anon_sym_last] = ACTIONS(57),
    [anon_sym_local_DASHname] = ACTIONS(59),
    [anon_sym_namespace_DASHuri] = ACTIONS(61),
    [anon_sym_normalize_DASHspace] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_number] = ACTIONS(67),
    [anon_sym_position] = ACTIONS(69),
    [anon_sym_round] = ACTIONS(71),
    [anon_sym_starts_DASHwith] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_string_DASHlength] = ACTIONS(77),
    [anon_sym_substring] = ACTIONS(79),
    [anon_sym_substring_DASHafter] = ACTIONS(81),
    [anon_sym_substring_DASHbefore] = ACTIONS(83),
    [anon_sym_sum] = ACTIONS(85),
    [anon_sym_system_DASHproperty] = ACTIONS(87),
    [anon_sym_translate] = ACTIONS(89),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(91),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64Decode] = ACTIONS(95),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(97),
    [anon_sym_DOLLARbody] = ACTIONS(99),
    [anon_sym_DOLLARheader] = ACTIONS(99),
    [anon_sym_DOLLARaxis2] = ACTIONS(99),
    [anon_sym_ctx] = ACTIONS(101),
    [anon_sym_DOLLARtrp] = ACTIONS(99),
    [anon_sym_DOLLARurl] = ACTIONS(99),
    [anon_sym_DOLLARfunc] = ACTIONS(99),
    [anon_sym_DOLLARenv] = ACTIONS(99),
  },
  [40] = {
    [sym_xpath] = STATE(496),
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
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_name] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(23),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [sym__xpath_node] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_boolean] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(33),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [anon_sym_current] = ACTIONS(41),
    [anon_sym_document] = ACTIONS(43),
    [anon_sym_element_DASHavailable] = ACTIONS(45),
    [anon_sym_floor] = ACTIONS(47),
    [anon_sym_format_DASHnumber] = ACTIONS(49),
    [anon_sym_function_DASHavailable] = ACTIONS(51),
    [anon_sym_generate_DASHid] = ACTIONS(53),
    [anon_sym_lang] = ACTIONS(55),
    [anon_sym_last] = ACTIONS(57),
    [anon_sym_local_DASHname] = ACTIONS(59),
    [anon_sym_namespace_DASHuri] = ACTIONS(61),
    [anon_sym_normalize_DASHspace] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_number] = ACTIONS(67),
    [anon_sym_position] = ACTIONS(69),
    [anon_sym_round] = ACTIONS(71),
    [anon_sym_starts_DASHwith] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_string_DASHlength] = ACTIONS(77),
    [anon_sym_substring] = ACTIONS(79),
    [anon_sym_substring_DASHafter] = ACTIONS(81),
    [anon_sym_substring_DASHbefore] = ACTIONS(83),
    [anon_sym_sum] = ACTIONS(85),
    [anon_sym_system_DASHproperty] = ACTIONS(87),
    [anon_sym_translate] = ACTIONS(89),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(91),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64Decode] = ACTIONS(95),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(97),
    [anon_sym_DOLLARbody] = ACTIONS(99),
    [anon_sym_DOLLARheader] = ACTIONS(99),
    [anon_sym_DOLLARaxis2] = ACTIONS(99),
    [anon_sym_ctx] = ACTIONS(101),
    [anon_sym_DOLLARtrp] = ACTIONS(99),
    [anon_sym_DOLLARurl] = ACTIONS(99),
    [anon_sym_DOLLARfunc] = ACTIONS(99),
    [anon_sym_DOLLARenv] = ACTIONS(99),
  },
  [41] = {
    [sym_xpath] = STATE(503),
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
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_name] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(23),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [sym__xpath_node] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_boolean] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(33),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [anon_sym_current] = ACTIONS(41),
    [anon_sym_document] = ACTIONS(43),
    [anon_sym_element_DASHavailable] = ACTIONS(45),
    [anon_sym_floor] = ACTIONS(47),
    [anon_sym_format_DASHnumber] = ACTIONS(49),
    [anon_sym_function_DASHavailable] = ACTIONS(51),
    [anon_sym_generate_DASHid] = ACTIONS(53),
    [anon_sym_lang] = ACTIONS(55),
    [anon_sym_last] = ACTIONS(57),
    [anon_sym_local_DASHname] = ACTIONS(59),
    [anon_sym_namespace_DASHuri] = ACTIONS(61),
    [anon_sym_normalize_DASHspace] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_number] = ACTIONS(67),
    [anon_sym_position] = ACTIONS(69),
    [anon_sym_round] = ACTIONS(71),
    [anon_sym_starts_DASHwith] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_string_DASHlength] = ACTIONS(77),
    [anon_sym_substring] = ACTIONS(79),
    [anon_sym_substring_DASHafter] = ACTIONS(81),
    [anon_sym_substring_DASHbefore] = ACTIONS(83),
    [anon_sym_sum] = ACTIONS(85),
    [anon_sym_system_DASHproperty] = ACTIONS(87),
    [anon_sym_translate] = ACTIONS(89),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(91),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64Decode] = ACTIONS(95),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(97),
    [anon_sym_DOLLARbody] = ACTIONS(99),
    [anon_sym_DOLLARheader] = ACTIONS(99),
    [anon_sym_DOLLARaxis2] = ACTIONS(99),
    [anon_sym_ctx] = ACTIONS(101),
    [anon_sym_DOLLARtrp] = ACTIONS(99),
    [anon_sym_DOLLARurl] = ACTIONS(99),
    [anon_sym_DOLLARfunc] = ACTIONS(99),
    [anon_sym_DOLLARenv] = ACTIONS(99),
  },
  [42] = {
    [sym_xpath] = STATE(497),
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
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_name] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(23),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [sym__xpath_node] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_boolean] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(33),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [anon_sym_current] = ACTIONS(41),
    [anon_sym_document] = ACTIONS(43),
    [anon_sym_element_DASHavailable] = ACTIONS(45),
    [anon_sym_floor] = ACTIONS(47),
    [anon_sym_format_DASHnumber] = ACTIONS(49),
    [anon_sym_function_DASHavailable] = ACTIONS(51),
    [anon_sym_generate_DASHid] = ACTIONS(53),
    [anon_sym_lang] = ACTIONS(55),
    [anon_sym_last] = ACTIONS(57),
    [anon_sym_local_DASHname] = ACTIONS(59),
    [anon_sym_namespace_DASHuri] = ACTIONS(61),
    [anon_sym_normalize_DASHspace] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_number] = ACTIONS(67),
    [anon_sym_position] = ACTIONS(69),
    [anon_sym_round] = ACTIONS(71),
    [anon_sym_starts_DASHwith] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_string_DASHlength] = ACTIONS(77),
    [anon_sym_substring] = ACTIONS(79),
    [anon_sym_substring_DASHafter] = ACTIONS(81),
    [anon_sym_substring_DASHbefore] = ACTIONS(83),
    [anon_sym_sum] = ACTIONS(85),
    [anon_sym_system_DASHproperty] = ACTIONS(87),
    [anon_sym_translate] = ACTIONS(89),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(91),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64Decode] = ACTIONS(95),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(97),
    [anon_sym_DOLLARbody] = ACTIONS(99),
    [anon_sym_DOLLARheader] = ACTIONS(99),
    [anon_sym_DOLLARaxis2] = ACTIONS(99),
    [anon_sym_ctx] = ACTIONS(101),
    [anon_sym_DOLLARtrp] = ACTIONS(99),
    [anon_sym_DOLLARurl] = ACTIONS(99),
    [anon_sym_DOLLARfunc] = ACTIONS(99),
    [anon_sym_DOLLARenv] = ACTIONS(99),
  },
  [43] = {
    [sym_xpath] = STATE(482),
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
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_name] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(23),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [sym__xpath_node] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_boolean] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(33),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [anon_sym_current] = ACTIONS(41),
    [anon_sym_document] = ACTIONS(43),
    [anon_sym_element_DASHavailable] = ACTIONS(45),
    [anon_sym_floor] = ACTIONS(47),
    [anon_sym_format_DASHnumber] = ACTIONS(49),
    [anon_sym_function_DASHavailable] = ACTIONS(51),
    [anon_sym_generate_DASHid] = ACTIONS(53),
    [anon_sym_lang] = ACTIONS(55),
    [anon_sym_last] = ACTIONS(57),
    [anon_sym_local_DASHname] = ACTIONS(59),
    [anon_sym_namespace_DASHuri] = ACTIONS(61),
    [anon_sym_normalize_DASHspace] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_number] = ACTIONS(67),
    [anon_sym_position] = ACTIONS(69),
    [anon_sym_round] = ACTIONS(71),
    [anon_sym_starts_DASHwith] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_string_DASHlength] = ACTIONS(77),
    [anon_sym_substring] = ACTIONS(79),
    [anon_sym_substring_DASHafter] = ACTIONS(81),
    [anon_sym_substring_DASHbefore] = ACTIONS(83),
    [anon_sym_sum] = ACTIONS(85),
    [anon_sym_system_DASHproperty] = ACTIONS(87),
    [anon_sym_translate] = ACTIONS(89),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(91),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64Decode] = ACTIONS(95),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(97),
    [anon_sym_DOLLARbody] = ACTIONS(99),
    [anon_sym_DOLLARheader] = ACTIONS(99),
    [anon_sym_DOLLARaxis2] = ACTIONS(99),
    [anon_sym_ctx] = ACTIONS(101),
    [anon_sym_DOLLARtrp] = ACTIONS(99),
    [anon_sym_DOLLARurl] = ACTIONS(99),
    [anon_sym_DOLLARfunc] = ACTIONS(99),
    [anon_sym_DOLLARenv] = ACTIONS(99),
  },
  [44] = {
    [sym_xpath] = STATE(493),
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
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_name] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(23),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [sym__xpath_node] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_boolean] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(33),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [anon_sym_current] = ACTIONS(41),
    [anon_sym_document] = ACTIONS(43),
    [anon_sym_element_DASHavailable] = ACTIONS(45),
    [anon_sym_floor] = ACTIONS(47),
    [anon_sym_format_DASHnumber] = ACTIONS(49),
    [anon_sym_function_DASHavailable] = ACTIONS(51),
    [anon_sym_generate_DASHid] = ACTIONS(53),
    [anon_sym_lang] = ACTIONS(55),
    [anon_sym_last] = ACTIONS(57),
    [anon_sym_local_DASHname] = ACTIONS(59),
    [anon_sym_namespace_DASHuri] = ACTIONS(61),
    [anon_sym_normalize_DASHspace] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_number] = ACTIONS(67),
    [anon_sym_position] = ACTIONS(69),
    [anon_sym_round] = ACTIONS(71),
    [anon_sym_starts_DASHwith] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_string_DASHlength] = ACTIONS(77),
    [anon_sym_substring] = ACTIONS(79),
    [anon_sym_substring_DASHafter] = ACTIONS(81),
    [anon_sym_substring_DASHbefore] = ACTIONS(83),
    [anon_sym_sum] = ACTIONS(85),
    [anon_sym_system_DASHproperty] = ACTIONS(87),
    [anon_sym_translate] = ACTIONS(89),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(91),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64Decode] = ACTIONS(95),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(97),
    [anon_sym_DOLLARbody] = ACTIONS(99),
    [anon_sym_DOLLARheader] = ACTIONS(99),
    [anon_sym_DOLLARaxis2] = ACTIONS(99),
    [anon_sym_ctx] = ACTIONS(101),
    [anon_sym_DOLLARtrp] = ACTIONS(99),
    [anon_sym_DOLLARurl] = ACTIONS(99),
    [anon_sym_DOLLARfunc] = ACTIONS(99),
    [anon_sym_DOLLARenv] = ACTIONS(99),
  },
  [45] = {
    [sym_xpath] = STATE(498),
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
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_name] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(23),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [sym__xpath_node] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_boolean] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(33),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [anon_sym_current] = ACTIONS(41),
    [anon_sym_document] = ACTIONS(43),
    [anon_sym_element_DASHavailable] = ACTIONS(45),
    [anon_sym_floor] = ACTIONS(47),
    [anon_sym_format_DASHnumber] = ACTIONS(49),
    [anon_sym_function_DASHavailable] = ACTIONS(51),
    [anon_sym_generate_DASHid] = ACTIONS(53),
    [anon_sym_lang] = ACTIONS(55),
    [anon_sym_last] = ACTIONS(57),
    [anon_sym_local_DASHname] = ACTIONS(59),
    [anon_sym_namespace_DASHuri] = ACTIONS(61),
    [anon_sym_normalize_DASHspace] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_number] = ACTIONS(67),
    [anon_sym_position] = ACTIONS(69),
    [anon_sym_round] = ACTIONS(71),
    [anon_sym_starts_DASHwith] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_string_DASHlength] = ACTIONS(77),
    [anon_sym_substring] = ACTIONS(79),
    [anon_sym_substring_DASHafter] = ACTIONS(81),
    [anon_sym_substring_DASHbefore] = ACTIONS(83),
    [anon_sym_sum] = ACTIONS(85),
    [anon_sym_system_DASHproperty] = ACTIONS(87),
    [anon_sym_translate] = ACTIONS(89),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(91),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64Decode] = ACTIONS(95),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(97),
    [anon_sym_DOLLARbody] = ACTIONS(99),
    [anon_sym_DOLLARheader] = ACTIONS(99),
    [anon_sym_DOLLARaxis2] = ACTIONS(99),
    [anon_sym_ctx] = ACTIONS(101),
    [anon_sym_DOLLARtrp] = ACTIONS(99),
    [anon_sym_DOLLARurl] = ACTIONS(99),
    [anon_sym_DOLLARfunc] = ACTIONS(99),
    [anon_sym_DOLLARenv] = ACTIONS(99),
  },
  [46] = {
    [sym_xpath] = STATE(499),
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
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_name] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_id] = ACTIONS(23),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [sym__xpath_node] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_boolean] = ACTIONS(29),
    [anon_sym_ceiling] = ACTIONS(31),
    [anon_sym_choose] = ACTIONS(33),
    [anon_sym_concat] = ACTIONS(35),
    [anon_sym_contains] = ACTIONS(37),
    [anon_sym_count] = ACTIONS(39),
    [anon_sym_current] = ACTIONS(41),
    [anon_sym_document] = ACTIONS(43),
    [anon_sym_element_DASHavailable] = ACTIONS(45),
    [anon_sym_floor] = ACTIONS(47),
    [anon_sym_format_DASHnumber] = ACTIONS(49),
    [anon_sym_function_DASHavailable] = ACTIONS(51),
    [anon_sym_generate_DASHid] = ACTIONS(53),
    [anon_sym_lang] = ACTIONS(55),
    [anon_sym_last] = ACTIONS(57),
    [anon_sym_local_DASHname] = ACTIONS(59),
    [anon_sym_namespace_DASHuri] = ACTIONS(61),
    [anon_sym_normalize_DASHspace] = ACTIONS(63),
    [anon_sym_not] = ACTIONS(65),
    [anon_sym_number] = ACTIONS(67),
    [anon_sym_position] = ACTIONS(69),
    [anon_sym_round] = ACTIONS(71),
    [anon_sym_starts_DASHwith] = ACTIONS(73),
    [anon_sym_string] = ACTIONS(75),
    [anon_sym_string_DASHlength] = ACTIONS(77),
    [anon_sym_substring] = ACTIONS(79),
    [anon_sym_substring_DASHafter] = ACTIONS(81),
    [anon_sym_substring_DASHbefore] = ACTIONS(83),
    [anon_sym_sum] = ACTIONS(85),
    [anon_sym_system_DASHproperty] = ACTIONS(87),
    [anon_sym_translate] = ACTIONS(89),
    [anon_sym_unparsed_DASHentity_DASHurl] = ACTIONS(91),
    [anon_sym_base64Encode] = ACTIONS(93),
    [anon_sym_base64Decode] = ACTIONS(95),
    [anon_sym_get_DASHproperty_LPAREN] = ACTIONS(97),
    [anon_sym_DOLLARbody] = ACTIONS(99),
    [anon_sym_DOLLARheader] = ACTIONS(99),
    [anon_sym_DOLLARaxis2] = ACTIONS(99),
    [anon_sym_ctx] = ACTIONS(101),
    [anon_sym_DOLLARtrp] = ACTIONS(99),
    [anon_sym_DOLLARurl] = ACTIONS(99),
    [anon_sym_DOLLARfunc] = ACTIONS(99),
    [anon_sym_DOLLARenv] = ACTIONS(99),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 26,
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
    ACTIONS(245), 31,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_key,
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
    ACTIONS(247), 26,
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
    ACTIONS(249), 31,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_key,
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
    ACTIONS(251), 26,
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
    ACTIONS(253), 31,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_key,
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
    ACTIONS(255), 26,
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
    ACTIONS(257), 31,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_key,
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
    ACTIONS(259), 26,
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
    ACTIONS(261), 31,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_key,
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
    ACTIONS(263), 26,
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
    ACTIONS(265), 31,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_key,
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
    ACTIONS(267), 26,
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
    ACTIONS(269), 31,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_key,
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
    ACTIONS(271), 26,
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
    ACTIONS(273), 31,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_key,
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
    ACTIONS(275), 26,
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
    ACTIONS(277), 31,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_key,
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
    ACTIONS(279), 26,
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
    ACTIONS(281), 31,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_key,
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
    ACTIONS(283), 26,
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
    ACTIONS(285), 31,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_key,
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
    ACTIONS(287), 26,
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
    ACTIONS(289), 31,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_key,
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
    ACTIONS(291), 26,
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
    ACTIONS(293), 31,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_key,
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
    ACTIONS(295), 26,
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
    ACTIONS(297), 31,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_key,
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
    ACTIONS(299), 26,
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
    ACTIONS(301), 31,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_key,
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
    ACTIONS(303), 26,
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
    ACTIONS(305), 31,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_key,
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
    ACTIONS(307), 26,
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
    ACTIONS(309), 31,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_key,
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
    ACTIONS(311), 26,
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
    ACTIONS(313), 31,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_key,
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
    ACTIONS(315), 26,
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
    ACTIONS(317), 31,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_key,
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
    ACTIONS(319), 26,
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
    ACTIONS(321), 31,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_key,
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
    ACTIONS(323), 26,
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
    ACTIONS(325), 31,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_key,
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
    ACTIONS(327), 26,
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
    ACTIONS(329), 31,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_key,
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
    ACTIONS(331), 26,
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
    ACTIONS(333), 31,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_key,
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
    ACTIONS(335), 26,
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
    ACTIONS(337), 31,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_key,
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
    ACTIONS(339), 26,
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
    ACTIONS(341), 31,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_key,
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
    ACTIONS(343), 26,
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
    ACTIONS(345), 31,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_key,
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
    ACTIONS(347), 26,
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
    ACTIONS(349), 31,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_key,
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
    ACTIONS(351), 26,
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
    ACTIONS(353), 31,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_key,
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
    ACTIONS(355), 26,
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
    ACTIONS(357), 31,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_key,
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
    ACTIONS(359), 26,
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
    ACTIONS(361), 31,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_key,
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
    ACTIONS(363), 26,
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
    ACTIONS(365), 31,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_key,
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
    ACTIONS(367), 26,
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
    ACTIONS(369), 31,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_key,
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
    ACTIONS(371), 26,
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
    ACTIONS(373), 31,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_key,
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
    ACTIONS(375), 26,
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
    ACTIONS(377), 31,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_key,
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
    ACTIONS(379), 26,
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
    ACTIONS(381), 31,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_key,
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
    ACTIONS(383), 26,
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
    ACTIONS(385), 31,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_key,
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
    ACTIONS(387), 26,
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
    ACTIONS(389), 31,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_key,
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
    ACTIONS(391), 26,
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
    ACTIONS(393), 31,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_key,
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
    ACTIONS(395), 26,
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
    ACTIONS(397), 31,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_key,
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
    ACTIONS(399), 26,
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
    ACTIONS(401), 31,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_key,
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
    ACTIONS(403), 26,
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
    ACTIONS(405), 31,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_key,
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
    ACTIONS(407), 26,
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
    ACTIONS(409), 31,
      anon_sym_true,
      anon_sym_false,
      anon_sym_name,
      anon_sym_key,
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
    ACTIONS(413), 1,
      anon_sym_LTsequence,
    ACTIONS(416), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(419), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(422), 1,
      anon_sym_LTsend,
    ACTIONS(425), 1,
      anon_sym_LTlog,
    ACTIONS(428), 1,
      anon_sym_LTproperty,
    ACTIONS(431), 1,
      anon_sym_LTcall,
    ACTIONS(434), 1,
      anon_sym_LTforeach,
    ACTIONS(437), 1,
      anon_sym_LTfilter,
    ACTIONS(440), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(443), 1,
      anon_sym_LTaggregate,
    ACTIONS(446), 1,
      anon_sym_LTiterate,
    ACTIONS(449), 1,
      anon_sym_LTpayloadFactory,
    STATE(89), 2,
      sym_mediator,
      aux_sym_in_sequence_repeat1,
    ACTIONS(411), 7,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
      anon_sym_LT_SLASHsequence_GT,
      anon_sym_LT_SLASHonComplete_GT,
      anon_sym_LT_SLASHthen_GT,
      anon_sym_LT_SLASHelse_GT,
    STATE(130), 11,
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
  [2799] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LTsequence,
    ACTIONS(454), 1,
      anon_sym_LT_SLASHsequence_GT,
    ACTIONS(456), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(458), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(460), 1,
      anon_sym_LTsend,
    ACTIONS(462), 1,
      anon_sym_LTlog,
    ACTIONS(464), 1,
      anon_sym_LTproperty,
    ACTIONS(466), 1,
      anon_sym_LTcall,
    ACTIONS(468), 1,
      anon_sym_LTforeach,
    ACTIONS(470), 1,
      anon_sym_LTfilter,
    ACTIONS(472), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(474), 1,
      anon_sym_LTaggregate,
    ACTIONS(476), 1,
      anon_sym_LTiterate,
    ACTIONS(478), 1,
      anon_sym_LTpayloadFactory,
    STATE(89), 2,
      sym_mediator,
      aux_sym_in_sequence_repeat1,
    STATE(130), 11,
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
  [2862] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LTsequence,
    ACTIONS(456), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(458), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(460), 1,
      anon_sym_LTsend,
    ACTIONS(462), 1,
      anon_sym_LTlog,
    ACTIONS(464), 1,
      anon_sym_LTproperty,
    ACTIONS(466), 1,
      anon_sym_LTcall,
    ACTIONS(468), 1,
      anon_sym_LTforeach,
    ACTIONS(470), 1,
      anon_sym_LTfilter,
    ACTIONS(472), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(474), 1,
      anon_sym_LTaggregate,
    ACTIONS(476), 1,
      anon_sym_LTiterate,
    ACTIONS(478), 1,
      anon_sym_LTpayloadFactory,
    ACTIONS(480), 1,
      anon_sym_LT_SLASHonComplete_GT,
    STATE(98), 2,
      sym_mediator,
      aux_sym_in_sequence_repeat1,
    STATE(130), 11,
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
  [2925] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LTsequence,
    ACTIONS(456), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(458), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(460), 1,
      anon_sym_LTsend,
    ACTIONS(462), 1,
      anon_sym_LTlog,
    ACTIONS(464), 1,
      anon_sym_LTproperty,
    ACTIONS(466), 1,
      anon_sym_LTcall,
    ACTIONS(468), 1,
      anon_sym_LTforeach,
    ACTIONS(470), 1,
      anon_sym_LTfilter,
    ACTIONS(472), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(474), 1,
      anon_sym_LTaggregate,
    ACTIONS(476), 1,
      anon_sym_LTiterate,
    ACTIONS(478), 1,
      anon_sym_LTpayloadFactory,
    ACTIONS(482), 1,
      anon_sym_LT_SLASHelse_GT,
    STATE(89), 2,
      sym_mediator,
      aux_sym_in_sequence_repeat1,
    STATE(130), 11,
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
  [2988] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LTsequence,
    ACTIONS(456), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(458), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(460), 1,
      anon_sym_LTsend,
    ACTIONS(462), 1,
      anon_sym_LTlog,
    ACTIONS(464), 1,
      anon_sym_LTproperty,
    ACTIONS(466), 1,
      anon_sym_LTcall,
    ACTIONS(468), 1,
      anon_sym_LTforeach,
    ACTIONS(470), 1,
      anon_sym_LTfilter,
    ACTIONS(472), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(474), 1,
      anon_sym_LTaggregate,
    ACTIONS(476), 1,
      anon_sym_LTiterate,
    ACTIONS(478), 1,
      anon_sym_LTpayloadFactory,
    ACTIONS(484), 1,
      anon_sym_LT_SLASHsequence_GT,
    STATE(89), 2,
      sym_mediator,
      aux_sym_in_sequence_repeat1,
    STATE(130), 11,
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
  [3051] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LTsequence,
    ACTIONS(456), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(458), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(460), 1,
      anon_sym_LTsend,
    ACTIONS(462), 1,
      anon_sym_LTlog,
    ACTIONS(464), 1,
      anon_sym_LTproperty,
    ACTIONS(466), 1,
      anon_sym_LTcall,
    ACTIONS(468), 1,
      anon_sym_LTforeach,
    ACTIONS(470), 1,
      anon_sym_LTfilter,
    ACTIONS(472), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(474), 1,
      anon_sym_LTaggregate,
    ACTIONS(476), 1,
      anon_sym_LTiterate,
    ACTIONS(478), 1,
      anon_sym_LTpayloadFactory,
    ACTIONS(486), 1,
      anon_sym_LT_SLASHinSequence_GT,
    STATE(89), 2,
      sym_mediator,
      aux_sym_in_sequence_repeat1,
    STATE(130), 11,
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
  [3114] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LTsequence,
    ACTIONS(456), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(458), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(460), 1,
      anon_sym_LTsend,
    ACTIONS(462), 1,
      anon_sym_LTlog,
    ACTIONS(464), 1,
      anon_sym_LTproperty,
    ACTIONS(466), 1,
      anon_sym_LTcall,
    ACTIONS(468), 1,
      anon_sym_LTforeach,
    ACTIONS(470), 1,
      anon_sym_LTfilter,
    ACTIONS(472), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(474), 1,
      anon_sym_LTaggregate,
    ACTIONS(476), 1,
      anon_sym_LTiterate,
    ACTIONS(478), 1,
      anon_sym_LTpayloadFactory,
    ACTIONS(488), 1,
      anon_sym_LT_SLASHonComplete_GT,
    STATE(107), 2,
      sym_mediator,
      aux_sym_in_sequence_repeat1,
    STATE(130), 11,
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
  [3177] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LTsequence,
    ACTIONS(456), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(458), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(460), 1,
      anon_sym_LTsend,
    ACTIONS(462), 1,
      anon_sym_LTlog,
    ACTIONS(464), 1,
      anon_sym_LTproperty,
    ACTIONS(466), 1,
      anon_sym_LTcall,
    ACTIONS(468), 1,
      anon_sym_LTforeach,
    ACTIONS(470), 1,
      anon_sym_LTfilter,
    ACTIONS(472), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(474), 1,
      anon_sym_LTaggregate,
    ACTIONS(476), 1,
      anon_sym_LTiterate,
    ACTIONS(478), 1,
      anon_sym_LTpayloadFactory,
    ACTIONS(490), 1,
      anon_sym_LT_SLASHthen_GT,
    STATE(109), 2,
      sym_mediator,
      aux_sym_in_sequence_repeat1,
    STATE(130), 11,
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
  [3240] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LTsequence,
    ACTIONS(456), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(458), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(460), 1,
      anon_sym_LTsend,
    ACTIONS(462), 1,
      anon_sym_LTlog,
    ACTIONS(464), 1,
      anon_sym_LTproperty,
    ACTIONS(466), 1,
      anon_sym_LTcall,
    ACTIONS(468), 1,
      anon_sym_LTforeach,
    ACTIONS(470), 1,
      anon_sym_LTfilter,
    ACTIONS(472), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(474), 1,
      anon_sym_LTaggregate,
    ACTIONS(476), 1,
      anon_sym_LTiterate,
    ACTIONS(478), 1,
      anon_sym_LTpayloadFactory,
    ACTIONS(492), 1,
      anon_sym_LT_SLASHinSequence_GT,
    STATE(94), 2,
      sym_mediator,
      aux_sym_in_sequence_repeat1,
    STATE(130), 11,
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
  [3303] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LTsequence,
    ACTIONS(456), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(458), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(460), 1,
      anon_sym_LTsend,
    ACTIONS(462), 1,
      anon_sym_LTlog,
    ACTIONS(464), 1,
      anon_sym_LTproperty,
    ACTIONS(466), 1,
      anon_sym_LTcall,
    ACTIONS(468), 1,
      anon_sym_LTforeach,
    ACTIONS(470), 1,
      anon_sym_LTfilter,
    ACTIONS(472), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(474), 1,
      anon_sym_LTaggregate,
    ACTIONS(476), 1,
      anon_sym_LTiterate,
    ACTIONS(478), 1,
      anon_sym_LTpayloadFactory,
    ACTIONS(494), 1,
      anon_sym_LT_SLASHonComplete_GT,
    STATE(89), 2,
      sym_mediator,
      aux_sym_in_sequence_repeat1,
    STATE(130), 11,
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
  [3366] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LTsequence,
    ACTIONS(456), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(458), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(460), 1,
      anon_sym_LTsend,
    ACTIONS(462), 1,
      anon_sym_LTlog,
    ACTIONS(464), 1,
      anon_sym_LTproperty,
    ACTIONS(466), 1,
      anon_sym_LTcall,
    ACTIONS(468), 1,
      anon_sym_LTforeach,
    ACTIONS(470), 1,
      anon_sym_LTfilter,
    ACTIONS(472), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(474), 1,
      anon_sym_LTaggregate,
    ACTIONS(476), 1,
      anon_sym_LTiterate,
    ACTIONS(478), 1,
      anon_sym_LTpayloadFactory,
    ACTIONS(496), 1,
      anon_sym_LT_SLASHoutSequence_GT,
    STATE(89), 2,
      sym_mediator,
      aux_sym_in_sequence_repeat1,
    STATE(130), 11,
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
  [3429] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LTsequence,
    ACTIONS(456), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(458), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(460), 1,
      anon_sym_LTsend,
    ACTIONS(462), 1,
      anon_sym_LTlog,
    ACTIONS(464), 1,
      anon_sym_LTproperty,
    ACTIONS(466), 1,
      anon_sym_LTcall,
    ACTIONS(468), 1,
      anon_sym_LTforeach,
    ACTIONS(470), 1,
      anon_sym_LTfilter,
    ACTIONS(472), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(474), 1,
      anon_sym_LTaggregate,
    ACTIONS(476), 1,
      anon_sym_LTiterate,
    ACTIONS(478), 1,
      anon_sym_LTpayloadFactory,
    ACTIONS(498), 1,
      anon_sym_LT_SLASHfaultSequence_GT,
    STATE(103), 2,
      sym_mediator,
      aux_sym_in_sequence_repeat1,
    STATE(130), 11,
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
  [3492] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LTsequence,
    ACTIONS(456), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(458), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(460), 1,
      anon_sym_LTsend,
    ACTIONS(462), 1,
      anon_sym_LTlog,
    ACTIONS(464), 1,
      anon_sym_LTproperty,
    ACTIONS(466), 1,
      anon_sym_LTcall,
    ACTIONS(468), 1,
      anon_sym_LTforeach,
    ACTIONS(470), 1,
      anon_sym_LTfilter,
    ACTIONS(472), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(474), 1,
      anon_sym_LTaggregate,
    ACTIONS(476), 1,
      anon_sym_LTiterate,
    ACTIONS(478), 1,
      anon_sym_LTpayloadFactory,
    ACTIONS(500), 1,
      anon_sym_LT_SLASHsequence_GT,
    STATE(102), 2,
      sym_mediator,
      aux_sym_in_sequence_repeat1,
    STATE(130), 11,
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
  [3555] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LTsequence,
    ACTIONS(456), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(458), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(460), 1,
      anon_sym_LTsend,
    ACTIONS(462), 1,
      anon_sym_LTlog,
    ACTIONS(464), 1,
      anon_sym_LTproperty,
    ACTIONS(466), 1,
      anon_sym_LTcall,
    ACTIONS(468), 1,
      anon_sym_LTforeach,
    ACTIONS(470), 1,
      anon_sym_LTfilter,
    ACTIONS(472), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(474), 1,
      anon_sym_LTaggregate,
    ACTIONS(476), 1,
      anon_sym_LTiterate,
    ACTIONS(478), 1,
      anon_sym_LTpayloadFactory,
    ACTIONS(502), 1,
      anon_sym_LT_SLASHsequence_GT,
    STATE(89), 2,
      sym_mediator,
      aux_sym_in_sequence_repeat1,
    STATE(130), 11,
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
  [3618] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LTsequence,
    ACTIONS(456), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(458), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(460), 1,
      anon_sym_LTsend,
    ACTIONS(462), 1,
      anon_sym_LTlog,
    ACTIONS(464), 1,
      anon_sym_LTproperty,
    ACTIONS(466), 1,
      anon_sym_LTcall,
    ACTIONS(468), 1,
      anon_sym_LTforeach,
    ACTIONS(470), 1,
      anon_sym_LTfilter,
    ACTIONS(472), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(474), 1,
      anon_sym_LTaggregate,
    ACTIONS(476), 1,
      anon_sym_LTiterate,
    ACTIONS(478), 1,
      anon_sym_LTpayloadFactory,
    ACTIONS(504), 1,
      anon_sym_LT_SLASHfaultSequence_GT,
    STATE(89), 2,
      sym_mediator,
      aux_sym_in_sequence_repeat1,
    STATE(130), 11,
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
  [3681] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LTsequence,
    ACTIONS(456), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(458), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(460), 1,
      anon_sym_LTsend,
    ACTIONS(462), 1,
      anon_sym_LTlog,
    ACTIONS(464), 1,
      anon_sym_LTproperty,
    ACTIONS(466), 1,
      anon_sym_LTcall,
    ACTIONS(468), 1,
      anon_sym_LTforeach,
    ACTIONS(470), 1,
      anon_sym_LTfilter,
    ACTIONS(472), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(474), 1,
      anon_sym_LTaggregate,
    ACTIONS(476), 1,
      anon_sym_LTiterate,
    ACTIONS(478), 1,
      anon_sym_LTpayloadFactory,
    ACTIONS(506), 1,
      anon_sym_LT_SLASHsequence_GT,
    STATE(93), 2,
      sym_mediator,
      aux_sym_in_sequence_repeat1,
    STATE(130), 11,
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
  [3744] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LTsequence,
    ACTIONS(456), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(458), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(460), 1,
      anon_sym_LTsend,
    ACTIONS(462), 1,
      anon_sym_LTlog,
    ACTIONS(464), 1,
      anon_sym_LTproperty,
    ACTIONS(466), 1,
      anon_sym_LTcall,
    ACTIONS(468), 1,
      anon_sym_LTforeach,
    ACTIONS(470), 1,
      anon_sym_LTfilter,
    ACTIONS(472), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(474), 1,
      anon_sym_LTaggregate,
    ACTIONS(476), 1,
      anon_sym_LTiterate,
    ACTIONS(478), 1,
      anon_sym_LTpayloadFactory,
    ACTIONS(508), 1,
      anon_sym_LT_SLASHoutSequence_GT,
    STATE(99), 2,
      sym_mediator,
      aux_sym_in_sequence_repeat1,
    STATE(130), 11,
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
  [3807] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LTsequence,
    ACTIONS(456), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(458), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(460), 1,
      anon_sym_LTsend,
    ACTIONS(462), 1,
      anon_sym_LTlog,
    ACTIONS(464), 1,
      anon_sym_LTproperty,
    ACTIONS(466), 1,
      anon_sym_LTcall,
    ACTIONS(468), 1,
      anon_sym_LTforeach,
    ACTIONS(470), 1,
      anon_sym_LTfilter,
    ACTIONS(472), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(474), 1,
      anon_sym_LTaggregate,
    ACTIONS(476), 1,
      anon_sym_LTiterate,
    ACTIONS(478), 1,
      anon_sym_LTpayloadFactory,
    ACTIONS(510), 1,
      anon_sym_LT_SLASHelse_GT,
    STATE(92), 2,
      sym_mediator,
      aux_sym_in_sequence_repeat1,
    STATE(130), 11,
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
  [3870] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LTsequence,
    ACTIONS(456), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(458), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(460), 1,
      anon_sym_LTsend,
    ACTIONS(462), 1,
      anon_sym_LTlog,
    ACTIONS(464), 1,
      anon_sym_LTproperty,
    ACTIONS(466), 1,
      anon_sym_LTcall,
    ACTIONS(468), 1,
      anon_sym_LTforeach,
    ACTIONS(470), 1,
      anon_sym_LTfilter,
    ACTIONS(472), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(474), 1,
      anon_sym_LTaggregate,
    ACTIONS(476), 1,
      anon_sym_LTiterate,
    ACTIONS(478), 1,
      anon_sym_LTpayloadFactory,
    ACTIONS(512), 1,
      anon_sym_LT_SLASHonComplete_GT,
    STATE(89), 2,
      sym_mediator,
      aux_sym_in_sequence_repeat1,
    STATE(130), 11,
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
  [3933] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LTsequence,
    ACTIONS(456), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(458), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(460), 1,
      anon_sym_LTsend,
    ACTIONS(462), 1,
      anon_sym_LTlog,
    ACTIONS(464), 1,
      anon_sym_LTproperty,
    ACTIONS(466), 1,
      anon_sym_LTcall,
    ACTIONS(468), 1,
      anon_sym_LTforeach,
    ACTIONS(470), 1,
      anon_sym_LTfilter,
    ACTIONS(472), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(474), 1,
      anon_sym_LTaggregate,
    ACTIONS(476), 1,
      anon_sym_LTiterate,
    ACTIONS(478), 1,
      anon_sym_LTpayloadFactory,
    ACTIONS(514), 1,
      anon_sym_LT_SLASHsequence_GT,
    STATE(90), 2,
      sym_mediator,
      aux_sym_in_sequence_repeat1,
    STATE(130), 11,
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
  [3996] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LTsequence,
    ACTIONS(456), 1,
      anon_sym_LTrespond_SLASH_GT,
    ACTIONS(458), 1,
      anon_sym_LTsend_SLASH_GT,
    ACTIONS(460), 1,
      anon_sym_LTsend,
    ACTIONS(462), 1,
      anon_sym_LTlog,
    ACTIONS(464), 1,
      anon_sym_LTproperty,
    ACTIONS(466), 1,
      anon_sym_LTcall,
    ACTIONS(468), 1,
      anon_sym_LTforeach,
    ACTIONS(470), 1,
      anon_sym_LTfilter,
    ACTIONS(472), 1,
      anon_sym_LTaggregate_GT,
    ACTIONS(474), 1,
      anon_sym_LTaggregate,
    ACTIONS(476), 1,
      anon_sym_LTiterate,
    ACTIONS(478), 1,
      anon_sym_LTpayloadFactory,
    ACTIONS(516), 1,
      anon_sym_LT_SLASHthen_GT,
    STATE(89), 2,
      sym_mediator,
      aux_sym_in_sequence_repeat1,
    STATE(130), 11,
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
  [4059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(518), 20,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [4089] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(522), 20,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [4119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(526), 20,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [4149] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(530), 20,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [4179] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(534), 19,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [4208] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(538), 19,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [4237] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(542), 18,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [4265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(546), 18,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [4293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(550), 18,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [4321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(554), 18,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [4349] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(558), 18,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [4377] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(562), 18,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [4405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(566), 18,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [4433] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(570), 18,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [4461] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(574), 18,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [4489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(578), 18,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [4517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(582), 18,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [4545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(586), 18,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [4573] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(590), 18,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [4601] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(594), 18,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [4629] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(598), 18,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [4657] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(602), 18,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [4685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(606), 18,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [4713] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(610), 18,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [4741] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(614), 18,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [4769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(618), 18,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [4797] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(622), 18,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [4825] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(626), 18,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [4853] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(630), 18,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
    ACTIONS(636), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(634), 18,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [4909] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(638), 18,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [4937] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(642), 18,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [4965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(646), 18,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [4993] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(650), 18,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [5021] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(654), 18,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [5049] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(658), 18,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [5077] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(662), 18,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [5105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(666), 18,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [5133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(670), 18,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [5161] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(674), 18,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [5189] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(678), 18,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [5217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(682), 18,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [5245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(686), 18,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [5273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(690), 18,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [5301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(694), 18,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [5329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(698), 18,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [5357] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(702), 18,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [5385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 2,
      anon_sym_LTsend,
      anon_sym_LTaggregate,
    ACTIONS(706), 18,
      anon_sym_LT_SLASHinSequence_GT,
      anon_sym_LT_SLASHoutSequence_GT,
      anon_sym_LT_SLASHfaultSequence_GT,
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
  [5413] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_LBRACE,
    ACTIONS(712), 1,
      anon_sym_LBRACK,
    ACTIONS(714), 1,
      anon_sym_RBRACK,
    ACTIONS(716), 1,
      anon_sym_DQUOTE,
    ACTIONS(718), 1,
      anon_sym_true,
    ACTIONS(720), 1,
      anon_sym_false,
    ACTIONS(722), 1,
      sym_null,
    ACTIONS(726), 1,
      sym__unsigned_int,
    STATE(328), 1,
      sym__value,
    ACTIONS(724), 2,
      sym__float,
      sym__int,
    STATE(249), 6,
      sym_object,
      sym_array,
      sym_string,
      sym_number,
      sym_true,
      sym_false,
  [5456] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_LBRACE,
    ACTIONS(712), 1,
      anon_sym_LBRACK,
    ACTIONS(716), 1,
      anon_sym_DQUOTE,
    ACTIONS(718), 1,
      anon_sym_true,
    ACTIONS(720), 1,
      anon_sym_false,
    ACTIONS(722), 1,
      sym_null,
    ACTIONS(726), 1,
      sym__unsigned_int,
    STATE(458), 1,
      sym__value,
    ACTIONS(724), 2,
      sym__float,
      sym__int,
    STATE(249), 6,
      sym_object,
      sym_array,
      sym_string,
      sym_number,
      sym_true,
      sym_false,
  [5496] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_LBRACE,
    ACTIONS(712), 1,
      anon_sym_LBRACK,
    ACTIONS(716), 1,
      anon_sym_DQUOTE,
    ACTIONS(718), 1,
      anon_sym_true,
    ACTIONS(720), 1,
      anon_sym_false,
    ACTIONS(722), 1,
      sym_null,
    ACTIONS(726), 1,
      sym__unsigned_int,
    STATE(397), 1,
      sym__value,
    ACTIONS(724), 2,
      sym__float,
      sym__int,
    STATE(249), 6,
      sym_object,
      sym_array,
      sym_string,
      sym_number,
      sym_true,
      sym_false,
  [5536] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_LBRACE,
    ACTIONS(712), 1,
      anon_sym_LBRACK,
    ACTIONS(716), 1,
      anon_sym_DQUOTE,
    ACTIONS(718), 1,
      anon_sym_true,
    ACTIONS(720), 1,
      anon_sym_false,
    ACTIONS(722), 1,
      sym_null,
    ACTIONS(726), 1,
      sym__unsigned_int,
    STATE(398), 1,
      sym__value,
    ACTIONS(724), 2,
      sym__float,
      sym__int,
    STATE(249), 6,
      sym_object,
      sym_array,
      sym_string,
      sym_number,
      sym_true,
      sym_false,
  [5576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 15,
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
  [5597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 14,
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
  [5617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 13,
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
  [5636] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_GT,
    ACTIONS(736), 1,
      anon_sym_sequential,
    ACTIONS(739), 1,
      anon_sym_continueParent,
    ACTIONS(742), 1,
      anon_sym_preservePayload,
    ACTIONS(745), 1,
      anon_sym_attachPath,
    ACTIONS(748), 1,
      anon_sym_expression,
    STATE(165), 1,
      aux_sym_iterate_repeat1,
    STATE(205), 1,
      sym_continueParent,
    STATE(206), 1,
      sym_attachPath,
    STATE(208), 1,
      sym_expression,
    STATE(213), 1,
      sym_sequential,
    STATE(221), 1,
      sym_preservePayload,
  [5676] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_GT,
    ACTIONS(753), 1,
      anon_sym_sequential,
    ACTIONS(755), 1,
      anon_sym_continueParent,
    ACTIONS(757), 1,
      anon_sym_preservePayload,
    ACTIONS(759), 1,
      anon_sym_attachPath,
    ACTIONS(761), 1,
      anon_sym_expression,
    STATE(165), 1,
      aux_sym_iterate_repeat1,
    STATE(205), 1,
      sym_continueParent,
    STATE(206), 1,
      sym_attachPath,
    STATE(208), 1,
      sym_expression,
    STATE(213), 1,
      sym_sequential,
    STATE(221), 1,
      sym_preservePayload,
  [5716] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_expression,
    ACTIONS(763), 1,
      anon_sym_SLASH_GT,
    ACTIONS(765), 1,
      anon_sym_scope,
    ACTIONS(767), 1,
      anon_sym_action,
    ACTIONS(769), 1,
      anon_sym_type,
    ACTIONS(771), 1,
      anon_sym_pattern,
    ACTIONS(773), 1,
      anon_sym_group,
    ACTIONS(775), 1,
      anon_sym_value,
    STATE(168), 1,
      aux_sym_property_repeat1,
    STATE(188), 1,
      sym_expression,
    STATE(190), 1,
      sym_value,
    STATE(192), 1,
      sym__property_attribute,
  [5756] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_expression,
    ACTIONS(765), 1,
      anon_sym_scope,
    ACTIONS(767), 1,
      anon_sym_action,
    ACTIONS(769), 1,
      anon_sym_type,
    ACTIONS(771), 1,
      anon_sym_pattern,
    ACTIONS(773), 1,
      anon_sym_group,
    ACTIONS(775), 1,
      anon_sym_value,
    ACTIONS(777), 1,
      anon_sym_SLASH_GT,
    STATE(169), 1,
      aux_sym_property_repeat1,
    STATE(188), 1,
      sym_expression,
    STATE(190), 1,
      sym_value,
    STATE(192), 1,
      sym__property_attribute,
  [5796] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      anon_sym_SLASH_GT,
    ACTIONS(781), 1,
      anon_sym_scope,
    ACTIONS(784), 1,
      anon_sym_action,
    ACTIONS(787), 1,
      anon_sym_type,
    ACTIONS(790), 1,
      anon_sym_pattern,
    ACTIONS(793), 1,
      anon_sym_group,
    ACTIONS(796), 1,
      anon_sym_value,
    ACTIONS(799), 1,
      anon_sym_expression,
    STATE(169), 1,
      aux_sym_property_repeat1,
    STATE(188), 1,
      sym_expression,
    STATE(190), 1,
      sym_value,
    STATE(192), 1,
      sym__property_attribute,
  [5836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 11,
      anon_sym_DQUOTE,
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
  [5853] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
    ACTIONS(806), 1,
      anon_sym_LTinitialDuration_GT,
    ACTIONS(808), 1,
      anon_sym_LTprogressionFactor_GT,
    ACTIONS(810), 1,
      anon_sym_LTmaximumDuration_GT,
    ACTIONS(812), 1,
      anon_sym_LTerrorCodes_GT,
    STATE(174), 6,
      sym__suspend_on_failure_property,
      sym_initial_duration,
      sym_progression_factor,
      sym_maximum_duration,
      sym_error_codes,
      aux_sym_suspend_on_failure_repeat1,
  [5880] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      anon_sym_sequential,
    ACTIONS(755), 1,
      anon_sym_continueParent,
    ACTIONS(757), 1,
      anon_sym_preservePayload,
    ACTIONS(759), 1,
      anon_sym_attachPath,
    ACTIONS(761), 1,
      anon_sym_expression,
    STATE(166), 1,
      aux_sym_iterate_repeat1,
    STATE(205), 1,
      sym_continueParent,
    STATE(206), 1,
      sym_attachPath,
    STATE(208), 1,
      sym_expression,
    STATE(213), 1,
      sym_sequential,
    STATE(221), 1,
      sym_preservePayload,
  [5917] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_LTinitialDuration_GT,
    ACTIONS(808), 1,
      anon_sym_LTprogressionFactor_GT,
    ACTIONS(810), 1,
      anon_sym_LTmaximumDuration_GT,
    ACTIONS(812), 1,
      anon_sym_LTerrorCodes_GT,
    ACTIONS(814), 1,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
    STATE(171), 6,
      sym__suspend_on_failure_property,
      sym_initial_duration,
      sym_progression_factor,
      sym_maximum_duration,
      sym_error_codes,
      aux_sym_suspend_on_failure_repeat1,
  [5944] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
    ACTIONS(818), 1,
      anon_sym_LTinitialDuration_GT,
    ACTIONS(821), 1,
      anon_sym_LTprogressionFactor_GT,
    ACTIONS(824), 1,
      anon_sym_LTmaximumDuration_GT,
    ACTIONS(827), 1,
      anon_sym_LTerrorCodes_GT,
    STATE(174), 6,
      sym__suspend_on_failure_property,
      sym_initial_duration,
      sym_progression_factor,
      sym_maximum_duration,
      sym_error_codes,
      aux_sym_suspend_on_failure_repeat1,
  [5971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_axis2,
    ACTIONS(830), 9,
      anon_sym_default,
      anon_sym_axis2_DASHclient,
      anon_sym_operation,
      anon_sym_transport,
      anon_sym_registry,
      anon_sym_synapse,
      anon_sym_system,
      anon_sym_env,
      anon_sym_file,
  [5989] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_LT_SLASHmarkForSuspension_GT,
    ACTIONS(836), 1,
      anon_sym_LTretriesBeforeSuspension_GT,
    ACTIONS(839), 1,
      anon_sym_LTretryDelay_GT,
    ACTIONS(842), 1,
      anon_sym_LTerrorCodes_GT,
    STATE(176), 5,
      sym__mark_for_suspending_property,
      sym_retries_before_suspending,
      sym_retry_delay,
      sym_error_codes,
      aux_sym_mark_for_suspending_repeat1,
  [6012] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_LT_SLASHhttp_GT,
    ACTIONS(847), 1,
      anon_sym_LTtimeout_GT,
    ACTIONS(850), 1,
      anon_sym_LTmarkForSuspension_GT,
    ACTIONS(853), 1,
      anon_sym_LTsuspendOnFailure_GT,
    STATE(177), 2,
      sym_endpoint_error_property,
      aux_sym_http_endpoint_repeat2,
    STATE(243), 3,
      sym_timeout,
      sym_mark_for_suspending,
      sym_suspend_on_failure,
  [6037] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_LT_SLASHhttp_GT,
    ACTIONS(858), 1,
      anon_sym_LTtimeout_GT,
    ACTIONS(860), 1,
      anon_sym_LTmarkForSuspension_GT,
    ACTIONS(862), 1,
      anon_sym_LTsuspendOnFailure_GT,
    STATE(180), 2,
      sym_endpoint_error_property,
      aux_sym_http_endpoint_repeat2,
    STATE(243), 3,
      sym_timeout,
      sym_mark_for_suspending,
      sym_suspend_on_failure,
  [6062] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_LTerrorCodes_GT,
    ACTIONS(864), 1,
      anon_sym_LT_SLASHmarkForSuspension_GT,
    ACTIONS(866), 1,
      anon_sym_LTretriesBeforeSuspension_GT,
    ACTIONS(868), 1,
      anon_sym_LTretryDelay_GT,
    STATE(183), 5,
      sym__mark_for_suspending_property,
      sym_retries_before_suspending,
      sym_retry_delay,
      sym_error_codes,
      aux_sym_mark_for_suspending_repeat1,
  [6085] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_LTtimeout_GT,
    ACTIONS(860), 1,
      anon_sym_LTmarkForSuspension_GT,
    ACTIONS(862), 1,
      anon_sym_LTsuspendOnFailure_GT,
    ACTIONS(870), 1,
      anon_sym_LT_SLASHhttp_GT,
    STATE(177), 2,
      sym_endpoint_error_property,
      aux_sym_http_endpoint_repeat2,
    STATE(243), 3,
      sym_timeout,
      sym_mark_for_suspending,
      sym_suspend_on_failure,
  [6110] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_LTtimeout_GT,
    ACTIONS(860), 1,
      anon_sym_LTmarkForSuspension_GT,
    ACTIONS(862), 1,
      anon_sym_LTsuspendOnFailure_GT,
    ACTIONS(872), 1,
      anon_sym_LT_SLASHhttp_GT,
    STATE(182), 2,
      sym_endpoint_error_property,
      aux_sym_http_endpoint_repeat2,
    STATE(243), 3,
      sym_timeout,
      sym_mark_for_suspending,
      sym_suspend_on_failure,
  [6135] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_LT_SLASHhttp_GT,
    ACTIONS(858), 1,
      anon_sym_LTtimeout_GT,
    ACTIONS(860), 1,
      anon_sym_LTmarkForSuspension_GT,
    ACTIONS(862), 1,
      anon_sym_LTsuspendOnFailure_GT,
    STATE(177), 2,
      sym_endpoint_error_property,
      aux_sym_http_endpoint_repeat2,
    STATE(243), 3,
      sym_timeout,
      sym_mark_for_suspending,
      sym_suspend_on_failure,
  [6160] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_LTerrorCodes_GT,
    ACTIONS(866), 1,
      anon_sym_LTretriesBeforeSuspension_GT,
    ACTIONS(868), 1,
      anon_sym_LTretryDelay_GT,
    ACTIONS(874), 1,
      anon_sym_LT_SLASHmarkForSuspension_GT,
    STATE(176), 5,
      sym__mark_for_suspending_property,
      sym_retries_before_suspending,
      sym_retry_delay,
      sym_error_codes,
      aux_sym_mark_for_suspending_repeat1,
  [6183] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_DQUOTE,
    ACTIONS(726), 1,
      sym__unsigned_int,
    ACTIONS(876), 1,
      anon_sym_RBRACE,
    STATE(320), 1,
      sym_pair,
    ACTIONS(724), 2,
      sym__float,
      sym__int,
    STATE(540), 2,
      sym_string,
      sym_number,
  [6207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 8,
      anon_sym_LT_SLASHmarkForSuspension_GT,
      anon_sym_LTretriesBeforeSuspension_GT,
      anon_sym_LTretryDelay_GT,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
      anon_sym_LTinitialDuration_GT,
      anon_sym_LTprogressionFactor_GT,
      anon_sym_LTmaximumDuration_GT,
      anon_sym_LTerrorCodes_GT,
  [6221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 8,
      anon_sym_LT_SLASHmarkForSuspension_GT,
      anon_sym_LTretriesBeforeSuspension_GT,
      anon_sym_LTretryDelay_GT,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
      anon_sym_LTinitialDuration_GT,
      anon_sym_LTprogressionFactor_GT,
      anon_sym_LTmaximumDuration_GT,
      anon_sym_LTerrorCodes_GT,
  [6235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 8,
      anon_sym_STRING,
      anon_sym_INTEGER,
      anon_sym_BOOLEAN,
      anon_sym_DOUBLE,
      anon_sym_FLOAT,
      anon_sym_LONG,
      anon_sym_SHORT,
      anon_sym_OM,
  [6249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 8,
      anon_sym_SLASH_GT,
      anon_sym_scope,
      anon_sym_action,
      anon_sym_type,
      anon_sym_pattern,
      anon_sym_group,
      anon_sym_value,
      anon_sym_expression,
  [6263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 8,
      anon_sym_SLASH_GT,
      anon_sym_scope,
      anon_sym_action,
      anon_sym_type,
      anon_sym_pattern,
      anon_sym_group,
      anon_sym_value,
      anon_sym_expression,
  [6277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 8,
      anon_sym_SLASH_GT,
      anon_sym_scope,
      anon_sym_action,
      anon_sym_type,
      anon_sym_pattern,
      anon_sym_group,
      anon_sym_value,
      anon_sym_expression,
  [6291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 8,
      anon_sym_SLASH_GT,
      anon_sym_scope,
      anon_sym_action,
      anon_sym_type,
      anon_sym_pattern,
      anon_sym_group,
      anon_sym_value,
      anon_sym_expression,
  [6305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 8,
      anon_sym_SLASH_GT,
      anon_sym_scope,
      anon_sym_action,
      anon_sym_type,
      anon_sym_pattern,
      anon_sym_group,
      anon_sym_value,
      anon_sym_expression,
  [6319] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      ts_builtin_sym_end,
    ACTIONS(894), 1,
      anon_sym_LTapi,
    ACTIONS(897), 1,
      anon_sym_LTsequence,
    STATE(193), 4,
      sym__definition,
      sym_api_definition,
      sym_sequence_definition,
      aux_sym_document_repeat1,
  [6338] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_LT_SLASHaggregate_GT,
    ACTIONS(902), 1,
      anon_sym_LTcorrelateOn,
    ACTIONS(904), 1,
      anon_sym_LTcompleteCondition,
    ACTIONS(906), 1,
      anon_sym_LTonComplete,
    STATE(222), 1,
      sym_correlateOn,
    STATE(296), 1,
      sym_complete_condition,
    STATE(633), 1,
      sym_on_complete,
  [6363] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_DQUOTE,
    ACTIONS(726), 1,
      sym__unsigned_int,
    STATE(399), 1,
      sym_pair,
    ACTIONS(724), 2,
      sym__float,
      sym__int,
    STATE(540), 2,
      sym_string,
      sym_number,
  [6384] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      anon_sym_LT_SLASHtimeout_GT,
    ACTIONS(910), 1,
      anon_sym_LTduration_GT,
    ACTIONS(912), 1,
      anon_sym_LTresponseAction_GT,
    STATE(202), 4,
      sym__timeout_property,
      sym_duration,
      sym_response_action,
      aux_sym_timeout_repeat1,
  [6403] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      anon_sym_LTduration_GT,
    ACTIONS(912), 1,
      anon_sym_LTresponseAction_GT,
    ACTIONS(914), 1,
      anon_sym_LT_SLASHtimeout_GT,
    STATE(196), 4,
      sym__timeout_property,
      sym_duration,
      sym_response_action,
      aux_sym_timeout_repeat1,
  [6422] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LTapi,
    ACTIONS(9), 1,
      anon_sym_LTsequence,
    ACTIONS(916), 1,
      ts_builtin_sym_end,
    STATE(200), 4,
      sym__definition,
      sym_api_definition,
      sym_sequence_definition,
      aux_sym_document_repeat1,
  [6441] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_LTcorrelateOn,
    ACTIONS(904), 1,
      anon_sym_LTcompleteCondition,
    ACTIONS(906), 1,
      anon_sym_LTonComplete,
    ACTIONS(918), 1,
      anon_sym_LT_SLASHaggregate_GT,
    STATE(227), 1,
      sym_correlateOn,
    STATE(329), 1,
      sym_complete_condition,
    STATE(474), 1,
      sym_on_complete,
  [6466] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LTapi,
    ACTIONS(9), 1,
      anon_sym_LTsequence,
    ACTIONS(920), 1,
      ts_builtin_sym_end,
    STATE(193), 4,
      sym__definition,
      sym_api_definition,
      sym_sequence_definition,
      aux_sym_document_repeat1,
  [6485] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_expression,
    ACTIONS(775), 1,
      anon_sym_value,
    ACTIONS(922), 1,
      anon_sym_evaluator,
    STATE(268), 1,
      sym_evaluator,
    STATE(548), 1,
      sym_arg,
    STATE(550), 1,
      sym_value,
    STATE(551), 1,
      sym_expression,
  [6510] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 1,
      anon_sym_LT_SLASHtimeout_GT,
    ACTIONS(926), 1,
      anon_sym_LTduration_GT,
    ACTIONS(929), 1,
      anon_sym_LTresponseAction_GT,
    STATE(202), 4,
      sym__timeout_property,
      sym_duration,
      sym_response_action,
      aux_sym_timeout_repeat1,
  [6529] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LTapi,
    ACTIONS(9), 1,
      anon_sym_LTsequence,
    ACTIONS(916), 1,
      ts_builtin_sym_end,
    STATE(193), 4,
      sym__definition,
      sym_api_definition,
      sym_sequence_definition,
      aux_sym_document_repeat1,
  [6548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 6,
      anon_sym_GT,
      anon_sym_sequential,
      anon_sym_continueParent,
      anon_sym_preservePayload,
      anon_sym_attachPath,
      anon_sym_expression,
  [6560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(934), 6,
      anon_sym_GT,
      anon_sym_sequential,
      anon_sym_continueParent,
      anon_sym_preservePayload,
      anon_sym_attachPath,
      anon_sym_expression,
  [6572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 6,
      anon_sym_GT,
      anon_sym_sequential,
      anon_sym_continueParent,
      anon_sym_preservePayload,
      anon_sym_attachPath,
      anon_sym_expression,
  [6584] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_GT,
    ACTIONS(940), 1,
      anon_sym_hostname,
    ACTIONS(943), 1,
      anon_sym_port,
    ACTIONS(946), 1,
      anon_sym_version,
    ACTIONS(949), 1,
      anon_sym_swagger,
    STATE(207), 1,
      aux_sym_api_attribute_repeat1,
  [6606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(952), 6,
      anon_sym_GT,
      anon_sym_sequential,
      anon_sym_continueParent,
      anon_sym_preservePayload,
      anon_sym_attachPath,
      anon_sym_expression,
  [6618] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      anon_sym_GT,
    ACTIONS(956), 1,
      anon_sym_hostname,
    ACTIONS(958), 1,
      anon_sym_port,
    ACTIONS(960), 1,
      anon_sym_version,
    ACTIONS(962), 1,
      anon_sym_swagger,
    STATE(207), 1,
      aux_sym_api_attribute_repeat1,
  [6640] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(956), 1,
      anon_sym_hostname,
    ACTIONS(958), 1,
      anon_sym_port,
    ACTIONS(960), 1,
      anon_sym_version,
    ACTIONS(962), 1,
      anon_sym_swagger,
    ACTIONS(964), 1,
      anon_sym_GT,
    STATE(209), 1,
      aux_sym_api_attribute_repeat1,
  [6662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 6,
      anon_sym_GT,
      anon_sym_sequential,
      anon_sym_continueParent,
      anon_sym_preservePayload,
      anon_sym_attachPath,
      anon_sym_expression,
  [6674] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 1,
      anon_sym_GT,
    ACTIONS(970), 1,
      anon_sym_uri_DASHtemplate,
    ACTIONS(972), 1,
      anon_sym_method,
    STATE(218), 3,
      sym__endpoint_attribute,
      sym_method,
      aux_sym_http_endpoint_repeat1,
  [6692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(974), 6,
      anon_sym_GT,
      anon_sym_sequential,
      anon_sym_continueParent,
      anon_sym_preservePayload,
      anon_sym_attachPath,
      anon_sym_expression,
  [6704] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(970), 1,
      anon_sym_uri_DASHtemplate,
    ACTIONS(972), 1,
      anon_sym_method,
    ACTIONS(976), 1,
      anon_sym_GT,
    STATE(212), 3,
      sym__endpoint_attribute,
      sym_method,
      aux_sym_http_endpoint_repeat1,
  [6722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(978), 6,
      anon_sym_GT,
      anon_sym_sequential,
      anon_sym_continueParent,
      anon_sym_preservePayload,
      anon_sym_attachPath,
      anon_sym_expression,
  [6734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 6,
      anon_sym_GT,
      anon_sym_sequential,
      anon_sym_continueParent,
      anon_sym_preservePayload,
      anon_sym_attachPath,
      anon_sym_expression,
  [6746] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_LBRACK,
    ACTIONS(984), 1,
      anon_sym_RPAREN,
    ACTIONS(986), 1,
      anon_sym_DOT,
    STATE(219), 3,
      sym_json_path_array,
      sym_json_path_object,
      aux_sym_json_path_repeat1,
  [6764] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(988), 1,
      anon_sym_GT,
    ACTIONS(990), 1,
      anon_sym_uri_DASHtemplate,
    ACTIONS(993), 1,
      anon_sym_method,
    STATE(218), 3,
      sym__endpoint_attribute,
      sym_method,
      aux_sym_http_endpoint_repeat1,
  [6782] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_LBRACK,
    ACTIONS(986), 1,
      anon_sym_DOT,
    ACTIONS(996), 1,
      anon_sym_RPAREN,
    STATE(220), 3,
      sym_json_path_array,
      sym_json_path_object,
      aux_sym_json_path_repeat1,
  [6800] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(998), 1,
      anon_sym_LBRACK,
    ACTIONS(1001), 1,
      anon_sym_RPAREN,
    ACTIONS(1003), 1,
      anon_sym_DOT,
    STATE(220), 3,
      sym_json_path_array,
      sym_json_path_object,
      aux_sym_json_path_repeat1,
  [6818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1006), 6,
      anon_sym_GT,
      anon_sym_sequential,
      anon_sym_continueParent,
      anon_sym_preservePayload,
      anon_sym_attachPath,
      anon_sym_expression,
  [6830] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_LTcompleteCondition,
    ACTIONS(906), 1,
      anon_sym_LTonComplete,
    ACTIONS(1008), 1,
      anon_sym_LT_SLASHaggregate_GT,
    STATE(285), 1,
      sym_complete_condition,
    STATE(587), 1,
      sym_on_complete,
  [6849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1010), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_LT_SLASHformat_GT,
  [6860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 5,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SQUOTE,
  [6871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1012), 5,
      anon_sym_GT,
      anon_sym_LT_SLASHhttp_GT,
      anon_sym_LTtimeout_GT,
      anon_sym_LTmarkForSuspension_GT,
      anon_sym_LTsuspendOnFailure_GT,
  [6882] = 5,
    ACTIONS(1014), 1,
      anon_sym_DQUOTE,
    ACTIONS(1018), 1,
      sym_comment,
    STATE(238), 1,
      aux_sym_string_content_repeat1,
    STATE(544), 1,
      sym_string_content,
    ACTIONS(1016), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [6899] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_LTcompleteCondition,
    ACTIONS(906), 1,
      anon_sym_LTonComplete,
    ACTIONS(1020), 1,
      anon_sym_LT_SLASHaggregate_GT,
    STATE(330), 1,
      sym_complete_condition,
    STATE(726), 1,
      sym_on_complete,
  [6918] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1022), 1,
      anon_sym_GT,
    ACTIONS(1024), 1,
      anon_sym_name,
    ACTIONS(1026), 1,
      anon_sym_blocking,
    STATE(288), 1,
      sym_name,
    STATE(651), 1,
      sym_blocking,
  [6937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1028), 5,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
      anon_sym_LTinitialDuration_GT,
      anon_sym_LTprogressionFactor_GT,
      anon_sym_LTmaximumDuration_GT,
      anon_sym_LTerrorCodes_GT,
  [6948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1030), 5,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
      anon_sym_LTinitialDuration_GT,
      anon_sym_LTprogressionFactor_GT,
      anon_sym_LTmaximumDuration_GT,
      anon_sym_LTerrorCodes_GT,
  [6959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1032), 5,
      anon_sym_LT_SLASHsuspendOnFailure_GT,
      anon_sym_LTinitialDuration_GT,
      anon_sym_LTprogressionFactor_GT,
      anon_sym_LTmaximumDuration_GT,
      anon_sym_LTerrorCodes_GT,
  [6970] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1034), 1,
      anon_sym_GT,
    ACTIONS(1036), 1,
      anon_sym_sequence,
    ACTIONS(1038), 1,
      anon_sym_to,
    ACTIONS(1040), 1,
      anon_sym_soapAction,
    ACTIONS(1042), 1,
      anon_sym_endpoint,
  [6989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 5,
      anon_sym_GT,
      anon_sym_LT_SLASHhttp_GT,
      anon_sym_LTtimeout_GT,
      anon_sym_LTmarkForSuspension_GT,
      anon_sym_LTsuspendOnFailure_GT,
  [7000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1046), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_LT_SLASHformat_GT,
  [7011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1048), 5,
      anon_sym_GT,
      anon_sym_hostname,
      anon_sym_port,
      anon_sym_version,
      anon_sym_swagger,
  [7022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1050), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_LT_SLASHformat_GT,
  [7032] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      sym__unsigned_int,
    STATE(656), 1,
      sym_number,
    ACTIONS(724), 2,
      sym__float,
      sym__int,
  [7046] = 4,
    ACTIONS(1018), 1,
      sym_comment,
    ACTIONS(1052), 1,
      anon_sym_DQUOTE,
    STATE(272), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(1054), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [7060] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      sym__unsigned_int,
    STATE(650), 1,
      sym_number,
    ACTIONS(724), 2,
      sym__float,
      sym__int,
  [7074] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      sym__unsigned_int,
    STATE(649), 1,
      sym_number,
    ACTIONS(724), 2,
      sym__float,
      sym__int,
  [7088] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1056), 1,
      anon_sym_LTendpoint,
    ACTIONS(1058), 1,
      anon_sym_LTkey,
    STATE(475), 1,
      sym_endpoint,
    STATE(815), 1,
      sym_endpoint_reference,
  [7104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1060), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_LT_SLASHformat_GT,
  [7114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1062), 4,
      anon_sym_LT_SLASHhttp_GT,
      anon_sym_LTtimeout_GT,
      anon_sym_LTmarkForSuspension_GT,
      anon_sym_LTsuspendOnFailure_GT,
  [7124] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      sym__unsigned_int,
    STATE(823), 1,
      sym_number,
    ACTIONS(724), 2,
      sym__float,
      sym__int,
  [7138] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      sym__unsigned_int,
    STATE(448), 1,
      sym_number,
    ACTIONS(724), 2,
      sym__float,
      sym__int,
  [7152] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1056), 1,
      anon_sym_LTendpoint,
    ACTIONS(1058), 1,
      anon_sym_LTkey,
    STATE(543), 1,
      sym_endpoint_reference,
    STATE(545), 1,
      sym_endpoint,
  [7168] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1056), 1,
      anon_sym_LTendpoint,
    ACTIONS(1058), 1,
      anon_sym_LTkey,
    STATE(549), 1,
      sym_endpoint_reference,
    STATE(553), 1,
      sym_endpoint,
  [7184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1064), 4,
      anon_sym_full,
      anon_sym_simple,
      anon_sym_custom,
      anon_sym_headers,
  [7194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1066), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_LT_SLASHformat_GT,
  [7204] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_LTproperty,
    ACTIONS(1068), 1,
      anon_sym_LT_SLASHlog_GT,
    STATE(254), 2,
      sym_property,
      aux_sym_log_repeat1,
  [7218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1070), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_LT_SLASHformat_GT,
  [7228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1072), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_LT_SLASHformat_GT,
  [7238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1074), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_LT_SLASHformat_GT,
  [7248] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_LTproperty,
    ACTIONS(1076), 1,
      anon_sym_LT_SLASHlog_GT,
    STATE(256), 2,
      sym_property,
      aux_sym_log_repeat1,
  [7262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1078), 4,
      anon_sym_LT_SLASHhttp_GT,
      anon_sym_LTtimeout_GT,
      anon_sym_LTmarkForSuspension_GT,
      anon_sym_LTsuspendOnFailure_GT,
  [7272] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1080), 1,
      anon_sym_LT_SLASHlog_GT,
    ACTIONS(1082), 1,
      anon_sym_LTproperty,
    STATE(256), 2,
      sym_property,
      aux_sym_log_repeat1,
  [7286] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      sym__unsigned_int,
    STATE(290), 1,
      sym_number,
    ACTIONS(724), 2,
      sym__float,
      sym__int,
  [7300] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1085), 1,
      anon_sym_LT_SLASHapi_GT,
    ACTIONS(1087), 1,
      anon_sym_LTresource,
    STATE(261), 2,
      sym_resource_definition,
      aux_sym_api_definition_repeat1,
  [7314] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      sym__unsigned_int,
    STATE(747), 1,
      sym_number,
    ACTIONS(724), 2,
      sym__float,
      sym__int,
  [7328] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      sym__unsigned_int,
    STATE(665), 1,
      sym_number,
    ACTIONS(724), 2,
      sym__float,
      sym__int,
  [7342] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1087), 1,
      anon_sym_LTresource,
    ACTIONS(1089), 1,
      anon_sym_LT_SLASHapi_GT,
    STATE(277), 2,
      sym_resource_definition,
      aux_sym_api_definition_repeat1,
  [7356] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      sym__unsigned_int,
    STATE(620), 1,
      sym_number,
    ACTIONS(724), 2,
      sym__float,
      sym__int,
  [7370] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      sym__unsigned_int,
    STATE(765), 1,
      sym_number,
    ACTIONS(724), 2,
      sym__float,
      sym__int,
  [7384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1091), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_LT_SLASHformat_GT,
  [7394] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      sym__unsigned_int,
    STATE(644), 1,
      sym_number,
    ACTIONS(724), 2,
      sym__float,
      sym__int,
  [7408] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      sym__unsigned_int,
    STATE(643), 1,
      sym_number,
    ACTIONS(724), 2,
      sym__float,
      sym__int,
  [7422] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      sym__unsigned_int,
    STATE(379), 1,
      sym_number,
    ACTIONS(724), 2,
      sym__float,
      sym__int,
  [7436] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_expression,
    ACTIONS(775), 1,
      anon_sym_value,
    STATE(638), 1,
      sym_value,
    STATE(639), 1,
      sym_expression,
  [7452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 4,
      anon_sym_LT_SLASHmarkForSuspension_GT,
      anon_sym_LTretriesBeforeSuspension_GT,
      anon_sym_LTretryDelay_GT,
      anon_sym_LTerrorCodes_GT,
  [7462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1095), 4,
      anon_sym_LT_SLASHmarkForSuspension_GT,
      anon_sym_LTretriesBeforeSuspension_GT,
      anon_sym_LTretryDelay_GT,
      anon_sym_LTerrorCodes_GT,
  [7472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1097), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_LT_SLASHformat_GT,
  [7482] = 4,
    ACTIONS(1018), 1,
      sym_comment,
    ACTIONS(1099), 1,
      anon_sym_DQUOTE,
    STATE(272), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(1101), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [7496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 4,
      anon_sym_DQUOTE,
      anon_sym_GT,
      anon_sym_uri_DASHtemplate,
      anon_sym_method,
  [7506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1106), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_LT_SLASHformat_GT,
  [7516] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1108), 1,
      anon_sym_GT,
    ACTIONS(1110), 1,
      anon_sym_sequence,
    ACTIONS(1112), 1,
      anon_sym_id,
    STATE(411), 1,
      sym_id,
  [7532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1114), 4,
      anon_sym_LT_SLASHhttp_GT,
      anon_sym_LTtimeout_GT,
      anon_sym_LTmarkForSuspension_GT,
      anon_sym_LTsuspendOnFailure_GT,
  [7542] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1116), 1,
      anon_sym_LT_SLASHapi_GT,
    ACTIONS(1118), 1,
      anon_sym_LTresource,
    STATE(277), 2,
      sym_resource_definition,
      aux_sym_api_definition_repeat1,
  [7556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1121), 4,
      anon_sym_LT_SLASHhttp_GT,
      anon_sym_LTtimeout_GT,
      anon_sym_LTmarkForSuspension_GT,
      anon_sym_LTsuspendOnFailure_GT,
  [7566] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1056), 1,
      anon_sym_LTendpoint,
    ACTIONS(1058), 1,
      anon_sym_LTkey,
    STATE(599), 1,
      sym_endpoint_reference,
    STATE(600), 1,
      sym_endpoint,
  [7582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1123), 4,
      anon_sym_LT_SLASHhttp_GT,
      anon_sym_LTtimeout_GT,
      anon_sym_LTmarkForSuspension_GT,
      anon_sym_LTsuspendOnFailure_GT,
  [7592] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1125), 1,
      anon_sym_GT,
    ACTIONS(1127), 1,
      anon_sym_sequence,
    ACTIONS(1129), 1,
      anon_sym_soapAction,
    ACTIONS(1131), 1,
      anon_sym_endpoint,
  [7608] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1133), 1,
      anon_sym_LT_SLASHcompleteCondition_GT,
    ACTIONS(1135), 1,
      anon_sym_LTmessageCount,
    STATE(774), 1,
      sym_message_count,
  [7621] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1137), 1,
      anon_sym_LT_SLASHfilter_GT,
    ACTIONS(1139), 1,
      anon_sym_LTelse_GT,
    STATE(733), 1,
      sym_else,
  [7634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1141), 3,
      anon_sym_never,
      anon_sym_discard,
      anon_sym_fault,
  [7643] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      anon_sym_LTonComplete,
    ACTIONS(1143), 1,
      anon_sym_LT_SLASHaggregate_GT,
    STATE(478), 1,
      sym_on_complete,
  [7656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 3,
      ts_builtin_sym_end,
      anon_sym_LTapi,
      anon_sym_LTsequence,
  [7665] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1147), 1,
      anon_sym_GT,
    ACTIONS(1149), 1,
      anon_sym_sequence,
    ACTIONS(1151), 1,
      anon_sym_endpoint,
  [7678] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1026), 1,
      anon_sym_blocking,
    ACTIONS(1153), 1,
      anon_sym_GT,
    STATE(598), 1,
      sym_blocking,
  [7691] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1155), 1,
      anon_sym_COMMA,
    ACTIONS(1158), 1,
      anon_sym_RBRACE,
    STATE(289), 1,
      aux_sym_object_repeat1,
  [7704] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1160), 1,
      anon_sym_COMMA,
    ACTIONS(1162), 1,
      anon_sym_LT_SLASHerrorCodes_GT,
    STATE(300), 1,
      aux_sym_error_codes_repeat1,
  [7717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1164), 3,
      ts_builtin_sym_end,
      anon_sym_LTapi,
      anon_sym_LTsequence,
  [7726] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      anon_sym_COMMA,
    ACTIONS(1169), 1,
      anon_sym_RBRACK,
    STATE(292), 1,
      aux_sym_array_repeat1,
  [7739] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1135), 1,
      anon_sym_LTmessageCount,
    ACTIONS(1171), 1,
      anon_sym_LT_SLASHcompleteCondition_GT,
    STATE(522), 1,
      sym_message_count,
  [7752] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_LTtimeout_GT,
    ACTIONS(1173), 1,
      anon_sym_GT,
    STATE(447), 1,
      sym_timeout,
  [7765] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      anon_sym_COMMA,
    ACTIONS(1177), 1,
      anon_sym_RBRACK,
    STATE(292), 1,
      aux_sym_array_repeat1,
  [7778] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      anon_sym_LTonComplete,
    ACTIONS(1179), 1,
      anon_sym_LT_SLASHaggregate_GT,
    STATE(586), 1,
      sym_on_complete,
  [7791] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1181), 1,
      anon_sym_xpath,
    ACTIONS(1183), 1,
      anon_sym_source,
    STATE(641), 1,
      sym_source,
  [7804] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1185), 1,
      anon_sym_LTarg,
    ACTIONS(1188), 1,
      anon_sym_LT_SLASHargs_GT,
    STATE(298), 1,
      aux_sym_args_repeat1,
  [7817] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1190), 1,
      anon_sym_COMMA,
    ACTIONS(1192), 1,
      anon_sym_RBRACE,
    STATE(289), 1,
      aux_sym_object_repeat1,
  [7830] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1160), 1,
      anon_sym_COMMA,
    ACTIONS(1194), 1,
      anon_sym_LT_SLASHerrorCodes_GT,
    STATE(319), 1,
      aux_sym_error_codes_repeat1,
  [7843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1196), 3,
      anon_sym_LT_SLASHtimeout_GT,
      anon_sym_LTduration_GT,
      anon_sym_LTresponseAction_GT,
  [7852] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1026), 1,
      anon_sym_blocking,
    ACTIONS(1198), 1,
      anon_sym_GT,
    STATE(658), 1,
      sym_blocking,
  [7865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1200), 3,
      ts_builtin_sym_end,
      anon_sym_LTapi,
      anon_sym_LTsequence,
  [7874] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1202), 1,
      anon_sym_GT,
    ACTIONS(1204), 1,
      anon_sym_key,
    STATE(666), 1,
      sym_key,
  [7887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1206), 3,
      anon_sym_LT_SLASHaggregate_GT,
      anon_sym_LTcompleteCondition,
      anon_sym_LTonComplete,
  [7896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1208), 3,
      anon_sym_LT_SLASHtimeout_GT,
      anon_sym_LTduration_GT,
      anon_sym_LTresponseAction_GT,
  [7905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1210), 3,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [7914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1212), 3,
      ts_builtin_sym_end,
      anon_sym_LTapi,
      anon_sym_LTsequence,
  [7923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1214), 3,
      anon_sym_GT,
      anon_sym_uri_DASHtemplate,
      anon_sym_method,
  [7932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1216), 3,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [7941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1218), 3,
      ts_builtin_sym_end,
      anon_sym_LTapi,
      anon_sym_LTsequence,
  [7950] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1220), 1,
      anon_sym_LThttp,
    STATE(457), 2,
      sym__endpoint_type,
      sym_http_endpoint,
  [7961] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1139), 1,
      anon_sym_LTelse_GT,
    ACTIONS(1222), 1,
      anon_sym_LT_SLASHfilter_GT,
    STATE(663), 1,
      sym_else,
  [7974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1224), 3,
      ts_builtin_sym_end,
      anon_sym_LTapi,
      anon_sym_LTsequence,
  [7983] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1226), 1,
      anon_sym_LTinSequence_GT,
    STATE(423), 1,
      sym_in_sequence,
    STATE(574), 1,
      sym_mediation_sequences,
  [7996] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1024), 1,
      anon_sym_name,
    ACTIONS(1228), 1,
      anon_sym_GT,
    STATE(567), 1,
      sym_name,
  [8009] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1230), 1,
      anon_sym_QMARK_GT,
    ACTIONS(1232), 1,
      anon_sym_encoding,
    STATE(692), 1,
      sym_encoding_declaration,
  [8022] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1220), 1,
      anon_sym_LThttp,
    STATE(757), 2,
      sym__endpoint_type,
      sym_http_endpoint,
  [8033] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1234), 1,
      anon_sym_COMMA,
    ACTIONS(1237), 1,
      anon_sym_LT_SLASHerrorCodes_GT,
    STATE(319), 1,
      aux_sym_error_codes_repeat1,
  [8046] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1190), 1,
      anon_sym_COMMA,
    ACTIONS(1239), 1,
      anon_sym_RBRACE,
    STATE(299), 1,
      aux_sym_object_repeat1,
  [8059] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1241), 1,
      anon_sym_LTarg,
    ACTIONS(1243), 1,
      anon_sym_LT_SLASHargs_GT,
    STATE(298), 1,
      aux_sym_args_repeat1,
  [8072] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1245), 1,
      anon_sym_LTargs_SLASH_GT,
    ACTIONS(1247), 1,
      anon_sym_LTargs_GT,
    STATE(797), 1,
      sym_args,
  [8085] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1241), 1,
      anon_sym_LTarg,
    ACTIONS(1249), 1,
      anon_sym_LT_SLASHargs_GT,
    STATE(321), 1,
      aux_sym_args_repeat1,
  [8098] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(829), 1,
      sym_boolean,
    ACTIONS(1251), 2,
      anon_sym_true,
      anon_sym_false,
  [8109] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1253), 1,
      anon_sym_GT,
    ACTIONS(1255), 1,
      anon_sym_sequence,
    ACTIONS(1257), 1,
      anon_sym_endpoint,
  [8122] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(830), 1,
      sym_boolean,
    ACTIONS(1251), 2,
      anon_sym_true,
      anon_sym_false,
  [8133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(842), 1,
      sym_boolean,
    ACTIONS(1251), 2,
      anon_sym_true,
      anon_sym_false,
  [8144] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      anon_sym_COMMA,
    ACTIONS(1259), 1,
      anon_sym_RBRACK,
    STATE(295), 1,
      aux_sym_array_repeat1,
  [8157] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      anon_sym_LTonComplete,
    ACTIONS(1261), 1,
      anon_sym_LT_SLASHaggregate_GT,
    STATE(850), 1,
      sym_on_complete,
  [8170] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      anon_sym_LTonComplete,
    ACTIONS(1263), 1,
      anon_sym_LT_SLASHaggregate_GT,
    STATE(534), 1,
      sym_on_complete,
  [8183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1265), 2,
      anon_sym_LT_SLASHfilter_GT,
      anon_sym_LTelse_GT,
  [8191] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1267), 1,
      anon_sym_regex,
    STATE(747), 1,
      sym_regex,
  [8201] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1024), 1,
      anon_sym_name,
    STATE(596), 1,
      sym_name,
  [8211] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LTsequence,
    STATE(848), 1,
      sym_sequence,
  [8221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      aux_sym_identifier_token1,
    STATE(845), 1,
      sym_identifier,
  [8231] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LTsequence,
    STATE(839), 1,
      sym_sequence,
  [8241] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LTsequence,
    STATE(838), 1,
      sym_sequence,
  [8251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LTsequence,
    STATE(836), 1,
      sym_sequence,
  [8261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LTsequence,
    STATE(835), 1,
      sym_sequence,
  [8271] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LTsequence,
    STATE(648), 1,
      sym_sequence,
  [8281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1271), 1,
      anon_sym_GT,
    ACTIONS(1273), 1,
      anon_sym_endpoint,
  [8291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      aux_sym_identifier_token1,
    STATE(825), 1,
      sym_identifier,
  [8301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      aux_sym_identifier_token1,
    STATE(824), 1,
      sym_identifier,
  [8311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1275), 1,
      anon_sym_version,
    STATE(317), 1,
      sym_version_info,
  [8321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      aux_sym_identifier_token1,
    STATE(822), 1,
      sym_identifier,
  [8331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      aux_sym_identifier_token1,
    STATE(813), 1,
      sym_identifier,
  [8341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      aux_sym_identifier_token1,
    STATE(812), 1,
      sym_identifier,
  [8351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      aux_sym_identifier_token1,
    STATE(811), 1,
      sym_identifier,
  [8361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      aux_sym_identifier_token1,
    STATE(810), 1,
      sym_identifier,
  [8371] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1277), 1,
      anon_sym_swagger,
    STATE(791), 1,
      sym_swagger,
  [8381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1024), 1,
      anon_sym_name,
    STATE(461), 1,
      sym_name,
  [8391] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1279), 1,
      anon_sym_version,
    STATE(791), 1,
      sym_version,
  [8401] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1281), 1,
      anon_sym_port,
    STATE(791), 1,
      sym_port,
  [8411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1283), 1,
      anon_sym_hostname,
    STATE(791), 1,
      sym_hostname,
  [8421] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LTsequence,
    STATE(789), 1,
      sym_sequence,
  [8431] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LTsequence,
    STATE(787), 1,
      sym_sequence,
  [8441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1285), 2,
      anon_sym_LT_SLASHaggregate_GT,
      anon_sym_LTonComplete,
  [8449] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LTsequence,
    STATE(786), 1,
      sym_sequence,
  [8459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LTsequence,
    STATE(783), 1,
      sym_sequence,
  [8469] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LTsequence,
    STATE(781), 1,
      sym_sequence,
  [8479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LTsequence,
    STATE(780), 1,
      sym_sequence,
  [8489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1287), 1,
      anon_sym_GT,
    ACTIONS(1289), 1,
      anon_sym_endpoint,
  [8499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1291), 2,
      anon_sym_LT_SLASHsend_GT,
      anon_sym_LT_SLASHcall_GT,
  [8507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1293), 1,
      anon_sym_GT,
    ACTIONS(1295), 1,
      anon_sym_endpoint,
  [8517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      aux_sym_identifier_token1,
    STATE(759), 1,
      sym_identifier,
  [8527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1297), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
  [8535] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1299), 1,
      anon_sym_xmlns,
    STATE(755), 1,
      sym_api_attribute,
  [8545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      aux_sym_identifier_token1,
    STATE(746), 1,
      sym_identifier,
  [8555] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      aux_sym_identifier_token1,
    STATE(745), 1,
      sym_identifier,
  [8565] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      aux_sym_identifier_token1,
    STATE(744), 1,
      sym_identifier,
  [8575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1301), 2,
      anon_sym_LT_SLASHaggregate_GT,
      anon_sym_LTonComplete,
  [8583] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1303), 1,
      anon_sym_max,
    STATE(539), 1,
      sym_max,
  [8593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      aux_sym_identifier_token1,
    STATE(743), 1,
      sym_identifier,
  [8603] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      aux_sym_identifier_token1,
    STATE(742), 1,
      sym_identifier,
  [8613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1305), 2,
      anon_sym_LT_SLASHfilter_GT,
      anon_sym_LTelse_GT,
  [8621] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      aux_sym_identifier_token1,
    STATE(741), 1,
      sym_identifier,
  [8631] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      aux_sym_identifier_token1,
    STATE(217), 1,
      sym_identifier,
  [8641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1307), 2,
      anon_sym_value,
      anon_sym_expression,
  [8649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1237), 2,
      anon_sym_COMMA,
      anon_sym_LT_SLASHerrorCodes_GT,
  [8657] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1309), 1,
      anon_sym_context,
    STATE(728), 1,
      sym_context,
  [8667] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LTsequence,
    STATE(725), 1,
      sym_sequence,
  [8677] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      aux_sym_identifier_token1,
    STATE(579), 1,
      sym_identifier,
  [8687] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LTsequence,
    STATE(722), 1,
      sym_sequence,
  [8697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LTsequence,
    STATE(718), 1,
      sym_sequence,
  [8707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LTsequence,
    STATE(716), 1,
      sym_sequence,
  [8717] = 3,
    ACTIONS(1018), 1,
      sym_comment,
    ACTIONS(1311), 1,
      aux_sym_value_token1,
    STATE(676), 1,
      sym_expression_string,
  [8727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1313), 2,
      anon_sym_DQUOTE,
      anon_sym_GT,
  [8735] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1315), 1,
      anon_sym_methods,
    STATE(672), 1,
      sym_resource_attribute,
  [8745] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      aux_sym_identifier_token1,
    STATE(669), 1,
      sym_identifier,
  [8755] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1317), 1,
      anon_sym_level,
    STATE(403), 1,
      sym_level,
  [8765] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1024), 1,
      anon_sym_name,
    STATE(167), 1,
      sym_name,
  [8775] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_expression,
    STATE(275), 1,
      sym_expression,
  [8785] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1112), 1,
      anon_sym_id,
    STATE(631), 1,
      sym_id,
  [8795] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1319), 1,
      anon_sym_media_DASHtype,
    STATE(619), 1,
      sym_media_type,
  [8805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1321), 2,
      anon_sym_QMARK_GT,
      anon_sym_encoding,
  [8813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1323), 2,
      anon_sym_xml,
      anon_sym_json,
  [8821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1169), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1325), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1158), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8845] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1327), 1,
      anon_sym_GT,
    ACTIONS(1329), 1,
      anon_sym_endpoint,
  [8855] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1056), 1,
      anon_sym_LTendpoint,
    STATE(611), 1,
      sym_endpoint,
  [8865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LTsequence,
    STATE(693), 1,
      sym_sequence,
  [8875] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1331), 1,
      anon_sym_GT,
    ACTIONS(1333), 1,
      anon_sym_SLASH_GT,
  [8885] = 3,
    ACTIONS(1018), 1,
      sym_comment,
    ACTIONS(1311), 1,
      aux_sym_value_token1,
    STATE(680), 1,
      sym_expression_string,
  [8895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1335), 2,
      anon_sym_LTarg,
      anon_sym_LT_SLASHargs_GT,
  [8903] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_expression,
    STATE(590), 1,
      sym_expression,
  [8913] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_expression,
    STATE(413), 1,
      sym_expression,
  [8923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LTsequence,
    STATE(660), 1,
      sym_sequence,
  [8933] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1056), 1,
      anon_sym_LTendpoint,
    STATE(565), 1,
      sym_endpoint,
  [8943] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LTsequence,
    STATE(542), 1,
      sym_sequence,
  [8953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1337), 1,
      anon_sym_GT,
    ACTIONS(1339), 1,
      anon_sym_sequence,
  [8963] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1341), 1,
      anon_sym_LTthen_GT,
    STATE(283), 1,
      sym_then,
  [8973] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1343), 1,
      anon_sym_GT,
    ACTIONS(1345), 1,
      anon_sym_sequence,
  [8983] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      aux_sym_identifier_token1,
    STATE(521), 1,
      sym_identifier,
  [8993] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1347), 1,
      aux_sym_identifier_token1,
    STATE(76), 1,
      sym_identifier,
  [9003] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1349), 1,
      anon_sym_LTtarget,
    STATE(473), 1,
      sym_target,
  [9013] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      aux_sym_identifier_token1,
    STATE(307), 1,
      sym_identifier,
  [9023] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1351), 1,
      anon_sym_LTformat,
    STATE(322), 1,
      sym_format,
  [9033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(972), 1,
      anon_sym_method,
    STATE(466), 1,
      sym_method,
  [9043] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      aux_sym_identifier_token1,
    STATE(524), 1,
      sym_identifier,
  [9053] = 3,
    ACTIONS(1018), 1,
      sym_comment,
    ACTIONS(1311), 1,
      aux_sym_value_token1,
    STATE(655), 1,
      sym_expression_string,
  [9063] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1267), 1,
      anon_sym_regex,
    STATE(526), 1,
      sym_regex,
  [9073] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1353), 1,
      anon_sym_LToutSequence_GT,
    STATE(445), 1,
      sym_out_sequence,
  [9083] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      aux_sym_identifier_token1,
    STATE(653), 1,
      sym_identifier,
  [9093] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      aux_sym_identifier_token1,
    STATE(459), 1,
      sym_identifier,
  [9103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1355), 2,
      anon_sym_true,
      anon_sym_false,
  [9111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1357), 2,
      anon_sym_LTargs_SLASH_GT,
      anon_sym_LTargs_GT,
  [9119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LTsequence,
    STATE(709), 1,
      sym_sequence,
  [9129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      aux_sym_identifier_token1,
    STATE(626), 1,
      sym_identifier,
  [9139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      aux_sym_identifier_token1,
    STATE(625), 1,
      sym_identifier,
  [9149] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1359), 1,
      anon_sym_DOLLAR_DOT,
    STATE(730), 1,
      sym_json_path,
  [9159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1361), 2,
      anon_sym_LT_SLASHaggregate_GT,
      anon_sym_LTonComplete,
  [9167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      aux_sym_identifier_token1,
    STATE(624), 1,
      sym_identifier,
  [9177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      aux_sym_identifier_token1,
    STATE(531), 1,
      sym_identifier,
  [9187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1363), 2,
      anon_sym_GT,
      anon_sym_sequence,
  [9195] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      aux_sym_identifier_token1,
    STATE(623), 1,
      sym_identifier,
  [9205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1365), 2,
      anon_sym_LT_SLASHaggregate_GT,
      anon_sym_LTonComplete,
  [9213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1367), 1,
      anon_sym_min,
    STATE(372), 1,
      sym_min,
  [9223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1341), 1,
      anon_sym_LTthen_GT,
    STATE(313), 1,
      sym_then,
  [9233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      aux_sym_identifier_token1,
    STATE(589), 1,
      sym_identifier,
  [9243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1369), 2,
      anon_sym_LT_SLASHsend_GT,
      anon_sym_LT_SLASHcall_GT,
  [9251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1371), 2,
      anon_sym_xml,
      anon_sym_json,
  [9259] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      aux_sym_identifier_token1,
    STATE(736), 1,
      sym_identifier,
  [9269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 2,
      anon_sym_set,
      anon_sym_remove,
  [9277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1373), 1,
      anon_sym_LTfaultSequence_GT,
    STATE(772), 1,
      sym_fault_sequence,
  [9287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1375), 2,
      anon_sym_LT_SLASHapi_GT,
      anon_sym_LTresource,
  [9295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1377), 1,
      anon_sym_GT,
  [9302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1379), 1,
      anon_sym_LT_SLASHinitialDuration_GT,
  [9309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1381), 1,
      anon_sym_DQUOTE,
  [9316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1383), 1,
      anon_sym_DQUOTE,
  [9323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1385), 1,
      anon_sym_DQUOTE,
  [9330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1387), 1,
      anon_sym_DQUOTE,
  [9337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1389), 1,
      anon_sym_GT,
  [9344] = 2,
    ACTIONS(1018), 1,
      sym_comment,
    ACTIONS(1391), 1,
      aux_sym_value_token1,
  [9351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1393), 1,
      anon_sym_DQUOTE,
  [9358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1395), 1,
      anon_sym_DQUOTE,
  [9365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1397), 1,
      anon_sym_LT_SLASHendpoint_GT,
  [9372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1399), 1,
      anon_sym_LT_SLASHformat_GT,
  [9379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1401), 1,
      anon_sym_DQUOTE,
  [9386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1403), 1,
      anon_sym_LT_SLASHpayloadFactory_GT,
  [9393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1405), 1,
      anon_sym_DQUOTE,
  [9400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1407), 1,
      anon_sym_LToutSequence_GT,
  [9407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1409), 1,
      anon_sym_EQ,
  [9414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1411), 1,
      anon_sym_LTfaultSequence_GT,
  [9421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1413), 1,
      anon_sym_LT_SLASHresource_GT,
  [9428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1415), 1,
      anon_sym_DQUOTE,
  [9435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1417), 1,
      anon_sym_LT_SLASHendpoint_GT,
  [9442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1419), 1,
      anon_sym_EQ,
  [9449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1421), 1,
      anon_sym_DQUOTE,
  [9456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1423), 1,
      anon_sym_GT,
  [9463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1425), 1,
      anon_sym_LPAREN,
  [9470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1427), 1,
      anon_sym_DQUOTE,
  [9477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1429), 1,
      anon_sym_LT_SLASHiterate_GT,
  [9484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1431), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [9491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1433), 1,
      anon_sym_LT_SLASHcall_GT,
  [9498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1435), 1,
      anon_sym_EQ,
  [9505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1437), 1,
      anon_sym_DQUOTE,
  [9512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1439), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [9519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1441), 1,
      anon_sym_SLASH_GT,
  [9526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1443), 1,
      anon_sym_RPAREN,
  [9533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1445), 1,
      anon_sym_RPAREN,
  [9540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1447), 1,
      anon_sym_RPAREN,
  [9547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1449), 1,
      anon_sym_RPAREN,
  [9554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1451), 1,
      anon_sym_EQ,
  [9561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1453), 1,
      anon_sym_DQUOTE,
  [9568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1455), 1,
      anon_sym_RPAREN,
  [9575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1457), 1,
      anon_sym_RPAREN,
  [9582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1459), 1,
      anon_sym_RPAREN,
  [9589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1461), 1,
      anon_sym_RPAREN,
  [9596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1463), 1,
      anon_sym_RPAREN,
  [9603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1465), 1,
      anon_sym_RPAREN,
  [9610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1467), 1,
      anon_sym_RPAREN,
  [9617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1469), 1,
      anon_sym_RPAREN,
  [9624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1471), 1,
      anon_sym_RPAREN,
  [9631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1473), 1,
      anon_sym_RPAREN,
  [9638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1475), 1,
      anon_sym_RPAREN,
  [9645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1477), 1,
      anon_sym_RPAREN,
  [9652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1479), 1,
      anon_sym_RPAREN,
  [9659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1481), 1,
      anon_sym_RPAREN,
  [9666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1483), 1,
      anon_sym_RPAREN,
  [9673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1485), 1,
      anon_sym_RPAREN,
  [9680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1487), 1,
      anon_sym_RPAREN,
  [9687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1489), 1,
      anon_sym_RPAREN,
  [9694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1491), 1,
      anon_sym_RPAREN,
  [9701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1493), 1,
      anon_sym_RPAREN,
  [9708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1495), 1,
      anon_sym_RPAREN,
  [9715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1497), 1,
      anon_sym_RPAREN,
  [9722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1499), 1,
      anon_sym_RPAREN,
  [9729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1501), 1,
      anon_sym_RPAREN,
  [9736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1503), 1,
      anon_sym_RPAREN,
  [9743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1505), 1,
      anon_sym_RPAREN,
  [9750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1507), 1,
      anon_sym_RPAREN,
  [9757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1509), 1,
      anon_sym_RPAREN,
  [9764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1511), 1,
      anon_sym_RPAREN,
  [9771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1513), 1,
      anon_sym_RPAREN,
  [9778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1515), 1,
      anon_sym_RPAREN,
  [9785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1517), 1,
      anon_sym_RPAREN,
  [9792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1519), 1,
      anon_sym_RPAREN,
  [9799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1521), 1,
      anon_sym_RPAREN,
  [9806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1523), 1,
      anon_sym_RPAREN,
  [9813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1525), 1,
      anon_sym_SQUOTE,
  [9820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1527), 1,
      anon_sym_LT_SLASHcompleteCondition_GT,
  [9827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1529), 1,
      anon_sym_GT,
  [9834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1531), 1,
      anon_sym_DQUOTE,
  [9841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1533), 1,
      anon_sym_LPAREN,
  [9848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1535), 1,
      anon_sym_GT,
  [9855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1537), 1,
      anon_sym_LT_SLASHfilter_GT,
  [9862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1539), 1,
      anon_sym_LPAREN,
  [9869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1541), 1,
      anon_sym_DQUOTE,
  [9876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1543), 1,
      anon_sym_LT_SLASHcompleteCondition_GT,
  [9883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1545), 1,
      anon_sym_DQUOTE,
  [9890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1547), 1,
      anon_sym_LPAREN,
  [9897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1549), 1,
      anon_sym_LT_SLASHiterate_GT,
  [9904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1551), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [9911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1553), 1,
      anon_sym_LPAREN,
  [9918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1555), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [9925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1557), 1,
      anon_sym_LPAREN,
  [9932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1559), 1,
      anon_sym_EQ,
  [9939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1561), 1,
      anon_sym_SLASH_GT,
  [9946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1563), 1,
      anon_sym_COLON,
  [9953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1565), 1,
      anon_sym_DQUOTE,
  [9960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1567), 1,
      anon_sym_LT_SLASHforeach_GT,
  [9967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1569), 1,
      anon_sym_LT_SLASHcall_GT,
  [9974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1571), 1,
      anon_sym_DQUOTE,
  [9981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1573), 1,
      anon_sym_LT_SLASHcall_GT,
  [9988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1575), 1,
      anon_sym_EQ,
  [9995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1577), 1,
      anon_sym_EQ,
  [10002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1579), 1,
      anon_sym_SLASH_GT,
  [10009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1581), 1,
      anon_sym_LT_SLASHcall_GT,
  [10016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1583), 1,
      anon_sym_SLASH_GT,
  [10023] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1585), 1,
      anon_sym_SLASH_GT,
  [10030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1587), 1,
      anon_sym_LT_SLASHpayloadFactory_GT,
  [10037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1589), 1,
      anon_sym_LT_SLASHcall_GT,
  [10044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1591), 1,
      anon_sym_context,
  [10051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1593), 1,
      anon_sym_DQUOTE,
  [10058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1595), 1,
      anon_sym_DQUOTE,
  [10065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1597), 1,
      anon_sym_LT_SLASHresource_GT,
  [10072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1599), 1,
      anon_sym_DQUOTE,
  [10079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1601), 1,
      anon_sym_DQUOTE,
  [10086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1603), 1,
      anon_sym_DQUOTE,
  [10093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1605), 1,
      anon_sym_DQUOTE,
  [10100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1607), 1,
      anon_sym_DQUOTE,
  [10107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1609), 1,
      anon_sym_DQUOTE,
  [10114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1611), 1,
      anon_sym_DQUOTE,
  [10121] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1613), 1,
      anon_sym_LT_SLASHsend_GT,
  [10128] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1615), 1,
      anon_sym_DQUOTE,
  [10135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1617), 1,
      anon_sym_GT,
  [10142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1619), 1,
      anon_sym_LT_SLASHendpoint_GT,
  [10149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1621), 1,
      anon_sym_LPAREN,
  [10156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1623), 1,
      anon_sym_LPAREN,
  [10163] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1625), 1,
      anon_sym_LT_SLASHfilter_GT,
  [10170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1627), 1,
      anon_sym_LPAREN,
  [10177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1629), 1,
      anon_sym_LT_SLASHcall_GT,
  [10184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1631), 1,
      anon_sym_LT_SLASHresource_GT,
  [10191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1633), 1,
      anon_sym_GT,
  [10198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1635), 1,
      anon_sym_EQ,
  [10205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1637), 1,
      anon_sym_LPAREN,
  [10212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1639), 1,
      anon_sym_DQUOTE,
  [10219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1641), 1,
      anon_sym_DQUOTE,
  [10226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1643), 1,
      anon_sym_LPAREN,
  [10233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1645), 1,
      anon_sym_DQUOTE,
  [10240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1647), 1,
      anon_sym_DQUOTE,
  [10247] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1649), 1,
      anon_sym_DQUOTE,
  [10254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1651), 1,
      anon_sym_DQUOTE,
  [10261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1653), 1,
      anon_sym_DQUOTE,
  [10268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1655), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [10275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1657), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [10282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1659), 1,
      anon_sym_LPAREN,
  [10289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1661), 1,
      anon_sym_DQUOTE,
  [10296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1663), 1,
      anon_sym_SLASH_GT,
  [10303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1665), 1,
      anon_sym_LPAREN,
  [10310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1667), 1,
      anon_sym_DQUOTE,
  [10317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1669), 1,
      anon_sym_DQUOTE,
  [10324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1671), 1,
      anon_sym_LPAREN,
  [10331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1673), 1,
      anon_sym_DQUOTE,
  [10338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1675), 1,
      anon_sym_GT,
  [10345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1677), 1,
      anon_sym_DQUOTE,
  [10352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1679), 1,
      anon_sym_GT,
  [10359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1681), 1,
      anon_sym_LT_SLASHcall_GT,
  [10366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1683), 1,
      anon_sym_LT_SLASHcall_GT,
  [10373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1685), 1,
      anon_sym_EQ,
  [10380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1687), 1,
      anon_sym_EQ,
  [10387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1689), 1,
      anon_sym_EQ,
  [10394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1691), 1,
      anon_sym_EQ,
  [10401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1693), 1,
      anon_sym_EQ,
  [10408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1695), 1,
      anon_sym_EQ,
  [10415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1697), 1,
      anon_sym_EQ,
  [10422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1699), 1,
      anon_sym_DQUOTE,
  [10429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1701), 1,
      anon_sym_LPAREN,
  [10436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1703), 1,
      anon_sym_DQUOTE,
  [10443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1705), 1,
      anon_sym_LT_SLASHsend_GT,
  [10450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1707), 1,
      anon_sym_DQUOTE,
  [10457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1709), 1,
      anon_sym_DQUOTE,
  [10464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1711), 1,
      anon_sym_name,
  [10471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1713), 1,
      anon_sym_QMARK_GT,
  [10478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1715), 1,
      anon_sym_RPAREN,
  [10485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1717), 1,
      anon_sym_LPAREN,
  [10492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1719), 1,
      anon_sym_GT,
  [10499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1721), 1,
      anon_sym_GT,
  [10506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1723), 1,
      anon_sym_DQUOTE,
  [10513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1725), 1,
      anon_sym_EQ,
  [10520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1727), 1,
      anon_sym_GT,
  [10527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1729), 1,
      anon_sym_DQUOTE,
  [10534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1731), 1,
      anon_sym_DQUOTE,
  [10541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1733), 1,
      anon_sym_DQUOTE,
  [10548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1735), 1,
      anon_sym_DQUOTE,
  [10555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1737), 1,
      anon_sym_EQ,
  [10562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1739), 1,
      anon_sym_EQ,
  [10569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1741), 1,
      anon_sym_EQ,
  [10576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1743), 1,
      anon_sym_EQ,
  [10583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1745), 1,
      anon_sym_GT,
  [10590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1747), 1,
      anon_sym_EQ,
  [10597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1749), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [10604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1751), 1,
      anon_sym_LPAREN,
  [10611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1753), 1,
      anon_sym_LPAREN,
  [10618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1755), 1,
      anon_sym_DQUOTE,
  [10625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1757), 1,
      anon_sym_LPAREN,
  [10632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1759), 1,
      anon_sym_SLASH_GT,
  [10639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1761), 1,
      anon_sym_SLASH_GT,
  [10646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1763), 1,
      anon_sym_EQ,
  [10653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1765), 1,
      anon_sym_GT,
  [10660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1767), 1,
      anon_sym_LPAREN,
  [10667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1769), 1,
      anon_sym_LT_SLASHretriesBeforeSuspension_GT,
  [10674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1771), 1,
      anon_sym_LT_SLASHretryDelay_GT,
  [10681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1773), 1,
      anon_sym_EQ,
  [10688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1775), 1,
      anon_sym_EQ,
  [10695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1777), 1,
      anon_sym_EQ,
  [10702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1779), 1,
      anon_sym_LT_SLASHtarget_GT,
  [10709] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1781), 1,
      anon_sym_LT_SLASHprogressionFactor_GT,
  [10716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1783), 1,
      anon_sym_LT_SLASHmaximumDuration_GT,
  [10723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1785), 1,
      anon_sym_GT,
  [10730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1787), 1,
      anon_sym_LPAREN,
  [10737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1789), 1,
      anon_sym_DQUOTE,
  [10744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1791), 1,
      anon_sym_LT_SLASHendpoint_GT,
  [10751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1793), 1,
      anon_sym_DQUOTE,
  [10758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1795), 1,
      anon_sym_RBRACK,
  [10765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1797), 1,
      anon_sym_EQ,
  [10772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1799), 1,
      anon_sym_GT,
  [10779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1801), 1,
      anon_sym_EQ,
  [10786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1803), 1,
      anon_sym_LT_SLASHforeach_GT,
  [10793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1805), 1,
      anon_sym_LPAREN,
  [10800] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1807), 1,
      anon_sym_LPAREN,
  [10807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1809), 1,
      anon_sym_LT_SLASHfilter_GT,
  [10814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1811), 1,
      anon_sym_max,
  [10821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1813), 1,
      anon_sym_DQUOTE,
  [10828] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1815), 1,
      anon_sym_GT,
  [10835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1817), 1,
      anon_sym_LPAREN,
  [10842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1819), 1,
      anon_sym_EQ,
  [10849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1821), 1,
      anon_sym_DQUOTE,
  [10856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1823), 1,
      anon_sym_GT,
  [10863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1825), 1,
      anon_sym_LPAREN,
  [10870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1827), 1,
      anon_sym_GT,
  [10877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1829), 1,
      anon_sym_EQ,
  [10884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1831), 1,
      anon_sym_LPAREN,
  [10891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1833), 1,
      anon_sym_LPAREN,
  [10898] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1835), 1,
      anon_sym_DQUOTE,
  [10905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1837), 1,
      anon_sym_DQUOTE,
  [10912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1839), 1,
      anon_sym_LPAREN,
  [10919] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1841), 1,
      anon_sym_DQUOTE,
  [10926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1843), 1,
      anon_sym_DQUOTE,
  [10933] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1845), 1,
      sym_encoding,
  [10940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1847), 1,
      anon_sym_LPAREN,
  [10947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1849), 1,
      anon_sym_LPAREN,
  [10954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1851), 1,
      anon_sym_LPAREN,
  [10961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1853), 1,
      anon_sym_LPAREN,
  [10968] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1855), 1,
      anon_sym_LPAREN,
  [10975] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1857), 1,
      anon_sym_LPAREN,
  [10982] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1859), 1,
      anon_sym_LPAREN,
  [10989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1861), 1,
      anon_sym_LPAREN,
  [10996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1863), 1,
      anon_sym_LPAREN,
  [11003] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1865), 1,
      anon_sym_LPAREN,
  [11010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1867), 1,
      anon_sym_QMARK_GT,
  [11017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1869), 1,
      anon_sym_LT_SLASHforeach_GT,
  [11024] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1871), 1,
      anon_sym_EQ,
  [11031] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1873), 1,
      anon_sym_SLASH_GT,
  [11038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1875), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [11045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1877), 1,
      sym_version_number,
  [11052] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1879), 1,
      anon_sym_LPAREN,
  [11059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1881), 1,
      anon_sym_EQ,
  [11066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1883), 1,
      anon_sym_SQUOTE,
  [11073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1885), 1,
      anon_sym_EQ,
  [11080] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1887), 1,
      anon_sym_EQ,
  [11087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1889), 1,
      anon_sym_EQ,
  [11094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1891), 1,
      anon_sym_COLON,
  [11101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1893), 1,
      anon_sym_EQ,
  [11108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1895), 1,
      anon_sym_EQ,
  [11115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1897), 1,
      anon_sym_DQUOTE,
  [11122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1899), 1,
      anon_sym_DQUOTE,
  [11129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1901), 1,
      anon_sym_LT_SLASHforeach_GT,
  [11136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1903), 1,
      anon_sym_GT,
  [11143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1905), 1,
      anon_sym_DQUOTE,
  [11150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1907), 1,
      anon_sym_DQUOTE,
  [11157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1909), 1,
      anon_sym_DQUOTE,
  [11164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1911), 1,
      anon_sym_EQ,
  [11171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1913), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [11178] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1915), 1,
      anon_sym_LT_SLASHtarget_GT,
  [11185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1917), 1,
      anon_sym_DQUOTE,
  [11192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1919), 1,
      anon_sym_LT_SLASHtarget_GT,
  [11199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1921), 1,
      anon_sym_DQUOTE,
  [11206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1923), 1,
      anon_sym_DQUOTE,
  [11213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1925), 1,
      anon_sym_DQUOTE,
  [11220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1927), 1,
      anon_sym_LT_SLASHtarget_GT,
  [11227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1929), 1,
      anon_sym_DQUOTE,
  [11234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1931), 1,
      anon_sym_DQUOTE,
  [11241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1933), 1,
      anon_sym_LT_SLASHtarget_GT,
  [11248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1935), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [11255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1937), 1,
      anon_sym_EQ,
  [11262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1939), 1,
      anon_sym_DQUOTE,
  [11269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1941), 1,
      anon_sym_LT_SLASHiterate_GT,
  [11276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1943), 1,
      anon_sym_RPAREN,
  [11283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1945), 1,
      anon_sym_LT_SLASHiterate_GT,
  [11290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1947), 1,
      anon_sym_DQUOTE,
  [11297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1949), 1,
      anon_sym_LT_SLASHfilter_GT,
  [11304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1951), 1,
      anon_sym_EQ,
  [11311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1953), 1,
      anon_sym_LT_SLASHiterate_GT,
  [11318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1955), 1,
      anon_sym_DQUOTE,
  [11325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1957), 1,
      anon_sym_DQUOTE,
  [11332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1959), 1,
      anon_sym_LT_SLASHiterate_GT,
  [11339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1961), 1,
      anon_sym_DQUOTE,
  [11346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1963), 1,
      anon_sym_EQ,
  [11353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1965), 1,
      anon_sym_DQUOTE,
  [11360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1967), 1,
      anon_sym_DQUOTE,
  [11367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1969), 1,
      anon_sym_DQUOTE,
  [11374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1971), 1,
      anon_sym_DQUOTE,
  [11381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1973), 1,
      anon_sym_DQUOTE,
  [11388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1975), 1,
      anon_sym_DQUOTE,
  [11395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1977), 1,
      anon_sym_DQUOTE,
  [11402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1979), 1,
      anon_sym_EQ,
  [11409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1981), 1,
      anon_sym_EQ,
  [11416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1983), 1,
      anon_sym_EQ,
  [11423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1985), 1,
      anon_sym_EQ,
  [11430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1987), 1,
      anon_sym_EQ,
  [11437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1989), 1,
      anon_sym_GT,
  [11444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1991), 1,
      anon_sym_GT,
  [11451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1993), 1,
      anon_sym_GT,
  [11458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1995), 1,
      anon_sym_GT,
  [11465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1997), 1,
      anon_sym_LT_SLASHendpoint_GT,
  [11472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1999), 1,
      anon_sym_GT,
  [11479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2001), 1,
      anon_sym_DQUOTE,
  [11486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2003), 1,
      anon_sym_DQUOTE,
  [11493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2005), 1,
      anon_sym_DQUOTE,
  [11500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2007), 1,
      anon_sym_DQUOTE,
  [11507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2009), 1,
      anon_sym_DQUOTE,
  [11514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2011), 1,
      anon_sym_EQ,
  [11521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2013), 1,
      anon_sym_LT_SLASHduration_GT,
  [11528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2015), 1,
      anon_sym_EQ,
  [11535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2017), 1,
      anon_sym_EQ,
  [11542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2019), 1,
      anon_sym_LT_SLASHresponseAction_GT,
  [11549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2021), 1,
      anon_sym_EQ,
  [11556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2023), 1,
      anon_sym_EQ,
  [11563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2025), 1,
      anon_sym_GT,
  [11570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2027), 1,
      anon_sym_LT_SLASHresource_GT,
  [11577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2029), 1,
      anon_sym_EQ,
  [11584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2031), 1,
      anon_sym_LT_SLASHcompleteCondition_GT,
  [11591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2033), 1,
      anon_sym_DQUOTE,
  [11598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2035), 1,
      anon_sym_LTfaultSequence_GT,
  [11605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2037), 1,
      anon_sym_LToutSequence_GT,
  [11612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2039), 1,
      anon_sym_uri_DASHtemplate,
  [11619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2041), 1,
      anon_sym_DQUOTE,
  [11626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2043), 1,
      anon_sym_LT_SLASHtarget_GT,
  [11633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2045), 1,
      anon_sym_LT_SLASHtarget_GT,
  [11640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2047), 1,
      anon_sym_DQUOTE,
  [11647] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2049), 1,
      anon_sym_LT_SLASHtarget_GT,
  [11654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2051), 1,
      anon_sym_DQUOTE,
  [11661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2053), 1,
      anon_sym_DQUOTE,
  [11668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2055), 1,
      anon_sym_LT_SLASHtarget_GT,
  [11675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2057), 1,
      anon_sym_LT_SLASHtarget_GT,
  [11682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2059), 1,
      anon_sym_DQUOTE,
  [11689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2061), 1,
      anon_sym_LT_SLASHtarget_GT,
  [11696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2063), 1,
      anon_sym_EQ,
  [11703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2065), 1,
      anon_sym_DQUOTE,
  [11710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2067), 1,
      anon_sym_EQ,
  [11717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2069), 1,
      anon_sym_EQ,
  [11724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2071), 1,
      anon_sym_EQ,
  [11731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2073), 1,
      anon_sym_LT_SLASHiterate_GT,
  [11738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2075), 1,
      anon_sym_LT_SLASHiterate_GT,
  [11745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2077), 1,
      anon_sym_LT_SLASHpayloadFactory_GT,
  [11752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2079), 1,
      anon_sym_LT_SLASHiterate_GT,
  [11759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2081), 1,
      anon_sym_LT_SLASHaggregate_GT,
  [11766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2083), 1,
      anon_sym_LT_SLASHpayloadFactory_GT,
  [11773] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2085), 1,
      anon_sym_LT_SLASHiterate_GT,
  [11780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2087), 1,
      anon_sym_LT_SLASHiterate_GT,
  [11787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2089), 1,
      anon_sym_DQUOTE,
  [11794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2091), 1,
      anon_sym_LT_SLASHiterate_GT,
  [11801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2093), 1,
      anon_sym_DQUOTE,
  [11808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2095), 1,
      ts_builtin_sym_end,
  [11815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2097), 1,
      anon_sym_DQUOTE,
  [11822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2099), 1,
      anon_sym_DQUOTE,
  [11829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2101), 1,
      anon_sym_DQUOTE,
  [11836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2103), 1,
      anon_sym_DQUOTE,
  [11843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2105), 1,
      anon_sym_DQUOTE,
  [11850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2107), 1,
      anon_sym_DQUOTE,
  [11857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2109), 1,
      anon_sym_DQUOTE,
  [11864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2111), 1,
      anon_sym_DQUOTE,
  [11871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2113), 1,
      anon_sym_LT_SLASHcall_GT,
  [11878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2115), 1,
      anon_sym_EQ,
  [11885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2117), 1,
      anon_sym_EQ,
  [11892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2119), 1,
      anon_sym_GT,
  [11899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2121), 1,
      anon_sym_EQ,
  [11906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2123), 1,
      anon_sym_GT,
  [11913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2125), 1,
      anon_sym_GT,
  [11920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2127), 1,
      anon_sym_DQUOTE,
  [11927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2129), 1,
      anon_sym_DQUOTE,
  [11934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2131), 1,
      anon_sym_DQUOTE,
  [11941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2133), 1,
      anon_sym_DQUOTE,
  [11948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2135), 1,
      anon_sym_EQ,
  [11955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2137), 1,
      anon_sym_DQUOTE,
  [11962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2139), 1,
      anon_sym_EQ,
  [11969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2141), 1,
      anon_sym_DQUOTE,
  [11976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2143), 1,
      anon_sym_DQUOTE,
  [11983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2145), 1,
      anon_sym_DQUOTE,
  [11990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2147), 1,
      anon_sym_DQUOTE,
  [11997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2149), 1,
      anon_sym_DQUOTE,
  [12004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2151), 1,
      anon_sym_DQUOTE,
  [12011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2153), 1,
      anon_sym_LT_SLASHtarget_GT,
  [12018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2155), 1,
      anon_sym_LT_SLASHtarget_GT,
  [12025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2157), 1,
      anon_sym_DQUOTE,
  [12032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2159), 1,
      anon_sym_LT_SLASHtarget_GT,
  [12039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2161), 1,
      anon_sym_LT_SLASHtarget_GT,
  [12046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2163), 1,
      anon_sym_LT_SLASHiterate_GT,
  [12053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2165), 1,
      anon_sym_LT_SLASHiterate_GT,
  [12060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2167), 1,
      anon_sym_DQUOTE,
  [12067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2169), 1,
      anon_sym_LT_SLASHiterate_GT,
  [12074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2171), 1,
      anon_sym_LT_SLASHiterate_GT,
  [12081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2173), 1,
      anon_sym_DQUOTE,
  [12088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2175), 1,
      anon_sym_GT,
  [12095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2177), 1,
      anon_sym_DQUOTE,
  [12102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2179), 1,
      anon_sym_LT_SLASHtarget_GT,
  [12109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2181), 1,
      anon_sym_LT_SLASHiterate_GT,
  [12116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(2183), 1,
      anon_sym_LT_SLASHaggregate_GT,
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
  [SMALL_STATE(90)] = 2799,
  [SMALL_STATE(91)] = 2862,
  [SMALL_STATE(92)] = 2925,
  [SMALL_STATE(93)] = 2988,
  [SMALL_STATE(94)] = 3051,
  [SMALL_STATE(95)] = 3114,
  [SMALL_STATE(96)] = 3177,
  [SMALL_STATE(97)] = 3240,
  [SMALL_STATE(98)] = 3303,
  [SMALL_STATE(99)] = 3366,
  [SMALL_STATE(100)] = 3429,
  [SMALL_STATE(101)] = 3492,
  [SMALL_STATE(102)] = 3555,
  [SMALL_STATE(103)] = 3618,
  [SMALL_STATE(104)] = 3681,
  [SMALL_STATE(105)] = 3744,
  [SMALL_STATE(106)] = 3807,
  [SMALL_STATE(107)] = 3870,
  [SMALL_STATE(108)] = 3933,
  [SMALL_STATE(109)] = 3996,
  [SMALL_STATE(110)] = 4059,
  [SMALL_STATE(111)] = 4089,
  [SMALL_STATE(112)] = 4119,
  [SMALL_STATE(113)] = 4149,
  [SMALL_STATE(114)] = 4179,
  [SMALL_STATE(115)] = 4208,
  [SMALL_STATE(116)] = 4237,
  [SMALL_STATE(117)] = 4265,
  [SMALL_STATE(118)] = 4293,
  [SMALL_STATE(119)] = 4321,
  [SMALL_STATE(120)] = 4349,
  [SMALL_STATE(121)] = 4377,
  [SMALL_STATE(122)] = 4405,
  [SMALL_STATE(123)] = 4433,
  [SMALL_STATE(124)] = 4461,
  [SMALL_STATE(125)] = 4489,
  [SMALL_STATE(126)] = 4517,
  [SMALL_STATE(127)] = 4545,
  [SMALL_STATE(128)] = 4573,
  [SMALL_STATE(129)] = 4601,
  [SMALL_STATE(130)] = 4629,
  [SMALL_STATE(131)] = 4657,
  [SMALL_STATE(132)] = 4685,
  [SMALL_STATE(133)] = 4713,
  [SMALL_STATE(134)] = 4741,
  [SMALL_STATE(135)] = 4769,
  [SMALL_STATE(136)] = 4797,
  [SMALL_STATE(137)] = 4825,
  [SMALL_STATE(138)] = 4853,
  [SMALL_STATE(139)] = 4881,
  [SMALL_STATE(140)] = 4909,
  [SMALL_STATE(141)] = 4937,
  [SMALL_STATE(142)] = 4965,
  [SMALL_STATE(143)] = 4993,
  [SMALL_STATE(144)] = 5021,
  [SMALL_STATE(145)] = 5049,
  [SMALL_STATE(146)] = 5077,
  [SMALL_STATE(147)] = 5105,
  [SMALL_STATE(148)] = 5133,
  [SMALL_STATE(149)] = 5161,
  [SMALL_STATE(150)] = 5189,
  [SMALL_STATE(151)] = 5217,
  [SMALL_STATE(152)] = 5245,
  [SMALL_STATE(153)] = 5273,
  [SMALL_STATE(154)] = 5301,
  [SMALL_STATE(155)] = 5329,
  [SMALL_STATE(156)] = 5357,
  [SMALL_STATE(157)] = 5385,
  [SMALL_STATE(158)] = 5413,
  [SMALL_STATE(159)] = 5456,
  [SMALL_STATE(160)] = 5496,
  [SMALL_STATE(161)] = 5536,
  [SMALL_STATE(162)] = 5576,
  [SMALL_STATE(163)] = 5597,
  [SMALL_STATE(164)] = 5617,
  [SMALL_STATE(165)] = 5636,
  [SMALL_STATE(166)] = 5676,
  [SMALL_STATE(167)] = 5716,
  [SMALL_STATE(168)] = 5756,
  [SMALL_STATE(169)] = 5796,
  [SMALL_STATE(170)] = 5836,
  [SMALL_STATE(171)] = 5853,
  [SMALL_STATE(172)] = 5880,
  [SMALL_STATE(173)] = 5917,
  [SMALL_STATE(174)] = 5944,
  [SMALL_STATE(175)] = 5971,
  [SMALL_STATE(176)] = 5989,
  [SMALL_STATE(177)] = 6012,
  [SMALL_STATE(178)] = 6037,
  [SMALL_STATE(179)] = 6062,
  [SMALL_STATE(180)] = 6085,
  [SMALL_STATE(181)] = 6110,
  [SMALL_STATE(182)] = 6135,
  [SMALL_STATE(183)] = 6160,
  [SMALL_STATE(184)] = 6183,
  [SMALL_STATE(185)] = 6207,
  [SMALL_STATE(186)] = 6221,
  [SMALL_STATE(187)] = 6235,
  [SMALL_STATE(188)] = 6249,
  [SMALL_STATE(189)] = 6263,
  [SMALL_STATE(190)] = 6277,
  [SMALL_STATE(191)] = 6291,
  [SMALL_STATE(192)] = 6305,
  [SMALL_STATE(193)] = 6319,
  [SMALL_STATE(194)] = 6338,
  [SMALL_STATE(195)] = 6363,
  [SMALL_STATE(196)] = 6384,
  [SMALL_STATE(197)] = 6403,
  [SMALL_STATE(198)] = 6422,
  [SMALL_STATE(199)] = 6441,
  [SMALL_STATE(200)] = 6466,
  [SMALL_STATE(201)] = 6485,
  [SMALL_STATE(202)] = 6510,
  [SMALL_STATE(203)] = 6529,
  [SMALL_STATE(204)] = 6548,
  [SMALL_STATE(205)] = 6560,
  [SMALL_STATE(206)] = 6572,
  [SMALL_STATE(207)] = 6584,
  [SMALL_STATE(208)] = 6606,
  [SMALL_STATE(209)] = 6618,
  [SMALL_STATE(210)] = 6640,
  [SMALL_STATE(211)] = 6662,
  [SMALL_STATE(212)] = 6674,
  [SMALL_STATE(213)] = 6692,
  [SMALL_STATE(214)] = 6704,
  [SMALL_STATE(215)] = 6722,
  [SMALL_STATE(216)] = 6734,
  [SMALL_STATE(217)] = 6746,
  [SMALL_STATE(218)] = 6764,
  [SMALL_STATE(219)] = 6782,
  [SMALL_STATE(220)] = 6800,
  [SMALL_STATE(221)] = 6818,
  [SMALL_STATE(222)] = 6830,
  [SMALL_STATE(223)] = 6849,
  [SMALL_STATE(224)] = 6860,
  [SMALL_STATE(225)] = 6871,
  [SMALL_STATE(226)] = 6882,
  [SMALL_STATE(227)] = 6899,
  [SMALL_STATE(228)] = 6918,
  [SMALL_STATE(229)] = 6937,
  [SMALL_STATE(230)] = 6948,
  [SMALL_STATE(231)] = 6959,
  [SMALL_STATE(232)] = 6970,
  [SMALL_STATE(233)] = 6989,
  [SMALL_STATE(234)] = 7000,
  [SMALL_STATE(235)] = 7011,
  [SMALL_STATE(236)] = 7022,
  [SMALL_STATE(237)] = 7032,
  [SMALL_STATE(238)] = 7046,
  [SMALL_STATE(239)] = 7060,
  [SMALL_STATE(240)] = 7074,
  [SMALL_STATE(241)] = 7088,
  [SMALL_STATE(242)] = 7104,
  [SMALL_STATE(243)] = 7114,
  [SMALL_STATE(244)] = 7124,
  [SMALL_STATE(245)] = 7138,
  [SMALL_STATE(246)] = 7152,
  [SMALL_STATE(247)] = 7168,
  [SMALL_STATE(248)] = 7184,
  [SMALL_STATE(249)] = 7194,
  [SMALL_STATE(250)] = 7204,
  [SMALL_STATE(251)] = 7218,
  [SMALL_STATE(252)] = 7228,
  [SMALL_STATE(253)] = 7238,
  [SMALL_STATE(254)] = 7248,
  [SMALL_STATE(255)] = 7262,
  [SMALL_STATE(256)] = 7272,
  [SMALL_STATE(257)] = 7286,
  [SMALL_STATE(258)] = 7300,
  [SMALL_STATE(259)] = 7314,
  [SMALL_STATE(260)] = 7328,
  [SMALL_STATE(261)] = 7342,
  [SMALL_STATE(262)] = 7356,
  [SMALL_STATE(263)] = 7370,
  [SMALL_STATE(264)] = 7384,
  [SMALL_STATE(265)] = 7394,
  [SMALL_STATE(266)] = 7408,
  [SMALL_STATE(267)] = 7422,
  [SMALL_STATE(268)] = 7436,
  [SMALL_STATE(269)] = 7452,
  [SMALL_STATE(270)] = 7462,
  [SMALL_STATE(271)] = 7472,
  [SMALL_STATE(272)] = 7482,
  [SMALL_STATE(273)] = 7496,
  [SMALL_STATE(274)] = 7506,
  [SMALL_STATE(275)] = 7516,
  [SMALL_STATE(276)] = 7532,
  [SMALL_STATE(277)] = 7542,
  [SMALL_STATE(278)] = 7556,
  [SMALL_STATE(279)] = 7566,
  [SMALL_STATE(280)] = 7582,
  [SMALL_STATE(281)] = 7592,
  [SMALL_STATE(282)] = 7608,
  [SMALL_STATE(283)] = 7621,
  [SMALL_STATE(284)] = 7634,
  [SMALL_STATE(285)] = 7643,
  [SMALL_STATE(286)] = 7656,
  [SMALL_STATE(287)] = 7665,
  [SMALL_STATE(288)] = 7678,
  [SMALL_STATE(289)] = 7691,
  [SMALL_STATE(290)] = 7704,
  [SMALL_STATE(291)] = 7717,
  [SMALL_STATE(292)] = 7726,
  [SMALL_STATE(293)] = 7739,
  [SMALL_STATE(294)] = 7752,
  [SMALL_STATE(295)] = 7765,
  [SMALL_STATE(296)] = 7778,
  [SMALL_STATE(297)] = 7791,
  [SMALL_STATE(298)] = 7804,
  [SMALL_STATE(299)] = 7817,
  [SMALL_STATE(300)] = 7830,
  [SMALL_STATE(301)] = 7843,
  [SMALL_STATE(302)] = 7852,
  [SMALL_STATE(303)] = 7865,
  [SMALL_STATE(304)] = 7874,
  [SMALL_STATE(305)] = 7887,
  [SMALL_STATE(306)] = 7896,
  [SMALL_STATE(307)] = 7905,
  [SMALL_STATE(308)] = 7914,
  [SMALL_STATE(309)] = 7923,
  [SMALL_STATE(310)] = 7932,
  [SMALL_STATE(311)] = 7941,
  [SMALL_STATE(312)] = 7950,
  [SMALL_STATE(313)] = 7961,
  [SMALL_STATE(314)] = 7974,
  [SMALL_STATE(315)] = 7983,
  [SMALL_STATE(316)] = 7996,
  [SMALL_STATE(317)] = 8009,
  [SMALL_STATE(318)] = 8022,
  [SMALL_STATE(319)] = 8033,
  [SMALL_STATE(320)] = 8046,
  [SMALL_STATE(321)] = 8059,
  [SMALL_STATE(322)] = 8072,
  [SMALL_STATE(323)] = 8085,
  [SMALL_STATE(324)] = 8098,
  [SMALL_STATE(325)] = 8109,
  [SMALL_STATE(326)] = 8122,
  [SMALL_STATE(327)] = 8133,
  [SMALL_STATE(328)] = 8144,
  [SMALL_STATE(329)] = 8157,
  [SMALL_STATE(330)] = 8170,
  [SMALL_STATE(331)] = 8183,
  [SMALL_STATE(332)] = 8191,
  [SMALL_STATE(333)] = 8201,
  [SMALL_STATE(334)] = 8211,
  [SMALL_STATE(335)] = 8221,
  [SMALL_STATE(336)] = 8231,
  [SMALL_STATE(337)] = 8241,
  [SMALL_STATE(338)] = 8251,
  [SMALL_STATE(339)] = 8261,
  [SMALL_STATE(340)] = 8271,
  [SMALL_STATE(341)] = 8281,
  [SMALL_STATE(342)] = 8291,
  [SMALL_STATE(343)] = 8301,
  [SMALL_STATE(344)] = 8311,
  [SMALL_STATE(345)] = 8321,
  [SMALL_STATE(346)] = 8331,
  [SMALL_STATE(347)] = 8341,
  [SMALL_STATE(348)] = 8351,
  [SMALL_STATE(349)] = 8361,
  [SMALL_STATE(350)] = 8371,
  [SMALL_STATE(351)] = 8381,
  [SMALL_STATE(352)] = 8391,
  [SMALL_STATE(353)] = 8401,
  [SMALL_STATE(354)] = 8411,
  [SMALL_STATE(355)] = 8421,
  [SMALL_STATE(356)] = 8431,
  [SMALL_STATE(357)] = 8441,
  [SMALL_STATE(358)] = 8449,
  [SMALL_STATE(359)] = 8459,
  [SMALL_STATE(360)] = 8469,
  [SMALL_STATE(361)] = 8479,
  [SMALL_STATE(362)] = 8489,
  [SMALL_STATE(363)] = 8499,
  [SMALL_STATE(364)] = 8507,
  [SMALL_STATE(365)] = 8517,
  [SMALL_STATE(366)] = 8527,
  [SMALL_STATE(367)] = 8535,
  [SMALL_STATE(368)] = 8545,
  [SMALL_STATE(369)] = 8555,
  [SMALL_STATE(370)] = 8565,
  [SMALL_STATE(371)] = 8575,
  [SMALL_STATE(372)] = 8583,
  [SMALL_STATE(373)] = 8593,
  [SMALL_STATE(374)] = 8603,
  [SMALL_STATE(375)] = 8613,
  [SMALL_STATE(376)] = 8621,
  [SMALL_STATE(377)] = 8631,
  [SMALL_STATE(378)] = 8641,
  [SMALL_STATE(379)] = 8649,
  [SMALL_STATE(380)] = 8657,
  [SMALL_STATE(381)] = 8667,
  [SMALL_STATE(382)] = 8677,
  [SMALL_STATE(383)] = 8687,
  [SMALL_STATE(384)] = 8697,
  [SMALL_STATE(385)] = 8707,
  [SMALL_STATE(386)] = 8717,
  [SMALL_STATE(387)] = 8727,
  [SMALL_STATE(388)] = 8735,
  [SMALL_STATE(389)] = 8745,
  [SMALL_STATE(390)] = 8755,
  [SMALL_STATE(391)] = 8765,
  [SMALL_STATE(392)] = 8775,
  [SMALL_STATE(393)] = 8785,
  [SMALL_STATE(394)] = 8795,
  [SMALL_STATE(395)] = 8805,
  [SMALL_STATE(396)] = 8813,
  [SMALL_STATE(397)] = 8821,
  [SMALL_STATE(398)] = 8829,
  [SMALL_STATE(399)] = 8837,
  [SMALL_STATE(400)] = 8845,
  [SMALL_STATE(401)] = 8855,
  [SMALL_STATE(402)] = 8865,
  [SMALL_STATE(403)] = 8875,
  [SMALL_STATE(404)] = 8885,
  [SMALL_STATE(405)] = 8895,
  [SMALL_STATE(406)] = 8903,
  [SMALL_STATE(407)] = 8913,
  [SMALL_STATE(408)] = 8923,
  [SMALL_STATE(409)] = 8933,
  [SMALL_STATE(410)] = 8943,
  [SMALL_STATE(411)] = 8953,
  [SMALL_STATE(412)] = 8963,
  [SMALL_STATE(413)] = 8973,
  [SMALL_STATE(414)] = 8983,
  [SMALL_STATE(415)] = 8993,
  [SMALL_STATE(416)] = 9003,
  [SMALL_STATE(417)] = 9013,
  [SMALL_STATE(418)] = 9023,
  [SMALL_STATE(419)] = 9033,
  [SMALL_STATE(420)] = 9043,
  [SMALL_STATE(421)] = 9053,
  [SMALL_STATE(422)] = 9063,
  [SMALL_STATE(423)] = 9073,
  [SMALL_STATE(424)] = 9083,
  [SMALL_STATE(425)] = 9093,
  [SMALL_STATE(426)] = 9103,
  [SMALL_STATE(427)] = 9111,
  [SMALL_STATE(428)] = 9119,
  [SMALL_STATE(429)] = 9129,
  [SMALL_STATE(430)] = 9139,
  [SMALL_STATE(431)] = 9149,
  [SMALL_STATE(432)] = 9159,
  [SMALL_STATE(433)] = 9167,
  [SMALL_STATE(434)] = 9177,
  [SMALL_STATE(435)] = 9187,
  [SMALL_STATE(436)] = 9195,
  [SMALL_STATE(437)] = 9205,
  [SMALL_STATE(438)] = 9213,
  [SMALL_STATE(439)] = 9223,
  [SMALL_STATE(440)] = 9233,
  [SMALL_STATE(441)] = 9243,
  [SMALL_STATE(442)] = 9251,
  [SMALL_STATE(443)] = 9259,
  [SMALL_STATE(444)] = 9269,
  [SMALL_STATE(445)] = 9277,
  [SMALL_STATE(446)] = 9287,
  [SMALL_STATE(447)] = 9295,
  [SMALL_STATE(448)] = 9302,
  [SMALL_STATE(449)] = 9309,
  [SMALL_STATE(450)] = 9316,
  [SMALL_STATE(451)] = 9323,
  [SMALL_STATE(452)] = 9330,
  [SMALL_STATE(453)] = 9337,
  [SMALL_STATE(454)] = 9344,
  [SMALL_STATE(455)] = 9351,
  [SMALL_STATE(456)] = 9358,
  [SMALL_STATE(457)] = 9365,
  [SMALL_STATE(458)] = 9372,
  [SMALL_STATE(459)] = 9379,
  [SMALL_STATE(460)] = 9386,
  [SMALL_STATE(461)] = 9393,
  [SMALL_STATE(462)] = 9400,
  [SMALL_STATE(463)] = 9407,
  [SMALL_STATE(464)] = 9414,
  [SMALL_STATE(465)] = 9421,
  [SMALL_STATE(466)] = 9428,
  [SMALL_STATE(467)] = 9435,
  [SMALL_STATE(468)] = 9442,
  [SMALL_STATE(469)] = 9449,
  [SMALL_STATE(470)] = 9456,
  [SMALL_STATE(471)] = 9463,
  [SMALL_STATE(472)] = 9470,
  [SMALL_STATE(473)] = 9477,
  [SMALL_STATE(474)] = 9484,
  [SMALL_STATE(475)] = 9491,
  [SMALL_STATE(476)] = 9498,
  [SMALL_STATE(477)] = 9505,
  [SMALL_STATE(478)] = 9512,
  [SMALL_STATE(479)] = 9519,
  [SMALL_STATE(480)] = 9526,
  [SMALL_STATE(481)] = 9533,
  [SMALL_STATE(482)] = 9540,
  [SMALL_STATE(483)] = 9547,
  [SMALL_STATE(484)] = 9554,
  [SMALL_STATE(485)] = 9561,
  [SMALL_STATE(486)] = 9568,
  [SMALL_STATE(487)] = 9575,
  [SMALL_STATE(488)] = 9582,
  [SMALL_STATE(489)] = 9589,
  [SMALL_STATE(490)] = 9596,
  [SMALL_STATE(491)] = 9603,
  [SMALL_STATE(492)] = 9610,
  [SMALL_STATE(493)] = 9617,
  [SMALL_STATE(494)] = 9624,
  [SMALL_STATE(495)] = 9631,
  [SMALL_STATE(496)] = 9638,
  [SMALL_STATE(497)] = 9645,
  [SMALL_STATE(498)] = 9652,
  [SMALL_STATE(499)] = 9659,
  [SMALL_STATE(500)] = 9666,
  [SMALL_STATE(501)] = 9673,
  [SMALL_STATE(502)] = 9680,
  [SMALL_STATE(503)] = 9687,
  [SMALL_STATE(504)] = 9694,
  [SMALL_STATE(505)] = 9701,
  [SMALL_STATE(506)] = 9708,
  [SMALL_STATE(507)] = 9715,
  [SMALL_STATE(508)] = 9722,
  [SMALL_STATE(509)] = 9729,
  [SMALL_STATE(510)] = 9736,
  [SMALL_STATE(511)] = 9743,
  [SMALL_STATE(512)] = 9750,
  [SMALL_STATE(513)] = 9757,
  [SMALL_STATE(514)] = 9764,
  [SMALL_STATE(515)] = 9771,
  [SMALL_STATE(516)] = 9778,
  [SMALL_STATE(517)] = 9785,
  [SMALL_STATE(518)] = 9792,
  [SMALL_STATE(519)] = 9799,
  [SMALL_STATE(520)] = 9806,
  [SMALL_STATE(521)] = 9813,
  [SMALL_STATE(522)] = 9820,
  [SMALL_STATE(523)] = 9827,
  [SMALL_STATE(524)] = 9834,
  [SMALL_STATE(525)] = 9841,
  [SMALL_STATE(526)] = 9848,
  [SMALL_STATE(527)] = 9855,
  [SMALL_STATE(528)] = 9862,
  [SMALL_STATE(529)] = 9869,
  [SMALL_STATE(530)] = 9876,
  [SMALL_STATE(531)] = 9883,
  [SMALL_STATE(532)] = 9890,
  [SMALL_STATE(533)] = 9897,
  [SMALL_STATE(534)] = 9904,
  [SMALL_STATE(535)] = 9911,
  [SMALL_STATE(536)] = 9918,
  [SMALL_STATE(537)] = 9925,
  [SMALL_STATE(538)] = 9932,
  [SMALL_STATE(539)] = 9939,
  [SMALL_STATE(540)] = 9946,
  [SMALL_STATE(541)] = 9953,
  [SMALL_STATE(542)] = 9960,
  [SMALL_STATE(543)] = 9967,
  [SMALL_STATE(544)] = 9974,
  [SMALL_STATE(545)] = 9981,
  [SMALL_STATE(546)] = 9988,
  [SMALL_STATE(547)] = 9995,
  [SMALL_STATE(548)] = 10002,
  [SMALL_STATE(549)] = 10009,
  [SMALL_STATE(550)] = 10016,
  [SMALL_STATE(551)] = 10023,
  [SMALL_STATE(552)] = 10030,
  [SMALL_STATE(553)] = 10037,
  [SMALL_STATE(554)] = 10044,
  [SMALL_STATE(555)] = 10051,
  [SMALL_STATE(556)] = 10058,
  [SMALL_STATE(557)] = 10065,
  [SMALL_STATE(558)] = 10072,
  [SMALL_STATE(559)] = 10079,
  [SMALL_STATE(560)] = 10086,
  [SMALL_STATE(561)] = 10093,
  [SMALL_STATE(562)] = 10100,
  [SMALL_STATE(563)] = 10107,
  [SMALL_STATE(564)] = 10114,
  [SMALL_STATE(565)] = 10121,
  [SMALL_STATE(566)] = 10128,
  [SMALL_STATE(567)] = 10135,
  [SMALL_STATE(568)] = 10142,
  [SMALL_STATE(569)] = 10149,
  [SMALL_STATE(570)] = 10156,
  [SMALL_STATE(571)] = 10163,
  [SMALL_STATE(572)] = 10170,
  [SMALL_STATE(573)] = 10177,
  [SMALL_STATE(574)] = 10184,
  [SMALL_STATE(575)] = 10191,
  [SMALL_STATE(576)] = 10198,
  [SMALL_STATE(577)] = 10205,
  [SMALL_STATE(578)] = 10212,
  [SMALL_STATE(579)] = 10219,
  [SMALL_STATE(580)] = 10226,
  [SMALL_STATE(581)] = 10233,
  [SMALL_STATE(582)] = 10240,
  [SMALL_STATE(583)] = 10247,
  [SMALL_STATE(584)] = 10254,
  [SMALL_STATE(585)] = 10261,
  [SMALL_STATE(586)] = 10268,
  [SMALL_STATE(587)] = 10275,
  [SMALL_STATE(588)] = 10282,
  [SMALL_STATE(589)] = 10289,
  [SMALL_STATE(590)] = 10296,
  [SMALL_STATE(591)] = 10303,
  [SMALL_STATE(592)] = 10310,
  [SMALL_STATE(593)] = 10317,
  [SMALL_STATE(594)] = 10324,
  [SMALL_STATE(595)] = 10331,
  [SMALL_STATE(596)] = 10338,
  [SMALL_STATE(597)] = 10345,
  [SMALL_STATE(598)] = 10352,
  [SMALL_STATE(599)] = 10359,
  [SMALL_STATE(600)] = 10366,
  [SMALL_STATE(601)] = 10373,
  [SMALL_STATE(602)] = 10380,
  [SMALL_STATE(603)] = 10387,
  [SMALL_STATE(604)] = 10394,
  [SMALL_STATE(605)] = 10401,
  [SMALL_STATE(606)] = 10408,
  [SMALL_STATE(607)] = 10415,
  [SMALL_STATE(608)] = 10422,
  [SMALL_STATE(609)] = 10429,
  [SMALL_STATE(610)] = 10436,
  [SMALL_STATE(611)] = 10443,
  [SMALL_STATE(612)] = 10450,
  [SMALL_STATE(613)] = 10457,
  [SMALL_STATE(614)] = 10464,
  [SMALL_STATE(615)] = 10471,
  [SMALL_STATE(616)] = 10478,
  [SMALL_STATE(617)] = 10485,
  [SMALL_STATE(618)] = 10492,
  [SMALL_STATE(619)] = 10499,
  [SMALL_STATE(620)] = 10506,
  [SMALL_STATE(621)] = 10513,
  [SMALL_STATE(622)] = 10520,
  [SMALL_STATE(623)] = 10527,
  [SMALL_STATE(624)] = 10534,
  [SMALL_STATE(625)] = 10541,
  [SMALL_STATE(626)] = 10548,
  [SMALL_STATE(627)] = 10555,
  [SMALL_STATE(628)] = 10562,
  [SMALL_STATE(629)] = 10569,
  [SMALL_STATE(630)] = 10576,
  [SMALL_STATE(631)] = 10583,
  [SMALL_STATE(632)] = 10590,
  [SMALL_STATE(633)] = 10597,
  [SMALL_STATE(634)] = 10604,
  [SMALL_STATE(635)] = 10611,
  [SMALL_STATE(636)] = 10618,
  [SMALL_STATE(637)] = 10625,
  [SMALL_STATE(638)] = 10632,
  [SMALL_STATE(639)] = 10639,
  [SMALL_STATE(640)] = 10646,
  [SMALL_STATE(641)] = 10653,
  [SMALL_STATE(642)] = 10660,
  [SMALL_STATE(643)] = 10667,
  [SMALL_STATE(644)] = 10674,
  [SMALL_STATE(645)] = 10681,
  [SMALL_STATE(646)] = 10688,
  [SMALL_STATE(647)] = 10695,
  [SMALL_STATE(648)] = 10702,
  [SMALL_STATE(649)] = 10709,
  [SMALL_STATE(650)] = 10716,
  [SMALL_STATE(651)] = 10723,
  [SMALL_STATE(652)] = 10730,
  [SMALL_STATE(653)] = 10737,
  [SMALL_STATE(654)] = 10744,
  [SMALL_STATE(655)] = 10751,
  [SMALL_STATE(656)] = 10758,
  [SMALL_STATE(657)] = 10765,
  [SMALL_STATE(658)] = 10772,
  [SMALL_STATE(659)] = 10779,
  [SMALL_STATE(660)] = 10786,
  [SMALL_STATE(661)] = 10793,
  [SMALL_STATE(662)] = 10800,
  [SMALL_STATE(663)] = 10807,
  [SMALL_STATE(664)] = 10814,
  [SMALL_STATE(665)] = 10821,
  [SMALL_STATE(666)] = 10828,
  [SMALL_STATE(667)] = 10835,
  [SMALL_STATE(668)] = 10842,
  [SMALL_STATE(669)] = 10849,
  [SMALL_STATE(670)] = 10856,
  [SMALL_STATE(671)] = 10863,
  [SMALL_STATE(672)] = 10870,
  [SMALL_STATE(673)] = 10877,
  [SMALL_STATE(674)] = 10884,
  [SMALL_STATE(675)] = 10891,
  [SMALL_STATE(676)] = 10898,
  [SMALL_STATE(677)] = 10905,
  [SMALL_STATE(678)] = 10912,
  [SMALL_STATE(679)] = 10919,
  [SMALL_STATE(680)] = 10926,
  [SMALL_STATE(681)] = 10933,
  [SMALL_STATE(682)] = 10940,
  [SMALL_STATE(683)] = 10947,
  [SMALL_STATE(684)] = 10954,
  [SMALL_STATE(685)] = 10961,
  [SMALL_STATE(686)] = 10968,
  [SMALL_STATE(687)] = 10975,
  [SMALL_STATE(688)] = 10982,
  [SMALL_STATE(689)] = 10989,
  [SMALL_STATE(690)] = 10996,
  [SMALL_STATE(691)] = 11003,
  [SMALL_STATE(692)] = 11010,
  [SMALL_STATE(693)] = 11017,
  [SMALL_STATE(694)] = 11024,
  [SMALL_STATE(695)] = 11031,
  [SMALL_STATE(696)] = 11038,
  [SMALL_STATE(697)] = 11045,
  [SMALL_STATE(698)] = 11052,
  [SMALL_STATE(699)] = 11059,
  [SMALL_STATE(700)] = 11066,
  [SMALL_STATE(701)] = 11073,
  [SMALL_STATE(702)] = 11080,
  [SMALL_STATE(703)] = 11087,
  [SMALL_STATE(704)] = 11094,
  [SMALL_STATE(705)] = 11101,
  [SMALL_STATE(706)] = 11108,
  [SMALL_STATE(707)] = 11115,
  [SMALL_STATE(708)] = 11122,
  [SMALL_STATE(709)] = 11129,
  [SMALL_STATE(710)] = 11136,
  [SMALL_STATE(711)] = 11143,
  [SMALL_STATE(712)] = 11150,
  [SMALL_STATE(713)] = 11157,
  [SMALL_STATE(714)] = 11164,
  [SMALL_STATE(715)] = 11171,
  [SMALL_STATE(716)] = 11178,
  [SMALL_STATE(717)] = 11185,
  [SMALL_STATE(718)] = 11192,
  [SMALL_STATE(719)] = 11199,
  [SMALL_STATE(720)] = 11206,
  [SMALL_STATE(721)] = 11213,
  [SMALL_STATE(722)] = 11220,
  [SMALL_STATE(723)] = 11227,
  [SMALL_STATE(724)] = 11234,
  [SMALL_STATE(725)] = 11241,
  [SMALL_STATE(726)] = 11248,
  [SMALL_STATE(727)] = 11255,
  [SMALL_STATE(728)] = 11262,
  [SMALL_STATE(729)] = 11269,
  [SMALL_STATE(730)] = 11276,
  [SMALL_STATE(731)] = 11283,
  [SMALL_STATE(732)] = 11290,
  [SMALL_STATE(733)] = 11297,
  [SMALL_STATE(734)] = 11304,
  [SMALL_STATE(735)] = 11311,
  [SMALL_STATE(736)] = 11318,
  [SMALL_STATE(737)] = 11325,
  [SMALL_STATE(738)] = 11332,
  [SMALL_STATE(739)] = 11339,
  [SMALL_STATE(740)] = 11346,
  [SMALL_STATE(741)] = 11353,
  [SMALL_STATE(742)] = 11360,
  [SMALL_STATE(743)] = 11367,
  [SMALL_STATE(744)] = 11374,
  [SMALL_STATE(745)] = 11381,
  [SMALL_STATE(746)] = 11388,
  [SMALL_STATE(747)] = 11395,
  [SMALL_STATE(748)] = 11402,
  [SMALL_STATE(749)] = 11409,
  [SMALL_STATE(750)] = 11416,
  [SMALL_STATE(751)] = 11423,
  [SMALL_STATE(752)] = 11430,
  [SMALL_STATE(753)] = 11437,
  [SMALL_STATE(754)] = 11444,
  [SMALL_STATE(755)] = 11451,
  [SMALL_STATE(756)] = 11458,
  [SMALL_STATE(757)] = 11465,
  [SMALL_STATE(758)] = 11472,
  [SMALL_STATE(759)] = 11479,
  [SMALL_STATE(760)] = 11486,
  [SMALL_STATE(761)] = 11493,
  [SMALL_STATE(762)] = 11500,
  [SMALL_STATE(763)] = 11507,
  [SMALL_STATE(764)] = 11514,
  [SMALL_STATE(765)] = 11521,
  [SMALL_STATE(766)] = 11528,
  [SMALL_STATE(767)] = 11535,
  [SMALL_STATE(768)] = 11542,
  [SMALL_STATE(769)] = 11549,
  [SMALL_STATE(770)] = 11556,
  [SMALL_STATE(771)] = 11563,
  [SMALL_STATE(772)] = 11570,
  [SMALL_STATE(773)] = 11577,
  [SMALL_STATE(774)] = 11584,
  [SMALL_STATE(775)] = 11591,
  [SMALL_STATE(776)] = 11598,
  [SMALL_STATE(777)] = 11605,
  [SMALL_STATE(778)] = 11612,
  [SMALL_STATE(779)] = 11619,
  [SMALL_STATE(780)] = 11626,
  [SMALL_STATE(781)] = 11633,
  [SMALL_STATE(782)] = 11640,
  [SMALL_STATE(783)] = 11647,
  [SMALL_STATE(784)] = 11654,
  [SMALL_STATE(785)] = 11661,
  [SMALL_STATE(786)] = 11668,
  [SMALL_STATE(787)] = 11675,
  [SMALL_STATE(788)] = 11682,
  [SMALL_STATE(789)] = 11689,
  [SMALL_STATE(790)] = 11696,
  [SMALL_STATE(791)] = 11703,
  [SMALL_STATE(792)] = 11710,
  [SMALL_STATE(793)] = 11717,
  [SMALL_STATE(794)] = 11724,
  [SMALL_STATE(795)] = 11731,
  [SMALL_STATE(796)] = 11738,
  [SMALL_STATE(797)] = 11745,
  [SMALL_STATE(798)] = 11752,
  [SMALL_STATE(799)] = 11759,
  [SMALL_STATE(800)] = 11766,
  [SMALL_STATE(801)] = 11773,
  [SMALL_STATE(802)] = 11780,
  [SMALL_STATE(803)] = 11787,
  [SMALL_STATE(804)] = 11794,
  [SMALL_STATE(805)] = 11801,
  [SMALL_STATE(806)] = 11808,
  [SMALL_STATE(807)] = 11815,
  [SMALL_STATE(808)] = 11822,
  [SMALL_STATE(809)] = 11829,
  [SMALL_STATE(810)] = 11836,
  [SMALL_STATE(811)] = 11843,
  [SMALL_STATE(812)] = 11850,
  [SMALL_STATE(813)] = 11857,
  [SMALL_STATE(814)] = 11864,
  [SMALL_STATE(815)] = 11871,
  [SMALL_STATE(816)] = 11878,
  [SMALL_STATE(817)] = 11885,
  [SMALL_STATE(818)] = 11892,
  [SMALL_STATE(819)] = 11899,
  [SMALL_STATE(820)] = 11906,
  [SMALL_STATE(821)] = 11913,
  [SMALL_STATE(822)] = 11920,
  [SMALL_STATE(823)] = 11927,
  [SMALL_STATE(824)] = 11934,
  [SMALL_STATE(825)] = 11941,
  [SMALL_STATE(826)] = 11948,
  [SMALL_STATE(827)] = 11955,
  [SMALL_STATE(828)] = 11962,
  [SMALL_STATE(829)] = 11969,
  [SMALL_STATE(830)] = 11976,
  [SMALL_STATE(831)] = 11983,
  [SMALL_STATE(832)] = 11990,
  [SMALL_STATE(833)] = 11997,
  [SMALL_STATE(834)] = 12004,
  [SMALL_STATE(835)] = 12011,
  [SMALL_STATE(836)] = 12018,
  [SMALL_STATE(837)] = 12025,
  [SMALL_STATE(838)] = 12032,
  [SMALL_STATE(839)] = 12039,
  [SMALL_STATE(840)] = 12046,
  [SMALL_STATE(841)] = 12053,
  [SMALL_STATE(842)] = 12060,
  [SMALL_STATE(843)] = 12067,
  [SMALL_STATE(844)] = 12074,
  [SMALL_STATE(845)] = 12081,
  [SMALL_STATE(846)] = 12088,
  [SMALL_STATE(847)] = 12095,
  [SMALL_STATE(848)] = 12102,
  [SMALL_STATE(849)] = 12109,
  [SMALL_STATE(850)] = 12116,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(528),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(537),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(569),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(570),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(572),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(577),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(580),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(588),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(591),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(594),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(609),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(637),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(642),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(667),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(671),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(674),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(675),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(682),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(684),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(687),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(689),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(691),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(698),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(704),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(525),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(528),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(532),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(535),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(537),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(5),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(5),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(569),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(570),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(572),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(577),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(580),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(588),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(591),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(594),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(471),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(609),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(617),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(634),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(635),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(637),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(642),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(652),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(661),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(662),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(667),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(671),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(674),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(675),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(678),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(682),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(683),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(684),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(685),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(686),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(687),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(688),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(689),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(690),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(691),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(698),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(700),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(704),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xpath_repeat1, 2), SHIFT_REPEAT(704),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xpath, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_function, 4),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_function, 4),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_true_function, 4),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_true_function, 4),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unparsed_entity_url_function, 4),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unparsed_entity_url_function, 4),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generate_id_function, 4),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generate_id_function, 4),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_available_function, 4),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_available_function, 4),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_number_function, 4),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format_number_function, 4),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floor_function, 4),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floor_function, 4),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_available_function, 4),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_available_function, 4),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_name_function, 4),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_name_function, 4),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_uri_function, 4),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_uri_function, 4),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normalize_space_function, 4),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normalize_space_function, 4),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_property, 5),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_property, 5),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ceiling_function, 4),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ceiling_function, 4),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_current_function, 4),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_current_function, 4),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concat_function, 4),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concat_function, 4),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_count_function, 4),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_count_function, 4),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_function, 4),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_function, 4),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains_function, 4),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contains_function, 4),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_function, 4),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_last_function, 4),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lang_function, 4),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lang_function, 4),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_property_function, 4),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_property_function, 4),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_function, 4),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document_function, 4),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_function, 4),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_function, 4),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_function, 4),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_function, 4),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_function, 4),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_function, 4),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_position_function, 4),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_position_function, 4),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_function, 4),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_function, 4),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_round_function, 4),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_round_function, 4),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_synapse_xpath_property, 3),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_synapse_xpath_property, 3),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_starts_with_function, 4),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_starts_with_function, 4),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_false_function, 4),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_false_function, 4),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_function, 4),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_function, 4),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_length_function, 4),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_length_function, 4),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substring_function, 4),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substring_function, 4),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substring_after_function, 4),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substring_after_function, 4),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substring_before_function, 4),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substring_before_function, 4),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sum_function, 4),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sum_function, 4),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choose_function, 4),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choose_function, 4),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translate_function, 4),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_translate_function, 4),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base64_decode, 4),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base64_decode, 4),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base64_encode, 4),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base64_encode, 4),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_in_sequence_repeat1, 2),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_in_sequence_repeat1, 2), SHIFT_REPEAT(304),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_in_sequence_repeat1, 2), SHIFT_REPEAT(133),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_in_sequence_repeat1, 2), SHIFT_REPEAT(132),
  [422] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_in_sequence_repeat1, 2), SHIFT_REPEAT(302),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_in_sequence_repeat1, 2), SHIFT_REPEAT(390),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_in_sequence_repeat1, 2), SHIFT_REPEAT(391),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_in_sequence_repeat1, 2), SHIFT_REPEAT(228),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_in_sequence_repeat1, 2), SHIFT_REPEAT(392),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_in_sequence_repeat1, 2), SHIFT_REPEAT(297),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_in_sequence_repeat1, 2), SHIFT_REPEAT(194),
  [443] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_in_sequence_repeat1, 2), SHIFT_REPEAT(393),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_in_sequence_repeat1, 2), SHIFT_REPEAT(172),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_in_sequence_repeat1, 2), SHIFT_REPEAT(394),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 5, .production_id = 14),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 5, .production_id = 14),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 3),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 3),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 4),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 4),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 4, .production_id = 14),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 4, .production_id = 14),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3, .production_id = 1),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 3, .production_id = 1),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 4, .production_id = 16),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 4, .production_id = 16),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log, 3, .production_id = 7),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log, 3, .production_id = 7),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 6, .production_id = 46),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 6, .production_id = 46),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 18),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, .production_id = 18),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 15),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, .production_id = 15),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach, 6, .production_id = 41),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach, 6, .production_id = 41),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log, 4, .production_id = 7),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log, 4, .production_id = 7),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 2),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 2),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payload_factory, 6, .production_id = 48),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_payload_factory, 6, .production_id = 48),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5, .production_id = 34),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 5, .production_id = 34),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 26),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5, .production_id = 26),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_send, 4, .production_id = 15),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_send, 4, .production_id = 15),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5, .production_id = 32),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 5, .production_id = 32),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 9, .production_id = 60),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 9, .production_id = 60),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 7, .production_id = 52),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 7, .production_id = 52),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mediator, 1),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mediator, 1),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log, 5, .production_id = 7),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log, 5, .production_id = 7),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_send, 1),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_send, 1),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_respond, 1),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_respond, 1),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach, 5, .production_id = 28),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach, 5, .production_id = 28),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach, 10, .production_id = 62),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach, 10, .production_id = 62),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5, .production_id = 35),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 5, .production_id = 35),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 10, .production_id = 63),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 10, .production_id = 63),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4, .production_id = 23),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 4, .production_id = 23),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 6, .production_id = 42),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 6, .production_id = 42),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 6, .production_id = 45),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 6, .production_id = 45),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 3, .production_id = 10),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 3, .production_id = 10),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4, .production_id = 22),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 4, .production_id = 22),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 5, .production_id = 29),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 5, .production_id = 29),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 3, .production_id = 11),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 3, .production_id = 11),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 25),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5, .production_id = 25),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 3, .production_id = 12),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 3, .production_id = 12),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 6, .production_id = 40),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 6, .production_id = 40),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4, .production_id = 21),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 4, .production_id = 21),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 6, .production_id = 39),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 6, .production_id = 39),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 24),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5, .production_id = 24),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach, 11, .production_id = 65),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach, 11, .production_id = 65),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4, .production_id = 20),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 4, .production_id = 20),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 6, .production_id = 47),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 6, .production_id = 47),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iterate, 5, .production_id = 36),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iterate, 5, .production_id = 36),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 27),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5, .production_id = 27),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5, .production_id = 33),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 5, .production_id = 33),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_send, 5, .production_id = 24),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_send, 5, .production_id = 24),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 5),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_iterate_repeat1, 2, .production_id = 13),
  [736] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_iterate_repeat1, 2, .production_id = 13), SHIFT_REPEAT(630),
  [739] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_iterate_repeat1, 2, .production_id = 13), SHIFT_REPEAT(629),
  [742] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_iterate_repeat1, 2, .production_id = 13), SHIFT_REPEAT(628),
  [745] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_iterate_repeat1, 2, .production_id = 13), SHIFT_REPEAT(627),
  [748] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_iterate_repeat1, 2, .production_id = 13), SHIFT_REPEAT(647),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 2, .production_id = 17),
  [781] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 2, .production_id = 17), SHIFT_REPEAT(607),
  [784] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 2, .production_id = 17), SHIFT_REPEAT(606),
  [787] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 2, .production_id = 17), SHIFT_REPEAT(605),
  [790] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 2, .production_id = 17), SHIFT_REPEAT(604),
  [793] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 2, .production_id = 17), SHIFT_REPEAT(603),
  [796] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 2, .production_id = 17), SHIFT_REPEAT(602),
  [799] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 2, .production_id = 17), SHIFT_REPEAT(647),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 5),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_suspend_on_failure_repeat1, 2),
  [818] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_suspend_on_failure_repeat1, 2), SHIFT_REPEAT(245),
  [821] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_suspend_on_failure_repeat1, 2), SHIFT_REPEAT(240),
  [824] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_suspend_on_failure_repeat1, 2), SHIFT_REPEAT(239),
  [827] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_suspend_on_failure_repeat1, 2), SHIFT_REPEAT(257),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(747),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mark_for_suspending_repeat1, 2),
  [836] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mark_for_suspending_repeat1, 2), SHIFT_REPEAT(266),
  [839] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mark_for_suspending_repeat1, 2), SHIFT_REPEAT(265),
  [842] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mark_for_suspending_repeat1, 2), SHIFT_REPEAT(257),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat2, 2),
  [847] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat2, 2), SHIFT_REPEAT(197),
  [850] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat2, 2), SHIFT_REPEAT(179),
  [853] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat2, 2), SHIFT_REPEAT(173),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_codes, 4),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error_codes, 3),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__property_attribute, 1, .production_id = 6),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 5),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__property_attribute, 1, .production_id = 9),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__property_attribute, 5),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 1, .production_id = 8),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [894] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(367),
  [897] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(333),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_timeout_repeat1, 2),
  [926] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_timeout_repeat1, 2), SHIFT_REPEAT(263),
  [929] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_timeout_repeat1, 2), SHIFT_REPEAT(284),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preservePayload, 5),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_iterate_repeat1, 1, .production_id = 3),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_iterate_repeat1, 1, .production_id = 5),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_api_attribute_repeat1, 2),
  [940] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_api_attribute_repeat1, 2), SHIFT_REPEAT(748),
  [943] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_api_attribute_repeat1, 2), SHIFT_REPEAT(749),
  [946] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_api_attribute_repeat1, 2), SHIFT_REPEAT(750),
  [949] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_api_attribute_repeat1, 2), SHIFT_REPEAT(751),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_iterate_repeat1, 1, .production_id = 6),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_api_attribute, 16),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_api_attribute, 15),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attachPath, 5),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_iterate_repeat1, 1, .production_id = 2),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential, 5),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continueParent, 5),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_path, 2),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat1, 2),
  [990] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat1, 2), SHIFT_REPEAT(766),
  [993] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_http_endpoint_repeat1, 2), SHIFT_REPEAT(476),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_path, 3),
  [998] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_path_repeat1, 2), SHIFT_REPEAT(237),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_path_repeat1, 2),
  [1003] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_path_repeat1, 2), SHIFT_REPEAT(417),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_iterate_repeat1, 1, .production_id = 4),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timeout, 2),
  [1014] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1018] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initial_duration, 3, .production_id = 43),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_progression_factor, 3, .production_id = 43),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maximum_duration, 3, .production_id = 43),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timeout, 3),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_api_attribute_repeat1, 5),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [1052] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_content, 1),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endpoint_error_property, 1),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_false, 1),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_true, 1),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_suspend_on_failure, 2),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_log_repeat1, 2),
  [1082] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_repeat1, 2), SHIFT_REPEAT(391),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retry_delay, 3, .production_id = 43),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retries_before_suspending, 3, .production_id = 43),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [1099] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [1101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(272),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 5),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mark_for_suspending, 3),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_api_definition_repeat1, 2),
  [1118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_api_definition_repeat1, 2), SHIFT_REPEAT(388),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mark_for_suspending, 2),
  [1123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_suspend_on_failure, 3),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_api_definition, 5),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(195),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_declaration, 4),
  [1166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(160),
  [1169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2, .production_id = 56), SHIFT_REPEAT(201),
  [1188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2, .production_id = 56),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration, 3, .production_id = 43),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_definition, 4, .production_id = 1),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_correlateOn, 3, .production_id = 19),
  [1208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_action, 3),
  [1210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_path_object, 2),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_api_definition, 4),
  [1214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__endpoint_attribute, 5),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_path_array, 3),
  [1218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_declaration, 3),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_definition, 5, .production_id = 1),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_error_codes_repeat1, 2), SHIFT_REPEAT(267),
  [1237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_error_codes_repeat1, 2),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then, 3),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complete_condition, 4, .production_id = 31),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [1291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endpoint, 4, .production_id = 38),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [1297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_level, 5),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [1301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complete_condition, 4, .production_id = 30),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then, 2),
  [1307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_evaluator, 5),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [1311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(677),
  [1313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 5),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_info, 3),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 61),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 3, .production_id = 57),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format, 4, .production_id = 54),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complete_condition, 5, .production_id = 44),
  [1363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 5),
  [1365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complete_condition, 3),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [1369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endpoint, 5, .production_id = 49),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_definition, 5),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_type, 5),
  [1391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(737),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [1403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 2),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_sequence, 2),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_out_sequence, 3),
  [1413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fault_sequence, 2),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [1417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_endpoint, 3),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [1453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_eval, 3),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 6, .production_id = 50),
  [1537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else, 3),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_count, 4, .production_id = 51),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 4, .production_id = 53),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_complete, 5, .production_id = 19),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg, 1, .production_id = 9),
  [1585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg, 1, .production_id = 6),
  [1587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 3, .production_id = 55),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fault_sequence, 3),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_endpoint, 4),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else, 2),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endpoint_reference, 6),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_encoding_declaration, 3),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg, 2, .production_id = 58),
  [1761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg, 2, .production_id = 59),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_endpoint, 5),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_min, 5),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_string, 1),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_max, 5),
  [1875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_complete, 9, .production_id = 64),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [1887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [1897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_attribute, 10),
  [1905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_complete, 10, .production_id = 64),
  [1915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [1917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [1921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [1929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [1939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 9, .production_id = 66),
  [1943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 9, .production_id = 67),
  [1947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 9, .production_id = 68),
  [1955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 9, .production_id = 69),
  [1961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [1967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [1973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [1981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [1985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [1987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [1989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blocking, 5),
  [1993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [2001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [2003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [2005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [2007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [2009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [2011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [2013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [2015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [2017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [2019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [2021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [2023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [2025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 5),
  [2027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mediation_sequences, 3, .production_id = 37),
  [2029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [2031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [2033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 5),
  [2035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_out_sequence, 2),
  [2037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_sequence, 3),
  [2039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [2041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [2043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [2045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [2047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [2049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [2051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [2053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [2055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [2057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [2059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [2061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [2063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [2065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [2067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [2069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [2071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [2073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 14, .production_id = 70),
  [2075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 14, .production_id = 71),
  [2077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [2079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 14, .production_id = 72),
  [2081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_complete, 4, .production_id = 19),
  [2083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 1),
  [2085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 14, .production_id = 73),
  [2087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 14, .production_id = 74),
  [2089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [2091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 14, .production_id = 75),
  [2093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [2095] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [2099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [2101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [2103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [2105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [2107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [2109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [2111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [2113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [2115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [2117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [2119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [2121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [2123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [2125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [2127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [2129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [2131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [2133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [2135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [2137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [2139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [2141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [2143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [2145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hostname, 5),
  [2147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 5),
  [2149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 5),
  [2151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_swagger, 5),
  [2153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [2155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [2157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [2159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [2161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [2163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 19, .production_id = 76),
  [2165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 19, .production_id = 77),
  [2167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [2169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 19, .production_id = 78),
  [2171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 19, .production_id = 79),
  [2173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [2175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [2177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [2179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [2181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 24, .production_id = 80),
  [2183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
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
