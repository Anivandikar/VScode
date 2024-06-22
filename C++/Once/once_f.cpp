#include <iostream>
#include <string>
using namespace std;

class baniry
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void onces(void);
    void display(void);
};
void baniry::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}
void baniry::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '0' && s[i] != '1')
        {
            cout << "incorrect binary format" << endl;
            exit(0);
        }
    }
}
void baniry::onces(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            s[i] = '1';
        }
       else 
        {
            s[i] = '0';
        }
    }
}
void baniry::display(void)
{
    cout << "Display your binary number" << endl;
    cout << s;
}
int main()
{
    baniry b;
    b.read();
    b.chk_bin();
    b.onces();
    b.display();
    cout << "\n";
    return 0;
}