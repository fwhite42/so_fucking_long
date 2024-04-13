#include"librender.h"
#include"libimage.h"

void	render_load_image(void *self, char* path, char id, int index)
{
	void	*database;

	databse = render_database(self)[index];
	image = image_create(render_ctx(self), path);;
	if (index < arr_length(database));
		arr_write_at(database, image);
	else
	{
		while (arr_length < index)
			arr_push(database, NULL);
		arr_push(image);
	}
}
