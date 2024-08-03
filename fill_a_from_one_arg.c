/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_a_from_one_arg.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 11:24:33 by sennakhl          #+#    #+#             */
/*   Updated: 2024/05/03 11:24:42 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	fill_sor_from_one_arg(char *ar, int *sor, int j)
{
	int	i;

	i = 0;
	while (ar[i])
	{
		sor[j++] = ft_atoi(ar + i);
		ft_realloc(sor, j, sizeof(int));
		while (ar[i] == ' ' || ar[i] == '+' || ar[i] == '-')
			i++;
		while (ar[i] >= '0' && ar[i] <= '9')
			i++;
		while (ar[i] == ' ')
			i++;
	}
	return (j);
}
