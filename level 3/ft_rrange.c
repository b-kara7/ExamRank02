#include <stdio.h>
#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	*tab;
	int	len;
	int	i;

	if (start < end)
		len = end - start;
	else
		len = start - end;
	tab = (int *)malloc(sizeof(int) * (len + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (i <= len)
	{
		if (start < end)
			tab[i] = end - i;
		else
			tab[i] = end + i;
		i++;
	}
	return (tab);
}

