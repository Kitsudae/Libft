#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	len_s;

	c = (char)c;
	len_s = ft_strlen(s);
	i = 0;
	if (c == '\0')
		return (ft_strchr(s, '\0'));
	while (len_s >= 0)
	{
		if (s[len_s] == c)
			return ((char *)&s[len_s]);
		len_s--;
	}
	return (NULL);
}
