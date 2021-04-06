#pragma once

#ifdef __cplusplus
extern "C" {
#endif

void   GlobalSet(const char * key, void * value);
void * GlobalGet(const char * key);

#ifdef __cplusplus
}
#endif