/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_list_a_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 13:08:54 by sennakhl          #+#    #+#             */
/*   Updated: 2024/05/06 13:17:34 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	fill_list_a(t_list *a, int *sor, int j)
{
	int		i;
	t_list	*new;

	i = 1;
	new = a;
	a->cont = sor[0];
	a->posi = 0;
	while (i < j)
	{
		new->next = ft_lstnew(sor[i]);
		new = new->next;
		new->posi = i;
		i++;
	}
	ft_sort(sor, j);
	new = a;
	while (new)
	{
		new->rank = find_rank(new->cont, sor);
		new = new->next;
	}
}
