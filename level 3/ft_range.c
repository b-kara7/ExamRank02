#include <stdlib.h> // malloc için bu kütüphane şart!

/**
 * ft_range: Verilen min (dahil) ve max (hariç) arasında
 * artan sırada bir tamsayı dizisi oluşturur.
 * Örnek: ft_range(3, 7) -> {3, 4, 5, 6}
 */
int *ft_range(int min, int max)
{
    int *tab;
    int len;
    int i = 0;

    // Eğer min >= max ise aralık oluşturulamaz, NULL döneriz.
    if (min >= max)
        return (NULL);

    // Dizinin uzunluğunu hesaplıyoruz.
    len = max - min;
    tab = (int *)malloc(sizeof(int) * len);

    // Bellek ayrılamadıysa NULL döneriz.
    if (!tab)
        return (NULL);

    // Diziyi min'den başlayarak dolduruyoruz.
    while (i < len)
    {
        tab[i] = min + i;
        i++;
    }
    return (tab);
}