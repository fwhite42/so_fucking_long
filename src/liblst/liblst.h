typedef struct s_list
{
	void		*content;
	struct s_list	*next;
}	t_list;

t_list	*lst_new(void *content);
t_list	*lst_last(t_list *lst);

void	lst_delone(t_list *lst, void (*del)(void*));
void	lst_clear(t_list **lst, void (*del)(void*));

void	lst_add_front(t_list **lst, t_list *new);
void	lst_add_back(t_list **lst, t_list *new);

int	lst_size(t_list *lst);

void	lst_iter(t_list *lst, void (*f)(void *));


t_list	*lst_map(t_list *lst, void *(*f)(void *), void (*del)(void *));
