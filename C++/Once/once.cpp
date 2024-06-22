#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout << "Enter a Binary number" << endl;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '0' && s[i] != '1')
        {
            cout << "Incorrect Binary Format" << endl;
            cout << "Re-Run the Program" << endl;
            exit(0);
        }
        if (s[i] == '0')
        {
            s[i] = '1';
        }
        else
        {
            s[i] = '0';
        }
    }
    cout << "The Once Increment of your Binary number is:" << endl;
    cout << s << endl;
}