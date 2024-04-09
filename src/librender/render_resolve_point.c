#include"librender.h"

void	*render_resolve_point(void *self, char point)
{
	t_render	*render;
	
	render = self;
	return (((t_render *)self)->conf[point]);
}
