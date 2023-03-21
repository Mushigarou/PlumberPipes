#include "libft.h"

void	push_node(t_node **lst, t_node *new)
{
	if (lst && *lst)
	{
		(*lst)->prev = new;
		new->next = *lst;
	}
	*lst = new;
}
