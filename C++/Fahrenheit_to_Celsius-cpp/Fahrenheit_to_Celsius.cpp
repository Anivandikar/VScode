#include <iostream>

using namespace std;

int main()
{
    
    double temp_f, temp_c;
    double x = 0.555555556, y = 32;
    cout << "This program will give you the conversion of Fahrenheit to Celsius\n" << "Give in the temp in Fahrenheit: ";
    cin >> temp_f;
    //cout << x << "\n";
    temp_c = (temp_f - y) * x;
    cout << temp_c << "C\n";
    return 0;
}