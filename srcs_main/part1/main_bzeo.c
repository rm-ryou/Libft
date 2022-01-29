/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bzeo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoriya   <rmoriya@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 09:49:41 by rmoriya           #+#    #+#             */
/*   Updated: 2022/01/29 09:57:56 by rmoriya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(int argc, char **argv)
{
    char *str1 = argv[1];

    ft_bzero(str1, ft_atoi(argv[2]));
    printf("ft_bzero = %s\n", str1);
    return (0);
}