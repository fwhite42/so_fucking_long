#include"libftprintf.h"
#include"libmap.h"
#include"libview.h"

static	void map_print_view(void *self)
{
	t_view		*view;
	int		x;
	int		y;

	view = map_view(self);
	x = 0;
	y = 0;
	while (y < view_height(view))
	{
		while (x < view_width(view))
		{
			ft_printf("%c", map_vread_at(self, x, y));
			x++;
		}
		ft_printf("\n");
		x = 0;
		y++;
	}
}

void	map_print(void *self)
{
	ft_printf("> Map %p\n", self);
	ft_printf("Width: %i\n", map_width(self));
	ft_printf("Height: %i\n", map_height(self));
	ft_printf("Buffer:\n");
	ft_printf("%s\n", map_buff(self));
	ft_printf("View:\n");
	if (map_view(self))
		map_print_view(self);
}
