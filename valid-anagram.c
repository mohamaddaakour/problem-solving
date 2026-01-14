#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int ft_strlen(char *str) {
    int i = 0;

    while (str[i]) {
        i++;
    }
    return i;
}

bool validAnagram(char *str1, char *str2) {
    int firstStrSize = ft_strlen(str1);
    int secondStrSize = ft_strlen(str2);
    int count = 0;

    if (firstStrSize != secondStrSize) {
        return false;
    }

    // array to check if this letter appeared before
    bool *used = malloc(secondStrSize * sizeof(bool));
    if (!used)
        return false;

    for (int i = 0; i < secondStrSize; i++) {
        used[i] = false;
    }

    for (int i = 0; i < firstStrSize; i++) {
        for (int j = 0; j < secondStrSize; j++) {
            if (!used[j] && (str1[i] == str2[j])) {
                count++;
                used[j] = true;
                break;
            }
        }
    }

    free(used);

    if (count == firstStrSize) {
        return true;
    }
    return false;
}

int main() {
    char str1[] = "helo";
    char str2[] = "helo";

    printf("%s\n", validAnagram(str1, str2) ? "true" : "false");
    return 0;
}