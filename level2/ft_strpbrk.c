char *ft_strpbrk(const char *s, const char *accept)
{
    int i, j;

    i = 0;
    while (s[i])//Dış döngü – s stringinde gezin
    {
        j = 0;
        while (accept[j])//accept stringinin tüm karakterlerini dolaşıyoruz.
        {
            if (s[i] == accept[j]) //Eğer s[i], accept’teki herhangi bir karaktere eşitse:
//O anki s[i]’nin adresini döndür → yani s stringinin geri kalanı.

//Mesela s = "hello", accept = "aeiou" → s[1] = 'e' eşleşti → "ello" adresi döner.
                return ((char *)&s[i]);
            j++;
        }
        i++;
    }
    return (0);
}
// accept içinde geçen ilk karakteri s içinde bul → o karakterden başlayan string’i döndür. Eğer hiç yoksa NULL.

#include <stdio.h>

char *ft_strpbrk(const char *s, const char *accept);

int main(void)
{
    char *res;

    res = ft_strpbrk("hello", "aeiou");
    if (res)
        printf("Match found: %s\n", res);
    else
        printf("No match\n");

    res = ft_strpbrk("42istanbul", "xyz");
    if (res)
        printf("Match found: %s\n", res);
    else
        printf("No match\n");

    res = ft_strpbrk("abcdef", "xcz");
    if (res)
        printf("Match found: %s\n", res);
    else
        printf("No match\n");

    return 0;
}
