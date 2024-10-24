#include <stdio.h>
int	main()
{
	char str[] = " 42ScHOOL";
	int	i = 0;

	printf("Original String: ");
	while (str[i])
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
	printf("Lowercase String: ");
	i = 0;
	while (str[i])
	{
		printf("%c", ft_tolower(str[i]));
		i++;
	}
	printf("\n");
	return (0);
}

