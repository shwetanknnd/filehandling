
#pragma once

#ifndef _SGX_TPROTECTED_FS_H_
#define _SGX_TPROTECTED_FS_H_

#include <stddef.h>

#include "sgx_defs.h"
#include "sgx_key.h"

#define SGX_FILE void

#define EOF        (-1)

#define SEEK_SET    0
#define SEEK_CUR    1
#define SEEK_END    2

#define FILENAME_MAX  260
#define FOPEN_MAX     20

#ifdef __cplusplus
extern "C" {
#endif
SGX_FILE* SGXAPI sgx_fopen(const char* filename, const char* mode, const sgx_key_128bit_t *key);

SGX_FILE* SGXAPI sgx_fopen_auto_key(const char* filename, const char* mode);
int32_t SGXAPI sgx_fclose(SGX_FILE* stream);

int32_t SGXAPI sgx_fclear_cache(SGX_FILE* stream);


#ifdef __cplusplus
}
#endif

#endif // _SGX_TPROTECTED_FS_H_
