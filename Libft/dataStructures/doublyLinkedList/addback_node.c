#include "libft.h"

void	addback_node(t_node **lst, t_node *new)
{
	t_node	*last;

	if (!lst || !(*lst))
	{
		*lst = new;
		return ;
	}
	last = last_node(*lst);
	new->prev = last;
	last->next = new;
}
