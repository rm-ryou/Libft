/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoriya <rmoriya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 17:53:12 by rmoriya           #+#    #+#             */
/*   Updated: 2022/01/30 15:12:41 by rmoriya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(int argc, char **argv)
{
    //char *res = ft_substr(argv[1] , 100, 1);
    char *res = ft_substr("tripouille", 100, 1);
    
    printf("%s\n", res);
    return (0);
}