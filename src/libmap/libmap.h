#ifndef MAP_H
# define MAP_H
# include<stdbool.h>

# define MAP_FLOOR	'0'
# define MAP_WALL	'1'
# define MAP_PLAYER	'P'
# define MAP_DOOR	'E'
# define MAP_COIN	'C'

//Struct
typedef struct s_map
{
	int	width;
	int	height;
	char	*buff;
	void	*view;
}	t_map;

//Standard getters
int	map_width(void *self);
int	map_height(void *self);
char	*map_buff(void *self);
void	*map_view(void *self);

//Standard getters
void	map_bind_buff(void *self, void *buffer);
void	map_bind_view(void *self, void *view);

//Auto populates width and height
void	map_populate(void *self);

//Allocates memory
void	*map_create_null(void);

//Allocates memory and binds an existing buffer
void	*map_create(void *buff);

//Printers
void	map_print(void *self);
void	map_printf(void *self, char *flags);

// Load/Save from/to filesystem
void	map_load(void *self, char *file_path);
void 	map_save(void *self, char *file_path);

// Read and write the map using global coordinates.
char 	map_read_at(void *self, int x, int y);
bool 	map_write_at(void *self, int x, int y, char data);

// A "view" allows read/write op on the map using view (aka camera) coor;
// If view is set to null, these behaves like map_read_at and map_write_at
char 	map_vread_at(void *self, int x, int y);
bool 	map_vwrite_at(void *self, int x, int y, char data);

//Deconstructors
void	map_destroy(void *self, void (*delete_buffer)());

#endif
