/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <aassaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:35:53 by aassaf            #+#    #+#             */
/*   Updated: 2023/11/17 13:03:36 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	while (n > 0)
	{
		p[i] = c;
		i++;
		n--;
	}
	return (p);
}

// #include <stdio.h>
// int main()
// {
//     int s = "2222";
//      memset(s, 9, sizeof(int) * 3);
//    // printf("%d\t%d\t%d", s[0], s[1], s[2]);
// }