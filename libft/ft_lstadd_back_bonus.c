/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <aassaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:41:55 by aassaf            #+#    #+#             */
/*   Updated: 2023/11/17 13:04:52 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*lastone;

	if (!lst || !new)
		return ;
	lastone = ft_lstlast(*lst);
	if (lastone == NULL)
		*lst = new;
	else
		lastone->next = new;
}
/* #include <stdio.h>
int	main(void)
{
		t_stack *L = NULL;
		t_stack *n1 = ft_lstnew("aymen");
		t_stack *n2 = ft_lstnew("assaf");
		ft_lstadd_back(&L, n2);
		ft_lstadd_back(&L, n1);
		while(L)
		{
				printf("%s\t", (char *)L -> content);
				L = L -> next;
		}
} */
