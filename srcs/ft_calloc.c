#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*part;

	part = malloc(count * size);
	if (!part)
		return (part);
	ft_bzero(part, count * size);
	return (part);
}
