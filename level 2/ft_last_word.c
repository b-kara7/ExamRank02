#include <unistd.h>

static int is_space(char c)
{
    return (c == ' ' || (c >= 9 && c <= 13));
}

int main(int ac, char **av)
{
    int i;
    int start;
    int end;
    char *s;

    if (ac != 2)
    {
        write(1, "\n", 1);
        return (0);
    }

    s = av[1];
    i = 0;

    while (s[i])                 // sona git
        i++;

    i--;                         // son karakter

    while (i >= 0 && is_space(s[i]))   // sondaki boşlukları at
        i--;

    if (i < 0)                   // tamamen boşluksa
    {
        write(1, "\n", 1);
        return (0);
    }

    end = i;                     // son kelimenin sonu

    while (i >= 0 && !is_space(s[i]))  // başını bul
        i--;

    start = i + 1;

    while (start <= end)         // yazdır
    {
        write(1, &s[start], 1);
        start++;
    }

    write(1, "\n", 1);
    return (0);
}














#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int start;

    if (ac == 2)
    {
        i = 0;

        // sona git
        while (av[1][i])
            i++;

        i--; // son gerçek karakter

        // sondaki boşlukları at
        while (i >= 0 && (av[1][i] == ' ' || av[1][i] == '\t'))
            i--;

        // kelime yoksa direkt newline
        if (i < 0)
        {
            write(1, "\n", 1);
            return (0);
        }

        // burası son kelimenin son harfi
        // şimdi başına kadar geri gel
        start = i;
        while (start >= 0 && av[1][start] != ' ' && av[1][start] != '\t')
            start--;

        // kelimeyi yazdır
        start++;
        while (start <= i)
        {
            write(1, &av[1][start], 1);
            start++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
