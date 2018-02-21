#include <stdlib.h>

void swap(int v[], int i, int j)
{
    int temp;

    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

void quicksort(int values[], int left, int right)
{
    int i, last;

    if (left >= right) return;
    swap(values, left, (left + right) / 2);
    last = left;

    for (i = left+1; i <= right; i++) {
        if (values[i] < values[left]) {
            swap(values, ++last, i);
        }
    }

    swap(values, left, last);

    quicksort(values, left, last-1);
    quicksort(values, last+1, right);
}