#include <stdio.h>

void    putnbr(int n)
{
    if (n >= 10)
        putnbr(n / 10);
    printf("%d", n % 10);
}

int mini_atoi(char *s)
{
    int i = 0;
    int res = 0;

    while (s[i] >= '0' && s[i] <= '9')
    {
        res = res * 10 + (s[i] - '0');
        i++;
    }
    return (res);
}

int main(int ac, char **av)
{
    int n;
    int i = 2;

    if (ac == 2)
    {
        n = mini_atoi(av[1]);

        if (n == 1)
            printf("1");

        while (i <= n)
        {
            if (n % i == 0)
            {
                putnbr(i);
                n /= i;
                if (n > 1)
                    printf("*");
            }
            else
                i++;
        }
    }
    printf("\n");
    return (0);
}
