#ifndef __EASYUSE_SQLITE_H__
#define __EASYUSE_SQLITE_H__

// sqlite now only support dll, don't have static lib
#define SQLITE_ENABLE_COLUMN_METADATA
#define SQLITE_ENABLE_RTREE

#include "sqlite/sqlite3.h"

#endif // __EASYUSE_SQLITE_H__