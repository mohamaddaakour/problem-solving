#include <stdio.h>
#include <stdlib.h>

// function to check if the given character is a space
int is_space(char c) {
    if (c == ' ' || c == '\n' || c == '\t')
        return 1;
    return 0;
}

// function to call the words in the given string
int count_words(const char *str) {
    if (!str)
        return 0;

    int i = 0;
    int count = 0;

    while(str[i]) {
        while (str[i] && is_space(str[i]))
            i++;

        if (str[i] && !is_space(str[i])) {
            count++;
            while (str[i] && !is_space(str[i]))
                i++;
        }
    }

    return count;
}

int ft_strlen(const char *str) {
    if (!str)
        return 0;

    int i = 0;

    while (str[i]) {
        i++;
    }
    return i;
}

char *duplicate(const char *str) {
    if (!str)
        return NULL;

    char *new_array = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
    if (!new_array)
        return NULL;

    int i = 0;

    while (str[i] && !is_space(str[i])) {
        new_array[i] = str[i];
        i++;
    }

    return new_array;
}

char **ft_split(const char *str) {
    int words_number = count_words(str);

    char **split = (char **)malloc(sizeof(char *) * (words_number + 1));
    if (!split) {
        return NULL;
    }

    int i = 0;
    int j = 0;

    while(str[i]) {
        while (str[i] && is_space(str[i]))
            i++;

        if (str[i] && !is_space(str[i])) {
            split[j] = duplicate(str + i);
            j++;
            while (str[i] && !is_space(str[i]))
                i++;
        }
    }
    split[j] = NULL;

    return split;
}

int main(void) {
    char *str = "hello world \n wajofa ajfjf         aifahif";

    int count = count_words(str);

    char **split = ft_split(str);

    for (int i = 0; i < count ; i++) {
        printf("%s\n", split[i]);
    }

    return 0;
}