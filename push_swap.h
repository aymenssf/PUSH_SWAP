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

typedef struct s_stack
{
	int index;
	int value;
	struct s_stack *next;
} t_stack;

void	disp_error(char *str);
int	check_space(char *str);
int	is_valid_integer(char *arg);
int is_duplicate(int nb, t_stack **stack);
void	all_parsing(int ac, char **av);
void	print_error(void);
void	free_arr(char **arr);

//operations
//push
int ft_push(t_stack **src, t_stack **dst);
int pa(t_stack **stack_a, t_stack **stack_b, int isprint);
int pb(t_stack **stack_a, t_stack **stack_b, int isprint);
//swap
int ft_swap(t_stack **stack);
int sa(t_stack **stack_a, int isprint);
int sb(t_stack **stack_b, int isprint);
int ss(t_stack **stack_a, t_stack **stack_b, int isprint);
//rotate
int rotate(t_stack **stack);
int ra(t_stack **stack_a, int isprint);
int rb(t_stack **stack_b, int isprint);
int rr(t_stack **stack_a, t_stack **stack_b, int isprint);
//reverse rotate
int reverse_rotate(t_stack **stack);
int rra(t_stack **stack_a, int isprint);
int rrb(t_stack **stack_b, int isprint);
int rrr(t_stack **stack_a, t_stack **stack_b, int isprint);
#endif
