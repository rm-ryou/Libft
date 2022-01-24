#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	c = (char)c;
	while (*s != c)
	{
		if (!*s)
			return (0);
		s++;
	}
	return ((char *)s);
}
