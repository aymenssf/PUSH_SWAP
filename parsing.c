/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <aassaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 04:04:20 by aassaf            #+#    #+#             */
/*   Updated: 2024/03/20 04:04:20 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_space(char *str)
{
        int i;
        
        i = 0;
        while (str[i])
        {
                if (str[i] == ' ' && str[i] != '\t')
                        return (0);
                i++;
        }
        return (1);
}

void error_space(char *str)
{
        if (!check_space(str))
        {
                disp_error("Error\n");
        }
}