#include "liberror.h"
#include "error.h"

void	error_set_message(void *self, char *message) {
	if (self)
		((t_error *)self)->message = message;
}
