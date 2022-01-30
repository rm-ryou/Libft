/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstadd_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoriya <rmoriya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 16:43:18 by rmoriya           #+#    #+#             */
/*   Updated: 2022/01/30 19:49:43 by rmoriya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(int argc, char **argv)
{
    t_list *node;

    node = ft_lstnew("hoge");
    node->next = NULL;
    next = NULL;
    for (int i = 1; i < argc; i++)
    {
        t_list *new = ft_lstnew(argv[i]);
        ft_lstadd_back(&(node->next), new);
        t_list *cur = node->next;
        for (; cur != NULL; cur = cur->next)
            printf("%s -> ", (char *)cur->content);
        putchar('\n');
    }
    return (0);
}