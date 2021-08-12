#include <unistd.h>

void ft_ultimate_div_mod(int *a, int *b){
	int quotient;
	int remainder;

	quotient = *a / *b;
	remainder = *a % *b;

	*a = quotient;
	*b = remainder;
}