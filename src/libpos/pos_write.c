#include"libpos.h"
#include"libmap.h"

void	pos_write(void *self, void *map, char value)
{
	map_write_at(map, pos_x(self), pos_y(self), value);
}
