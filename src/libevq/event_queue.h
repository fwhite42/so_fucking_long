/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   event_queue.h                                      :+:      :+:    :+:   */
/*                                                        (@)-=-(@)           */
/*   By: fwhite42 <FUCK THE NORM>                          (  o  )            */
/*                                                       _/'-----'\_          */
/*   Created: 2024/02/26 04:33:48 by fwhite42          \\ \\     // //        */
/*   Updated: 2024/04/09 17:50:15 by fwhite42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef QUEUE_H
# define QUEUE_H
# ifndef MAX_QUEUE_LENGTH
#  define MAX_QUEUE_LENGTH 64
# endif

typedef struct s_user_button_comb
{
	unsigned char up:1;
	unsigned char down:1;
	unsigned char left:1;
	unsigned char right:1;
	unsigned char triangle:1;
	unsigned char ex:1;
	unsigned char square:1;
	unsigned char circle:1;

}	t_user_button_comb

typedef struct s_queue
{
	void	*data[MAX_QUEUE_LENGTH];
	void	**first;
	void	**last;
}	t_queue

void	*queue_create(void);
void	*queue_destroy(void *self);

void	*queue_at(void *self, int index);

size_t	queue_length(void *self);

void	queue_insert_last(void *self, void *data);
void	*queue_remove_first(void *self)

#endif
