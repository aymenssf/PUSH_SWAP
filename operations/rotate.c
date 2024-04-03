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

#include "push_swap.h"

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
}
int ra(t_stack **stack_a, int isprint)
{
	if(ft_swap(stack_a) != -1)
	{
		if (isprint)
			ft_putstr("sa\n");
		return (0);
	}
	return (-1);
}

int rb(t_stack **stack_b, int isprint)
{
	if(ft_swap(stack_b) != -1)
	{
		if (isprint)
			ft_putstr("sb\n");
		return (0);
	}
	return (-1);
}

int rr(t_stack **stack_a, t_stack **stack_b, int isprint)
{
	if(ft_swap(stack_a) != -1 && ft_swap(stack_b) != -1)
	{
		if (isprint)
			ft_putstr("ss\n");
		return (0);
	}
	return (-1);
}
