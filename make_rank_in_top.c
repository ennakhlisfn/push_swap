/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_rank_in_top.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 09:14:37 by sennakhl          #+#    #+#             */
/*   Updated: 2024/05/03 11:07:51 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*make_rank_in_top(t_list *ab, t_list *lst, int j)
{
	if (lst->posi > j / 2)
	{
		while (lst->posi != 0)
			ab = rra(ab, "rra\n");
	}
	else
	{
		while (lst->posi != 0)
			ab = ra(ab, "ra\n");
	}
	return (ab);
}
