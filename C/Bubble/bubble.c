#include <stdio.h>

int main ()
{
    int temp,length,x,i,j,k = 0,a[10000];
    printf("Enter the length of the array: "); scanf("%d0", &length);
    for (x = 0 ; x < length ; x++)
    {
        printf("enter the element no.%d: ", (x+1));
        scanf("%d", &a[x]);
    }
    do
    {
        j = 0;
        for (i = 0 ; i < (length - 1 - j) ; i++)
        {
            if (a[i] > a[i+1])
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
                j++;
            }
        } 
        k++;
    } 
    while (j != 0);
    for (k = 0 ; k < length ; k++)
    {
        printf("a[%d] = %d\n", k,a[k]);
    }
}