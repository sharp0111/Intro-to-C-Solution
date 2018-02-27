#include <stdlib.h>

/*
    Duplicates the input string by dynamically allocating memory for 
    the duplicate string using `malloc` and then copying the string
    into the allocated memory. Returns a pointer to the allocated memory.
*/
char *string_dup(char *src)
{
    char *str;
    char *p;
    int len = 0;

    while (src[len]) {
        len++;
    }

    str = malloc(len + 1);
    p = str;

    while (*src) {
        *p++ = *src++;
    }
    *p = '\0';
    return str;
}