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


_______________________________________________________________________________________________
--- Explanation ---


Include Directive:
    #include "libft.h": 
This line includes the "libft.h" header file, which likely contains the prototypes for 
custom library functions, including ft_atoi.

Function Declaration:
    int	ft_atoi(const char *str): 
This line declares a function named ft_atoi. The function takes one argument, str, which 
is a pointer to a constant character (const char *). The function returns an integer (int).

Variable Declarations:
    int	result;
    int	sign;
These lines declare two integer variables: result to store the converted number, and 
sign to keep track of whether the number is positive or negative.

Initialization:
    result = 0;
    sign = 1;
These lines initialize result to 0 and sign to 1 (assuming the number is positive by default).

Whitespace Handling:
    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
This loop skips over any leading whitespace characters in the input string.

Sign Handling:
    if (*str == '-' || *str == '+')
This if statement checks if the current character is a sign (+ or -).
    if (*str == '-')
        sign = -1;
    str++;
If it's a minus sign, sign is set to -1. The pointer is then moved past the sign.

Number Conversion:
    while (*str >= '0' && *str <= '9')
This loop continues as long as the current character is a digit.
    result = result * 10 + (*str - '0');
    str++;
Inside the loop, the current digit is added to result after multiplying the existing 
result by 10. The pointer is then moved to the next character.

Return Statement:
    return (sign * result);
This line returns the final result, multiplied by sign to account for negative numbers.


	Portugues

Diretiva de Inclusão:
    #include "libft.h": 
Esta linha inclui o arquivo de cabeçalho "libft.h", que provavelmente contém os protótipos 
para as funções da biblioteca personalizada, incluindo ft_atoi.

Declaração da Função:
    int	ft_atoi(const char *str): 
Esta linha declara uma função chamada ft_atoi. A função aceita um argumento, str, que 
é um ponteiro para um caractere constante (const char *). A função retorna um inteiro (int).

Declarações de Variáveis:
    int	result;
    int	sign;
Estas linhas declaram duas variáveis inteiras: result para armazenar o número convertido, e 
sign para controlar se o número é positivo ou negativo.

Inicialização:
    result = 0;
    sign = 1;
Estas linhas inicializam result como 0 e sign como 1 (assumindo que o número é positivo por padrão).

Tratamento de Espaços em Branco:
    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
Este loop salta quaisquer caracteres de espaço em branco no início da string de entrada.

Tratamento de Sinal:
    if (*str == '-' || *str == '+')
Esta declaração if verifica se o caractere atual é um sinal (+ ou -).
    if (*str == '-')
        sign = -1;
    str++;
Se for um sinal de menos, sign é definido como -1. O ponteiro é então movido para além do sinal.

Conversão do Número:
    while (*str >= '0' && *str <= '9')
Este loop continua enquanto o caractere atual for um dígito.
    result = result * 10 + (*str - '0');
    str++;
Dentro do loop, o dígito atual é adicionado a result após multiplicar o resultado existente 
por 10. O ponteiro é então movido para o próximo caractere.

Declaração de Retorno:
    return (sign * result);
Esta linha retorna o resultado final, multiplicado por sign para considerar números negativos.

