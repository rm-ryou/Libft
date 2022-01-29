/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoriya <rmoriya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 13:45:11 by rmoriya           #+#    #+#             */
/*   Updated: 2022/01/29 13:45:14 by rmoriya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>
int main(int argc, char **argv)
{
    char *s1 = ft_calloc(ft_atoi(argv[1]), ft_atoi(argv[2]));
    char *s2 = calloc(ft_atoi(argv[1]), ft_atoi(argv[2]));
    printf("ft_calloc -> %ld\n", sizeof(s1));
    printf("   calloc -> %ld\n", sizeof(s2));
    free(s1);
    free(s2);

    return (0);
}