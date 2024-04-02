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

int	main(int ac, char **av)
{
	t_stack *stack_a;
	t_stack *stack_b;


	stack_a = malloc(sizeof(t_stack));
	stack_b = malloc(sizeof(t_stack));

	if(!stack_a || !stack_b)
		exit(1);
	if (ac < 2)
		disp_error("Argument less than 2\n");
	all_parsing(ac, av);
	return (0);
}
