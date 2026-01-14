#include <stdio.h>

#include <stddef.h>

size_t ft_strlen(const char *s) {
    if (!s) {
        return 0;
    }

    size_t i = 0;

    while (s[i])
        i++;

    return i;
}

int main(void) {
    printf("%zu\n", ft_strlen("hello"));
    return 0;
}