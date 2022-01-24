#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*tmp;

	tmp = NULL;
	while (1)
	{
		if (*s == (char)c)
			tmp = s;
		if (*s == '\0')
			break ;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return ((char *)tmp);
}
