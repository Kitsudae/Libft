#include "libft.h"
//#include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	t_list	*temp;
	int		i;

	temp = lst;
	i = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}

//int	main(void)
//{
//	t_list	*l;

//	l = ft_lstnew(ft_strdup("1"));
//	l->next = ft_lstnew(ft_strdup("2"));
//	l->next->next = ft_lstnew(ft_strdup("3"));
//	printf("%d", ft_lstsize(l));
//}
