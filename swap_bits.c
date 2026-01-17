#include <unistd.h>
#include <stdio.h>

// swap the 4 first bits with the last 4 bits
unsigned char swap_bits(unsigned char octet) {
    return (octet >> 4 | octet << 4);
}

int main(void) {
    printf("%d\n", swap_bits(2));
    return 0;
}