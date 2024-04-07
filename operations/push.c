/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <aassaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 01:53:05 by aassaf            #+#    #+#             */
/*   Updated: 2024/04/03 00:58:08 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int ft_push(t_stack **src, t_stack **dst)
{
	t_stack *tmp;

	if (!*src)
		return (-1);
	tmp = *src;
	*src = tmp->next;
	ft_lstadd_front(dst, tmp);
	return (0);
}

int pa(t_stack **stack_a, t_stack **stack_b, int isprint)
{
	if(ft_push(stack_b, stack_a) != -1)
	{
		if (isprint)
			ft_putstr_fd("pa\n", 1);
		return (0);
	}
	return (-1);
}

int pb(t_stack **stack_a, t_stack **stack_b, int isprint)
{
	if(ft_push(stack_a, stack_b) != -1)
	{
		if (isprint)
			ft_putstr_fd("pb\n", 1);
		return (0);
	}
	return (-1);
}
