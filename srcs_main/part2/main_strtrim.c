/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoriya <rmoriya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 18:02:03 by rmoriya           #+#    #+#             */
/*   Updated: 2022/01/29 18:03:37 by rmoriya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(int argc, char **argv)
{
    char *s1 = argv[1];
    char *set = argv[2];
    char *res;

    res = ft_strtrim(s1, set);
    printf("%s\n", res);
    return (0);
}