/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <aassaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:51:13 by aassaf            #+#    #+#             */
/*   Updated: 2023/11/17 13:05:25 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_stack	*ft_lstlast(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/* #include <stdio.h>
int	main(void)
{
		t_stack *L = NULL;
		t_stack *n1 = ft_lstnew("aymen");
		t_stack *n2 = ft_lstnew("assaf");
		ft_lstadd_front(&L, n1);
		ft_lstadd_front(&L, n2);
		t_stack *last = ft_lstlast(L);
		printf("%s", (char *)last -> content);
}  */
