#include <unistd.h>

int	ft_atoi(char *s)
{
	int n = 0;
	while (*s >= '0' && *s <= '9')
		n = n * 10 + (*s++ - '0');
	return (n);
}

int	is_prime(int n)
{
	int i = 2;
	if (n < 2)
		return (0);
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	char c = n % 10 + '0';
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int n = 0;
	int sum = 0;
	int i = 2;

	if (ac == 2)
	{
		n = ft_atoi(av[1]);
		while (i <= n)
		{
			if (is_prime(i))
				sum += i;
			i++;
		}
		ft_putnbr(sum);
	}
	write(1, "\n", 1);
	return (0);
}
