#include <unistd.h>                 // sadece write kullanacağız

// av[i] gibi "pozitif tam sayı" string'ini sayıya çevirir (ör: "42" -> 42)
// (Boşluk, +/-, harf vb. kontrol etmez; sınav girdileri zaten temiz gelir)
int	ft_atoi(char *s)
{
	int n = 0;                      // biriktireceğimiz sonuç

	while (*s)                      // string bitene kadar
	{
		n = n * 10 + (*s - '0');    // soldan sağa basamak ekleme
		s++;                        // bir sonraki karaktere geç
	}
	return (n);                     // oluşan tamsayıyı döndür
}

// write ile sayıyı ekrana basar (sadece 0..INT_MAX için yeterli)
// Mantık: büyükten küçüğe (sol basamaklardan) yazmak için özyineleme
void	ft_putnbr(int n)
{
	if (n >= 10)                    // iki ya da daha çok basamak varsa
		ft_putnbr(n / 10);          // önce sol tarafı yaz
	char c = n % 10 + '0';          // sondaki basamak (ASCII'ye çevir)
	write(1, &c, 1);                // tek karakter yaz
}

int	main(int ac, char **av)
{
	if (ac == 3)                     // tam 2 argüman beklenir: ./pgcd a b
	{
		int a = ft_atoi(av[1]);     // 1. argümanı sayıya çevir
		int b = ft_atoi(av[2]);     // 2. argümanı sayıya çevir
		int n;                      // aday bölen (küçükten başlamak mantıklı)

		if (a <= 0 || b <= 0)       // 0 veya negatifse subject gereği geçersiz
		{
			write(1, "\n", 1);      // sadece newline bas
			return (0);
		}

		// n = min(a, b) — ternary YOK, açık if ile
		if (a > b)
			n = b;
		else
			n = a;

		// n'den geriye doğru deneyerek ilk ortak böleni bul
		while (n > 0)
		{
			if (a % n == 0 && b % n == 0)  // ikisini de tam bölüyorsa: EBOB budur
			{
				ft_putnbr(n);              // sonucu yaz
				write(1, "\n", 1);         // satır sonu
				return (0);                // programı bitir
			}
			n--;                            // sıradaki (daha küçük) adayı dene
		}
	}
	// argüman sayısı yanlışsa sadece newline
	write(1, "\n", 1);
	return (0);
}




/*


Mantığı kısaca
ft_atoi: her karakteri sayıya çevirip n = n*10 + digit ile biriktirir.

ft_putnbr: sayının sol tarafını önce yazar (özyineleme), sonra son basamağı yazar.

pgcd: n = min(a,b)’den başlayıp geriye doğru ilk ortak böleni arar; bulduğu an basar.

Adım adım örnek (42, 12)
a=42, b=12, n=min=12

12 ortak mı? 42%12=6, 12%12=0 → değil

11 ortak mı? hayır

10 ortak mı? hayır

9 ortak mı? hayır

8 ortak mı? hayır

7 ortak mı? hayır

6 ortak mı? 42%6=0 ve 12%6=0 → evet ⇒ yaz: 6

Kenar durumlar
ac != 3 → sadece \n basılır.

a <= 0 || b <= 0 → subject pozitif ister, yine sadece \n.

ft_atoi boşluk/işaret kontrol etmez; exam testleri tipik olarak temiz pozitif giriş verir.

Neden bu çözüm sınavda güvenli?
Sadece write kullanıyor.

? (ternary) yok.

while döngüleriyle yazıldı.

Basit, okunur ve Level 3 gereğini karşılıyor.

istersen bir de Euclid (a%b) ile daha hızlı alternatifini de gösterebilirim; ama sınavda bu hali fazlasıyla yeterli.
*/