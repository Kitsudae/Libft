#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*sc1;
	unsigned char	*sc2;

	sc1 = (unsigned char *)s1;
	sc2 = (unsigned char *)s2;
	i = 0;
	while (i < n && (sc1[i] != 0 || sc2[i] != 0 ))
	{
		if ((sc1[i] > sc2[i]) || (sc1[i] < sc2[i]))
			return ((int)(sc1[i] - sc2[i]));
		i++;
	}
	return (0);
}
