#ifndef __EASYLINK_CXIMAGE_H__
#define __EASYLINK_CXIMAGE_H__

// please specfic the library path first(_build_vs120xp)
#if defined(EASYUSE_DLL)
#pragma comment(lib, "libcximage.lib")
#else
#pragma comment(lib, "cximage.lib")
#pragma comment(lib, "jasper.lib")
#pragma comment(lib, "jbig.lib")
#pragma comment(lib, "jpeg.lib")
#pragma comment(lib, "libdcr.lib")
#pragma comment(lib, "libpsd.lib")
#pragma comment(lib, "mng.lib")
#pragma comment(lib, "png.lib")
#pragma comment(lib, "tiff.lib")
#endif

#endif // __EASYLINK_CXIMAGE_H__