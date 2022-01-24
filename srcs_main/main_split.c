#include "libft.h"

int main(int argc, char **argv)
{
	char	**res = ft_split(argv[1], *argv[2]);
	while (*res)
	{
		printf("[%s]", *res);
		res++;
	}
	putchar('\n');
	return (0);
}
