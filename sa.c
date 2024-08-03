/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:54:43 by sennakhl          #+#    #+#             */
/*   Updated: 2024/05/03 18:52:40 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*sa(t_list *a, char *s)
{
	t_list	*tmp;

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
