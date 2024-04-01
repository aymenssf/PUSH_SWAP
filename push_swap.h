/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <aassaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 15:33:55 by aassaf            #+#    #+#             */
/*   Updated: 2024/03/30 15:33:55 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft/libft.h"
typedef struct s_stack
{
        int index;
        int value;
        struct s_stack *next;
} t_stack;




void    disp_error(char *str);
int check_space(char *str);
void error_space(char *str);
void    print_error(void);
#endif