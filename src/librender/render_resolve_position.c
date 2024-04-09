#include"librender.h"
#include"libmap.h"

void	*render_resolve_position(void *self, void *map, int x, int y)
{
	t_render	*render;
	t_render_conf	*conf;
	char		point;
	void		*image;
	
	render = self;
	conf = render->conf;
	map_bind_view(map, render->view);
	point = map_vread_at(map, x, y)
	map_bind_view(map, NULL);
	return (render_resolve_point(self, point));
}
