/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   view_get_index.c                                        4 2              */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/02/21 13:30:58 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/02/21 13:31:13 by fwhite42           _)/_\---/_\(_         */
/*                                                                            */
/* ************************************************************************** */

#include"libview.h"

int view_get_index(void *self, int i, int j)
{
	int res;
	
	res = 0;
	res += ((t_view *)self->width + 1);
	res *= j + (t_view *)self->left;
	res += (t_view *)self->top;
	res += i;

	return  (res);
}
