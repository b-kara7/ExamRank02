#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i = 0;
	int	sign = 1;
	int	result = 0;

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

void	ft_putnbr(int n)
{
	long nb = n;                   // negatifleri düzgün yazmak için long

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	char c = nb % 10 + '0';
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		int	a = ft_atoi(av[1]);
		int	b = ft_atoi(av[3]);
		int	res = 0;

		if (av[2][0] == '+')
			res = a + b;
		else if (av[2][0] == '-')
			res = a - b;
		else if (av[2][0] == '*')
			res = a * b;
		else if (av[2][0] == '/')
			res = a / b;
		else if (av[2][0] == '%')
			res = a % b;
		ft_putnbr(res);
	}
	write(1, "\n", 1);
	return (0);
}
