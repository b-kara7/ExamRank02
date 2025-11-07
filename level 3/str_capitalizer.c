#include <unistd.h>

void	str_capitalizer(char *str)
{
	int	i = 0;

	while (str[i])
	{
		
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;

		if ((str[i] >= 'a' && str[i] <= 'z') &&
			(i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t'))
			str[i] -= 32; // büyük yap

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
			str_capitalizer(av[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
