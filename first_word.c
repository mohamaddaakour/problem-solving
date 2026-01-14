#include <unistd.h>

// program to take the first word only from a string
int main(int argc, char **argv) {

    if (argc != 2)
        return 1;

    int i = 0;

    // skip first spaces if exist
    while (argv[1][i] && argv[1][i] == ' ') {
        i++;
    }

    // print the first word
    while (argv[1][i] && argv[1][i] != ' ') {
        write(1, &argv[1][i], 1);
        i++;
    }

    // print new line at the end
    write(1, "\n", 1);

    return 0;
}