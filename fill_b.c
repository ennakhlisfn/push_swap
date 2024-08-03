/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 14:15:18 by sennakhl          #+#    #+#             */
/*   Updated: 2024/05/03 11:00:50 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*short_fun(t_list **b, t_list **a, int *j, int *max)
{
	*b = push(a, *b, "pb\n");
	(*j)--;
	(*max)++;
	return (*a);
}

t_list	*fill_b(t_list **a, t_list *b, int j)
{
	t_list	*lst;
	int		size;
	int		max;

	size = j;
	max = 3 * ft_sqrt(j) / 2;
	lst = *a;
	while (lst)
	{
		if (lst->rank >= size - j && lst->rank <= max)
		{
			*a = make_rank_in_top(*a, lst, j);
			lst = short_fun(&b, a, &j, &max);
		}
		else if (lst->rank < size - j)
		{
			*a = make_rank_in_top(*a, lst, j);
			lst = short_fun(&b, a, &j, &max);
			b = ra(b, "rb\n");
		}
		else
			lst = lst->next;
	}
	return (*a = lst, b);
}
