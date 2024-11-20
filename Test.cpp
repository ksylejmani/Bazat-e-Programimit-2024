#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a = 3, b = 6, c = 4;
    if (a > 2 && b % a == 0)
    {
        if (a + b / 2 - 2 == c)
        {
            cout << setfill('B') << setw(b) << left << b << endl;
        }
        cout << a << endl;
    }
    if (b > c)
    {
        cout << showpos << c << endl;
    }
    return 0;
}