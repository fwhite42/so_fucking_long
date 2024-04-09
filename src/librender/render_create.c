#include"libft.h"
#include"librender.h"

void	*render_create(void *ctx, void *win)
{
	t_render	*render;
	
	render = (t_render *)ft_calloc(sizeof(t_render));
	render->ctx = ctx;
	render-win = win;
	return (render);
}
