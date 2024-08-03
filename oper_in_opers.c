/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oper_in_opers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 12:41:28 by sennakhl          #+#    #+#             */
/*   Updated: 2024/05/07 13:06:42 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

int	oper_in_opers(char *oper)
{
	char	*opers[11];
	int		i;

	i = 0;
	opers[0] = "sa\n";
	opers[1] = "sb\n";
	opers[2] = "ss\n";
	opers[3] = "pa\n";
	opers[4] = "pb\n";
	opers[5] = "ra\n";
	opers[6] = "rb\n";
	opers[7] = "rr\n";
	opers[8] = "rra\n";
	opers[9] = "rrb\n";
	opers[10] = "rrr\n";
	while (i < 11)
	{
		if (!ft_strcmp(oper, opers[i]))
			return (1);
		i++;
	}
	return (0);
}
