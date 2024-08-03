/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:54:53 by sennakhl          #+#    #+#             */
/*   Updated: 2024/05/03 11:28:34 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_sort_3(t_list *a)
{
	t_list	*two;
	t_list	*three;

	two = a->next;
	three = two->next;
	if (a->rank > two->rank && two->rank < three->rank && three->rank > a->rank)
		return (sa(a, "sa\n"));
	if (a->rank > two->rank && two->rank > three->rank && three->rank < a->rank)
	{
		a = sa(a, "sa\n");
		return (rra(a, "rra\n"));
	}
	if (a->rank > two->rank && two->rank < three->rank && three->rank < a->rank)
		return (ra(a, "ra\n"));
	if (a->rank < two->rank && two->rank > three->rank && three->rank > a->rank)
	{
		a = sa(a, "sa\n");
		return (ra(a, "ra\n"));
	}
	if (a->rank < two->rank && two->rank > three->rank && three->rank < a->rank)
		return (rra(a, "rra\n"));
	return (a);
}
