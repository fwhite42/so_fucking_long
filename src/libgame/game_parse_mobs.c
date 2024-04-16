#include"libgame.h"
#include"libpos.h"
#include"libmap.h"
#include"libarr.h"
#include"libft.h"
#include"libftprintf.h"

void	game_parse_mobs(void *self)
{
	void	*map;
	void	**mobs;
	int	i;
	
	map = game_map(self);
	mobs = ft_calloc(256, sizeof(void *));
	i = 1;
	while (i < 256)
	{
		mobs[i] = arr_create_default();
		arr_strchr(mobs[i], map_buff(map), i);
		arr_morph(mobs[i], pos_from_index, map);
		i++;
	}
	game_bind_mobs(self, mobs);
}
