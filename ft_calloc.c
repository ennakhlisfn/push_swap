/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 20:52:00 by sennakhl          #+#    #+#             */
/*   Updated: 2024/05/06 13:04:05 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*tab;

	i = 0;
	if (count != 0 && size > 2147483647 / count)
		return (NULL);
	tab = malloc(count * size);
	if (tab == NULL)
		return (NULL);
	while (i < count * size)
	{
		((char *)tab)[i] = 0;
		i++;
	}
	return (tab);
}
/*
#include <stdio.h>

int main ()
{
	printf("%lu",SIZE_MAX);
	char *s1 = calloc(2147483647,sizeof(int));
//	char *s2 = ft_calloc(2147483647,sizeof(int));
}*/
