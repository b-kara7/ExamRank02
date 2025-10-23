#include <stdio.h>
#include <stdlib.h>

// pgcd fonksiyonu — sadece mantığı ayrı görmek için fonksiyon haline getirildi
int	ft_pgcd(int a, int b)
{
	if (a <= 0 || b <= 0)
		return (0);
	while (a != b)
	{
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	return (a);
}

// test için main
int	main(void)
{
	int a;
	int b;
	int result;

	a = 42;
	b = 12;
	result = ft_pgcd(a, b);
	printf("pgcd(%d, %d) = %d\n", a, b, result);

	a = 14;
	b = 77;
	result = ft_pgcd(a, b);
	printf("pgcd(%d, %d) = %d\n", a, b, result);

	a = 17;
	b = 3;
	result = ft_pgcd(a, b);
	printf("pgcd(%d, %d) = %d\n", a, b, result);

	a = 42;
	b = 10;
	result = ft_pgcd(a, b);
	printf("pgcd(%d, %d) = %d\n", a, b, result);

	return (0);
}
