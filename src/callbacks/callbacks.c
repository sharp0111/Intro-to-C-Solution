#include <stdlib.h>
#include <string.h>
#include <callbacks/callbacks.h>

int sorted_order(int a, int b)
{
    return a - b;
}

int reverse_order(int a, int b)
{
    return b - a;
}

int *bubble_sort(int *numbers, int count, compare_cb cmp)
{
    int temp;
    int *target = malloc(count * sizeof(int));
    
    memcpy(target, numbers, count * sizeof(int));

    for (int i = 0; i < count; i++) {
        for (int j = 0; j < count - 1; j++) {
            if (cmp(target[j], target[j + 1]) > 0) {
                temp = target[j + 1];
                target[j + 1] = target[j];
                target[j] = temp;
            }
        }
    }
    return target;
}