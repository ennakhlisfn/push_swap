/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_sor.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:24:33 by sennakhl          #+#    #+#             */
/*   Updated: 2024/05/07 14:40:48 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	fill_sor(char **arv, int *sor, int arc)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < arc)
	{
		if (multi_num_in_arg(arv[i]))
			j = fill_sor_from_one_arg(arv[i], sor, j);
		else
			sor[j++] = ft_atoi(arv[i], sor);
		i++;
	}
	return (j);
}
