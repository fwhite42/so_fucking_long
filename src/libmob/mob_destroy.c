void	player_destroy(void *self)
{
	pos_destroy_backpack(self);
	pos_destroy(player_pos(self));
	free(self);
}
