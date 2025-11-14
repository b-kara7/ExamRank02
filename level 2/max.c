#include <stdio.h>

int     max(int* tab, unsigned int len)
{
    unsigned int i ;
    int max ;
    if(!len)
        return (0);
    i = 1;
    max = tab[0];
    while(i < len)
    {
        if(tab[i] > max)
        max = tab[i];
        i++;
    }    
    return(max);
}

int main()
{
    int a[]={1,4,6,8,77};
    printf("%d\n", max(a,5));
}