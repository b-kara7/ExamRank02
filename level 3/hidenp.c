#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int j = 0;

	if (ac == 3)
	{
		while (av[1][i] && av[2][j])
		{
			if (av[1][i] == av[2][j])
				i++;
			j++;
		}
		if (av[1][i] == '\0')
			write(1, "1\n", 2);
		else
			write(1, "0\n", 2);
	}
	else
		write(1, "\n", 1);
	return (0);
}

/* i → s1’in imleci, j → s2’nin imleci.

s2 üzerinde soldan sağa yürürken eşleşme gördükçe i’yi ilerletiyoruz.

döngü bittiğinde s1 tamamen bitti ise (av[1][i] == '\0') ⇒ 1, yoksa 0.

sadece write kullanıldı, ek fonksiyon yok, while ile yazıldı.

i → s1’in imleci, j → s2’nin imleci.

s2 üzerinde soldan sağa yürürken eşleşme gördükçe i’yi ilerletiyoruz.

döngü bittiğinde s1 tamamen bitti ise (av[1][i] == '\0') ⇒ 1, yoksa 0.

sadece write kullanıldı, ek fonksiyon yok, while ile yazıldı.

*/