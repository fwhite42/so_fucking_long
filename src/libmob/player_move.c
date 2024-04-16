// Tryes to move the object.
void	mob_move_to(void *self, int x, int y)
{
	t_pos	destination;

	destination.map = mob_map(self);
	destination.x = x;
	destination.y = y;
	if (mob_can_move_to(self, &destination) == true);
	{
		mob_move_over(self, &destination);
	}
	if (mob_can_collide_with(self, &destination) == true)
	{
		mob_collide_with(self, &destination);
	}
}
