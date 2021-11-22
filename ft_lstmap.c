#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*new_list;

	new_list = NULL;
	if (!lst || !f)
		return (new_list);
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (new_node)
		{
			ft_lstadd_back(&new_list, new_node);
		}
		else
		{
			ft_lstclear(&new_list, del);
			return (new_list);
		}
		lst = lst->next;
	}
	return (new_list);
}
