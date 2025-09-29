int max(int *tab, unsigned int len)
{
    int m;

    if (len == 0)
        return (0);
    m = tab[0];
    while (len--)
    {
        if (tab[len] > m)
            m = tab[len];
    }
    return (m);
}

/*📌 Mantık
len == 0 → direkt 0 dön.

m = tab[--len]; → son elemanı başlangıç olarak alıyoruz.

while (len--) → sondan başa doğru tarıyoruz.

Daha büyük eleman bulursak m güncelleniyor.

En sonunda m return ediliyor.
*/
#include <stdio.h>

int     max(int *tab, unsigned int len);

int     main(void)
{
    int a[] = {3, 7, 2, 9, 5};
    printf("%d\n", max(a, 5));   // 9
    printf("%d\n", max(a, 0));   // 0
}
