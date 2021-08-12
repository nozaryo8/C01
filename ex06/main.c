#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str);

int	main(void)
{
	char *str;
	char a[256] = "dsds";

	str = a;
	
	printf("%d", ft_strlen(str));

}