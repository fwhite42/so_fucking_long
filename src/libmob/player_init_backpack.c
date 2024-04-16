void	player_init_backpack(void *self)
{
	int	*backpack;

	backpack = ft_calloc(256, sizeof(int));
	player_bind_backpack(self, backpack);
}
