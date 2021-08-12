#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr);

int	main() {
	int *nbr;
	int a = 1;

	nbr = &a;
	printf("%p", &nbr);
	ft_ft(nbr);
	printf("%d", *nbr);
}