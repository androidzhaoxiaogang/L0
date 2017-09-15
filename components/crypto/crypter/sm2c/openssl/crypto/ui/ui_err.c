/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2017 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include <openssl/err.h>
#include <openssl/uierr.h>

#ifndef OPENSSL_NO_ERR

static const ERR_STRING_DATA UI_str_functs[] = {
    {ERR_PACK(ERR_LIB_UI, UI_F_CLOSE_CONSOLE, 0), "close_console"},
    {ERR_PACK(ERR_LIB_UI, UI_F_ECHO_CONSOLE, 0), "echo_console"},
    {ERR_PACK(ERR_LIB_UI, UI_F_GENERAL_ALLOCATE_BOOLEAN, 0),
     "general_allocate_boolean"},
    {ERR_PACK(ERR_LIB_UI, UI_F_GENERAL_ALLOCATE_PROMPT, 0),
     "general_allocate_prompt"},
    {ERR_PACK(ERR_LIB_UI, UI_F_NOECHO_CONSOLE, 0), "noecho_console"},
    {ERR_PACK(ERR_LIB_UI, UI_F_OPEN_CONSOLE, 0), "open_console"},
    {ERR_PACK(ERR_LIB_UI, UI_F_UI_CREATE_METHOD, 0), "UI_create_method"},
    {ERR_PACK(ERR_LIB_UI, UI_F_UI_CTRL, 0), "UI_ctrl"},
    {ERR_PACK(ERR_LIB_UI, UI_F_UI_DUP_ERROR_STRING, 0), "UI_dup_error_string"},
    {ERR_PACK(ERR_LIB_UI, UI_F_UI_DUP_INFO_STRING, 0), "UI_dup_info_string"},
    {ERR_PACK(ERR_LIB_UI, UI_F_UI_DUP_INPUT_BOOLEAN, 0),
     "UI_dup_input_boolean"},
    {ERR_PACK(ERR_LIB_UI, UI_F_UI_DUP_INPUT_STRING, 0), "UI_dup_input_string"},
    {ERR_PACK(ERR_LIB_UI, UI_F_UI_DUP_USER_DATA, 0), "UI_dup_user_data"},
    {ERR_PACK(ERR_LIB_UI, UI_F_UI_DUP_VERIFY_STRING, 0),
     "UI_dup_verify_string"},
    {ERR_PACK(ERR_LIB_UI, UI_F_UI_GET0_RESULT, 0), "UI_get0_result"},
    {ERR_PACK(ERR_LIB_UI, UI_F_UI_GET_RESULT_LENGTH, 0),
     "UI_get_result_length"},
    {ERR_PACK(ERR_LIB_UI, UI_F_UI_NEW_METHOD, 0), "UI_new_method"},
    {ERR_PACK(ERR_LIB_UI, UI_F_UI_PROCESS, 0), "UI_process"},
    {ERR_PACK(ERR_LIB_UI, UI_F_UI_SET_RESULT, 0), "UI_set_result"},
    {ERR_PACK(ERR_LIB_UI, UI_F_UI_SET_RESULT_EX, 0), "UI_set_result_ex"},
    {0, NULL}
};

static const ERR_STRING_DATA UI_str_reasons[] = {
    {ERR_PACK(ERR_LIB_UI, 0, UI_R_COMMON_OK_AND_CANCEL_CHARACTERS),
    "common ok and cancel characters"},
    {ERR_PACK(ERR_LIB_UI, 0, UI_R_INDEX_TOO_LARGE), "index too large"},
    {ERR_PACK(ERR_LIB_UI, 0, UI_R_INDEX_TOO_SMALL), "index too small"},
    {ERR_PACK(ERR_LIB_UI, 0, UI_R_NO_RESULT_BUFFER), "no result buffer"},
    {ERR_PACK(ERR_LIB_UI, 0, UI_R_PROCESSING_ERROR), "processing error"},
    {ERR_PACK(ERR_LIB_UI, 0, UI_R_RESULT_TOO_LARGE), "result too large"},
    {ERR_PACK(ERR_LIB_UI, 0, UI_R_RESULT_TOO_SMALL), "result too small"},
    {ERR_PACK(ERR_LIB_UI, 0, UI_R_SYSASSIGN_ERROR), "sys$assign error"},
    {ERR_PACK(ERR_LIB_UI, 0, UI_R_SYSDASSGN_ERROR), "sys$dassgn error"},
    {ERR_PACK(ERR_LIB_UI, 0, UI_R_SYSQIOW_ERROR), "sys$qiow error"},
    {ERR_PACK(ERR_LIB_UI, 0, UI_R_UNKNOWN_CONTROL_COMMAND),
    "unknown control command"},
    {ERR_PACK(ERR_LIB_UI, 0, UI_R_UNKNOWN_TTYGET_ERRNO_VALUE),
    "unknown ttyget errno value"},
    {ERR_PACK(ERR_LIB_UI, 0, UI_R_USER_DATA_DUPLICATION_UNSUPPORTED),
    "user data duplication unsupported"},
    {0, NULL}
};

#endif

int ERR_load_UI_strings(void)
{
#ifndef OPENSSL_NO_ERR
    if (ERR_func_error_string(UI_str_functs[0].error) == NULL) {
        ERR_load_strings_const(UI_str_functs);
        ERR_load_strings_const(UI_str_reasons);
    }
#endif
    return 1;
}
