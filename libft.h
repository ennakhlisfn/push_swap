/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:50:45 by sennakhl          #+#    #+#             */
/*   Updated: 2024/05/07 14:43:49 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				cont;
	int				posi;
	int				rank;
	struct s_list	*next;
}	t_list;

int		count_size(char **arv, int arc);
t_list	*make_rank_in_top(t_list *ab, t_list *lst, int j);
void	ft_lstclear(t_list **lst);
t_list	*fill_b(t_list **a, t_list *b, int j);
t_list	*algo_push(t_list *a, int j);
int		ft_sqrt(int j);
void	ft_putstr(char *s);
t_list	*ft_sort_5(t_list *a, int j);
t_list	*push(t_list **from, t_list *to, char *s);
t_list	*sa(t_list *a, char *s);
t_list	*rra(t_list *a, char *s);
t_list	*ft_sort_3(t_list *a);
t_list	*ra(t_list *a, char *s);
t_list	*ft_lstnew(int cont);
int		sor_is_sorting(int *sor, int j);
void	ft_sort(int *sor, int j);
int		check(char **arv, int arc);
int		fill_sor(char **arv, int *sor, int arc);
size_t	ft_strlen(const char *str);
void	error(void);
void	check_repetition(int *a, int j);
int		ft_isnum(char *str);
int		fill_sor_from_one_arg(char *ar, int *sor, int j);
int		multi_num_in_arg(char *arv);
int		string_check(char *s);
long	ft_atoi(const char *str, int *sor);

#endif
