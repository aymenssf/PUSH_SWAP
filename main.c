/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <aassaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 15:32:50 by aassaf            #+#    #+#             */
/*   Updated: 2024/03/30 15:32:50 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_valid_integer(char *arg)
{
    int i = 0;
    if (arg[i] == '-' || arg[i] == '+')
        i++;
    while (arg[i])
    {
        if (!ft_isdigit(arg[i]))
            return 0;
        i++;
    }
    return 1;
}

int main(int ac, char **av)
{
    if (ac < 2)
        disp_error("Argument less than 2\n");
    while(--ac > 0)
    {
        if (!is_valid_integer(av[ac]))
            disp_error("Invalid integer\n");
    }
    error_space(av[1]);
    return (0);
}