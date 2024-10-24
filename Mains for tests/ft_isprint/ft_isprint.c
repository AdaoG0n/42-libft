#include <stdio.h>
int	main()
{
	char str[] = "123abc_ !\n\t\r\v\f\0";
	int	i = 0;

	while(str[i])
	{
		printf("%c: %d\n", str[i], ft_isprint(str[i]));
		i++;
	}
	return (0);
}
