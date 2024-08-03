/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:58:31 by sennakhl          #+#    #+#             */
/*   Updated: 2024/05/09 10:12:43 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	shortening_my_fun(t_list **a, t_list **b, char *oper, t_list *opers)
{
	if (!ft_strcmp(oper, "ss\n"))
	{
		*b = sa(*b, NULL);
		*a = sa(*a, NULL);
	}
	else if (!ft_strcmp(oper, "rr\n"))
	{
		*b = ra(*b, NULL);
		*a = ra(*a, NULL);
	}
	else if (!ft_strcmp(oper, "rrr\n"))
	{
		*b = rra(*b, NULL);
		*a = rra(*a, NULL);
	}
	else if (!oper_in_opers(oper))
	{
		free(oper);
		ft_lstclear(&opers);
		ft_lstclear(a);
		ft_lstclear(b);
		error();
	}
}

t_list	*appli_oper(char *oper, t_list *a, t_list **b, t_list *opers)
{
	if (!ft_strcmp(oper, "sa\n"))
		a = sa(a, NULL);
	else if (!ft_strcmp(oper, "sb\n"))
		*b = sa(*b, NULL);
	else if (!ft_strcmp(oper, "pa\n") && *b)
		a = push(b, a, NULL);
	else if (!ft_strcmp(oper, "pb\n") && a)
		*b = push(&a, *b, NULL);
	else if (!ft_strcmp(oper, "ra\n"))
		a = ra(a, NULL);
	else if (!ft_strcmp(oper, "rb\n"))
		*b = ra(*b, NULL);
	else if (!ft_strcmp(oper, "rra\n"))
		a = rra(a, NULL);
	else if (!ft_strcmp(oper, "rrb\n"))
		*b = rra(*b, NULL);
	else
		shortening_my_fun(&a, b, oper, opers);
	return (a);
}

void	ft_ok_ko(t_list *a, t_list *b)
{
	if (a_is_sorting(a) && !b)
		write(1, "OK\n", 3);
	else
	{
		ft_lstclear(&b);
		write(1, "KO\n", 3);
	}
}

t_list	*ft_checker(t_list *a)
{
	t_list	*opers;
	t_list	*lst;
	t_list	*b;

	b = NULL;
	opers = ft_lstnew(0);
	opers->oper = get_next_line(0);
	lst = opers;
	while (lst->oper)
	{
		a = appli_oper(lst->oper, a, &b, opers);
		free(lst->oper);
		lst->next = ft_lstnew(0);
		lst = lst->next;
		lst->oper = get_next_line(0);
	}
	ft_lstclear(&opers);
	return (ft_ok_ko(a, b), a);
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
	check_repetition(sor, j);
	a = ft_lstnew(0);
	fill_list_a(a, sor, j);
	free(sor);
	a = ft_checker(a);
	ft_lstclear(&a);
	return (0);
}
