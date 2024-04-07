/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <aassaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 00:58:34 by aassaf            #+#    #+#             */
/*   Updated: 2024/04/03 03:54:46 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int ft_swap(t_stack **stack)
{
	t_stack *tmp;
	t_stack *tmp2;

	if (!*stack || !(*stack)->next)
		return (-1);
	tmp = *stack;
	tmp2 = tmp->next;
	tmp->next = tmp2->next;
	tmp2->next = tmp;
	*stack = tmp2;
	return (0);
}

int sa(t_stack **stack_a, int isprint)
{
	if(ft_swap(stack_a) != -1)
	{
		if (isprint)
			ft_putstr_fd("sa\n", 1);
		return (0);
	}
	return (-1);
}

int sb(t_stack **stack_b, int isprint)
{
	if(ft_swap(stack_b) != -1)
	{
		if (isprint)
			ft_putstr_fd("sb\n", 1);
		return (0);
	}
	return (-1);
}

int ss(t_stack **stack_a, t_stack **stack_b, int isprint)
{
	if(ft_swap(stack_a) != -1 && ft_swap(stack_b) != -1)
	{
		if (isprint)
			ft_putstr_fd("ss\n", 1);
		return (0);
	}
	return (-1);
}
