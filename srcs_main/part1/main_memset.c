/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoriya   <rmoriya@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 23:23:45 by rmoriya           #+#    #+#             */
/*   Updated: 2022/01/28 23:23:45 by rmoriya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int main(int argc, char **argv)
{
	char	buff1[256];
	char	buff2[256];
	size_t	n1 = atoi((char *)argv[3]);
	size_t	n2 = atoi((char *)argv[3]);
	for (int i = 0; argv[1][i] != '\0'; i++)
	{
		buff1[i] = argv[1][i];
		buff2[i] = argv[1][i];
	}
	ft_memset(buff1, *argv[2], n1);
	memset(buff2, *argv[2], n2);
	printf("ft_memset -> %s\n", buff1);
	printf("   memset -> %s\n", buff2);
	return (0);
}
