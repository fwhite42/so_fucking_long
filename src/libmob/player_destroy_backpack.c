void	player_destroy_backpack(void *self)
{
	free(player_backpack(self));
	player_bind_backpack(self, NULL);
}
