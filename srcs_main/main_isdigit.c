#include "libft.h"

int main(int argc, char **argv)
{
	if (ft_isdigit(*argv[1]))
		printf("True\n");
	else
		printf("False\n");
	return (0);
}
