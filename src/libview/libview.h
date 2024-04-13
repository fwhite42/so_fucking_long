/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   libview.h                                          :+:      :+:    :+:   */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/02/21 13:27:35 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/04/10 08:22:09 by fwhite42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBVIEW_H
# define LIBVIEW_H

#include<stdint.h>

typedef struct s_view
{
	int x;
	int y;
	int width;
	int height;
}	t_view;

void		*view_create(void);
void		view_destroy(void);
// Getters
int	view_x(void *self);
int	view_y(void *self);
int	view_width(void *self);
int	view_height(void *self);
// Setters
void		view_set_size(void *self, int w, int h);
void		view_set_pos(void *self, int x, int y);
// (x,y) --> X(x,y)
int16_t		view_i_cnvrtd_to(void *self, void *map, int16_t i, int16_t j);
// (x,y) --> Y(x,y)
int16_t		view_j_cnvrtd_to(void *self, void *map, int16_t i, int16_t j);
// (X,Y) --> x(X,Y)
int16_t		view_i_cnvrtd_frm(void *self, void *map, int16_t i, int16_t j);
// (X,Y) --> y(X,Y)
int16_t		view_j_cnvrtd_frm(void *self, void *map, int16_t i, int16_t j);
#endif
