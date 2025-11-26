#include "ft_list.h"


t_list  *sort_list(t_list *lst, int (*cmp)(int, int))
{
    int     tmp;
    t_list  *start;

    start = lst;
    while (lst && lst->next)
    {
        if (cmp(lst->data, lst->next->data))
        {
            tmp = lst->data;
            lst->data = lst->next->data;
            lst->next->data = tmp;
            lst = start;
        }
        else
            lst = lst->next;
    }
    return (start);
}
