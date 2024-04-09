#include"libpos.h"
#include"libmap.h"

char	pos_read(void *self)
{
	return (map_read_at(pos_map(self), pos_x(self), pos_y(self)));
}
