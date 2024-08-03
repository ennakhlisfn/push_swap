/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 18:51:51 by sennakhl          #+#    #+#             */
/*   Updated: 2024/05/06 13:21:38 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
