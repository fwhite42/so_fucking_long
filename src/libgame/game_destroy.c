#include"libmap.h"
#include"libarr.h"
#include"libgame.h"
#include<stddef.h>
#include<stdlib.h>

void	game_destroy(void *self)
{
	int	i;
	
	map_destroy(game_map(self), NULL);
	i = 1;
	while (i < 256)
	{
		arr_destroy(game_mobs(self)[i], NULL, NULL);
		i++;
	}
	free(game_mobs(self));
	free(self);
}
