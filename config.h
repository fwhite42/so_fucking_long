#ifndef CONFIG_H

// MAP VALUE CODES
# define PLAYER			0b010100000 // = 'P'
# define EXIT			0b010001010 // = 'E'
# define COIN			0b001000011 // = 'C'
# define FLOOR			0b000110000 // = '0'
# define WALL			0b000110001 // = '1'

typedef struct s_object
{
}

void	player_move_to(void *self, int new_x, int new_y)
{
	char	target;
	void	*map;

	map = player_map(self);
	target = map_read_at(map, new_x, new_y);
	if (target == '1')
	{
		
	}
	else if (obj_id(receiver) == 'E')
		if (door_isopen(receiver) == true)
			game_next_level();
}


//User Inputs
# define CMD_ARROW_UP		0x00
# define CMD_ARROW_DOWN		0x01
# define CMD_ARROW_LEFT		0x02
# define CMD_ARROW_RIGHT	0x03
# define CMD_ACTION_UP		0x04
# define CMD_ACTION_DOWN	0x05
# define CMD_ACTION_LEFT	0x06
# define CMD_ACTION_RIGHT	0x07
# define CMD_SELECT		0x08
# define CMD_START		0x09
# define CMD_QUIT		0x0a
# define CMD_FULLSCREEN		0x0b

if (keycode == CTRL_ARROW_UP)
else if (keycode == CTRL_ARROW_DOWN)
else if (keycode == CTRL_ARROW_DOWN)
else if (keycode == CTRL_ARROW_LEFT)
	

//Animation Frame Codes (1 animation sequence = 8 bytes = 8 states = 8 *images)

typedef struct s_object {
	char	id;
} t_object;

# define ANI_STATIC_FRONT_A	0x00
# define ANI_STATIC_FRONT_B	0x01
# define ANI_STATIC_BACK_A	0x02
# define ANI_STATIC_BACK_B	0x03
# define ANI_STATIC_LEFT_A	0x04
# define ANI_STATIC_LEFT_B	0x05
# define ANI_STATIC_RIGHT_A	0x06
# define ANI_STATIC_RIGHT_B	0x07
# define ANI_WALK_UP_A		0x08
# define ANI_WALK_UP_B		0x09
# define ANI_WALK_DOWN_A	0x0a
# define ANI_WALK_DOWN_B	0x0b
# define ANI_WALK_RIGHT_A	0x0c
# define ANI_WALK_RIGHT_B	0x0d
# define ANI_WALK_LEFT_A	0x0e
# define ANI_WALK_LEFT_B	0x0f
#endif
