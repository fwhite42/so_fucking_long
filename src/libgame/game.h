/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   game.h                                             :+:      :+:    :+:   */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/02/23 16:37:46 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/03/29 21:12:23 by fwhite42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_H
# define GAME_H

typedef struct s_game
{
	void *map;
	void *error;
	void *kerror;
}	t_game;

void	*game_create(void);
void	game_destroy(void *self);
void	game_load_map(void *self, char *filepath);
void	game_new_error(void *self, int value, char *message);
void	game_start(void *self);
void	game_exit(void *self);

#endif
