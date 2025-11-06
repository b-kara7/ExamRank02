#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int end;
    int start;

    if(ac ==2)
    {
        int i = 0;
        while (av[1][i])
            i++;
        i--;
        while (i >=0)
        {
            while (i >= 0 && (av[1][i] == ' ' || av[1][i] == '\t'))
            i--;
        end = i;
        while (i >= 0 && (av[1][i] !=' ' && av[1][i] !='\t'))
            i--;
        start = i + 1;
        if(start <= end)
        {
            write(1, &av[1][start], end -start +1);
            if(i > 0)
                write(1, " ", 1);
        }
        }
        
    }
    write(1, "\n", 1);
    return (0);
}