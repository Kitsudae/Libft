#include "libft.h"
//#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head->content = content;
	head->next = NULL;
	return (head);
}

//int	main(void)
//{
//	char			*content;
//	struct s_list	*head;

//	content = "hmmmmm";
//	head = ft_lstnew(content);
//	printf("%s\n", ft_lstnew(content)->content);
//}
