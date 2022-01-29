/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoriya <rmoriya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 23:23:45 by rmoriya           #+#    #+#             */
/*   Updated: 2022/01/29 14:50:09 by rmoriya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int main(int argc, char **argv)
{
    char *str1 = argv[1];
    char *str2 = argv[1];

    ft_memmove(str1, argv[2], ft_atoi(argv[3]));
    memmove(str2, argv[2], ft_atoi(argv[3]));

    printf("ft_memmove = %s\n", str1);
    printf("   memmove = %s\n", str2);
    return (0);
}