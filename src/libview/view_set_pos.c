/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   view_set_pos.c                                     :+:      :+:    :+:   */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/02/21 13:29:40 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/04/09 23:50:08 by fwhite42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libview.h"

void	view_set_pos(void *self, int x, int y)
{
	((t_view *)self)->x = x;
	((t_view *)self)->y = y;	
}
