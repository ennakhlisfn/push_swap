/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 18:31:59 by sennakhl          #+#    #+#             */
/*   Updated: 2024/05/08 13:31:21 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*ra(t_list *a, char *s)
{
	t_list	*tmp;
	t_list	*lst;
	int		size;

	if (!a || !(a->next))
		return (a);
	size = 1;
	tmp = a;
	a = a->next;
	lst = a;
	while (lst->next)
	{
		size++;
		lst->posi--;
		lst = lst->next;
	}
	tmp->posi = size;
	lst->posi--;
	lst->next = tmp;
	tmp->next = NULL;
	if (s)
		ft_putstr(s);
	return (a);
}
