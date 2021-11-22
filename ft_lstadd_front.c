//#include <stdio.h>
//#include <stdlib.h>
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

//int main ()
//{
//	t_list **node;
//	t_list *new;
//	t_list *current_node;

//	*node = ft_lstnew("I am just a node");
//	new = ;

//	current_node = *node;

//	printf("%s\n", current_node->content);
//;
//	node->next = ft_lstnew("I am just a new noodle"));
//node->next->next = ft_lstnew("I am just a new noodle"));
//		current_node = *node;

//		while (current_node != NULL)
//	{
//		printf("%s\n", current_node->content);
//		current_node = current_node->next;
//	}

//}
