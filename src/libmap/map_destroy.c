#include"libmap.h"
#include"stdlib.h"

void	map_destroy(void *self, void (*delete_buffer)())
{
	if (delete_buffer != NULL)
		delete_buffer(map_buff(self));
	free(self);
}
