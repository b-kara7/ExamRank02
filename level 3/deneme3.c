#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
    unsigned int n =0;

    if(a == 0 || b == 0)
        return (NULL);
    if(a>b)
        n= a;
    else 
        n= b;
    while (1)
    {
        if(n % a == 0 && n % b == 0)
            return(n);
        n++;
    }
}

int	parasum(int *tab, unsigned int len)
{
    unsigned int i = 0;
    int sum;

    while (i < len)
    {
        sum += tab[i];
        i++;    
    }
    return(sum);
}

int main(int ac, char **av)
{
    int i = 0;
    int space = 0;

    if(ac == 2)
    {
        while(av[1][i] == ' ' || av[1][i] == '\t')
            i++;
        while (av[1][i])
        {
            if(av[1][i] == ' ' || av[1][i] == '\t')
                space = 1;
            else
            {
                if(space)
                {
                    write(1, "   ", 1);
                    space = 0;
                }
                write(1, &av[1][i], 1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return(0);
}

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i = 0;
	int	num = 0;

	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num);
}

void	ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	char c = (n % 10) + '0';
	write(1, &c, 1);
}

int main(int ac, char **av)
{
    int a;
    int b;

    if(ac == 3)
    {
        a = ft_atoi(av[1]);
        b = ft_atoi(av[2]);
        if(a >0 && b >0)
        {
            while (a !=b)
            {
                if(a > b)
                    a -=b;
                else
                    b -=a;
            }
            ft_putnbr(a);
        }
    }
    write(1, "\n", 1);
    return(0);
}