# _build_vs120xp

build thiry-party source with vs2013 for xp 

可以直接包含 use_xxx.h，这边避免自己给每个工程都添加一大堆的宏定义
然后定义一个宏区分是使用动态库，还是静态库
EASYUSE_DLL
EASYUSE_STATICLIB
默认不定义EASYUSE_DLL的话就使用静态库



you can direct include [use_xxx.h], instead of add a lot of macro for each project.

but specific one of below macro

EASYUSE_DLL  
EASYUSE_STATICLIB

if you not specific any macro, will default to EASYUSE_STATICLIB