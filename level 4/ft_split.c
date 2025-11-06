#include <stdlib.h>

int	is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int	word_count(char *str)
{
	int i = 0;
	int count = 0;

	while (str[i])
	{
		while (str[i] && is_space(str[i]))
			i++;
		if (str[i])
			count++;
		while (str[i] && !is_space(str[i]))
			i++;
	}
	return (count);
}

char	*make_word(char *str)
{
	int i = 0;
	char *word;

	while (str[i] && !is_space(str[i]))
		i++;
	word = malloc(i + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (str[i] && !is_space(str[i]))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	char **tab;
	int i = 0;

	tab = malloc((word_count(str) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	while (*str)
	{
		while (*str && is_space(*str))
			str++;
		if (*str)
		{
			tab[i] = make_word(str);
			i++;
			while (*str && !is_space(*str))
				str++;
		}
	}
	tab[i] = NULL;
	return (tab);
}
#include <stdio.h>

int main(void)
{
	char **tab;
	int i = 0;

	tab = ft_split("  Hello\t42\nIstanbul  ");
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
}
