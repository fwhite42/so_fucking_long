#include"libpos.h"
#include"libft.h"
#include"liberror.h"

void	*pos_create_null(void)
{
	void	*ptr;

	ptr = ft_calloc(1, sizeof(t_pos));
	if (ptr == NULL)
		error_fatal("ft_calloc returned NULL", 0);
	return ptr;
}

