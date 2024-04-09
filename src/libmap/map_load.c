/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   map_load.c                                         :+:      :+:    :+:   */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/02/21 13:07:13 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/04/08 17:31:52 by fwhite42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libmap.h"
#include"librwf.h"

void map_load(void *self, char *filename)
{
	map_bind_buff(self, rwf_read(filename));
	map_populate(self);
}
