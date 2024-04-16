#include"libpos.h"
#include"libftprintf.h"

void	pos_print(void	*self)
{
	ft_printf("Position<%i, %i>\n", pos_x(self), pos_y(self));
}
