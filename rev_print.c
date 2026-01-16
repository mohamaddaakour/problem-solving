#include <unistd.h>

int ft_strlen(char *str) {
	if (!str) {
		return 0;
	}

	int i = 0;

	while (str[i]) {
		i++;
	}
	return i;
}

// print the string in reverse order
int main(int argc, char **argv) {
	if (argc != 2) {
		return 1;
	}

	int i = ft_strlen(argv[1]) - 1;

	while (i >= 0) {
		write(1, &argv[1][i], 1);
		i--;
	}

	write(1, "\n", 1);

	return 0;
}
