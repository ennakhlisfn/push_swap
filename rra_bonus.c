/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_bonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 18:31:00 by sennakhl          #+#    #+#             */
/*   Updated: 2024/05/08 13:36:18 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*rra(t_list *a, char *s)
{
	t_list	*tmp;

	if (!a || !(a->next))
		return (a);
	tmp = a;
	while (a->next)
	{
		a->posi++;
		a = a->next;
	}
	a->next = tmp;
	a->posi = 0;
	while (tmp->next != a)
		tmp = tmp->next;
	tmp->next = NULL;
	if (s)
		ft_putstr(s);
	return (a);
}
