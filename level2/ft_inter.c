#include <unistd.h>

int	ft_putchar(char c)
{
	return write(1, &c, 1);
}

int	main(void)
{
	char *s1 = "padinton";     // 1. string
	char *s2 = "paqefwtdjetyiytjneytjoeyjnejeyj"; // 2. string

	int	i = 0, j;
	int	lookup[256] = {0};

	while (s1[i]) // ilk stringin her karakterini gez
	{
		j = 0;
		while (s2[j]) // ikinci stringin her karakterini gez
		{
			if (s1[i] == s2[j] && !lookup[(int)s2[j]])
			{
				lookup[(int)s2[j]] = 1;
				ft_putchar(s2[j]); // ortak karakteri yazdır
			}
			j++;
		}
		i++;
	}
	ft_putchar('\n');
	return (0);
}
