#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        int seen[256] = {0};
        int i = 0;
        int j;
        
        while (argv[1][i])
        {
            // Eğer bu karakteri daha önce yazdırmadıysak
            if (seen[(unsigned char)argv[1][i]] == 0)
            {
                j = 0;
                // İkinci stringde var mı kontrol et
                while (argv[2][j])
                {
                    if (argv[1][i] == argv[2][j])
                    {
                        write(1, &argv[1][i], 1);
                        seen[(unsigned char)argv[1][i]] = 1;
                        break;
                    }
                    j++;
                }
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
