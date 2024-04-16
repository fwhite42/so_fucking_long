#include"libplayer.h"

void	*arr_create_null(void)
{
	void	*ptr;
	
	ptr = ft_calloc(1, sizeof(t_player));
	return (ptr);
}
