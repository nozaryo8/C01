#include <unistd.h>
#include <stdio.h>

void 	t_swap(int *a, int *b);

int	main(void)
{
	int *a;
	int *b;
	int num1;
	int num2;

	num1 = 1;
	num2 = 2;
	a = &num1;
	b = &num2;
	t_swap(a, b);
	printf("%d", *a);
	printf("%d", *b);
}