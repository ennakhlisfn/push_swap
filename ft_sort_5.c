/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:54:42 by sennakhl          #+#    #+#             */
/*   Updated: 2024/05/03 11:29:32 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_sort_5(t_list *a, int j)
{
	t_list	*b;
	t_list	*lst;

	b = ft_lstnew(0);
	lst = a;
	while (lst->rank != 0)
		lst = lst->next;
	a = make_rank_in_top(a, lst, j);
	if (j == 5)
		b = push(&a, b, "pb\n");
	lst = a;
	if (j == 5)
	{
		while (lst->rank != 1)
			lst = lst->next;
		a = make_rank_in_top(a, lst, j);
	}
	b = push(&a, b, "pb\n");
	a = ft_sort_3(a);
	if (j == 5)
		a = push(&b, a, "pa\n");
	a = push(&b, a, "pa\n");
	ft_lstclear(&b);
	return (a);
}
