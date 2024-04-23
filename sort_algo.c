/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <aassaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 22:41:29 by aassaf            #+#    #+#             */
/*   Updated: 2024/04/23 21:17:56 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_4_norm(t_stack **a, t_stack **b)
{
	if (is_sorted(*a))
		return ;
	pb(a, b, 1);
	sort_3(a);
	pa(a, b, 1);
}

void	sort_4(t_stack **a, t_stack **b)
{
	t_stack	*tmp;
	int		min;

	if (is_sorted(*a))
		return ;
	tmp = *a;
	min = find_min(*a);
	stack_index(a);
	while (tmp)
	{
		if (tmp->value == min)
		{
			if (tmp->index == 1)
				sa(a, 1);
			else if (tmp->index == 2)
			{
				rra(a, 1);
				rra(a, 1);
			}
			else if (tmp->index == 3)
				rra(a, 1);
		}
		tmp = tmp->next;
	}
	sort_4_norm(a, b);
}

void	sort_5_helper(t_stack **a, int min)
{
	t_stack	*tmp;

	tmp = *a;
	while (tmp)
	{
		if (tmp->value == min)
		{
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
		tmp = tmp->next;
	}
}

void	sort_5(t_stack **a, t_stack **b)
{
	int		min;

	if (is_sorted(*a))
		return ;
	stack_index(a);
	min = find_min(*a);
	sort_5_helper(a, min);
	if (is_sorted(*a))
		return ;
	pb(a, b, 1);
	sort_4(a, b);
	pa(a, b, 1);
}

void	sort_algo(t_stack **a, t_stack **b)
{
	(void)b;
	if (ft_lstsize(*a) == 2)
		sa(a, 1);
	else if (ft_lstsize(*a) == 3)
		sort_3(a);
	else if (ft_lstsize(*a) == 4)
		sort_4(a, b);
	else if (ft_lstsize(*a) == 5)
		sort_5(a, b);
	else
		big_sort(a, b);
}
