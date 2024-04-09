#include"libpos.h"
#include"libmap.h"

void	*pos_from_index(void *map, int index)
{
	void		*ptr;
	int	x;
	int	y;

	x = index % (map_width(map) + 1);
	y = index / (map_width(map) + 1);
	ptr = pos_create_null();
	pos_bind_map(ptr, map);
	pos_set_x(ptr, x);
	pos_set_y(ptr, y);
	return (ptr);
}
