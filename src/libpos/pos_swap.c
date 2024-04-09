#include"libpos.h"
#include"libmap.h"

void	pos_swap(void *this, void *that)
{
	int	tmp_x;
	int	tmp_y;
	char	tmp_val;
	
	tmp_val = pos_read(this);
	tmp_x = pos_x(this);
	tmp_y = pos_y(this);
	pos_write(this, pos_read(that));
	pos_set_x(this, pos_x(that));
	pos_set_y(this, pos_y(that));
	pos_write(that, tmp_val);
	pos_set_x(that, tmp_x);
	pos_set_y(that, tmp_y);
}
