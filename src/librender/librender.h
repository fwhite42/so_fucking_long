// The ctx is the mlx context (generally returned by "mlx_init()")
// The window is a reference to the window pointer, which is our target
// The view is a camera on any (dynamically assigned) map object.
// The conf is a mapping from uint8 to image/animation pointers

typedef struct s_render {
	void	*ctx;
	void	*win;
	void	*view;
	void	*conf[256];
}	t_render;
	
void	render_config(void *self, uint8_t key, void *data);
{
	((t_render *)self)->conf[key] = data;
}

// An image loader is present. It is a "pure method" (cf. Solidity)
void	*render_load_image(void *self, char *image_path)
{
	t_render	*render;

	return (mlx_xpm_file_to_image(render->ctx, image_path, NULL, NULL));
}

void	render_draw_at(void *self, void *map, int x, int y)
{
	t_render	*render;
	void		*image;
	
	render = self;
	image = render_resolve_position(self, map, x, y);
	mlx_put_image_on_window(render->ctx, render->win, image, x, y);
}

void	*render_create(void *ctx, void *win)
{
	t_render	*ptr;
	
	ptr = (t_render *)ft_calloc(sizeof(t_render));
	ptr->ctx = ctx;
	ptr->win = win;
	return (ptr);
}

void	*render_new(int win_width, int win_height)
{
	void	*ctx;
	void	*win;
	
	ctx = mlx_init();
	win = mlx_new_window(ctx, win_width, win_height, " ")
	render_create(ctx, win);
}
