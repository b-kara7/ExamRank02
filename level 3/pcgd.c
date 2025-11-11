
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i = 0;
	int	num = 0;

	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num);
}

void	ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	char c = (n % 10) + '0';
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	a;
	int	b;

	if (ac == 3)
	{
		a = ft_atoi(av[1]);
		b = ft_atoi(av[2]);
		if (a > 0 && b > 0)
		{
			while (a != b)
			{
				if (a > b)
					a -= b;
				else
					b -= a;
			}
			ft_putnbr(a);
		}
	}
	write(1, "\n", 1);
	return (0);
}
