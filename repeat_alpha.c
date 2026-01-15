#include <unistd.h>
#include <stdio.h>

size_t ft_strlen(char *str) {
	if (!str) {
		return 0;
	}

	size_t i = 0;

	while (str[i]) {
		i++;
	}
	return i;
}

int main(int argc, char **argv) {
	if (argc != 2) {
		return 1;
	}

	size_t i = 0;
	size_t length = ft_strlen(argv[i]);

	while (i < length) {
		int j = 0;
		if (argv[1][i] >= 97 && argv[1][i] <= 122) {
			int word_count = argv[1][i] - 97 + 1;

			// printf("%d\n", word_count);

			while (j < word_count) {
				write(1, &argv[1][i], 1);
				j++;
			}
		}
		i++;
	}

	write(1, "\n", 1);
	return 0;
}
