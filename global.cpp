#if 0
rm -f libglobal.so
c++ -std=c++11 -fPIC -fno-exceptions -fno-rtti -static-libgcc -static-libstdc++ -shared global.cpp -o libglobal.so
exit
#endif

#include "flat_hash_map.hpp"

ska::flat_hash_map<const char *, void *> __GLOBAL_MAP_8d802133c4cd76b93c9b6922c658bd55b1c9e3fdcedda89ba18afca5a8eb5070;

extern "C" void GlobalSet(const char * key, void * value) {
  __GLOBAL_MAP_8d802133c4cd76b93c9b6922c658bd55b1c9e3fdcedda89ba18afca5a8eb5070[key] = value;
}

extern "C" void * GlobalGet(const char * key) {
  return __GLOBAL_MAP_8d802133c4cd76b93c9b6922c658bd55b1c9e3fdcedda89ba18afca5a8eb5070[key];
}