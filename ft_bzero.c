/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 20:51:19 by sennakhl          #+#    #+#             */
/*   Updated: 2024/05/03 20:51:24 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>
#include <string.h>

int main ()
{
	char	str1[]={1,2,3,4,5,6,7};
	int	str2[]={1,2,3,4,5,6,7};
	int	i = 0;
	ft_bzero(str2,16);
	bzero(str1,16);
	while (i < 7)
		printf("%d\t",str1[i++]);
	printf("\n\n");
	i = 0;
	while (i < 7)
		printf("%d\t",str2[i++]);
}*/
