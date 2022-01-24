#include "libft.h"

char	*ft_strdup(char *s1)
{
	char	*ans;
	size_t	i;

	i = 0;
	ans = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!ans)
		return (0);
	while (s1[i])
	{
		ans[i] = s1[i];
		i++;
	}
	ans[i] = '\0';
	return (ans);
}
