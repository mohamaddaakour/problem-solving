#include <unistd.h>

int main(int argc, char **argv) {
	if (argc != 2) {
		write(1, "\n", 1);
		return 1;
	}

	int i = 0;

	while (argv[1][i]) {
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z') {
			if (argv[1][i] >= 'a' && argv[1][i] <= 'm') {
				int number = argv[1][i] + 13;
				write(1, &number, 1);

			} else {
				int number = argv[1][i] - 13;
				write(1, &number, 1);
			}
		} else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z') {
			if (argv[1][i] >= 'A' && argv[1][i] <= 'M') {
				int number = argv[1][i] + 13;
				write(1, &number, 1);

			} else {
				int number = argv[1][i] - 13;
				write(1, &number, 1);
			}
		} else {
			write(1, &argv[1][i], 1);
		}
		i++;
	}

	write(1, "\n", 1);

	return 0;
}
