/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 12:43:38 by sennakhl          #+#    #+#             */
/*   Updated: 2024/05/03 18:53:29 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ra(t_list *a, char *s)
{
	t_list	*tmp;
	t_list	*lst;
	int		size;

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
