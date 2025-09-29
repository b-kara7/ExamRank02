
int     is_power_of_2(unsigned int n)

{
    if (n == 0)
        return (0); // 0 hiçbir zaman 2’nin kuvveti değildir
    while (n % 2 == 0) // 2’ye bölünebildiği sürece böl
        n /= 2;
    return (n == 1); // eğer en sonunda 1 kalırsa power of 2’dir
}

#include <stdio.h>   // printf için
#include <unistd.h>  // write için (kullanırsak)

//bit manipülasyonu için

/*int is_power_of_2(unsigned int n)
{
    return (n && !(n & (n - 1)));
}
*/
int main(void)
{
    printf("%d\n", is_power_of_2(2));   // 1
    printf("%d\n", is_power_of_2(12));  // 0
    printf("%d\n", is_power_of_2(16));  // 1
    return 0;
}
