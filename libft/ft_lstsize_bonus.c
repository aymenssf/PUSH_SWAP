/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <aassaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:35:32 by aassaf            #+#    #+#             */
/*   Updated: 2023/11/21 19:18:04 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_stack *lst)
{
	size_t	count;

	count = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/* #include <stdio.h>
int	main(void)
{
		t_stack *L = NULL;
		t_stack *n1 = ft_lstnew("aymen");
		t_stack *n2 = ft_lstnew("assaf");
		t_stack *n3 = ft_lstnew("assaf");
		t_stack *n4 = ft_lstnew("assaf");

		ft_lstadd_front(&L, n1);
		ft_lstadd_front(&L, n2);
		ft_lstadd_front(&L, n3);
		ft_lstadd_front(&L, n4);
		printf("%d", ft_lstsize(L));
}  */
