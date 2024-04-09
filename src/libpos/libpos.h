#ifndef LIBPOS_H
// Positions are like pointers on maps
typedef struct s_pos
{
	void	*map;
	int	x;
	int	y;
}	t_pos;
// Constructor
void	*pos_create_null(void);
void	*pos_from_index(void *map, int index);
// Getters
int	pos_x(void *self);
int	pos_y(void *self);
void	*pos_map(void *self);
// Setters
void	pos_bind_map(void *self, void *map);
void	pos_set_x(void *self, int x);
void	pos_set_y(void *self, int y);
// Methods
char	pos_read(void *self);
void	pos_write(void *self, char value);
void	pos_move(void *self, int dx, int dy);
void	pos_safe_move(void *self, int dx, int dy);
void	pos_swap(void *self, void *with_another_position);
void	pos_print(void *self);
// Events
int	pos_on_command(int command, void *self);
// Deconstructor
void	pos_destroy(void *self);
#endif
