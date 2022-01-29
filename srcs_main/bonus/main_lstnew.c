/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoriya <rmoriya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 15:14:18 by rmoriya           #+#    #+#             */
/*   Updated: 2022/01/29 16:02:33 by rmoriya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(int argc, char **argv)
{
    t_list *node;

    node->next = NULL;
    for (int i = 1; i < argc; i++)
    {
        t_list *new = ft_lstnew(argv[i]);
        new->next = node->next;
        node->next = new;
        t_list *cur = node->next;
        for (; cur != NULL; cur = cur->next)
            printf("%s -> ", (char *)cur->content);
        putchar('\n');
    }
    
    return (0);
}