#include"libimage.h"
#include"libmlx.h"

void	*image_destroy(void *self)
{
	mlx_destroy_image(image_ctx(self), image_data(self));
	free(self);
}
