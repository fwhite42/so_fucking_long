#include"librender.h"

void	render_destroy_database(void *self, char id)
{
	int	id;

	id = 0;
	while (id < 256)
		arr_destroy(render_database(self)[id++], image_destroy);
	free(render_database(self));
}
