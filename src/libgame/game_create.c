#include<stdlib.h>
#include"game.h"

void	*game_create(void)
{
	return (malloc(sizeof(t_game)));
}
