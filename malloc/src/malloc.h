#ifndef malloc_h
#define malloc_h

#include "malloc.c"

char *string_dup(char *src);

void *mem_copy(void *x, const void *y, int n);

#endif