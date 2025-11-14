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