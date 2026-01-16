#include <stdio.h>

int ft_strcspn(const char *s, const char *error) {
	int count = 0;
	int i = 0;
	// int error_count = 0;

	while(s[i]) {
		if (s[i] == error[i]) {
			return count;
		}

		if (error[i] && s[i] != error[i]) {
			count++;
		}

		if (error[i] == '\0' && s[i] != error[i]) {
			count++;
		}
		i++;
	}
	return count;
}

int main() {
	printf("%d\n", ft_strcspn("12345", "98"));
	return 0;
}
