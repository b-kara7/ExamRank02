#include <unistd.h>

int main(int ac, char **av)
{
    // Sayaçlar: i, s1 için; j, s2 için.
    int i = 0;
    int j = 0;

    // Sadece 2 argüman varsa devam et
    if (ac == 3)
    {
        // String'lerden herhangi biri bitene kadar devam et
        while (av[1][i] && av[2][j])
        {
            // Eğer s1'de aradığımız karakteri s2'de bulursak...
            if (av[1][i] == av[2][j])
                i++; // ...s1'deki bir sonraki karaktere geç.
            
            // s2'de her zaman bir sonraki karaktere ilerle.
            j++;
        }

        // Döngü bittiğinde kontrol: s1'in sonuna ulaştık mı?
        if (av[1][i] == '\0')
            write(1, "1", 1); // Evet, ulaştık.
        else
            write(1, "0", 1); // Hayır, ulaşamadık.
    }

    write(1, "\n", 1);
    return (0);
}