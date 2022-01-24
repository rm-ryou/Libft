#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	tmp;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && i < len)
	{
		tmp = 0;
		while (haystack[i + tmp] == needle[tmp] && \
				haystack[i + tmp] && needle[tmp] && \
				i + tmp < len)
			tmp++;
		if (needle[tmp] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
