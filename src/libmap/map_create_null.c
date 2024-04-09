#include"liberror.h"
#include"libft.h"
#include"libmap.h"
#include<stdlib.h>

void	*map_create_null(void)
{
	void	*this;
	
	this = ft_calloc(1, sizeof(t_map));
	if (this == NULL)
		error_fatal("ft_calloc returned NULL", 0);
	return (this);
}
