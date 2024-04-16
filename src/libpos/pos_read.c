#include"libpos.h"
#include"libmap.h"

char	pos_read(void *self, void *map)
{
	return (map_read_at(map, pos_x(self), pos_y(self)));
}
