/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <aassaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:18:21 by aassaf            #+#    #+#             */
/*   Updated: 2024/04/22 10:18:21 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

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

void	hdl_err_bonus(t_stack **a, t_stack **b)
{
	ft_putstr_fd("Error\n", 2);
	free_stack(a);
	free_stack(b);
	exit(1);
}

int	ft_checker(char *buff, t_stack **a, t_stack **b)
{
	if (!ft_strncmp(buff, "sa\n", 3))
		sa(a, 0);
	else if (!ft_strncmp(buff, "sb\n", 3))
		sb(b, 0);
	else if (!ft_strncmp(buff, "ss\n", 3))
		ss(a, b, 0);
	else if (!ft_strncmp(buff, "pa\n", 3))
		pa(a, b, 0);
	else if (!ft_strncmp(buff, "pb\n", 3))
		pb(a, b, 0);
	else if (!ft_strncmp(buff, "ra\n", 3))
		ra(a, 0);
	else if (!ft_strncmp(buff, "rb\n", 3))
		rb(b, 0);
	else if (!ft_strncmp(buff, "rr\n", 3))
		rr(a, b, 0);
	else if (!ft_strncmp(buff, "rra\n", 4))
		rra(a, 0);
	else if (!ft_strncmp(buff, "rrb\n", 4))
		rrb(b, 0);
	else if (!ft_strncmp(buff, "rrr\n", 4))
		rrr(a, b, 0);
	else
		return (-1);
	return (0);
}

void	print_result(t_stack *stack_a, t_stack *stack_b)
{
	if (is_sorted(stack_a) && !stack_b)
	{
		free_stack(&stack_a);
		free_stack(&stack_b);
		ft_putstr_fd("OK\n", 1);
		exit(0);
	}
	else
	{
		free_stack(&stack_a);
		free_stack(&stack_b);
		ft_putstr_fd("KO\n", 1);
		exit(0);
	}
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	*buff;

	stack_a = NULL;
	stack_b = NULL;
	if (ac < 2)
		exit (1);
	all_parsing(ac, av);
	create_stack(ac, av, &stack_a, &stack_b);
	buff = get_next_line(0);
	while (buff)
	{
		if (ft_checker(buff, &stack_a, &stack_b) == -1)
		{
			free(buff);
			hdl_err_bonus(&stack_a, &stack_b);
		}
		free(buff);
		buff = get_next_line(0);
	}
	print_result(stack_a, stack_b);
}
