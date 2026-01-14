#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *arr, int size, int target) {
    int *result = (int *)malloc(sizeof(int) * 2);
    if (!result)
        return NULL;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    free(result);
    return NULL;
}

int main() {
    int arr[] = {5,5};
    int size = 2;

    int *result = twoSum(arr, size, 10);

    for (int i = 0; i < 2; i++) {
        printf("%d ", result[i]);
    }

    free(result);

    return 0;
}