
#include <unistd.h>

int main(int ac, char **av)
{
    int i= 0;
    int start= 0;

    if (ac == 2)
    {
        while (av[1][i])
        {
            while (av[1][i] == ' ' || av[1][i] == '\t')
                i++;
            if(av[1][i]) // yeni kelimenin başlangıcı
             start = i;
            while(av[1][i] && av[1][i] != ' ' &&  av[1][i] !='\t')
                i++;
        }
        while(av[i][start] && av[1][start] !=' ' && av[1][start] !='\t')
        {
            write(1, &av[1][start], 1);
            start++;
        }
    }
    write(1, "\n", 1);
    return (0);
}