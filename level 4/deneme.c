#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
    t_list *tmp;
    t_list *cur;

    while(*begin_list && cmp((*begin_list)->data, data_ref) == 0)
    {
        tmp = *begin_list;
        *begin_list = (*begin_list)->next;
        free_fct(tmp->data);
        free(tmp);
    }
    cur = *begin_list;
    while(cur && cur->next)
    {
        if(cmp(cur->next->data, data_ref)== 0)
        {
            tmp = cur->next;
            cur->next = cur->next->next;
            free_fct(tmp->data);
            free(tmp);
        }
        else
            cur = cur->next;
    }
}

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    while (begin_list)
    {
        f(begin_list->data);
        begin_list = begin_list->next;
    }
}

void    sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i;
    int tmp;

    if(size < 2)
        return;
    i=0;
    while (i < size - 1)
    {
        if(tab[i] > tab[i + 1])
        {
            tmp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = tmp;
            i = 0;
        }
        else
            i++;
    }
    
}



t_list  *sort_list(t_list *lst, int (*cmp)(int, int))
{
    int tmp;
    t_list *start;

    start = lst;
    while (lst && lst->next)
    {
        if((cmp)(lst->data, lst->next->data))
        {
            tmp = lst->data;
            lst->data = lst->next->data;
            lst->next->data = tmp;
            lst = start;
        }
        else
            lst = lst->next;
    }
    return(start);
}

void rostring(char *str)
{
    int i = 0;
    int start= 0; 
    int end = 0;
    int space = 0;

    while(str[i] == ' ' || str[i] == '\t')
        i++;
    start = i;
    while(str[i] && str[i] !=' ' && str[i] !='\t')
        i++;
    end = i;
    while (str[i])
    {
        while(str[i] == ' ' || str[i] == '\t')
            i++;
        if(str[i])
        {
            if(space)
                write(1, " ", 1);
            while(str[i] && str[i] !=' ' && str[i] !='\t')
                write(1, &str[i++], 1);
            space = 1;
        }
    }
    if(space && start < end)
        write(1, " ", 1);
    while(start < end)
        write(1, &str[start++], 1);
}
int main(int ac, char **av)
{
    if( ac == 2)
        rostring(av[1]);
    write(1, "\n", 1);
    return(0);
}

int main (int ac, char **av)
{
    int i = 0;
    int start = 0;
    int end = 0;

    if(ac == 2)
    {
        while(av[1][i])
            i++;
        i--;
        while (i >= 0)
        {
            while(i >= 0 && (av[1][i] == ' ' || av[1][i] == '\t'))
                i--;
            end = i;
            while(i>= 0 && (av[1][i] !=' ' && av[1][i] !='\t'))
                i--;
            start = i + 1;
            while(start <= end)
                write(1, &av[1][start++], 1);
            if(i > 0)
                write(1, " ", 1);
        }
    }
    write(1, "\n", 1);
    return(0);
}


int	mini_atoi(char *s)
{
	int i = 0;
	int res = 0;

	while (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + (s[i] - '0');
		i++;
	}
	return (res);
}
int main(int ac, char **av)
{
  int i =2;
  int n = 0;

  if (ac == 2)
  {
    n = mini_atoi(av[1]);

    if ( n == 1)
        printf("1");
    while (i <= n)
    {
        if(n % i == 0)
        (
            printf("%d", i);
            n /=i;
            if(n > 1)
                printf("*");
        )
        else
            i++;
    }
  }
  printf("\n");
  return(0);
  
}
static int len_calc(long n)
{
    int len = 0;

    if(n <= 0)
    {
        len++;
    }
    while(n > 0)
    {
        n /=10;
        len++;
    }
    return(len);
}
char	*ft_itoa(int n)
{
    long nb=0;
    int len=0;
    char *str;

    nb = n;
    len = len_calc(nb);
    str = malloc(len + 1);
    if(!str)
        return (0);
    str[len] = '\0';
    if(nb == 0)
    {
        str[0] = '0';
        return(str);
    }
    if (nb < 0)
    {
        str[0] = '-';
        nb = -nb;
    }
    while (nb > 0)
    {
        str[--len] = (nb % 10) + '0';
        nb /=10;
    }
    return(str);
}















































