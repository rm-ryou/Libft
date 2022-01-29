/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoriya   <rmoriya@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 23:23:45 by rmoriya           #+#    #+#             */
/*   Updated: 2022/01/29 09:47:05 by rmoriya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int main(int argc, char **argv)
{
    int num1 = ft_atoi(argv[1]);
    int num2 = atoi(argv[1]);

    //int num1 = ft_atoi("\n    -123");
    //int num2 =    atoi("\n    -123");


    printf("ft_atoi = %d\n", num1);
    printf("   atoi = %d\n", num2);
    return (0);
}