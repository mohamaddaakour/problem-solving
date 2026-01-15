#include <stdio.h>

void ft_swap(int *a, int *b) {
	if (!a || !b)
		return;

	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int a = 3;
	int b = 7;

	printf("a: %d and b: %d\n", a, b);

	ft_swap(&a, &b);

	printf("a: %d and b: %d\n", a, b);
	return 0;
}
