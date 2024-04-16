#include"libpos.h"

void	*pos_create(int x, int y)
{
	void	*ptr;

	ptr = pos_create_null();
	pos_set_x(ptr, x);
	pos_set_y(ptr, y);
	return (ptr);
}
