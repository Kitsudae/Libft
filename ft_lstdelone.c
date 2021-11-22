#include "libft.h"
// #include <stdio.h>

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	(*del)(lst->content);
	free(lst);
}

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*current_node;

// 	lst = ft_lstnew(ft_strdup("1"));
// 	lst->next = ft_lstnew(ft_lstnew(ft_strdup("2")));
// 	lst->next->next = ft_lstnew(ft_strdup("3"));
// 	current_node = lst;
// 	while (current_node != NULL)
// 	{
// 		printf("%s\n", current_node->content);
// 		current_node = current_node->next;
// 	}
// 	ft_lstdelone(lst, del);
// 	printf("%s\n", ft_strdup("After deleting the first node"));
// 	current_node = lst;
// 	while (current_node != NULL)
// 	{
// 		printf("%s\n", current_node->content);
// 		current_node = current_node->next;
// 	}
// }
