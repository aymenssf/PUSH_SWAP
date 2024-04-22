/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <aassaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 09:29:06 by aassaf            #+#    #+#             */
/*   Updated: 2024/04/22 14:44:17 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_max(t_stack *lst)
{
	int	max;

	max = lst->value;
	while (lst)
	{
		if (lst->value > max)
			max = lst->value;
		lst = lst->next;
	}
	return (max);
}

int	find_min(t_stack *lst)
{
	int	min;

	min = lst->value;
	while (lst)
	{
		if (lst->value < min)
			min = lst->value;
		lst = lst->next;
	}
	return (min);
}

void	sort_3(t_stack **a)
{
	int		max;
	int		min;
	t_stack	*tmp;

	if (is_sorted(*a))
		return ;
	tmp = ft_lstlast(*a);
	max = find_max(*a);
	min = find_min(*a);
	if (tmp->value == max)
		sa(a, 1);
	else if (tmp->value == min && (*a)->value == max)
	{
		sa(a, 1);
		rra(a, 1);
	}
	else if (tmp->value == min)
		rra(a, 1);
	else
	{
		if ((*a)->value != max)
			sa(a, 1);
		ra(a, 1);
	}
}

void	rotation(t_stack **a)
{
	t_stack	*tmp;

	tmp = *a;
	if (tmp->index == 1)
		sa(a, 1);
	else if (tmp->index == 2)
	{
		ra(a, 1);
		ra(a, 1);
	}
	else if (tmp->index == 3)
	{
		rra(a, 1);
		rra(a, 1);
	}
	else if (tmp->index == 4)
		rra(a, 1);
}
