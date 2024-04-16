#include"libgame.h"
#include"libarr.h"
#include"libftprintf.h"
#include"libpos.h"

void	*game_get_mob_pos(void *self, int mob_type, int mob_id)
{
	void	*pos;

	pos = arr_read_at(game_mobs(self)[mob_type], mob_id);
	return (pos);
}
