#include <strings.h>
#include <stdint.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int	main()
{
	int *numbers;
	int n = 5;
	size_t i;
	
	numbers = (int *)ft_calloc(n, sizeof(int));
	if (numbers == NULL)
	{
		printf("Memory allocation failure\n");
		return 1;
	}
	
	printf("Initial values:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d ", numbers[i]);
	}
	printf("\n");
	for (i = 0; i < n; i++)
	{
		numbers[i] = i * 10;
	}
	printf("New values:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d ", numbers[i]);
	}
	printf("\n");
	free(numbers);
	return 0;
}
