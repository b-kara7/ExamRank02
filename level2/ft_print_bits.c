#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i = 8;
	while (i--)
	{
		if ((octet >> i) & 1)
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
}
#include <unistd.h>

void	print_bits(unsigned char octet);

int	main(void)
{
	print_bits(2);   // 00000010
	write(1, "\n", 1);
	print_bits(255); // 11111111
	write(1, "\n", 1);
	print_bits(128); // 10000000
	write(1, "\n", 1);
	return (0);
}
/* Mantık
unsigned char = 1 byte = 8 bit.

En soldan en sağa doğru, her bit değerini yazdıracağız.

Bunu yapmak için bit shift (>>) ve & (and) operatörlerini kullanıyoruz.
*/
