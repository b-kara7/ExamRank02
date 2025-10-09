unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int n;

	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		n = a;
	else
		n = b;
	while (1)
	{
		if (n % a == 0 && n % b == 0)
			return (n);
		n++;
	}
}
 /* 
 🔹 Mantık (basit anlatım)
Ekok bulmak için en kolay yol:

Büyük olan sayıyı al.

Bu sayıyı her seferinde artırarak iki sayıya da bölünen ilk sayıyı bul.

Bu sayı ekok’tur.

🔹 Mantığı adım adım
a == 0 || b == 0 ⇒ ekok tanımsız, o yüzden 0 döneriz.

n’i büyük olan sayıdan başlatıyoruz.

sonsuz while içinde:

n hem a hem b’ye tam bölünüyorsa, bu sayı ekok’tur → return n;

değilse n++ ile bir sonraki sayıya geç.


 */