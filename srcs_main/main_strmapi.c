#include "libft.h"

char f_strmapi(unsigned i, char c)
{
    return (c + i);
}

int main(int argc, char **argv)
{
    char *s = argv[1];
    char *res = ft_strmapi(s, f_strmapi);

    printf("%s\n", res);
    return (0);
}