#include <unistd.h>

// print numbers
void putnbr(int nb) {
    long n = (long)nb;

    if (n < 0) {
        write (1, "-", 1);
        n = -n;
    }

    if (n >= 10)
        putnbr(n / 10);

    char number = (n % 10) + '0';

    write (1, &number, 1);
}

int main() {

    int i = 1;

    while (i <= 100) {
        if (i % 3 == 0 && i % 5 == 0) {
            write(1, "fizzbuzz\n", 9);
        } else if (i % 3 == 0) {
            write(1, "fizz\n", 5);
        } else if (i % 5 == 0) {
            write(1, "buzz\n", 5);
        } else {
            putnbr(i);
            write(1, "\n", 1);
        }
        i++;
    }

    write(1, "\n", 1);

    return 0;
}