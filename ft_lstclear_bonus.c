/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 16:38:48 by sennakhl          #+#    #+#             */
/*   Updated: 2024/05/07 10:16:45 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

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
