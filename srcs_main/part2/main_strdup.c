/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoriya <rmoriya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 23:23:45 by rmoriya           #+#    #+#             */
/*   Updated: 2022/01/29 14:29:10 by rmoriya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    char *str1 = argv[1];
    char *str2 = argv[1];

    printf("---before---\n");
    printf("ft_strdup = %p\n", &str1);
    printf("   strdup = %p\n", &str2);

    char *res1 = ft_strdup(str1);
    char *res2 = ft_strdup(str2);
    

    printf("---after---\n");
    printf("ft_strdup = %s\n", res1);
    printf("   strdup = %s\n", res2);
    printf("ft_strdup = %p\n", res1);
    printf("   strdup = %p\n", res2);
    free(res1);
    free(res2);

    return (0);
}