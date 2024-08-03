# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/23 18:52:48 by sennakhl          #+#    #+#              #
#    Updated: 2024/05/07 16:34:15 by sennakhl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = count_size.c make_rank_in_top.c ft_lstclear.c fill_b.c ft_sqrt.c algo_push.c ft_sort_5.c push.c ft_putstr.c ft_sort_3.c rra.c sa.c ra.c sor_is_sorting.c ft_lstnew.c ft_sort.c fill_sor.c check.c ft_strlen.c error.c check_repetition.c ft_atoi.c fill_sor_from_one_arg.c ft_isnum.c multi_num_in_arg.c string_check.c push_swap.c

B_SOURCES = oper_in_opers.c find_rank_bonus.c fill_list_a_bonus.c a_is_sorting.c ft_sort.c ft_strcmp.c ft_bzero.c ft_calloc.c ft_memcpy.c get_next_line.c count_size.c ft_lstclear_bonus.c push_bonus.c ft_putstr.c rra_bonus.c sa_bonus.c ra_bonus.c sor_is_sorting.c ft_lstnew_bonus.c fill_sor.c check.c ft_strlen.c error.c check_repetition.c ft_atoi.c fill_sor_from_one_arg.c ft_isnum.c multi_num_in_arg.c string_check.c checker.c

NAME = push_swap
B_NAME = checker
OBJECTS = $(SOURCES:.c=.o)
B_OBJECTS = $(B_SOURCES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $(SOURCES)

bonus: $(B_NAME)

$(B_NAME): $(B_OBJECTS)
	$(CC) $(CFLAGS) -o $@ $(B_SOURCES)

clean:
	rm -f $(OBJECTS) $(B_OBJECTS)

fclean: clean
	rm -f $(NAME) $(B_NAME)

re: fclean all bonus

.PHONY: all bonus clean fclean re
