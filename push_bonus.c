/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 18:39:39 by sennakhl          #+#    #+#             */
/*   Updated: 2024/05/06 13:20:19 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*push(t_list **from, t_list *to, char *s)
{
	t_list	*tmp;

	tmp = to;
	to = *from;
	*from = (*from)->next;
	to->next = tmp;
	while (tmp)
	{
		tmp->posi++;
		tmp = tmp->next;
	}
	tmp = *from;
	while (tmp)
	{
		tmp->posi--;
		tmp = tmp->next;
	}
	if (s)
		ft_putstr(s);
	return (to);
}
