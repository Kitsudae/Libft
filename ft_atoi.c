#include "libft.h"

static int	ft_isspace(int c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

static int	ft_check_min_max(int base, int sign, char c)
{
	if (base > 214748364 && sign < 0)
		return (0);
	if (base == 214748364 && sign < 0 && (c - '0') > 8)
		return (0);
	if (base > 214748364 && sign > 0)
		return (-1);
	if (base == 214748364 && sign > 0 && (c - '0') > 7)
		return (-1);
	return (1);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	base;

	i = 0;
	base = 0;
	sign = 1;
	while (ft_isspace(str[i]) || (str[i] == '+' && ft_isdigit(str[i + 1])))
		i++;
	if (str[i] == '-')
		sign *= -1;
	if (str[i] == '-')
		i++;
	if (str[i] == '+' && !(ft_isdigit(str[i + 1])))
		return (0);
	while (ft_isdigit(str[i]))
	{
		if (ft_check_min_max(base, sign, i) == 0)
			return (0);
		if (ft_check_min_max(base, sign, i) == -1)
			return (-1);
		base = (10 * base) + (str[i] - '0');
		i++;
	}
	return (base * sign);
}
