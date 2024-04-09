#include"libpos.h"
#include"libftprintf.h"

void	pos_print(void	*self)
{
	ft_printf("(%p)\t(%p) <- Position", self, pos_map(self));
	ft_printf("(%i; %i) = %c\n", pos_x(self), pos_y(self), pos_read(self));
}
