/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 18:33:42 by sennakhl          #+#    #+#             */
/*   Updated: 2024/05/08 13:29:11 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*sa(t_list *a, char *s)
{
	t_list	*tmp;

	if (!a || !(a->next))
		return (a);
	tmp = a;
	a = a->next;
	a->posi = 0;
	tmp->posi = 1;
	tmp->next = a->next;
	a->next = tmp;
	if (s)
		ft_putstr(s);
	return (a);
}
