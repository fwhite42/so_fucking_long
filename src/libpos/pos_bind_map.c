#include"libpos.h"

void	pos_bind_map(void *self, void *map)
{
	((t_pos *)self)->map = map;
}
