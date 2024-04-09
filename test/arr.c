#include"libarr.h"
#include"libft.h"
#include"libftprintf.h"
#include<stdio.h>

int	main(void)
{
	void	*arr;
	void	*item;
	size_t	len;

	len = 10;
	// Test 1
	ft_printf("---------------------\n");
	ft_printf("\t > Generating Array (of size %i)\n", len);
	arr = arr_create(8,8);
	item = NULL;
	while (len--)
	{
		ft_printf("Elments to push: %i\n", len + 1);
		while (!item)
			item = ft_calloc(1, 16);
		ft_printf("Pushing %p\n", item);
		arr_push(arr, item);
		item = NULL;
	}
	ft_printf("\t > Done\n");
	arr_print(arr);
	// Test 2
	ft_printf("---------------------\n");
	len = 5;
	ft_printf("Popping %i elments...\n", len);
	ft_printf("Current length: %i\n", arr_length(arr));
	while (len--)
	{
		ft_printf("Popped entry: %p\n", arr_pop(arr));
		ft_printf("Current length: %i\n", arr_length(arr));
	}
	arr_print(arr);
	// Test 3
	void	*arr2;
	arr2 = arr_create(1,1);
	len = 10;
	while (len--)
		arr_push(arr2, NULL);
	arr_print(arr2);
	len = 10;
	while (len--)
	{
		arr_write_at(arr2, len, arr_read_at(arr, 5 - len));
	}
	arr_print(arr2);
	arr_foreach(arr, free);
	arr_destroy(arr);
	arr_destroy(arr2);
	return (0);
}
