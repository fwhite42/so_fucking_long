#include"librender.h"

void	*render_resolve(void *self, char point)
{
	return (render_database(self)[point][render_state(self)]);
}
