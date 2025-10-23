
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int n = 0;
	int i = 2;

	if (ac == 2)
	{
		n = atoi(av[1]);
		if (n == 1)
			printf("1");
		while (i <= n)
		{
			if (n % i == 0)
			{
				printf("%d", i);
				n = n / i;
				if (n != 1)
					printf("*");
				else
					break;
			}
			else
				i++;
		}
	}
	printf("\n");
	return (0);
}
