#ifndef LIBGAME_H
# define LIBGAME_H

typedef struct s_game
{
	void	*map;
	void	*mobs;
}	t_game;

void	*game_create_null(void);
void	game_destroy(void *self);

void	*game_map(void *self);
void	**game_mobs(void *self);

void	game_bind_map(void *self, void *map);
void	game_bind_mobs(void *self, void **mobs);

void	game_parse_mobs(void *self);
void	*game_get_mob_pos(void *self, int mob_type, int mob_id);
#endif
