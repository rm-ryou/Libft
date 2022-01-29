/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstadd_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoriya <rmoriya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 16:06:55 by rmoriya           #+#    #+#             */
/*   Updated: 2022/01/29 16:42:06 by rmoriya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(int argc, char **argv)
{
    t_list *node;
    t_list *first;

    node->next = node;
    for (int i = 1; i < argc; i++)
    {
        t_list *new = ft_lstnew(argv[i]);
        ft_lstadd_front(&(node->next), new);
        t_list *cur = node->next;
        for (; cur != node; cur = cur->next)
            printf("%s -> ", (char *)cur->content);
        putchar('\n');
    }
    return (0);
}