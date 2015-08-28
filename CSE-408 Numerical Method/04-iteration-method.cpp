#include <iostream>
#include <cmath>
using namespace std;
float o(float x)
{
    return sqrt(x+1);
}
float O(float x)
{
    return 1/sqrt(x+1);
}
int main()
{
    float x, nx, i=0;
    cout << "Initial value of x = ? ";
    cin >> x;
    while(1)
    {
        i++;
        nx = O(x);
        cout << "\tn = " << i \
        << "\tXn = " << x \
        << "\t sqrt(Xn+1) = " << o(x) \
        << "\tXn+1 = " << nx << endl;
        if(abs(x-nx)<0.0001)
            break;
        x=nx;
    }
    cout << "Root is " << x << endl;
    return 0;
}
