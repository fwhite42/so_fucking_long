#ifndef LIBIMAGE_H
# define LIBIMAGE_H
typedef struct s_image
{
	int	width;
	int	height;
	void	*data;
}	t_image;

void	*image_create_null(void);
void	*image_create(void *ctx, void *path);
void	image_load(void *self, void *ctx, char *path);
void	image_destroy(void *self)
#endif
