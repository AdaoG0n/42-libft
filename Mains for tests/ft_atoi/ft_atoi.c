#include <stdio.h>

int	main(void)
{
	const char *test_strings[] = 
	{
		"42", "-42", "+42", "  42", "42abc", "abc42",
		"2147483647", "-2147483648", "   +123", "   -123"
	};
	int i;
	int result;
	
	i = 0;
	while (i < 10)
	{
		result = ft_atoi(test_strings[i]);
		printf("ft_atoi(\"%s\") = %d\n", test_strings[i], result);
		i++;
	}
	return (0);
}

