/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <aassaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 22:19:09 by aassaf            #+#    #+#             */
/*   Updated: 2024/04/01 22:19:09 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	check_space(char *str)
{
	int i;

	i = 0;
	while (str[i] && str[i] != '\t')
	{
		if (str[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

int	is_valid_integer(char *arg)
{
	int i = 0;
	if (arg[i] == '-' || arg[i] == '+')
		i++;
	while (arg[i])
	{
		if (!ft_isdigit(arg[i]))
			return (0);
		i++;
	}
	return (1);
}

void	all_parsing(int ac, char **av)
{
	int i;
	int j;

	char **tmp;
	i = 1;
	while (i < ac)
	{
		if (av[0][i] == '\0' || check_space(av[i]))
			disp_error("\n");
		tmp = ft_split(av[i], ' ');
		j = 0;
		while (tmp[j])
		{
			if (!is_valid_integer(tmp[j]))
				disp_error("Invalid integer\n");
			j++;
		}
		i++;
	}
	free_arr(tmp);
}

int is_duplicate(int nb, t_stack **stack)
{
	t_stack *tmp;

	tmp = *stack;
	while (tmp)
	{
		if (nb == tmp->value)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}
