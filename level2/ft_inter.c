
#include <unistd.h>

int	main(int ac, char **av)
{
	int i = 0, j;
	int lookup[256] = {0};

	if (ac == 3)
	{
		while (av[1][i])
		{
			j = 0;
			while (av[2][j])
			{
				if (av[1][i] == av[2][j] && !lookup[(unsigned char)av[1][i]])
				{
					lookup[(unsigned char)av[1][i]] = 1;
					write(1, &av[1][i], 1);
					break; // bulunduysa daha fazla bakmaya gerek yok
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
