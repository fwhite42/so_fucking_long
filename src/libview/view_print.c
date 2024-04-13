#include"libftprintf.h"
#include"libmap.h"
#include"libview.h"

void	view_print(void *self, void *map)
{
	int		x;
	int		y;

	x = 0;
	y = 0;
	while (y < view_height(self))
	{
		while (x < view_width(self))
		{
			ft_printf("%c", map_vread_at(map, x, y));
			x++;
		}
		ft_printf("\n");
		x = 0;
		y++;
	}
}
