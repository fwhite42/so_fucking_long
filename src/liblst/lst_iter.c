/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_iter.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwhite42 <FUCK THE NORM>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 09:31:05 by fwhite42          #+#    #+#             */
/*   Updated: 2024/04/02 22:21:20 by fwhite42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include"liblst.h"

void	lst_iter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	f(lst->content);
	if (lst->next)
		lst_iter(lst->next, f);
}
