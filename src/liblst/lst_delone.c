/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   lst_delone.c                                       :+:      :+:    :+:   */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/02/03 16:54:31 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/04/02 22:21:14 by fwhite42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include"liblst.h"

void	lst_delone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	lst->content = NULL;
	lst->next = NULL;
	free(lst);
}
