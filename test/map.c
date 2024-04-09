#include"libpos.h"
#include"libmap.h"
#include"libft.h"
#include"libftprintf.h"
#include"librwf.h"
#include"libview.h"

int main(void)
{
	int	index;
	void	*pos;
	void	*map;
	
	ft_printf("Loading map...\n");
	map = map_create(rwf_read("./assets/map/simple.ber"));
	map_populate(map);
	ft_printf("...Done\n");
	ft_printf("Finding Player...\n");
	index = (ft_strchr(map_buff(map), 'P') - map_buff(map));
	pos = pos_from_index(map, index);
	ft_printf("...Done\n");
	pos_print(pos);
	map_print(map);
	ft_printf("Moving Player\n");
	pos_move(pos, 4, 0);
	pos_print(pos);
	map_print(map);
}
