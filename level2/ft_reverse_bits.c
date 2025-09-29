#include <unistd.h>  // write için
#include <stdio.h>   // test için

unsigned char	reverse_bits(unsigned char octet)
{
	int i = 8;
	unsigned char res = 0;

	while (i--)
	{
		res = (res << 1) | (octet & 1);
		octet >>= 1;
	}
	return (res);
}

int	main(void)
{
	unsigned char c = 'A'; // 65 -> 01000001
	unsigned char r = reverse_bits(c);
	printf("Original: %d\n", c);   // 65
	printf("Reversed: %d\n", r);   // 130
	return (0);
}



/*Mantık
unsigned char = 8 bit.

Amacımız → bitleri ters çevirmek: en sağdaki en sola, en soldaki en sağa gidecek.

Yani abcd efgh → hgfedcba.
*/