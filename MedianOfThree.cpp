#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    int median;
    if ((a > b && a < c) || (a > c && a < b))
        median = a;
    else if ((b > a && b < c) || (b > c && b < a))
        median = b;
    else
        median = c;

    cout << "The median is: " << median << endl;
    return 0;
}