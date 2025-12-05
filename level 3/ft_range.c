#include <stdlib.h>

int *ft_range(int start, int end)
{
    int *tab;
    int len;
    int i;

    // 1. Uzunluk hesabı (rrange ile tamamen aynı)
    if (start < end)
        len = end - start + 1;
    else
        len = start - end + 1;

    // 2. Yer ayırma (rrange ile tamamen aynı)
    tab = (int *)malloc(sizeof(int) * len);
    if (!tab)
        return (NULL);

    // 3. Doldurma (İŞTE FARK BURADA!)
    i = 0;
    while (i < len)
    {
        if (start < end)
            tab[i] = start + i; // start'ın üzerine ekleyerek gidiyoruz
        else
            tab[i] = start - i; // start'tan eksilterek gidiyoruz
        i++;
    }
    return (tab);
}