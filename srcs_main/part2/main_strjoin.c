/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoriya <rmoriya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 18:56:03 by rmoriya           #+#    #+#             */
/*   Updated: 2022/01/29 18:57:19 by rmoriya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
    char	s1[] = "lorem ipsum";
	char	s2[] = "dolor sit amet";

    s2[0] = '\0';
	char *res = ft_strjoin(s1, s2);
    printf("%s\n", res);
    return (0);
}