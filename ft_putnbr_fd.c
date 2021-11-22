#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	nn;

	nn = (long int)n;
	if (nn < 0)
	{
		ft_putchar_fd('-', fd);
		nn *= -1;
	}
	if (nn < 10)
		ft_putchar_fd(nn % 10 + '0', fd);
	else if (nn >= 10)
	{
		ft_putnbr_fd(nn / 10, fd);
		ft_putnbr_fd(nn % 10, fd);
	}
}
