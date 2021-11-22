#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*sc;

	c = (unsigned char)c;
	sc = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (sc[i] == c)
			return ((void *)&sc[i]);
		i++;
	}
	return (NULL);
}
