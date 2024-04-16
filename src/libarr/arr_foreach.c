#include"libarr.h"
#include<stddef.h>

void	arr_foreach(void *self, void (*fn)(), void *caller)
{
	int	i;
	
	i = 0;
	while (i < arr_length(self))
	{
		if (caller == NULL)
			fn(arr_read_at(self, i), i);
		else
			fn(caller, arr_read_at(self, i), i);
		i++;
	}	
}
