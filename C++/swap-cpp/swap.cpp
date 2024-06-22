#include  <iostream>

int main()
{
    int x = 5,y = 4;
    x = x+y;
    y = x-y;
    x = x-y;
    std::cout <<"x=" << x << "\n" <<"y=" << y << "\n";
}