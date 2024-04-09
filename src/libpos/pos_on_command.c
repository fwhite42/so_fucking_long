#include"libpos.h"
#include"libmap.h"
#include"libview.h"
#include"libftprintf.h"
enum {
	UP = 119,
	DOWN = 115,
	LEFT = 97,
	RIGHT = 100
};

int	pos_on_command(int command, void *self)
{
	t_view	camera;

	ft_printf("Input: %i\n", command);
	if (command == UP)
		pos_safe_move(self, 0, -1);
	if (command == DOWN)
		pos_safe_move(self, 0, 1);
	if (command == LEFT)
		pos_safe_move(self, -1, 0);
	if (command == RIGHT)
		pos_safe_move(self, 1, 0);
	camera.width = 8;
	camera.height = 8;
	camera.x = pos_x(self) - camera.width / 2;
	camera.y = pos_y(self) - camera.height / 2;
	map_bind_view(pos_map(self), &camera);
	map_print(pos_map(self));
	//ft_printf("%s\n", map_buff(pos_map(self)));
	pos_print(self);
	return (0);
}
