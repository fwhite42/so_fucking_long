#include"libpos.h"

void	pos_move_left(void *self)
{
	pos_set_x(self, pos_x(self) - 1);
}
