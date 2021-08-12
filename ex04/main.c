#include <unistd.h>
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int *a;
	int *b;
	int num1;
	int num2;

	num1 = 5;
	num2 = 8;
	a = &num1;
	b = &num2;
	
	ft_ultimate_div_mod(a, b);
	printf("%d", *a);
	printf("%d", *b);
}