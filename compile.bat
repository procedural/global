cl /MD /c global.cpp
lib global.obj
del global.obj
copy global.lib global_md.lib
del global.lib

cl /MDd /c global.cpp
lib global.obj
del global.obj
copy global.lib global_mdd.lib
del global.lib

cl /MT /c global.cpp
lib global.obj
del global.obj
copy global.lib global_mt.lib
del global.lib

cl /MTd /c global.cpp
lib global.obj
del global.obj
copy global.lib global_mtd.lib
del global.lib