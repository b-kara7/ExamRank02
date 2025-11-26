#include <unistd.h>
#include <stdlib.h>

typedef struct s_list
{
    int             data;
    struct s_list   *next;
} t_list;

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

int cmp(int a, int b)
{
    if (a > b)
        return (1);
    return (0);
}

void    print_num(int n)
{
    char c;

    if (n >= 10)
        print_num(n / 10);
    c = (n % 10) + '0';
    write(1, &c, 1);
}

void    print_list(t_list *lst)
{
    while (lst)
    {
        print_num(lst->data);
        write(1, " ", 1);
        lst = lst->next;
    }
    write(1, "\n", 1);
}

t_list  *new_node(int value)
{
    t_list *node = malloc(sizeof(t_list));
    if (!node)
        return (NULL);
    node->data = value;
    node->next = NULL;
    return (node);
}

int main(void)
{
    t_list *a = new_node(4);
    t_list *b = new_node(2);
    t_list *c = new_node(5);
    t_list *d = new_node(3);

    a->next = b;
    b->next = c;
    c->next = d;

    write(1, "Before: ", 8);
    print_list(a);

    a = sort_list(a, cmp);

    write(1, "After : ", 8);
    print_list(a);

    return (0);
}
