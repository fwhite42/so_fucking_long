#include"libft.h"
#include<stdio.h>
#include"libmap.h"

static int	len(char *buff)
{
	char *ptr;

	if (buff == NULL)
		return (0);
	ptr = ft_strchr(buff, '\n');
	if (ptr == NULL)
		return ft_strlen(buff);
	return ptr - buff;
}

void	map_populate(void *self)
{
	t_map *map;
	
	if (self == NULL)
		return ;
	map = self;
	map->width = len(map->buff);
	if (map->width == 0)
	{
		map->height = 0;
		return ;
	}
	map->height = 1;
	while (len(map->buff + (map->height * (map->width + 1))) == map->width)
		map->height++;
}
