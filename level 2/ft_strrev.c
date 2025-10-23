
#include <stdio.h>

char *ft_strrev(char *str)
{
    int i = 0;
    int j = 0;
    char tmp;

    while (str[j]) //// 1) string'in uzunluğunu bul
        j++;
    j--; // 2) son indexe git (çünkü j şimdi '\0' üzerinde)
    while (i < j) //3) baştan ve sondan ilerle, ortada buluşana kadar
    {
        tmp = str[i]; //// 4) baştaki ile sondaki yer değiştir burası swap işlemi
        str[i] = str[j];
        str[j] = tmp;
        i++;
        j--;
    }
    return (str);
}
// Bir string’i yerinde ters çevir.


#include <stdio.h>

int main(void)
{
    char s[] = "ezgi";
    
    printf("After: %s\n",ft_strrev(s));
    return 0;
}
