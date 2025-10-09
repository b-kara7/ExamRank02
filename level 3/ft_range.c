#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *tab;
    int len;
    int i = 0;

    if(min >= max)
        return (NULL);

    len = max - min;
    tab = (int *)malloc(sizeof(int) * len);
    if(!tab)
        return (NULL);

    while (i < len)
    {
        tab[i] = min + i;
        i++;
    }
    retun (tab);
}