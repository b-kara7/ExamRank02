
#include <stdlib.h>

static int len_calc(long n)
{
	int len = 0;

	if (n <= 0)
		len++;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		len;
	char	*str;

	nb = n;
	len = len_calc(nb);
	str = malloc(len + 1);
	if (!str)
		return (0);
	str[len] = '\0';
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		str[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}
#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int n);

int main(void)
{
    char *s;

    s = ft_itoa(0);
    printf("%s\n", s);
    free(s);

    s = ft_itoa(12345);
    printf("%s\n", s);
    free(s);

    s = ft_itoa(-9876);
    printf("%s\n", s);
    free(s);

    s = ft_itoa(-2147483648);
    printf("%s\n", s);
    free(s);

    return 0;
}
