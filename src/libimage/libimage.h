#ifndef LIBIMAGE_H
# define LIBIMAGE_H
//Struct
typedef struct s_image
{
	int	width;
	int	height;
	void	*data;
}	t_image;

//Getters
int	image_width(void *self);
int	image_height(void *self);
void	*image_data(void *self);

//Setters
void	image_set_width(void *selt, int width);
void	image_set_height(void *selt, int height);
void	image_bind_data(void *selt, void *data);

//Constructor
void	*image_create_null(void);
void	*image_create(void *ctx, void *path);
void	image_destroy(void *self)

//Config
void	image_load(void *self, void *ctx, char *path);
#endif
