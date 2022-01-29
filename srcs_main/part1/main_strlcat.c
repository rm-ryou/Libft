/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoriya <rmoriya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 23:23:45 by rmoriya           #+#    #+#             */
/*   Updated: 2022/01/29 15:04:06 by rmoriya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int main(int argc, char **argv)
{
    char *dst1 = argv[1];
    char *dst2 = argv[1];
    char *src1 = argv[2];
    char *src2 = argv[2];

    printf("ft_strlcat = %zu\n", ft_strlcat(dst1, src1, ft_atoi(argv[3])));
    printf("           = %s\n", dst1);
    printf("   strlcat = %zu\n", strlcat(dst2, src2, ft_atoi(argv[3])));
    printf("           = %s\n", dst2);
    return (0);

}