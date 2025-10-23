#include <stdlib.h>
#include <stdio.h>

int *ft_rrange(int min, int max)
{
    int *tab;
    int len;
    int i = 0;

    // Kenar durum kontrolü ft_range ile aynı.
    if (min >= max)
        return (NULL);

    // Uzunluk hesaplaması da aynı.
    len = max - min;
    tab = (int *)malloc(sizeof(int) * len);

    // Bellek kontrolü yine aynı.
    if (!tab)
        return (NULL);

    // Diziyi max-1'den başlayarak geriye doğru dolduruyoruz.
    while (i < len)
    {
        // İşte sihirli satır burası!
        tab[i] = max - 1 - i;
        i++;
    }
    return (tab);
}