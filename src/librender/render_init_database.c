#include"librender.h"

void	render_init_database(void *self)
{
	void	*db;
	int	id;

	id = 0;
	db = ft_calloc(256, sizeof(void *))
	render_bind_database(self, db);
	while (id < 256)
		render_database(self)[id] = arr_create(1, 1);
}
