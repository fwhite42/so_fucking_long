/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   libmap.h                                           :+:      :+:    :+:   */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/02/21 04:33:38 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/04/09 23:52:16 by fwhite42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef MAP_H
# define MAP_H
# include<stdint.h>
# include<stdbool.h>

// The map object wraps a buffer, exposing getters and setters with
// coordinates logic.

typedef struct s_map
{
	int	width;
	int	height;
	char		*buff;
	void		*view;
}	t_map;

// Standard getters
int	map_width(void *self);
int	map_height(void *self);
char		*map_buff(void *self);
void		*map_view(void *self);
// Sets width and height, reading the buffer
void		map_bind_buff(void *self, void *buffer);
void		map_bind_view(void *self, void *view);
void		map_populate(void *self);
// Allocates, sets the buffer and calls map_init
void		*map_create(void *buff);
// Allocates the memory
void		*map_create_null(void);
// Prints the object
void		map_print(void *self);
// Reads the file at filepath, binds the buffer, calls map_populate.
void		map_load(void *self, char *file_path);
// Stores the object inside a file
void 		map_save(void *self, char *file_path);
// Read and write the map using global coordinates.
char 		map_read_at(void *self, int x, int y);
bool 		map_write_at(void *self, int x, int y, char data);
// A "view" allows read/write op on the map using view (aka camera) coor;
char 		map_vread_at(void *self, int x, int y);
void 		map_vwrite_at(void *self, int x, int y, char data);
// Draws the whole map at the target, with the given config;
void		map_render(void *self, void *target, void *config);
// Sanity checks
bool		map_has_closed_borders(void *self);
bool		map_has_exactly_one_exit(void *self);
bool		map_has_exactly_one_player(void *self);
bool		map_is_valid(void *self);

#endif
