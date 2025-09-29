#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;
	int r;

	if(argc == 2)
	{
		i = 0;
	
		while(argv[1][i])
		{
			r = 1;
			if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
				r = argv[1][i] - 'a' + 1;
			else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				r = argv[1][i] - 'A' + 1;
			while(r-- > 0)
				write(1, &argv[1][i], 1);
			i++;
		}

	}
	write(1, "\n", 1);
	return 0;
}

/*  Argüman olarak bir string alıyoruz.

Her harfi alfabedeki sırasına göre tekrar ediyoruz.

Büyük/küçük fark etmiyor (index aynı).

Harf değilse → olduğu gibi bir kez yaz.
*/