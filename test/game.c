#include"libtest.h"
#include"libpos.h"
#include"libarr.h"
#include"libgame.h"
#include"libmap.h"
#include"libftprintf.h"

int	test1(void)
{
	void	*game;
	void	*map;
	void	*player_pos;
	
	game = game_create_null();
	map = map_create_null();
	map_load(map, "./assets/map/simple.ber");
	game_bind_map(game, map);
	game_parse_mobs(game);
	if (arr_length(game_mobs(game)['P']) != 1)
		return (1);
	player_pos = game_get_mob_pos(game, 'P', 0);
	pos_print(player_pos);
	if (pos_x(player_pos) != 40)
		return (2);
	if (pos_y(player_pos) != 2)
		return (3);
	game_destroy(game);
	return (0);
}

int	main(void)
{
	test_run(1, test1);
	return (0);
}
