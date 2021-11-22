#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	len_s;

	c = (const char)c;
	len_s = ft_strlen(s);
	i = 0;
	if (c == 0)
		return ((char *)&s[len_s]);
	while (i < len_s)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
