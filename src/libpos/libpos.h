#ifndef LIBPOS_H
# define LIBPOS_H

//Struct
typedef struct s_pos
{
	int	x;
	int	y;
}	t_pos;

//Constructors
void	*pos_create_null(void);
void	*pos_create(int x, int y);
void	*pos_from_index(void *map, int index);

//Getters
int	pos_x(void *self);
int	pos_y(void *self);

//Setters
void	pos_set_x(void *self, int x);
void	pos_set_y(void *self, int y);

//Movements
void	pos_move_up(void *self);
void	pos_move_down(void *self);
void	pos_move_left(void *self);
void	pos_move_right(void *self);

//Printers
void	pos_print(void *self);

//Read/Write pointed value
char	pos_read(void *self, void *map);
void	pos_write(void *self, void *map, char value);

//Deconstructor
void	pos_destroy(void *self);
#endif
