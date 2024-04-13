#include"libftprintf.h"
#include"libft.h"
#include"libmap.h"
#include"libview.h"

static void	view_print(void *self, void *map)
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

void	map_printf(void *self, char *flags)
{
	int nl;

	nl = 100;
	if (ft_strchr(flags, 'c'))
	{
		while (nl--)
			ft_printf("\n");
	}
	if (ft_strchr(flags, 'p'))
		ft_printf("(%p)\t" , self);
	ft_printf("Map[%ix%i]\n", map_width(self), map_height(self));
	if (ft_strchr(flags, 'b'))
		ft_printf("%s\n", map_buff(self));
	ft_printf("View:\n");
	if (ft_strchr(flags, 'v'))
	{
		if (map_view(self) == NULL)
			ft_printf("\tNo View Avaliable\n");
		else
			view_print(map_view(self), self);
	}
}
