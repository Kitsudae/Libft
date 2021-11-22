#include "libft.h"

static char	*ft_putnbr_str(int n, char *str)
{
	long int	nn;
	char		*num_str;

	nn = (long int)n;
	num_str = str;
	if (nn / 10 != 0)
		num_str = ft_putnbr_str(nn / 10, num_str);
	*num_str++ = (nn % 10) + '0';
	*num_str = '\0';
	return (num_str);
}

static int	ft_count_digit_num(int n)
{
	int		count;

	count = 0;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static char	*ft_zero_case(void)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * 2);
	if (!str)
		return (NULL);
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		is_negative;
	int		count;

	if (n == 0)
		return (ft_zero_case());
	if (n == '\0')
		return (NULL);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	is_negative = 0;
	if (n < 0)
		is_negative = 1;
	if (n < 0)
		n = n * -1;
	count = ft_count_digit_num(n);
	str = (char *)malloc((sizeof(char) * count) + 1 + is_negative);
	if (!str)
		return (NULL);
	if (is_negative)
		str[0] = '-';
	if (is_negative)
		str++;
	str = ft_putnbr_str(n, str) - count - is_negative;
	return (str);
}	
