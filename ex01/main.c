#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main() {
	int *nbr0;
	int **nbr1;
	int ***nbr2;
	int ****nbr3;
	int *****nbr4;
	int ******nbr5;
	int *******nbr6;
	int ********nbr7;
	int *********nbr;

	nbr1 = &nbr0;
	nbr2 = &nbr1;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr = &nbr7;
	int a = 1;

	nbr0 = &a;
	printf("%p", &nbr0);
	ft_ultimate_ft(nbr);
	printf("%d", *********nbr);
}