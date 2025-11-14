#include <unistd.h>

#include <stdlib.h>

static int len_calc(long n)
{
	int len=0;
	if(n <= 0)
		len++;
	while (n)
	{
		n /=10;
		len++;
	}
	return(len);
}
char *ft_itoa(int n)
{
	long nb = n;
	int len =len_calc(nb);
	char *s=malloc( len + 1);

	if(!s)
		return(NULL);
	s[len] = '\0';
	if(nb == 0)
		s[0] = '0';
	if (nb < 0)
	{
		s[0]= '-';
		nb = -nb;
	}
	while(nb > 0)
	{
		s[--len] = (nb % 10) + '0';
		nb /=10;
	}
	return(s);
}