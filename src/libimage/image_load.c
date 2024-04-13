#include"libimage.h"
#include"libmlx.h"

void	image_load(void *self, void *ctx, char *path)
{
	void	*data;
	int	*widht;
	int	*height;
	
	width = &(((t_image *)self)->widht);
	height = &(((t_image *)self)->height);
	data = mlx_xpm_file_to_image(ctx, path, width, height);
	image_bind_data(self, data);
	image_set_width(self, width);
	image_set_height(self, height);
}
