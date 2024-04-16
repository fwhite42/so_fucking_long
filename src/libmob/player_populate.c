
void	player_populate(void *self)
{
	int	index;
	void	*position;

	index = ft_strchr(map_buff(map), 'P') - map_buff(self);
	if (index == ft_strrchr(map_buff(map), 'P') - map_buff(self))
		error_fatal("Too many Players", 0);	
	position = position_from_index(index);
	player_set_pos(self, position);
	player_set_hp(self, 100);
	player_set_mp(self, 100);
	player_init_backpack(self);
}
