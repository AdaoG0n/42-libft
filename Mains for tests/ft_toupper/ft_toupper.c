#include <stdio.h>
int	main()
{
	char str[] = "42sChool_";
	int	i = 0;

	printf("Original string: ");
	while (str[i])
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
	printf("Uppercase String: ");
	i = 0;
	while (str[i])
	{
		printf("%c", ft_toupper(str[i]));
		i++;
	}
	printf("\n");
	return (0);
}
