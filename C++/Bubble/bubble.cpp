#include <iostream>

using namespace std;

int main()
{
    int i,j,k,l,temp,length,a[10000];
    cout << "Enter the length of the array: ";
    cin >> length;
    for (i = 0 ; i < length ; i++)
    {
        cout << "Enter the element no." << (i+1) << ": ";
        cin >> a[i];  
    }
    do
    {
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
    }
    while (j != 0);
    for (k = 0 ; k < length ; k++)
    {
        printf("a[%d] = %d\n", k,a[k]);
    }
}