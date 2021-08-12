#include <unistd.h>
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int a;
	int b;
	int *div;
	int *mod;
	int num1;
	int num2;

	div = &num1;
	mod = &num2;
	a = 100;
	b = 5;

	ft_div_mod(a, b, div, mod);
	printf("%d", *div);
	printf("%d", *mod);
}