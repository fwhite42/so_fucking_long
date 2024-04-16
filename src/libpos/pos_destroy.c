#include"libpos.h"
#include<stdlib.h>

void	pos_destroy(void *self)
{
	free(self);
}
