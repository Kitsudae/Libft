#include "libft.h"

char	*free_everything(char **array)
{
	int	j;

	j = 0;
	while (array[j] != 0)
	{
		free(array[j]);
		j++;
	}
	free(array);
	return (NULL);
}

int	ft_word_count(char const *s, char c)
{
	int		del_count;
	int		i;

	del_count = 0;
	if (!*s)
	{
		return (0);
	}
	while (*s == c)
		s++;
	i = 0;
	while (s[i] != 0)
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
			del_count++;
		i++;
	}
	return (del_count);
}

char	**ft_put_line(int del_count, char const *s, char c, char **array)
{
	int		j;
	size_t	len_s;

	j = 0;
	while (j < del_count)
	{
		while (*s == c)
			s++;
		len_s = 0;
		while (s[len_s] != c && s[len_s] != '\0')
			len_s++;
		array[j] = ft_substr(s, 0, len_s);
		if (!array[j])
			return ((char **)free_everything(array));
		s += len_s;
		j++;
	}
	array[j] = 0;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		del_count;

	if (!s)
		return (NULL);
	del_count = ft_word_count(s, c);
	array = ft_calloc(sizeof(char *), (del_count + 1));
	if (!array)
		return (NULL);
	if (del_count == 0)
		return (array);
	return (ft_put_line(del_count, s, c, array));
}
