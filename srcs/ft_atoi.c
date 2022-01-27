#include "libft.h"

static int	ft_str_check(const char *str, int *flg)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || (str[i] >= '\a' && str[i] <= '\r'))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		*flg = 1;
		i++;
	}
	return (i);
}


int	ft_atoi(const char *str)
{
	size_t	num;
    int     i;
    int     flg;

	num = 0;
    flg = 0;
    i = ft_str_check(str, &flg);
	while (str[i] >= '0' && str[i] <= '9')
    {
        num = num * 10 + (str[i] - '0');
        i++;
    }
    if (flg)
        num *= -1;
    if (num < -2147483648 && flg)
        return (0);
    else if (num > 2147483647 && !flg)
        return (-1);
    return ((int)num);
}