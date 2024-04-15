/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: aassaf <aassaf@student.42.fr>              +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2024/03/30 15:32:50 by aassaf            #+#    #+#             */
/*   Updated: 2024/03/30 15:32:50 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void create_stack(int ac, char **av, t_stack **stack_a, t_stack **stack_b)
{
	char **arr;
	int i;
	int j;
	i = 1;

	while(i < ac)
	{
		arr = ft_split(av[i], ' ');
		j = 0;
		while (arr[j])
		{
			if(is_duplicate(ft_atoi(arr[j]), stack_a))
			{
				free_stack(stack_a);
				free_stack(stack_b);
				disp_error("\n");
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
	t_stack *stack_a = NULL;
	t_stack *stack_b = NULL;

	if (ac < 2)
		disp_error("Argument less than 2\n");
	all_parsing(ac, av);
	create_stack(ac, av, &stack_a, &stack_b);
	if (is_sorted(stack_a))
	{
		free_stack(&stack_a);
		free_stack(&stack_b);
		exit(0);
	}
	sort_algo(&stack_a, &stack_b);
	// printf("stack_a\n");
	t_stack *tmp = stack_a;
	// printf("%d\n",ft_lstsize(tmp));
	while(tmp)
	{
		printf("%d\n", tmp->value);
		tmp = tmp->next;
	}
	// return (0);
}
