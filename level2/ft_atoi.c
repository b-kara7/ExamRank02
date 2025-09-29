
#include <stdio.h>

int ft_atoi(const char *str)
{
	int i = 0;
	int sign = 1;
	int res = 0;
// boşlukları atla;
	while((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
	i++;
// işaretleri kontrol et;
	if(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			sign = -1;
		i++;
	}
// rrakamları oku ve sayı oluştur
	while(str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
//sonucu işaretle çarp
	return(res * sign);
}

int main()
{
	printf("%d\n", ft_atoi("   -12345678"));
	printf("%d\n", ft_atoi("   +42abc"));     // 42
    printf("%d\n", ft_atoi("   9999"));       // 9999
}