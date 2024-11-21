#include <iostream>
using namespace std;
int main()
{
    int a = 1, b = 3, c = 2, r = 5;
    if (b > a && b > c)
    {
        if (a > c)
            r += (a + b);
        r = r * 3;
    }
    else if (r > 0)
    {
        if (a > c - 2)
            r += c + 3;
        else
            r = 2;
    }
    else
        r = 0;
    r += 4;
    cout << r << endl;
    return 0;
}