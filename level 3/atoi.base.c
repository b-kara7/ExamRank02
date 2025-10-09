int	ft_atoi_base(const char *str, int str_base)
{
	int	result = 0;
	int	sign = 1;
	int	value;

	// boşlukları atla
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;

	// işaret kontrolü
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;

	// sayıyı dönüştür
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			value = *str - '0';
		else if (*str >= 'a' && *str <= 'f')
			value = *str - 'a' + 10;
		else if (*str >= 'A' && *str <= 'F')
			value = *str - 'A' + 10;
		else
			break; // geçersiz karakter
		if (value >= str_base)
			break; // base’in dışındaysa bitir
		result = result * str_base + value;
		str++;
	}
	return (result * sign);
}
