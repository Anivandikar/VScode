#include <stdio.h>

int main()
{
    int x = 0,i,size,search,a[100];
    printf("Enter the size of array:\n");
    scanf("%d", &size);
    for (i = 0 ; i < size ; i++)
    {
        printf("Enter the element of the array:");
        scanf("%d", &a[i]);
    }
    printf("What do you want to find:");
    scanf("%d",&search);
    for (i = 0 ; i < size ; i++)
    {
        if (a[i] == search)
        {
            printf("found at: a[%d]\n", i);
            x++;
        }
    }
    if (x == 0)
    {
        printf("::The element not found::\n");
    }    
}