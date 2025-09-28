
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

char *ft_strrev(char *str);

int main(void)
{
    char s1[] = "hello";
    char s2[] = "42istanbul";
    char s3[] = "a";
    char s4[] = "";

    printf("Before: %s | After: %s\n", s1, ft_strrev(s1));
    printf("Before: %s | After: %s\n", s2, ft_strrev(s2));
    printf("Before: %s | After: %s\n", s3, ft_strrev(s3));
    printf("Before: %s | After: %s\n", s4, ft_strrev(s4));

    return 0;
}
