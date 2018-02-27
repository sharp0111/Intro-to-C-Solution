#include <stdlib.h>

/*
    Swaps the integer values being pointed at by a and b
*/
void swap(int* a, int* b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

/*
    Given a character pointer s, returns the number of characters
    it is pointing to
*/
int string_length(char *s)
{
    int n = 0;
    
    while (*s != '\0') {
        n++;
        s++;
    }

    return n;
}

/*
    Given an empty (NULL) character pointer x and a character pointer y,
    copies the character contents of y over to x
*/
// void string_copy(char *x, char *y)
// {
//     while ((*x = *y) != '\0') {
//         x++;
//         y++;
//     }
// }

/* More streamlined versions of string_copy*/

void string_copy(char *x, char *y)
{
    while ((*x++ = *y++) != '\0')
        ;
}
/*

void string_copy(char *x, char *y)
{
    while (*x++ = *y++)
        ;
}
*/

/* 
    Compares the character strings m and n and returns negative,
    0, or positive if n is lexicographically less than, equal to,
    or greater than n
*/
int string_compare(char *m, char *n)
{
    for (; *m == *n; m++, n++) {
        if (*m == '\0') {
            return 0;
        }
    }
    return *m - *n;
}