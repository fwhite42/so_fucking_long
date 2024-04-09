#include"librender.h"

void	render_bind_view(void *self, void *view)
{
	((t_render *)self)->view = view;
}
