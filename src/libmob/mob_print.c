#include"libplayer.c"

void	player_print(void *self)
{
	int	i;
	ft_printf("(%p)\tPlayer", self);
	ft_printf("[hp -> %i, mp -> %i]\n", player_hp(self), player_mp(self));
	ft_printf("Player Backpack:\n");
	i = 0
	while (i < 256)
	{
		if (player_backpack(self)[i] > 0)
		{
			ft_printf("%c", i);
			ft_printf(" : %i", player_backpack(self)[i]);
		}
		i++;
	}
}
