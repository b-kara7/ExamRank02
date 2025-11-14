#include <stddef.h> 

size_t ft_strspn(const char *s, const char *accept)
{
	size_t i = 0; 
	size_t j;
	int found;

	while(s[i])
	{
		j = 0;
		found = 0;
//accept stringinin tüm karakterlerine bakıyoruz.

//Eğer s[i] karakteri accept içinde bulunursa found = 1.

//Döngü bitince found bize bu karakterin accept’te olup olmadığını söylüyor.
		while(accept[j])
		{
			if(s[i] == accept[j])
			{
				found = 1;
			}
		j++;
	}
	// Eğer s[i] accept içinde yoksa → işte o an duruyoruz.

//  Çünkü strspn sadece başlangıçtaki geçerli kısmın uzunluğunu döndürür.


	if(!found)
		return (i);
	i++;
	}
	return (i);
}

#include <stdio.h>

int main(void)
{
    int i = 0;
    while (i < 10)
    {
        if (i == 5)
            break;   // i = 5 olduğunda döngüden çık
        printf("%d\n", i);
        i++;
    }
    return 0;
}
