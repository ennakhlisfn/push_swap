/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_repetition.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 10:42:50 by sennakhl          #+#    #+#             */
/*   Updated: 2024/05/03 11:43:32 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	check_repetition(int *a, int j)
{
	int	i;
	int	k;

	i = 0;
	while (i < j -1)
	{
		k = i + 1;
		while (k < j)
		{
			if (a[i] == a[k])
			{
				free(a);
				error();
			}
			k++;
		}
		i++;
	}
}
