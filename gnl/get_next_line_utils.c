/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <aassaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 10:07:16 by aassaf            #+#    #+#             */
/*   Updated: 2024/02/14 10:07:19 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

t_list	*ft_listlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

int	count_my_line(t_list *lst)
{
	int	len;
	int	i;

	len = 0;
	while (lst)
	{
		i = 0;
		while (lst->content[i])
		{
			if (lst->content[i] == '\n')
			{
				len++;
				return (len);
			}
			len++;
			i++;
		}
		lst = lst->next;
	}
	return (len);
}

void	copy_lstline(t_list *lst, char *line)
{
	int	i;
	int	j;

	j = 0;
	while (lst)
	{
		i = 0;
		while (lst->content[i])
		{
			if (lst->content[i] == '\n')
			{
				line[j++] = '\n';
				line[j] = '\0';
				return ;
			}
			line[j++] = lst->content[i++];
		}
		lst = lst->next;
	}
	line[j] = '\0';
}

void	free_all(t_list *newnode, char *buf, t_list **list)
{
	t_list	*tmp;

	while (*list)
	{
		tmp = (*list)->next;
		free((*list)->content);
		free(*list);
		*list = tmp;
	}
	*list = NULL;
	if (!newnode->content[0])
	{
		free(buf);
		free(newnode);
	}
	else
		*list = newnode;
}

void	clearlst(t_list **lst)
{
	t_list	*newnode;
	t_list	*lastnode;
	char	*newstr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	newstr = (char *)malloc((sizeof(char) * BUFFER_SIZE) + 1);
	newnode = (t_list *)malloc(sizeof(t_list));
	if (!newstr || !newnode)
		return ;
	lastnode = ft_listlast(*lst);
	while (lastnode->content[i] && lastnode->content[i] != '\n')
		i++;
	while (lastnode->content[i] && lastnode->content[++i])
		newstr[j++] = lastnode->content[i];
	newstr[j] = '\0';
	newnode->content = newstr;
	newnode->next = NULL;
	free_all(newnode, newstr, lst);
}
