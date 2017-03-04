#include <stdio.h>

#define N_ELEMENTS(arr) (sizeof(arr) / sizeof(*(arr)))

int max_element(int* arr, int size)
{
    int max = *arr;

    int* it;
    for (it = arr + 1; it < arr + size; ++it) {
        if (*it > max) {
            max = *it;
        }
    }

    return max;
}

int main()
{
    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};

<<<<<<< HEAD
    const int max = max_element(arr, 10);

    printf("Array: ");
    int i;
    for (i = 0; i < 10; ++i) {
=======
    const int max = max_element(arr, N_ELEMENTS(arr));

    printf("Array: ");
    int i;
    for (i = 0; i < N_ELEMENTS(arr); ++i) {
>>>>>>> Count array items with macro
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Max element: %d\n", max);

    return 0;
}
