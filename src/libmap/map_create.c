/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   map_create.c                                       :+:      :+:    :+:   */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/02/21 12:34:37 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/04/08 17:32:57 by fwhite42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include"libmap.h"

void	*map_create(void* buff)
{
	void	*this;

	this = map_create_null();
	if (buff)
		map_bind_buff(this, buff);
	return (this);
}
