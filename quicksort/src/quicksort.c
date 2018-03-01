#include <stdlib.h>
#include "../../pointers/src/pointers.h" 

/*
    Implement the Quicksort algorithm. You'll likely want to re-use the
    `swap` function you implemented in the pointers module (which is why
    the pointers header file is included here).
*/
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
  
    swap(&arr[i+1], &arr[high]);
    return i + 1;
}

void quicksort(int arr[], int low, int high)
{
    if (low < high) {
        int index = partition(arr, low, high);
        quicksort(arr, low, index - 1);
        quicksort(arr, index + 1, high);
    }
}