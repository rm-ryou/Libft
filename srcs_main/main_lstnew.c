/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoriya   <rmoriya@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 23:23:45 by rmoriya           #+#    #+#             */
/*   Updated: 2022/01/28 23:23:45 by rmoriya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(int argc, char **argv)
{
    t_list *a = ft_lstnew("4");
    t_list *b = ft_lstnew("2");
    t_list *c = ft_lstnew("tokyo");
    
    a->next = b;
    b->next = c;

    for (int i = 0; i < 3; i++)
    {
        printf("a->content = %s\n", (char *)a->content);
        a = a->next;
    }
    return (0);
}
