#ifndef __EASYUSE_CURL_H__
#define __EASYUSE_CURL_H__

#if defined(EASYUSE_DLL)
#define OPENSSL_USE_APPLINK
#define OPENSSL_NO_STATIC_ENGINE
#define OPENSSL_PIC
#else
#define CURL_STATICLIB
#define OPENSSL_NO_DYNAMIC_ENGINE
#endif

#define USE_OPENSSL
#define OPENSSL_SYS_WIN32
#define WIN32_LEAN_AND_MEAN
#define L_ENDIAN
#define DSO_WIN32

#define USE_ZLIB
#define HAVE_LIBZ
#define HAVE_ZLIB_H
#define HAVE_ZLIB
#define ZLIB_WINAPI

#include "curl/curl.h"

#endif // __EASYUSE_CURL_H__