/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:50:45 by sennakhl          #+#    #+#             */
/*   Updated: 2024/05/07 14:49:14 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_BONUS_H
# define LIBFT_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

# include <stdio.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	char			*oper;
	int				cont;
	int				posi;
	int				rank;
	struct s_list	*next;
}	t_list;

int		oper_in_opers(char *oper);
void	fill_list_a(t_list *a, int *sor, int j);
int		find_rank(int cont, int	*sor);
void	ft_sort(int *sor, int j);
int		a_is_sorting(t_list *a);
int		ft_strcmp(const char *s1, const char *s2);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	ft_bzero(void *s, size_t n);
char	*get_next_line(int fd);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
int		count_size(char **arv, int arc);
void	ft_lstclear(t_list **lst);
void	ft_putstr(char *s);
t_list	*push(t_list **from, t_list *to, char *s);
t_list	*sa(t_list *a, char *s);
t_list	*rra(t_list *a, char *s);
t_list	*ra(t_list *a, char *s);
t_list	*ft_lstnew(int cont);
int		sor_is_sorting(int *sor, int j);
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
