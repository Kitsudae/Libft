#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s_sub;
	size_t	i;
	size_t	slength;
	int		msize;

	i = 0;
	if (!s)
		return (NULL);
	slength = ft_strlen(s);
	if (start + len > slength && start < slength)
		msize = slength - start;
	else if (start + len <= slength)
		msize = len;
	else
		msize = 0;
	s_sub = (char *)malloc(msize + 1);
	if (!s_sub)
		return (NULL);
	ft_memcpy(s_sub, s + start, msize);
	s_sub[msize] = '\0';
	return (s_sub);
}
