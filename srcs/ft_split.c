/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoriya <rmoriya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 23:23:45 by rmoriya           #+#    #+#             */
/*   Updated: 2022/01/29 17:35:32 by rmoriya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_words_count(char const *s, char c)
{
	size_t	words;
	size_t	i;

	i = 0;
	words = 0;
	if (!c)
	{
		words = 1;
		return (words);
	}
	while (s[i])
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (words);
}

static char	*ft_put_str(char *str, size_t num)
{
	char	*word;
	size_t	i;

	i = 0;
	word = malloc(sizeof(char) * (num + 1));
	if (!word)
		return (NULL);
	while (num--)
		word[i++] = *str++;
	word[i] = '\0';
	return (word);
}

static char	**ft_free(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

static char	**ft_split_word(char const *s, char c, char **str, size_t words)
{
	size_t		i;
	size_t		num;
	const char	*j;

	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		j = s;
		num = 0;
		while (*s++ != c)
			num++;
		if (*(s - 1) != c)
		{
			str[i] = (char *)malloc(sizeof(char *) * (num + 1));
			if (!str[i])
				return (ft_free(&str[i]));
		}
		str[i++] = ft_put_str((char *)j, num);
	}
	str[i] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char		**str;
	size_t		words;

	if (!s)
		return (NULL);
	words = ft_words_count(s, c);
	str = (char **)malloc(sizeof(char *) * (words + 1));
	if (!str)
		return (NULL);
	return (ft_split_word(s, c, str, words));
}
