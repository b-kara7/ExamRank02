#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int space = 0;

    if (ac == 2)
    {
        // Baştaki boşlukları atla
        while (av[1][i] == ' ' || av[1][i] == '\t')
            i++;

        while (av[1][i])
        {
            // Eğer boşluk veya tab ise, işaretle ama hemen yazma
            if (av[1][i] == ' ' || av[1][i] == '\t')
                space = 1;
            else
            {
                // Bir kelimenin başındaysak (önce boşluk gördüysek)
                if (space)
                {
                    write(1, "   ", 3); // 3 boşluk yaz
                    space = 0;
                }
                write(1, &av[1][i], 1); // karakteri yaz
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
