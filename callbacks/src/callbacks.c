#include <stdlib.h>
#include <callbacks.h>
#include "../../malloc/src/malloc.h"
#include "../../pointers/src/pointers.h" 

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
    Your function should allocate memory to hold the sorted data and return the 
    sorted data. Call the callback as you would any other function. 
*/
int *bubble_sort(int *numbers, int n, compare_cb cmp)
{
    int *target = malloc(n * sizeof(int));
    mem_copy(target, numbers, n * sizeof(int));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (cmp(target[j], target[j + 1]) > 0) {
                swap(&target[j], &target[j+1]);
            }
        }
    }
    return target;
}