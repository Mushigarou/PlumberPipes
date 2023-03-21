#include "libft.h"

// **	Insert a node before a given node
void	addafter_node(t_node *prev_node, t_node *new_node)
{
	if (!prev_node)
		return ;
	// printf("new_node = %s", new_node->data);
	new_node->prev = prev_node;
	new_node->next = prev_node->next;
	prev_node->next = new_node;//
	if (new_node->next)
		new_node->next->prev = new_node;
	return ;
}
