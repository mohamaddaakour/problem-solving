#include <stdio.h>
#include <stdbool.h>

bool containsDuplicate(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int arr[] = {1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("%s\n", containsDuplicate(arr, size) ? "true" : "false");
    return 0;
}