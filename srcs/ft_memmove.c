#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*p1;
	const char	*p2;

	p1 = (char *)dst;
	p2 = (const char *)src;
	if (p1 == p2 || !len)
		return (dst);
	if (dst < src)
	{
		while (len--)
		{
			*p1 = *p2;
			p1++;
			p2++;
		}
	}
	else
	{
		while (len--)
			p1[len] = p2[len];
	}
	return (dst);
}
