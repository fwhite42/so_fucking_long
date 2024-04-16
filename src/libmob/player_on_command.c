#include"libplayer.h"

void	player_on_command(int cmd, void *self)
{
	if (cmd == CTRL_ARROW_UP)
		player_move(self, -1, 0);
	else if (cmd == CTRL_ARROW_DOWN)
		player_move(self, 1, 0);
	else if (cmd == CTRL_ARROW_LEFT)
		player_move(self, 0, -1);
	else if (cmd == CTRL_ARROW_RIGHT)
		player_move(self, 0, 1);
	else if (cmd == CTRL_ACTION_UP)
		player_collect(self, 1, 0);
	else if (cmd == CTRL_ACTION_DOWN)
		;
	else if (cmd == CTRL_ACTION_LEFT)
		;
	else if (cmd == CTRL_ACTION_RIGHT)
		;
	else
		;
}
