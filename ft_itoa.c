#include "libft.h"

static int get_num_len(int n)
{
    int len = (n <= 0) ? 1 : 0;
    while (n != 0)
    {
        n /= 10;
        len++;
    }
    return len;
}

char *ft_itoa(int n)
{
    char *str;
    int len;
    unsigned int num;

    len = get_num_len(n);
    str = ft_calloc(len + 1, sizeof(char));
    if (!str)
        return NULL;
    
    num = (n < 0) ? -n : n;
    while (len--)
    {
        str[len] = (num % 10) + '0';
        num /= 10;
    }
    if (n < 0)
        str[0] = '-';
    return str;
}
