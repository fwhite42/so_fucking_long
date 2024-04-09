/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   map_write_at.c                                     :+:      :+:    :+:   */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/02/21 12:36:58 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/04/09 17:44:23 by fwhite42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libmap.h"
#include<stdbool.h>

bool map_write_at(void *self, int x, int y, char value)
{
	map_buff(self)[x + y * (map_width(self) + 1)] = value;
	return (true);
}
