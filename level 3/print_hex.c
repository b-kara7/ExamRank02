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


void	print_hex(unsigned int n)
{
	char *base = "0123456789abcdef";

	if (n >= 16)
		print_hex(n / 16);
	write(1, &base[n % 16], 1);
}
/*
base dizisi, hexadecimal sistemdeki tüm sembolleri tutar.
(0–9 arası rakamlar, 10–15 arası a–f)

*/



int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int n = ft_atoi(av[1]);
		print_hex(n);
	}
	write(1, "\n", 1);
	return (0);
}

/*
sadece 1 argüman varsa yazdırır, yoksa sadece newline basar.
newline her durumda yazılır, bu çok önemli.



*/