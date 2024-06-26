/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaf <aassaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 09:45:09 by idhaimy           #+#    #+#             */
/*   Updated: 2024/04/18 12:26:43 by aassaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	char			*content;
	struct s_list	*next;
}					t_list;

char				*get_next_line(int fd);
char				*get_linee(t_list *lst);
void				read_to_list(t_list **lst, int fd);
void				add_buffer_to_list(t_list **lst, char *buffer);
t_list				*ft_listlast(t_list *lst);
int					count_my_line(t_list *lst);
void				copy_lstline(t_list *lst, char *line);
void				clearlst(t_list **lst);
void				free_all(t_list *clean_node, char *buf, t_list **list);

#endif
