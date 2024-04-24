/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <aassaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 22:19:39 by aassaf            #+#    #+#             */
/*   Updated: 2024/04/01 22:19:39 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		check_space(char *str);
int		is_valid_integer(char *arg);
int		is_duplicate(int nb, t_stack **stack);
void	all_parsing(int ac, char **av);
void	print_error(void);
void	**free_arr(char **arr);
void	free_stack(t_stack **stack);
int		is_sorted(t_stack *stack);
int		find_max(t_stack *lst);
int		find_min(t_stack *lst);
void	sort_algo(t_stack **a, t_stack **b);
void	stack_index(t_stack **stack);
void	big_sort(t_stack **a, t_stack **b);
void	index_arr(t_stack *lst, int *arr);
void	back_to_a(t_stack **a, t_stack **b);
//operations
//push
int		ft_push(t_stack **src, t_stack **dst);
int		pa(t_stack **stack_a, t_stack **stack_b, int isprint);
int		pb(t_stack **stack_a, t_stack **stack_b, int isprint);
//swap
int		ft_swap(t_stack **stack);
int		sa(t_stack **stack_a, int isprint);
int		sb(t_stack **stack_b, int isprint);
int		ss(t_stack **stack_a, t_stack **stack_b, int isprint);
//rotate
int		rotate(t_stack **stack);
int		ra(t_stack **stack_a, int isprint);
int		rb(t_stack **stack_b, int isprint);
int		rr(t_stack **stack_a, t_stack **stack_b, int isprint);
//reverse rotate
int		reverse_rotate(t_stack **stack);
int		rra(t_stack **stack_a, int isprint);
int		rrb(t_stack **stack_b, int isprint);
int		rrr(t_stack **stack_a, t_stack **stack_b, int isprint);
void	sort_3(t_stack **a);
void	rotation(t_stack **a);
void	bubble_sort(int *tab, int size);
int		find_pos(t_stack *lst, int value);
int		find_index(t_stack *lst, int index, int range);
#endif
