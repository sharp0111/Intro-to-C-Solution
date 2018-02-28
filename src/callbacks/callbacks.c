#include <stdlib.h>
#include <string.h>
#include <callbacks/callbacks.h>

/*
    Implement the callback that will be passed to your bubble_sort function to sort 
    the elements in ascending numerical order.
*/
int sorted_order(int a, int b)
{
    return a - b;
}

/*
    Implement the callback that will be passed to your bubble_sort function to sort
    the elements in descending (reverse) numerical order.
*/
int reverse_order(int a, int b)
{
    return b - a;
}

/*
    Receives an array of numbers to be sorted, the number of elements in the array,
    and a callback that specifies the order in which the numbers will be sorted.
*/
int *bubble_sort(int *numbers, int n, compare_cb cmp)
{
    int temp;
    int *target = malloc(n * sizeof(int));
    
    memcpy(target, numbers, n * sizeof(int));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (cmp(target[j], target[j + 1]) > 0) {
                temp = target[j + 1];
                target[j + 1] = target[j];
                target[j] = temp;
            }
        }
    }
    return target;
}