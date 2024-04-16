#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>

void	*random_bytes(size_t size)
{
	int 	fd;
	void	*buff;

	fd = open("/dev/random", O_RDONLY);
	if (fd == -1)
		return (NULL);
	buff = malloc(size);
	if (buff == NULL)
		return (NULL);
	if (read(fd, buff, size) < size)
		return (NULL);
	return (buff);
}
