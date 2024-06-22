#include <iostream>

using namespace std;

int main()
{
    int x,y,z;
    cout <<"num 1";
    cin >> x;
    cout <<"num 2";
    cin >> y;
    cout <<"num 3";
    cin >> z;
    if (x>y && x>z)
    {
        cout <<"num 1 is greatest";
    }
    if (y>x && y>z)
    {
        cout <<"num 2 is greatest";
    }
    if (z>x && z>y)
    {
        cout <<"num 3 is greatest";
    }
} 