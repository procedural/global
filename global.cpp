#if 0
rm -f libglobal.so
c++ -std=c++11 -fPIC -fno-exceptions -fno-rtti -static-libgcc -static-libstdc++ -shared global.cpp -o libglobal.so
exit
#endif

#include <stdexcept>
#include "flat_hash_map.hpp"
#include <string>

ska::flat_hash_map<std::string, void *> __GLOBAL_MAP_8d802133c4cd76b93c9b6922c658bd55b1c9e3fdcedda89ba18afca5a8eb5070;

extern "C" void GlobalSet(const char * key, void * value) {
  std::string keyString = key;
  __GLOBAL_MAP_8d802133c4cd76b93c9b6922c658bd55b1c9e3fdcedda89ba18afca5a8eb5070[keyString] = value;
}

extern "C" void * GlobalGet(const char * key) {
  std::string keyString = key;
  return __GLOBAL_MAP_8d802133c4cd76b93c9b6922c658bd55b1c9e3fdcedda89ba18afca5a8eb5070[keyString];
}
