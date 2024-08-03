/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:01:30 by sennakhl          #+#    #+#             */
/*   Updated: 2024/05/03 18:54:00 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*rra(t_list *a, char *s)
{
	t_list	*tmp;

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
