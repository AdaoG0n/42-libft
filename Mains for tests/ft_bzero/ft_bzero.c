#include <stdio.h>

int	main()
{
	char	str[] = "asdfg ";

	printf("Before: %s\n", str);
	ft_bzero(str, 4);
	printf("After: %s\n", str);
	return (0);
}

