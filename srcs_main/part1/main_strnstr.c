/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoriya <rmoriya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 23:23:45 by rmoriya           #+#    #+#             */
/*   Updated: 2022/01/29 10:17:50 by rmoriya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(int argc, char **argv)
{
    //char *str = argv[1];
    //char *key = argv[2];
    //size_t len = ft_atoi(argv[3]);

    //char *newp = ft_strnstr(str, key, len);
    //char *newp = ft_strnstr(str, key, len);
    char *newp1 = ft_strnstr("aaaaaaa", "ab", 100);
    char *newp2 = ft_strnstr("aaaaaaa", "ab", 100);
    printf("ft_strnstr = %s\n", newp1);
    printf("   strnstr = %s\n", newp2);
    return (0);
}