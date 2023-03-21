#include "libft.h"

// ** Adds the newprev_node before the next_node
void	addbefore_node(t_node *next_node, t_node *newprev_node)
{
	if (!next_node)
		return ;
	newprev_node->next = next_node;
	newprev_node->prev = next_node->prev;
	if (next_node->prev)
		next_node->prev->next = newprev_node;
	next_node->prev = newprev_node;
}
