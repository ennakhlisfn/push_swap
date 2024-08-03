/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:19:36 by sennakhl          #+#    #+#             */
/*   Updated: 2024/05/09 09:30:25 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	find_rank(int cont, int	*sor)
{
	int	i;

	i = 0;
	while (sor[i] != cont)
		i++;
	return (i);
}

void	fill_list_a(t_list *a, int *sor, int j)
{
	int		i;
	t_list	*new;

	i = 1;
	new = a;
	a->cont = sor[0];
	a->posi = 0;
	while (i < j)
	{
		new->next = ft_lstnew(sor[i]);
		new = new->next;
		new->posi = i;
		i++;
	}
	ft_sort(sor, j);
	new = a;
	while (new)
	{
		new->rank = find_rank(new->cont, sor);
		new = new->next;
	}
}

t_list	*push_swap(t_list *a, int j)
{
	if (j == 2)
		return (ra(a, "ra\n"));
	if (j == 3)
		return (ft_sort_3(a));
	if (j == 5 || j == 4)
		return (ft_sort_5(a, j));
	else
		return (algo_push(a, j));
}

int	main(int arc, char *arv[])
{
	int		j;
	int		*sor;
	t_list	*a;

	if (arc == 1)
		return (0);
	if (check(arv + 1, arc - 1))
		error();
	sor = NULL;
	sor = malloc(count_size(arv + 1, arc -1) * sizeof(int));
	j = fill_sor(arv + 1, sor, arc - 1);
	if (sor_is_sorting(sor, j))
		return (0);
	check_repetition(sor, j);
	a = ft_lstnew(0);
	fill_list_a(a, sor, j);
	free(sor);
	a = push_swap(a, j);
	ft_lstclear(&a);
	return (0);
}
