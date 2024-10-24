#include <stdio.h>
int	main()
{
	char str[] = "123abc_ !";
	int	i = 0;
	
	while (str[i])
	{
		printf("%c, %d\n", str[i], ft_isdigit(str[i]));
		i++;
	}
	return (0);
}

