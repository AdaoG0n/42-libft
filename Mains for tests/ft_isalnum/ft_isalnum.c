#include <stdio.h>

int	main()
{
	char str[] = "42_porto school!";
	int i = 0;

	while (str[i])
	{
		printf("%c, %d\n", str[i], ft_isalnum(str[i]));
		i++;
	}
	return (0);
}
