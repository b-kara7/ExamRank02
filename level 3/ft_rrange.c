
#include <stdlib.h>

int *ft_rrange(int start, int end)
{
    int *tab;
    int len;
    int i;

    // Uzunluğu en başta mutlak değer + 1 olarak hesapla
   if (start < end)
        len = end - start + 1;
    else
        len = start - end + 1;

    tab = (int *)malloc(sizeof(int) * len); // +1'e gerek kalmadı çünkü len içinde var
    if (!tab)
        return (NULL);

    i = 0;
    while (i < len) // <= yerine < kullanırsın, daha standart olur
    {
        if (start < end)
            tab[i] = end - i;
        else
            tab[i] = end + i;
        i++;
    }
    return (tab);
}

