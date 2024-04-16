#ifndef LIBMOB_H
# define LIBMOB_H

//Constants
# define MOB_STATE_LOOK_FRONT	0
# define MOB_STATE_LOOK_BEHIND	1
# define MOB_STATE_LOOK_LEFT	2
# define MOB_STATE_LOOK_RIGHT	3
# define MOB_STATE_WALK_FRONT	4
# define MOB_STATE_WALK_BEHIND	5
# define MOB_STATE_WALK_LEFT	6
# define MOB_STATE_WALK_RIGHT	7

//Struct
typedef struct s_mob_data
{
	int	hp;
	int	mp;
	int	xp;
}	t_mob_stats

typedef struct s_mob_action
{
	int	duration;
	void	*movement;
	void	*stats_modifier;
	void	*image;
}	t_mob_action;

typedef struct s_mob_type
{
	char	id;
	void	*actions[8];
}	t_mob_type;

typedef struct s_mob
{
	char	type;
	int	id;
	void	*stats;
	void	*data;
	void	*metadata;
	void	*current_action;
	void	*next_action;
	void	*default_action;
	int	action_frame;
}	t_mob;


//Null Constructor:
int	mob_create_null(void);

//Returns a t_arr of mobs with positions binded to the map buffer
void	**mob_arr_parse_map(void *map, char id);

//Offmap Constructor:
int	mob_create(int hp, int mp, int *backpack);

//Default Getters
int	mob_id(void *self);
int	mob_hp(void *self);
int	mob_mp(void *self);
int	mob_state(void *self);
int	*mob_backpack(void *self);
void	*mob_pos(void *self);

// Default Setters
void	mob_bind_backpack(void *self, void *backpack);
void	mob_bind_pos(void *self, void *pos);
void	mob_bind_imagedb(void *selfi, void *imagedb);
void	mob_set_hp(void *self, int hp);
void	mob_set_mp(void *self, int mp);
void	mob_set_orientation(void *self, int orientation);

// Complex Setters
void	mob_consume_hp(void *self, int hp_loss);
void	mob_gain_hp(void *self, int hp_gain);
void	mob_consume_mp(void *self, int mp_loss);
void	mob_gain_mp(void *self, int mp_gain);

// Calls pos_move, but also resolves collisions
void	mob_move(void *self, int dx, int dy);

// Sets entries in the backpack
void	mob_edit_backpack(void *self, char item, int qty);

// Rotates the orientation clock-wise and counter-clock-wise
void	mob_rotate_cw(void *self);
void	mob_rotate_ccw(void *self);

// Debug
void	*mob_print(void *self, void *view);

//Rendering
void	*mob_draw(void *self, void *render);
void	*mob_hide(void *self, void *render);

//Config
void	mob_init_backpack(void *self);
void	mob_delete_backpack(void *self);
#endif
