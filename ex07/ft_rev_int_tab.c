void ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	int array[size];

	i = 0;
	j = size - 1;
	while(i < size)
	{
		array[i] = tab[j];
		i++;
		j--;
	}
	i = 0;
	while(i < size)
	{
		tab[i] = array[i];
		i++;
	}
	return ;
}