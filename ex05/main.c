#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *str);

int	main(void)
{
	char *str;
	char a[256] = "dfadfafafdafafadsfd";

	str = a;
	
	ft_putstr(str);
	// / printf("%s", str);
	// printf("%p", str);

}