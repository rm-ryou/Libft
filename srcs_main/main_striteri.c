#include "libft.h"

void    f_striteri(unsigned i, char *s)
{
    *s = i + '0';
}

int main(int argc, char **argv)
{
    char *s = argv[1];
    
    ft_striteri(s, f_striteri);
    printf("%s\n", s);
    return (0);
}