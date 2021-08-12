#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *str)
{
	write(1, str, 256);
}