#include <stdlib.h>

// ft_rrange: start ve end arasındaki sayıları TERS sıralı bir diziye koyar.
// Örnek: ft_rrange(1, 5)  → [5, 4, 3, 2, 1]
//         ft_rrange(5, 1)  → [1, 2, 3, 4, 5]

int *ft_rrange(int start, int end)
{
    int *tab;
    int len;
    int i = 0;

    // 🧠 Aralıktaki eleman sayısı fark + 1 kadar olmalı
    if (start <= end)
        len = end - start + 1;
    else
        len = start - end + 1;

    // 💾 Bellekten len kadar int için yer ayırıyoruz
    tab = (int *)malloc(sizeof(int) * len);
    if (!tab)
        return (NULL);

    // 🧩 Eğer start küçükse (örnek: 1, 5)
    // diziyi büyükten küçüğe doldur
    if (start <= end)
    {
        while (end >= start)
        {
            tab[i] = end;   // 📦 Diziye büyükten küçüğe sırayla yaz
            end--;          // ⬇️ end’i azalt
            i++;            // ➕ dizide bir sonraki indekse geç
        }
    }
    // 🧩 Eğer start büyükse (örnek: 5, 1)
    // diziyi küçükten büyüğe doldur
    else
    {
        while (start >= end)
        {
            tab[i] = start; // 📦 Diziye büyükten küçüğe sırayla yaz
            start--;        // ⬇️ start’ı azalt
            i++;
        }
    }
    // 🔚 Oluşturulan dizinin adresini döndür
    return (tab);
}
//  Bu fonksiyon, start ve end dahil olmak üzere bu iki sayı arasındaki tüm tamsayılardan oluşan bir int dizisi (array) döndürmelidir.
//Ancak dizideki değerler ters sırada (reverse order) olmalıdır.
