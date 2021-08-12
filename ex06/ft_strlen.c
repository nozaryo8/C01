#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i ;
	int count;

	i = 0;
	count = 0;

	while(str[i] != '\0')
	{
		i++;
	}
	return i;
}
