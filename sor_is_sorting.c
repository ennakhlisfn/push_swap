/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sor_is_sorting.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:31:49 by sennakhl          #+#    #+#             */
/*   Updated: 2024/05/03 11:35:36 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	sor_is_sorting(int *sor, int j)
{
	int	i;
	int	k;

	i = 0;
	while (i < j - 1)
	{
		k = i + 1;
		while (k < j)
		{
			if (sor[i] >= sor[k])
				return (0);
			k++;
		}
		i++;
	}
	free(sor);
	return (1);
}
