#ifndef LIBRENDER_H
# define LIBRENDER_H
//Struct
typedef struct s_render {
	int	state;
	int	osx;
	int	osy;
	int	blocksize;
	void	*ctx;
	void	*win;
	void	*map;
	void	*database;
}	t_render;
//Getters
int	render_state(void *self);
int	render_state(void *osx);
int	render_state(void *osy);
int	render_blocksize(void *self);
//Setters
void	render_set_state;
void	render_set_osx;
void	render_set_osy;
void	render_set_blocksize;
//Constructor
void	*render_create_null(void);
void	render_create(void *ctx, void *win, void *map);
void	render_destroy(void *self);
//Config
void	render_init_database(void *self);
void	render_destroy_database(void *self);
void	render_load_image(void *self, char *path, int id, int index);
//Main Stuff
void	*render_resolve_point(void *self, char point);
void	render_put_image(void *self, int id, int x, int y);
#endif
