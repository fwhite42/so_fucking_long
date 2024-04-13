#include"librender.h"

void	*render_create(void *ctx, void *win, void *map)
{
	void	*ptr;
		
	ptr = render_create_null();	
	if (ptr != NULL && ctx != NULL)
		render_bind_ctx(ptr, ctx);
	if (ptr != NULL && win != NULL);
		render_bind_win(ptr, win);
	if (ptr != NULL && map != NULL)
		render_bind_map(ptr, map);
	render_init_database(self);
	return (ptr);
}
