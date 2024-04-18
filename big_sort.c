/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <aassaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 09:20:09 by aassaf            #+#    #+#             */
/*   Updated: 2024/04/17 20:37:39 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*fill_array(t_stack *lst)
{
	int *arr;
	int i;

	i = 0;
	arr = malloc(sizeof(int) * ft_lstsize(lst));
	if (!arr)
		return (NULL);
	while (lst)
	{
		arr[i] = lst->value;
		lst = lst->next;
		i++;
	}
	return (arr);
}

void	bubble_sort(int *tab, int size)
{
	int i;
	int j;
	int tmp;

	i = 0;
	while(i < size)
	{
		j = 0;
		while(j < size)
		{
			if(tab[i] < tab[j])
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

void	index_arr(t_stack *lst, int *arr)
{
	t_stack *tmp;
	int i;

	tmp = lst;
	while (tmp)
	{
		i = 0;
		while(i < ft_lstsize(lst))
		{
			if(tmp->value == arr[i])
				tmp->index = i;
			i++;
		}
		tmp = tmp->next;
	}

}
void	big_sort_init(t_stack **lst, int *size, int *range)
{
	int *arr;

	*size = ft_lstsize(*lst);
	arr = fill_array(*lst);
	bubble_sort(arr, *size);
	index_arr(*lst, arr);
	if(*size < 250)
		*range = 15;
	else
		*range = 30;
	free(arr);
}

int find_index(t_stack *lst, int index, int range)
{
	int	i;

	i = 0;
	while(lst)
	{
		if(lst->index <= index || lst->index <= index + range)
			break ;
		lst = lst->next;
		i++;
	}
	return(i);
}

int find_pos(t_stack *lst, int value)
{
	int i;

	i = 0;
	while(lst)
	{
		if(lst->value == value)
			break ;
		lst = lst->next;
		i++;
	}
	return(i);
}

void	back_to_a(t_stack **a, t_stack **b)
{
	int max;
	int curr_position;

	max = find_max(*b);
	curr_position = find_pos(*b, max);
	while(ft_lstsize(*b) > 0)
	{
		if(max == (*b)->value)
		{
			pa(a, b, 1);
			if(ft_lstsize(*b) > 0)
			{
				max = find_max(*b);
				curr_position = find_pos(*b, max);
			}
		}
		else
		{
			if(curr_position <= (ft_lstsize(*b) / 2)
				&& max != (*b)->value)
				rb(b, 1);
			else
				rrb(b, 1);
		}
	}
}

void	big_sort(t_stack **a, t_stack **b)
{
	int i;
	int range;
	int size;

	big_sort_init(a, &size, &range);
	i = 0;
	while(i < size)
	{
		if((*a)->index <= i)
		{
			pb(a, b, 1);
			rb(b, 1);
			i++;
		}
		else if((*a)->index <= i + range)
		{
			pb(a, b, 1);
			i++;
		}
		else if(find_index(*a, i, range) < ft_lstsize(*a) / 2)
			ra(a, 1);
		else
			rra(a, 1);
	}
	back_to_a(a, b);
}
