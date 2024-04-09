#include"libview.h"

void	view_set_size(void *self, int width, int height)
{
	((t_view *)self)->width = width;
	((t_view *)self)->height = height;	
}
