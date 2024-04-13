#include"lubrender.h"

void	render_put_image(void *self, int id_or_state, int x, int y)
{
	int	image;
	void	*ctx;
	void	*win;
	int	id;
	int	state;
	
	win = render_win(self);
	ctx = render_ctx(self)'
	map = render_map(self);
	if (map != NULL)
	{
		state = id_or_state;
		id = map_vread_at(map, x, y);
	}
	else
	{
		state = render_state(self);
		id = id_or_state;
	}
	x += render_osx(self);
	x *= render_block_size(self);
	y += render_osy(self);
	y *= render_block_size(self);
	image = arr_read_at(render_database(self)[id], state);
	mlx_put_image_to_window(ctx, win, image, x, y);
}
