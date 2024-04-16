#include<stdio.h>
#include"librandom.h"

int	main(void)
{
	unsigned char	*data;
	int	i;

	data = random_bytes(32);
	i = 0;
	printf("Buffer<");
	while (i < 32)
	{
		printf("%x", data[i]);
		if (i != 31)
			printf(" ");
		i++;
	}
	printf(">\n");
}
