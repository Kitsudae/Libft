#include "libft.h"

static char	*ft_strcopy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] != 0 && i < dstsize - 1)
		{				
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	 while (src[i] != 0)
		i++;
	return (dst);
}

static char	*ft_concat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_src;
	size_t	len_dst;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	if (len_dst >= dstsize)
		return (NULL);
	if (dstsize > 0 && dst != 0)
	{
		i = len_dst;
		j = 0;
		while (src[j] != 0 && j < dstsize - 1 - len_dst)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = 0;
	}
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*s_concat;
	char	*s1_copy;

	if (!s1)
		return (ft_strdup(s2));
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	s_concat = (char *)malloc(size);
	if (!s_concat)
		return (NULL);
	s1_copy = ft_strcopy(s_concat, s1, ft_strlen(s1) + 1);
	s_concat = ft_concat(s1_copy, s2, size);
	return (s_concat);
}
