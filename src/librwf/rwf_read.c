/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   rwf_read.c                                         :+:      :+:    :+:   */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/02/21 12:41:06 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/03/29 20:01:01 by fwhite42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<unistd.h>
#include<fcntl.h>
#include"librwf.h"
#include"libft.h"


void read_file_recursion(char **dst, int fd, int depth)
{
	char buffer[BUFFER_SIZE];
	int read_return;
	
	read_return = read(fd, buffer, BUFFER_SIZE);
	if (read_return > 0)
		read_file_recursion(dst, fd, depth + 1);
	else if (read_return == 0)
		*dst = ft_calloc((depth + 1) ,BUFFER_SIZE);
	ft_memcpy(*dst + depth * BUFFER_SIZE, buffer, read_return);
}

char	*rwf_read(char *filename)
{
	int	fd;
	char	*data;
	
	fd = open(filename, O_RDONLY);
	read_file_recursion(&data, fd, 0);
	close(fd);
	return (data);
}
