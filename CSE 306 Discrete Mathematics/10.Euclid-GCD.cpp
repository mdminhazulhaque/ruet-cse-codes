#include<iostream>

using namespace std;

int eGCD(int a, int b)
{
    if(b==0)
        return a;
    else
        return eGCD(b,a%b);
}
int main()
{
    int a,b,gcd;
    cout << "Int 1: ";
    cin >> a;
    cout << "Int 2: ";
    cin >> b;
    gcd=eGCD(a,b);
    cout << "GCD of " << a << " and " << b << " is " << gcd << endl;
    return 0;
}
