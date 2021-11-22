#include "libft.h"

static int	ft_is_in_the_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;

	start = 0;
	if (!s1)
		return (NULL);
	while (s1[start] && ft_is_in_the_set(s1[start], set))
		start++;
	end = ft_strlen(s1) - 1;
	while (end > start && ft_is_in_the_set(s1[end], set))
		end--;
	str = ft_substr(s1, start, end + 1 - start);
	return (str);
}
