#ifndef __EASYLINK_CXIMAGE_H__
#define __EASYLINK_CXIMAGE_H__

// please specfic the library path first(_build_vs120xp)
#if defined(EASYUSE_DLL)
#pragma comment(lib, "libcximage.lib")
#else
#pragma comment(lib, "cximage/cximage.lib")
#pragma comment(lib, "cximage/jasper.lib")
#pragma comment(lib, "cximage/jbig.lib")
#pragma comment(lib, "cximage/jpeg.lib")
#pragma comment(lib, "cximage/libdcr.lib")
#pragma comment(lib, "cximage/libpsd.lib")
#pragma comment(lib, "cximage/mng.lib")
#pragma comment(lib, "cximage/png.lib")
#pragma comment(lib, "cximage/tiff.lib")
#endif

#endif // __EASYLINK_CXIMAGE_H__