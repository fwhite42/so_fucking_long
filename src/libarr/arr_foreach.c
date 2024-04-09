#include"libarr.h"

void	arr_foreach(void *self, void (*fn)())
{
	int	i;
	
	i = 0;
	while (i < arr_length(self))
	{
		fn(arr_read_at(self, i), i);
		i++;
	}	
}
