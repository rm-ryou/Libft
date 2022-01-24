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
	int	num;
	int	flg;
	int	tmp;
	int	i;

	num = 0;
	flg = 0;
	i = ft_strlen(str);
	if (!ft_strncmp(str, "-2147483648", i))
		return (-2147483648);
	i = ft_str_check(str, &flg);
	while (str[i] >= '0' && str[i] <= '9')
	{
		tmp = str[i] - '0';
		if (((num * 10 + tmp) / 10 != num) && flg)
			return (0);
		else if (((num * 10 + tmp) / 10 != num) && !flg)
			return (-1);
		num = num * 10 + tmp;
		i++;
	}
	if (flg > 0)
		num *= -1;
	return (num);
}
