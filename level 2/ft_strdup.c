#include <stdlib.h>

char    *ft_strdup(char *src)
{
	char	*tmp; //we will duplicate str into this variable
	int	len; 
	int	i;

	len = 0;
	i = 0;
	while (src[len]) //burda uzunluğu hesaplıyoruz.
		len++;
	tmp = malloc(sizeof(char) * len + 1); //heapte uzunluk artı string sonu için yeraç"\0" at the end (don't forget it !)
	if (!tmp) //malloc yer açılıp açılmadığına bak
		return (NULL);
	while (src[i]) //strin kopyalama
	{
		tmp[i] = src[i];
		i++;
	}
	tmp[i] = '\0';//string sonu;
	return (tmp);
}


#include <stdio.h>

int main()
{
	char	*a;
	a = "Hello World";
	printf("%s\n", ft_strdup(a));
}