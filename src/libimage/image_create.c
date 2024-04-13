#include"libimage.h"

void	*image_create(void *ctx, void *path)
{
	void	*image;

	image = image_create_null();
	if (image != NULL && path != NULL)
		image_load(image, ctx, path);
	return (image);
}
