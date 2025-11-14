
#include <stdio.h>   // printf için (test main kullanırsak)

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

int	main(void)
{
	unsigned char c = 'A'; // 65
	unsigned char result = swap_bits(c);

	printf("Original: %d\n", c);     // 65
	printf("Swapped : %d\n", result); // 20
	return (0);
}

/* Mantık
1 byte = 8 bit = iki tane 4-bit parça (nibble).

Amacımız → ilk 4 bit ile son 4 biti yer değiştirmek.
*/
