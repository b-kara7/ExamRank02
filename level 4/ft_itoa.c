#include <stdlib.h>

int	len_count(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	long	n;
	int		len;
	char	*str;

	// 1. adım: sayıyı long’a çevir
	n = nbr;

	// 2. adım: kaç karakter olacağını hesapla
	len = len_count(n);

	// 3. adım: bellek ayır
	str = malloc(len + 1);
	if (!str)
		return (NULL);

	// 4. adım: stringin sonuna null koy
	str[len--] = '\0';

	// 5. adım: eğer sayı sıfırsa direkt yaz
	if (n == 0)
		str[0] = '0';

	// 6. adım: negatifse işareti koy ve pozitife çevir
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}

	// 7. adım: sayıyı sondan başlayarak karaktere çevir
	while (n > 0)
	{
		str[len--] = (n % 10) + '0';
		n /= 10;
	}

	// 8. adım: oluşan stringi döndür
	return (str);
}
