/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:37:46 by adamarqu          #+#    #+#             */
/*   Updated: 2024/10/21 11:37:49 by adamarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign * result);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Test cases array
    const char *tests[] = {
        "123",          // Basic positive number
        "-456",         // Negative number
        "+789",         // Number with positive sign
        "  42",         // Number with leading spaces
        "\t\n\v\f\r 987",  // Number with various whitespace characters
        "2147483647",   // INT_MAX
        "-2147483648",  // INT_MIN
        "0",            // Zero
        "  +123abc",    // Number with trailing non-digit characters
        "  -42abc",     // Negative number with trailing non-digit characters
        "abc123",       // Invalid input (should return 0)
        "  +-42",       // Invalid sign combination
        "9999999999"    // Number larger than INT_MAX
    };

    int num_tests = sizeof(tests) / sizeof(tests[0]);

    // Loop through all test cases
    for (int i = 0; i < num_tests; i++)
    {
        // Convert using ft_atoi and standard atoi
        int result_ft = ft_atoi(tests[i]);
        int result_std = atoi(tests[i]);

        // Print test results
        printf("Test %d:\n", i + 1);
        printf("Input: \"%s\"\n", tests[i]);
        printf("ft_atoi result: %d\n", result_ft);
        printf("std atoi result: %d\n", result_std);

        // Compare results
        if (result_ft == result_std)
        {
            printf("Status: PASS\n");
        }
        else
        {
            printf("Status: FAIL\n");
        }

        // Add explanation for each test case
        printf("Explanation: ");
        switch(i)
        {
            case 0:
                printf("Basic positive number conversion.\n");
                break;
            case 1:
                printf("Negative number conversion.\n");
                break;
            case 2:
                printf("Number with explicit positive sign.\n");
                break;
            case 3:
                printf("Number with leading spaces.\n");
                break;
            case 4:
                printf("Number with various whitespace characters.\n");
                break;
            case 5:
                printf("Testing with INT_MAX.\n");
                break;
            case 6:
                printf("Testing with INT_MIN.\n");
                break;
            case 7:
                printf("Zero conversion.\n");
                break;
            case 8:
                printf("Number with trailing non-digit characters.\n");
                break;
            case 9:
                printf("Negative number with trailing non-digit characters.\n");
                break;
            case 10:
                printf("Invalid input (should return 0).\n");
                break;
            case 11:
                printf("Invalid sign combination.\n");
                break;
            case 12:
                printf("Number larger than INT_MAX (may cause overflow).\n");
                break;
        }
        printf("\n");
    }

    return 0;
}
*/
