
#include <stdio.h>

int mini_atoi(char *s)
{
    int i = 0;
    int num = 0;

    while (s[i] >= '0' && s[i] <= '9')
    {
        num = num * 10 + (s[i] - '0');
        i++;
    }
    return num;
}

int main(int ac, char **av)
{
    int n;
    int i = 2;

    if (ac == 2)
    {
        n = mini_atoi(av[1]);

        if (n == 1)
        {
            printf("1\n");
            return 0;
        }

        while (i <= n)
        {
            if (n % i == 0)
            {
                printf("%d", i);
                n /= i;
                if (n > 1)
                    printf("*");
            }
            else
                i++;
        }
    }
    printf("\n");
    return 0;
}
