#include <iostream>
using namespace std;
float f(float x)
{
    return x*x*x-2*x-5;
}
int main()
{
    float v, a, b, c=0, x, px=0;
    for(v=0;;v++)
        if(f(v)>0)
        {
            b=v;
            break;
        }
    for(;;v--)
        if(f(v)<0)
        {
            a=v;
            break;
        }
    cout << "Finding root from " << a << " to " << b << endl;
    while(1)
    {
        x = (a*f(b)-b*f(a))/(f(b)-f(a));
        if(f(px-x)>0)
            b=x;
        else if(f(px-x)<0)
            a=x;
        if(c) // Ommit the first result
            cout << c << " - Current root = "<< px << "\tPrevious root = " << x << endl;
        if(x-px<0.0001)
            break;
        px=x;
        c++;
    }
    cout << "Root is " << x << endl;
    return 0;
}
