#include "libft.h"

static size_t	ft_strnlen(const char *s, size_t n)
{
	size_t	i;

	i = 0;
	while (s[i] && i < n)
		i ++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_src;
	size_t	len_dst;

	len_src = ft_strlen(src);
	len_dst = ft_strnlen(dst, dstsize);
	if (len_dst >= dstsize)
		return (len_src + dstsize);
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
	return (len_src + len_dst);
}
