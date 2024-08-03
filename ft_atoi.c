/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:42:31 by sennakhl          #+#    #+#             */
/*   Updated: 2024/05/07 15:01:00 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	empty_string(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			return (0);
		i++;
	}
	return (1);
}

long	fill_val(const char *str, int i, int n, int *sor)
{
	long	val;

	val = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		val = val * 10 + str[i] - '0';
		i++;
		if ((n * val) < -2147483648 || (n * val) > 2147483647)
		{
			free(sor);
			error();
		}
	}
	return (val);
}

long	ft_atoi(const char *str, int *sor)
{
	int		i;
	int		n;
	long	val;

	n = 1;
	i = 0;
	val = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n = -1;
		i++;
	}
	val = fill_val(str, i, n, sor);
	if (empty_string(str))
	{
		free(sor);
		error();
	}
	return (n * val);
}
