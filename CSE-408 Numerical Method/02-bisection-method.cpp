#include <iostream>
#include <iomanip>
using namespace std;
float eqn(float x)
{
    return x*x*x-x-1;
}
int main()
{
    cout << setprecision(1) << 4.51;
    float v, pos, min, mid;
    for(v=0;;v++)
        if(eqn(v)>0)
        {
            pos=v;
            break;
        }
    for(v=0;;v--)
        if(eqn(v)<0)
        {
            min=v;
            break;
        }
    while(1)
    {
        mid = (pos+min)/2;
        if(eqn(mid)>0)
            pos=mid;
        else if(eqn(mid)<0)
            min=mid;
        cout << "Diff = " << setprecision(3) << pos-min << "\t\tEqn = " << eqn(mid) << endl;
        if(pos-min<0.0001)
            break;
    }
    cout << "Root is " << setprecision(6) << pos << endl;
    return 0;
}
