#include"libview.h"
#include"libft.h"

void	*view_create(void)
{
	void *ptr;

	ptr = ft_calloc(1, sizeof(t_view));
	return (ptr);
}
