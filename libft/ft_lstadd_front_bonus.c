/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <aassaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:52:35 by aassaf            #+#    #+#             */
/*   Updated: 2023/11/17 13:04:54 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_stack **lst, t_stack *new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	*lst = new;
}

/* #include <stdio.h>

int	main(void)
{
		t_stack *L = NULL;
		t_stack *n1 = ft_lstnew("aymen");
		t_stack *n2 = ft_lstnew("assaf");
		ft_lstadd_front(&L, n1);
		ft_lstadd_front(&L, n2);

		while(L)
		{
				printf("%s\t", (char *)L -> content);
				L = L -> next;
		}
} */
