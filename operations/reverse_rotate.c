/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <aassaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 03:39:24 by aassaf            #+#    #+#             */
/*   Updated: 2024/04/03 03:58:00 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	reverse_rotate(t_stack **stack)
{
	t_stack	*last;
	t_stack	*new_last;

	if (!*stack || !(*stack)->next)
		return (-1);
	last = ft_lstlast(*stack);
	new_last = *stack;
	while (new_last->next != last)
		new_last = new_last->next;
	new_last->next = NULL;
	last->next = *stack;
	*stack = last;
	return (0);
}

int	rra(t_stack **stack_a, int isprint)
{
	if (reverse_rotate(stack_a) == -1)
		return (-1);
	if (isprint)
		ft_putstr_fd("rra\n", 1);
	return (0);
}

int	rrb(t_stack **stack_b, int isprint)
{
	if (reverse_rotate(stack_b) == -1)
		return (-1);
	if (isprint)
		ft_putstr_fd("rrb\n", 1);
	return (0);
}

int	rrr(t_stack **stack_a, t_stack **stack_b, int isprint)
{
	if (reverse_rotate(stack_a) == -1 || reverse_rotate(stack_b) == -1)
		return (-1);
	if (isprint)
		ft_putstr_fd("rrr\n", 1);
	return (0);
}
