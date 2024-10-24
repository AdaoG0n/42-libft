#include <stdio.h>
int	main()
{
	char str[] = "abcde";
	
	printf("Before: %s\n", str);
	ft_memset(str, 'x', 3);
	printf("After: %s\n", str);
	return (0);
}

