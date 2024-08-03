/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 11:11:07 by sennakhl          #+#    #+#             */
/*   Updated: 2024/05/04 11:11:17 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
/*
#include <stdio.h>
#include <string.h>

int main ()
{
	printf("%d\n",strncmp("abcdefgh", "abcdwxyz", 4));
	printf("%d",ft_strncmp("abcdefgh", "abcdwxyz", 4));
	printf("\n\n%d\n",strncmp("test\200", "test\0", 6));
	printf("%d",ft_strncmp("test\200", "test\0", 6));
}*/
