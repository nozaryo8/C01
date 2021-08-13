#include <unistd.h>
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int *tab;
	int a[3] = {11, 10, 5};
	int size = 3;

	tab = a;
	ft_rev_int_tab(tab, size);

	for(int i=0; i < size; i++){
		printf("%d", tab[i]);
	}
	return (0);
}