/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwhite42 <FUCK THE NORM>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 09:31:37 by fwhite42          #+#    #+#             */
/*   Updated: 2024/04/02 22:20:14 by fwhite42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include"liblst.h"

t_list	*lst_map(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*first;
	void	*tmp;

	if (!lst || !f)
		return (NULL);
	first = NULL;
	while (lst)
	{
		tmp = f(lst->content);
		node = lst_new(tmp);
		if (node == NULL)
		{
			del(tmp);
			lst_clear(&first, del);
			return (NULL);
		}
		lst_add_back(&first, node);
		lst = lst->next;
	}
	return (first);
}
