#include <stdio.h>

int is_power_of_2(int nb) {
	long number = 1;

	if (nb <= 0) {
		return 0;
	}

	while (number <= nb) {
		if (number == nb) {
			return 1;
		}
		number = number * 2;
	}
	return 0;
}

int main(void) {
	printf("%d\n", is_power_of_2(20));
	return 0;
}
