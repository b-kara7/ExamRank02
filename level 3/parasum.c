int	parasum(int *tab, unsigned int len)
{
	unsigned int i = 0;
	int sum = 0;

	while (i < len)
	{
		sum += tab[i];
		i++;
	}
	return (sum);
}

/*
Açıklama: tab dizisinin içinde len kadar eleman vardır,
 hepsini toplayıp sonucu döndür.

Mantığı
sum değişkeni 0’dan başlar.

tab[i] her elemanı dolaşır ve sum’a ekler.

i < len olana kadar döner.

bittiğinde toplam döner.


 */

