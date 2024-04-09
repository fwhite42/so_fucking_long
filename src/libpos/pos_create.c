#include"libpos.h"

void	*pos_create(void *map)
{
	void	*ptr;

	ptr = pos_create_null();
	pos_bind_map(ptr, map);
	return (ptr);
}
