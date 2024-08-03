/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 17:37:58 by sennakhl          #+#    #+#             */
/*   Updated: 2024/05/03 11:06:55 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*make_rank_top(t_list *ab, t_list *lst, int j)
{
	if (lst->posi > j / 2)
	{
		while (lst->posi != 0)
			ab = rra(ab, "rrb\n");
	}
	else
	{
		while (lst->posi != 0)
			ab = ra(ab, "rb\n");
	}
	return (ab);
}

t_list	*algo_push(t_list *a, int j)
{
	t_list	*lst;
	t_list	*b;

	b = NULL;
	b = fill_b(&a, b, j);
	lst = b;
	while (j)
	{
		if (lst->rank == j - 1)
		{
			b = make_rank_top(b, lst, j);
			a = push(&b, a, "pa\n");
			lst = b;
			j--;
		}
		else
			lst = lst->next;
	}
	ft_lstclear(&b);
	return (a);
}
