
#include <unistd.h>

int main(int ac, char **av)
{
    int i;

    if (ac == 2)
    {
        i = 0;
        // sona git
        while (av[1][i])
            i++;
        // sondaki boşlukları atla
        while (i > 0 && (av[1][i - 1] == ' ' || av[1][i - 1] == '\t'))
            i--;
        // kelimenin sonundan başına kadar git
        while (i > 0 && av[1][i - 1] != ' ' && av[1][i - 1] != '\t')
            i--;
        // kelimeyi yazdır
        while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
        {
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
