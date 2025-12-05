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
