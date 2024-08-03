/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:33:48 by sennakhl          #+#    #+#             */
/*   Updated: 2024/05/07 10:02:58 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*node;

	if (!lst)
		return ;
	while (*lst)
	{
		node = *lst;
		*lst = (*lst)->next;
		free(node);
	}
	*lst = NULL;
}
