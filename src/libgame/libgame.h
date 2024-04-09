typedef struct s_game_state
{
	void	*ctx;
	uint16_t	player_x_pos;
	uint16_t	player_y_pos;
}	t_game_state

void	*game_state_create(void);
void	*game_state_load(void *self, char *file);
void	*game_state_save(void *self, char *file);
void	*game_state_move_player(void *self)
