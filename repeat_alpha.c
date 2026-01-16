#include <unistd.h>

// repeat each character in the alphabet by it is index
int main(int argc, char **argv) {
	if (argc != 2) {
		return 1;
	}

	int i = 0;
	int j = 0;
	int word_count = 1;

	while (argv[1][i]) {
		j = 0;
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z') {
			word_count = argv[1][i] - 'a' + 1;

			while (j < word_count) {
				write(1, &argv[1][i], 1);
				j++;
			}
		} else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z') {
			word_count = argv[1][i] - 'A' + 1;

			while (j < word_count) {
				write(1, &argv[1][i], 1);
				j++;
			}
		}
		else {
			write(1, &argv[1][i], 1);
		}
		i++;
	}

	write(1, "\n", 1);
	return 0;
}
