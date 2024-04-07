/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <aassaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 02:31:09 by aassaf            #+#    #+#             */
/*   Updated: 2024/04/03 03:54:21 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int rotate(t_stack **stack)
{
	if(!*stack || !(*stack)->next)
		return (-1);
	t_stack *last;
	last = ft_lstlast(*stack);
	last->next = *stack;
	*stack = (*stack)->next;
	t_stack *new_last;
	new_last = ft_lstlast(*stack);
	new_last->next = NULL;
	return (0);
}
int ra(t_stack **stack_a, int isprint)
{
	if(rotate(stack_a) != -1)
	{
		if (isprint)
			ft_putstr_fd("ra\n", 1);
		return (0);
	}
	return (-1);
}

int rb(t_stack **stack_b, int isprint)
{
	if(rotate(stack_b) != -1)
	{
		if (isprint)
			ft_putstr_fd("sb\n", 1);
		return (0);
	}
	return (-1);
}

int rr(t_stack **stack_a, t_stack **stack_b, int isprint)
{
	if(rotate(stack_a) != -1 && rotate(stack_b) != -1)
	{
		if (isprint)
			ft_putstr_fd("ss\n", 1);
		return (0);
	}
	return (-1);
}
