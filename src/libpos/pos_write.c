#include"libpos.h"
#include"libmap.h"

void	pos_write(void *self, char value)
{
	map_write_at(pos_map(self), pos_x(self), pos_y(self), value);
}
