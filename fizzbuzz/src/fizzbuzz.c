#include <stdio.h>

int fizzbuzz(int n)
{
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (i % 3 == 0) {
            printf("Fizz");
        }

        if (i % 5 == 0) {
            printf("Buzz");
        }

        if (i % 3 && i % 5) {
            count++;
        }

        printf("\n");
    }

    return count;
}