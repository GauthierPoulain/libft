/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapoulai <gapoulai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 16:49:30 by gapoulai          #+#    #+#             */
/*   Updated: 2020/11/25 17:37:26 by gapoulai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_lstmap_lstnew(void *content)
{
	t_list	*lst;

	if (!(lst = malloc(sizeof(t_list))))
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}

static void		ft_lstmap_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *tmp;

	if (*lst)
	{
		while (*lst)
		{
			tmp = (*lst)->next;
			del((*lst)->content);
			free(*lst);
			*lst = tmp;
		}
		*lst = NULL;
	}
}


t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*list;
	t_list	*start;

	if (!lst)
		return (NULL);
	new = f(lst);
	start = ft_lstmap_lstnew(new->content);
	list = start;
	lst = lst->next;
	while (lst)
	{
		new = f(lst);
		if (!(list->next = ft_lstmap_lstnew(new->content)))
			{
				ft_lstmap_lstclear(&start, del);
				return (NULL);
			}
		list = list->next;
		lst = lst->next;
	}
	return (start);
}
