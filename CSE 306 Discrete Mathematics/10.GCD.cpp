#include <iostream>
using namespace std;

int GCD(int a, int b)
{
    while(true)
    {
        a = a % b;
        if(a == 0)
            return b;
        b = b % a;
        if(b == 0)
            return a;
    }
}

int main()
{
    int x, y;

    cout << "Int 1: ";
    cin >> x;
    cout << "Int 2: ";
    cin >> y;

    cout << "GCD of " << x << " and " << y << " is " << GCD(x, y) << endl;

    return 0;
}
