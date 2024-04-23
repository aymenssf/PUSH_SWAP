/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <aassaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 21:39:47 by aassaf            #+#    #+#             */
/*   Updated: 2024/04/20 21:39:47 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	create_stack(int ac, char **av, t_stack **stack_a, t_stack **stack_b)
{
	char	**arr;
	int		i;
	int		j;

	i = 1;
	while (i < ac)
	{
		arr = ft_split(av[i], ' ');
		j = 0;
		while (arr[j])
		{
			if (is_duplicate(ft_atoi(arr[j]), stack_a))
			{
				free_stack(stack_a);
				free_stack(stack_b);
				print_error();
				free_arr(arr);
				exit(1);
			}
			ft_lstadd_back(stack_a, ft_lstnew(ft_atoi(arr[j]), j));
			j++;
		}
		free_arr(arr);
		i++;
	}
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac < 2)
		exit (1);
	all_parsing(ac, av);
	create_stack(ac, av, &stack_a, &stack_b);
	if (is_sorted(stack_a))
	{
		free_stack(&stack_a);
		free_stack(&stack_b);
		exit(0);
	}
	sort_algo(&stack_a, &stack_b);
	free_stack(&stack_a);
	free_stack(&stack_b);
}
