#include <unistd.h>

int	max(int* tab, unsigned int len)
{
    unsigned int i=0;
    int max;

   if(len == 0)
    return (0);
   max = tab[0];
   i=1;
   while (i<len)
   {
        if(tab[i]>max)
            max=tab[i];
        i++;
   }
    return(max);
}
#include <stdio.h>

int max(int *tab, unsigned int len);

int main(void)
{
	int arr1[] = {1, 2, 3, 4, 5};
	int arr2[] = {-10, -5, -20};
	int arr3[] = {42};

	printf("%d\n", max(arr1, 5)); // 5
	printf("%d\n", max(arr2, 3)); // -5
	printf("%d\n", max(arr3, 1)); // 42
	printf("%d\n", max(arr1, 0)); // 0
}
