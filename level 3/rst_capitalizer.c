#include <unistd.h>

void	rstr_capitalizer(char *str)
{
	int	i = 0;

	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;                      // tümünü küçült
		i++;
	}
	i = 0;
	while (str[i])
	{
		// eğer harf ve sonraki karakter harf değilse = kelimenin sonu
		if ((str[i] >= 'a' && str[i] <= 'z')
			&& !(str[i + 1] >= 'a' && str[i + 1] <= 'z')
			&& !(str[i + 1] >= 'A' && str[i + 1] <= 'Z'))
			str[i] -= 32;                     // son harfi büyüt
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i = 1;

	if (ac >= 2)
	{
		while (i < ac)
		{
			rstr_capitalizer(av[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
