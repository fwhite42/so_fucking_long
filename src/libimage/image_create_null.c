#include"libft.h"

void	*image_create_null(void)
{
	void	*ptr;

	ptr = ft_calloc(1, sizeof(t_image));
	return (ptr);
}
