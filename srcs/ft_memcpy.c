#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char		*s1;
	const char	*s2;

	s1 = (char *)dst;
	s2 = (const char *)src;
	if (!s1 && !s2)
		return (NULL);
	while (n--)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	return (dst);
}
