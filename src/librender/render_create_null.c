#include"librender.h"
#include"libft.h"

void	*render_create_null(void)
{
	void	*ptr;
	
	ptr = ft_calloc(1, sizeof(t_render));
	return (ptr);
}
