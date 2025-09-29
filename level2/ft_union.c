#include <unistd.h>  // write için gerekli

int main(int ac, char **av)
{
    int i = 0;                   // stringlerde ilerlemek için sayaç
    int lookup[256] = {0};       // ASCII tablosu kadar kutucuk (başlangıçta hepsi 0)

    if (ac == 3)                 // sadece 2 string girilmişse çalış
    {
        // 1. stringi dolaş
        while (av[1][i])
        {
            if (!lookup[(unsigned char)av[1][i]])   // daha önce yazdırılmamışsa
            {
                lookup[(unsigned char)av[1][i]] = 1; // işaretle
                write(1, &av[1][i], 1);              // ekrana yaz
            }
            i++;
        }

        i = 0; // sıfırla

        // 2. stringi dolaş
        while (av[2][i])
        {
            if (!lookup[(unsigned char)av[2][i]])   // daha önce yazdırılmamışsa
            {
                lookup[(unsigned char)av[2][i]] = 1; // işaretle
                write(1, &av[2][i], 1);              // ekrana yaz
            }
            i++;
        }
    }

    write(1, "\n", 1);           // sonunda yeni satır
    return (0);                  // programı bitir
}



// 2. çözüm 

/*#include <unistd.h>

void    print_unique(char *s, int *lookup)
{
    int i = 0;

    while (s[i])
    {
        if (!lookup[(unsigned char)s[i]])
        {
            lookup[(unsigned char)s[i]] = 1;
            write(1, &s[i], 1);
        }
        i++;
    }
}

int main(int ac, char **av)
{
    int lookup[256] = {0};

    if (ac == 3)
    {
        print_unique(av[1], lookup);
        print_unique(av[2], lookup);
    }
    write(1, "\n", 1);
    return (0);
}


*/