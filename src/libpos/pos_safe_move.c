#include"libpos.h"
#include"libftprintf.h"

void	pos_safe_move(void *self, int dx, int dy)
{
	t_pos	other;
	
	pos_bind_map(&other, pos_map(self));
	pos_set_x(&other, pos_x(self) + dx);
	pos_set_y(&other, pos_y(self) + dy);
	if (pos_read(&other) == '1')
		return ;
	pos_write(&other, '0');
	pos_swap(self, &other);
}
