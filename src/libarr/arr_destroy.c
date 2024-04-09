#include"libarr.h"

void	arr_destroy(void *self)
{
	free(arr_data(self));
	free(self);
}
