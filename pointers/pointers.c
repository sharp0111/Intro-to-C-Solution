/*
    Swaps the integer values being pointed at by a and b. Keep in
    mind when you need to access a pointer's actual value (the 
    address it's referring to) or the value at the address it's 
    pointing at.
*/
void swap(int* a, int* b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

/*
    Given a character pointer s, returns the number of characters
    it is pointing to. Think about how pointer arithmetic can 
    help you with this.
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
    copies the character contents of y over to x. Again, pointer arithmetic
    is necessary here. Also, make sure x points to a null character at its 
    end to terminate it properly. 
*/
void string_copy(char *x, char *y)
{
    while (*y != '\0') {
        *x = *y;
        x++;
        y++;
    }
    *x = '\0';
}

/* More streamlined versions of string_copy

void  string_copy(char *x, char *y)
{
    while ((*x = *y) != '\0') {
        x++;
        y++;
    }
}

void string_copy(char *x, char *y)
{
    while ((*x++ = *y++) != '\0')
        ;
}

void string_copy(char *x, char *y)
{
    while (*x++ = *y++)
        ;
}
*/

/* 
    Compares the character strings m and n and returns negative,
    0, or positive if n is lexicographically less than, equal to,
    or greater than n. To calculate lexicographic difference, find
    the difference between the first characters in m and n that differ.
    
    For example, given matching strings, this function should 
    return 0. Given strings m = "hello world" and n = "goodbye",
    this function should return a negative value. Given strings
    m = "aardvark" and n = "zebra", should return a positive
    value.
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