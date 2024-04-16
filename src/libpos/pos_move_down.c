#include"libpos.h"

void	pos_move_down(void *self)
{
	pos_set_y(self, pos_y(self) + 1);
}
