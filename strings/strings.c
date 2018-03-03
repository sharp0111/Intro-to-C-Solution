#include <stdio.h>

/*
    Given a character array s, return the number of characters 
    held inside it.
*/
int string_length(char s[])
{
    int n = 0;

    while (s[n] != '\0') {
        n++;
    }

    return n;
}

/*
    Don't worry about this funky 'char *' going on here. We'll get to
    that shortly. In the meantime, write a function that allocates a
    new char array with the capacity given by the length of the input
    string and add the characters from the input string into the new
    array in reverse order. Return the new array.
*/
char *reverse_string(char s[])
{
    int n = string_length(s);
    char rv[n];

    for (int i = 0; i < n; i++) {
        rv[i] = s[n - i - 1];
    }

    return rv;
}

#ifndef TESTING
int main(void)
{
    char quote1[] = "Don't forget to be awesome";
    char quote2[] = "a man a plan a canal panama";

    printf("The string 'Don't forget to be awesome' has %d characters.\n", string_length(quote1));
    printf("The string 'a man a plan a canal panama' reversed is: %s\n", reverse_string(quote2));

    printf("\n");

    return 0;
}
#endif
    
