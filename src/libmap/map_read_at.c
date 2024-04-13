/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   map_read_at.c                                      :+:      :+:    :+:   */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/02/21 12:35:55 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/04/10 08:36:07 by fwhite42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libmap.h"

// The value at (x,y) is buff[x + y * (width + 1)]
// The (+1) takes account of the '\n' splitting each row
// USAGE:
// map_read_at(map_address, 42, 51);

char map_read_at(void *self, int x, int y)
{
	int	index;

	index = x + y * (map_width(self) + 1);
	if (index < 0 || x < 0 || y < 0)
		return (' ');
	return (map_buff(self)[index]);
}
