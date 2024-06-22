#include <iostream>

using namespace std;
// This is for smallest value finder in array
int main ()
{
    int i,j,length;
    float temp,a[10000];
    cout <<"\n\t\t\t::This progaram will tell you the smallest number in your given array::" << "\n\n";
    cout << "Enter the length of the array: ";
    cin >> length;
    for (i = 0 ; i < length ; i++)
    {
        cout << "Enter the element no." << (i+1) << ": ";
        cin >> a[i];  
    }
    temp = a[0];
    for (j = 0 ; j < length ; j++)
    {
        if (temp >= a[j])
        {
            temp = a[j];
        }
    }
    cout << "The smallest number in your given array is: " << temp << "\n";
}