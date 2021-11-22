#include "libft.h"

void	*ft_memset(void *dest, int val, size_t len)
{
	unsigned char	*ptr;
	unsigned char	c;
	size_t			i;

	ptr = dest;
	c = val;
	i = 0;
	while (i < len)
	{
		ptr[i] = c;
		i++;
	}
	return (dest = ptr);
}
