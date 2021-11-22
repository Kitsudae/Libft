#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*sc1;
	unsigned char	*sc2;

	if (n == 0)
		return (0);
	sc1 = (unsigned char *)s1;
	sc2 = (unsigned char *)s2;
	if (sc1[0] == '\0' && sc2 == '\0')
		return (0);
	i = 0;
	while (i <= n - 1)
	{
		if ((sc1[i] > sc2[i]) || (sc1[i] < sc2[i]))
			return ((int)(sc1[i] - sc2[i]));
		i++;
	}
	return (0);
}
