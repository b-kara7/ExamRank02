
int main(int ac, char **av)
{
	int i = 2;
	int n = 0;

	if (ac == 2)
	{
		n = atoi(av[1]);

        if (n == 1)
        {
            write(1, "1\n", 2);
            return (0);
        }

		while (i <= n)
		{
			if (n % i == 0)
			{
				ft_putnbr(i);
				n = n / i;
				if (n != 1)
					write(1, "*", 1);
			}
			else
				i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
