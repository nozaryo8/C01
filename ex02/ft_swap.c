#include <unistd.h>

void 	t_swap(int *a, int *b)
{
	int c;
	c = 0;
	c = *a;
	*a = *b;
	*b = c;
}