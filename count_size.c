/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 15:49:11 by sennakhl          #+#    #+#             */
/*   Updated: 2024/05/03 16:20:46 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_size_of_arg(char *s)
{
	int	i;
	int	n;

	n = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == ' ')
			i++;
		while (s[i] == '-' || s[i] == '+')
			i++;
		if (s[i] >= '0' && s[i] <= '9')
			n++;
		while (s[i] >= '0' && s[i] <= '9')
			i++;
	}
	return (n);
}

int	count_size(char **arv, int arc)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (i < arc)
	{
		size += ft_size_of_arg(arv[i]);
		i++;
	}
	return (size);
}
