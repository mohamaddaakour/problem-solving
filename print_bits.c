#include <unistd.h>

void print_bits(unsigned char octet) {
    int i = 7;
    char c;

    while (i >= 0) {
        if ((octet >> i) & 1) {
            c = '1';
        } else {
            c = '0';
        }
        write(1, &c, 1);
        i--;
    }
    
    write(1, "\n", 1);
}

int main(void) {
    print_bits(2);
    return 0;
}