/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <aassaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 18:36:42 by aassaf            #+#    #+#             */
/*   Updated: 2024/03/22 18:36:42 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    disp_error(char *str)
{
    ft_putstr_fd("Error\n", 2);
    write(2, str, ft_strlen(str));
    exit(1);
}
void    print_error(char *str)
{
    ft_putstr_fd("Error\n", 2);
    write(2, str, ft_strlen(str));
    exit(1);
}