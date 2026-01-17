#include <stdio.h>

int char_to_val(char c) {
    int character = 0;

    if (c >= '0' && c <= '9') {
        character = c - '0';
    } else if (c >= 'a' && c <= 'f') {
        character = 10 + (c - 'a');
    } else if (c >= 'A' && c <= 'F') {
        character = 10 + (c - 'A');
    } else {
        character = -1;
    }
    return character;
}

int ft_atoi_base(const char *str, int base) {
	int sign = 1;
	int result = 0;
	int i = 0;

	while ((str[i]) && ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))) {
		i++;
	}

	if (str[i] == '-' || str[i] == '+') {
		if (str[i] == '-') {
			sign = -1;
		}
		i++;
	}

	while (str[i] && (str[i] >= '0' && str[i] <= '9')) {
		result = result * base + char_to_val(str[i]);
		i++;
	}

	return (result * sign);
}

int main() {
	printf("%d\n", ft_atoi_base("	01", 2));

	return 0;
}
