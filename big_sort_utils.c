/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <aassaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:40:32 by aassaf            #+#    #+#             */
/*   Updated: 2024/04/22 14:41:44 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bubble_sort(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[i] < tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	find_pos(t_stack *lst, int value)
{
	int	i;

	i = 0;
	while (lst)
	{
		if (lst->value == value)
			break ;
		lst = lst->next;
		i++;
	}
	return (i);
}

int	find_index(t_stack *lst, int index, int range)
{
	int	i;

	i = 0;
	while (lst)
	{
		if (lst->index <= index || lst->index <= index + range)
			break ;
		lst = lst->next;
		i++;
	}
	return (i);
}
