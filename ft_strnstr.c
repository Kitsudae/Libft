#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	j;
	size_t	i;
	size_t	len_needle;

	len_needle = ft_strlen(needle);
	if (needle[0] == 0)
		return ((char *)haystack);
	if (*haystack == 0)
		return (NULL);
	i = 0;
	j = 0;
	while (i + j < len && haystack[i] != 0)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
			if (j == len && needle[j] != '\0')
				return (NULL);
		}
		i++;
	}
	return (NULL);
}
