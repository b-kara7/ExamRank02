#include <stdlib.h>


static int len_calc(long n)
{
	int len = 0;
	
	if(n <= 0)
		len++;
	while (n > 0)
	{
		n /=10;
		len++;
	}
	return(len);
}

char *ft_itoa(int n)
{
	long nb;
	int len;
	char *s;

	nb = n;
	len=len_calc(nb);
	s=malloc(len + 1);

	s[len]= '\0';

	if(nb == 0)
		s[0] = '0';
	if(n < 0)
	{
		s[0]= '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		s[--len] = (nb % 10) + '0';
		nb /=10;
	}
	return(s);
}

#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int n);

int main(void)
{
    printf("%s\n", ft_itoa(0));
    printf("%s\n", ft_itoa(42));
    printf("%s\n", ft_itoa(-42));
    printf("%s\n", ft_itoa(123456));
    printf("%s\n", ft_itoa(-2147483648));
}
