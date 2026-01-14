#include <unistd.h>

void ft_putstr(const char *str) {
    if (!str) {
        return;
    }

    int i = 0;

    while (str[i]) {
        write(1, &str[i], 1);
        i++;
    }

    write(1, "\n", 1);
}

int main() {
    ft_putstr("hello world");
    return 0;
}