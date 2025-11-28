#include <unistd.h>

void	putnbr(int n)
{
	char c;

	if (n >= 10)
		putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

int	mini_atoi(char *s)
{
	int i = 0;
	int res = 0;

	while (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + (s[i] - '0');
		i++;
	}
	return (res);
}

int	main(int ac, char **av)
{
	int n;
	int i = 2;

	if (ac == 2)
	{
		n = mini_atoi(av[1]);
		if (n == 1)
			write(1, "1", 1);

		while (i <= n)
		{
			if (n % i == 0)
			{
				putnbr(i);
				n /= i;
				if (n > 1)
					write(1, "*", 1);
			}
			else
				i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

