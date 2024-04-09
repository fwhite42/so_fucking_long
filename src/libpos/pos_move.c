#include"libpos.h"
#include"libftprintf.h"

void	pos_move(void *self, int dx, int dy)
{
	t_pos	other;
	
	ft_printf("Moving...\n");
	pos_bind_map(&other, pos_map(self));
	pos_set_x(&other, pos_x(self) + dx);
	pos_set_y(&other, pos_y(self) + dy);
	pos_swap(self, &other);
}
