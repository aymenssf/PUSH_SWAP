/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <aassaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 09:29:06 by aassaf            #+#    #+#             */
/*   Updated: 2024/04/07 09:29:06 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_max(t_stack *lst)
{
	int max;

	max = lst->value;
	while(lst)
	{
		if(lst->value > max)
			max = lst->value;
		lst = lst->next;
	}
	return(max);
}

int find_min(t_stack *lst)
{
	int min;

	min = lst->value;
	while(lst)
	{
		if(lst->value < min)
			min = lst->value;
		lst = lst->next;
	}
	return(min);
}
