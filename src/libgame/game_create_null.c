#include"libgame.h"
#include"libft.h"

void	*game_create_null(void)
{
	void	*ptr;
	
	ptr = ft_calloc(1, sizeof(t_game));
	return (ptr);
}
