#ifndef LIBARR_H
# include<stdlib.h>
# include<stdbool.h>
# define ARR_LENGTH_THREASHOLD 2 >> 16

typedef struct s_arr
{
	void	**data;
	int	length;
	int	maxsize;
	int	stepsize;
}	t_arr;

void	*arr_create(int step_size, int max_size);
void	arr_destroy(void *self);
bool	arr_increase_max_size(void *self);
void	arr_print(void *self);

// Read
void	*arr_read_at(void *self, int index);
void	*arr_pop(void *self);

// Write
bool	arr_write_at(void *self, int index, void *item);
bool	arr_push(void *self, void *item);

// Getters
int	arr_length(void *self);
int	arr_maxsize(void *self);
int	arr_stepsize(void *self);
void	**arr_data(void *self);
// Setters
void	arr_bind_data(void *self, void **data);
void	arr_set_stepsize(void *self, int stepsize);
void	arr_set_length(void *self, int lengt);
void	arr_set_maxsize(void *self, int maxsize);
// Functional Programming
void	arr_foreach(void *self, void (*fn)());
void	*arr_map(void *self, void *(*fn)());
void	*arr_reduce(void *self, void *(*fn)(), void *memory);
#endif
