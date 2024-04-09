#include"libmap.h"
#include"libview.h"
//#include"libftprintf.h"

char	map_vread_at(void *self, int x, int y)
{
	//ft_printf("Trying to vread at (%i, %i)\n", x, y);
	//ft_printf("View Positon (%i, %i)\n", view_x(map_view(self)), view_y((self)));
	x += view_x(map_view(self));
	y += view_y(map_view(self));
	//ft_printf("Trying to read at (%i, %i)\n", x, y);
	return (map_read_at(self, x, y));
}
