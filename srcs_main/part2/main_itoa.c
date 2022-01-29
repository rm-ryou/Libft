/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoriya <rmoriya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 17:09:55 by rmoriya           #+#    #+#             */
/*   Updated: 2022/01/29 17:12:02 by rmoriya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int main(int argc, char **argv)
{
    int num1 = ft_atoi(argv[1]);
    int num2 = ft_atoi(argv[1]);
    char *str1 = ft_itoa(num1);
    char *str2 = ft_itoa(num2);

    printf("ft_itoa = %s\n", str1);
    printf("   itoa = %s\n", str2);
    return (0);
}