#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i = 0;
	int j;
	while(s[i])
	{
		j = 0;
		while (reject[j])
		{
			if(s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}
// s stringinde reject karakterlerinden ilk görülenin indeksini döndür.

int main()
{
	printf("%ld\n", ft_strcspn("betul", "t"));
}