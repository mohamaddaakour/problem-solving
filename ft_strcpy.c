#include <stdio.h>

char *ft_strcpy(char *dest, const char *src) {
    if (!src || !dest) {
        return NULL;
    }

    int i = 0;

    while (src[i]) {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';

    return dest;
}

int main() {
    char src[] = "hello";
    char dest[6] = "";

    printf("%s\n", ft_strcpy(dest, src));
    return 0;
}