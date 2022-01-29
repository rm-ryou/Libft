/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_putnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoriya <rmoriya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 18:09:06 by rmoriya           #+#    #+#             */
/*   Updated: 2022/01/29 19:39:58 by rmoriya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int main(int argc, char **argv)
{
    int n = ft_atoi(argv[1]);
    ft_putnbr_fd(n, 1);
    putchar('\n');
    return (0);
}