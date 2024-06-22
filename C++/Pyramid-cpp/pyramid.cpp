#include <iostream>

using namespace std;

int main ()
{
    int i;
    int j;
    int hight;
    cout << "This Code will print a Right angle Pyramid\n" << "Type in the hight for the Right angle Pytramid: ";
    cin >> hight;
    for(i = 1 ; i <= hight ; i++)
    {
        for(j = 1 ; j <= hight ; j++)
        {
            cout << " ";
            if(i + j >= hight + 1)
            {
                cout << "#";
            }
            else
            {
                cout << " "; 
            }
        }
        cout << "\n";
    }
    
    return 0;
}