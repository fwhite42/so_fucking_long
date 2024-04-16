#include"libpos.h"

void	pos_move_up(void *self)
{
	pos_set_y(self, pos_y(self) - 1);
}
