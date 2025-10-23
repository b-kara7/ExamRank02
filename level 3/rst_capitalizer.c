#include <unistd.h>

void	rstr_cap(char *s)
{
	int	i = 0;

	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32; // hepsini küçük yap
		if ((s[i] >= 'a' && s[i] <= 'z') &&
			(s[i + 1] == ' ' || s[i + 1] == '\t' || s[i + 1] == '\0'))
			s[i] -= 32; // kelimenin son harfini büyük yap
		write(1, &s[i], 1);
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
			rstr_cap(av[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}
