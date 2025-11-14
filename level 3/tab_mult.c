#include <unistd.h>
#include <stdlib.h>

void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}

int	main(int ac, char **av)
{
	int	n;
	int	i = 1;

	if (ac == 2)
	{
		n = atoi(av[1]);
		while (i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(n);
			write(1, " = ", 3);
			ft_putnbr(i * n);
			write(1, "\n", 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
