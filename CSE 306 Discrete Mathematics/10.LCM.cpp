#include<iostream>

using namespace std;

int LCM(int a, int b)
{
    if(a<b)
        swap(a,b);
    int temp = a;
    for(int i=2;;i++)
    {
        if(a%b==0)
            return a;
        a=temp*i;
    }
}
int main()
{
    int a,b,lcm;
    cout << "Int 1: ";
    cin >> a;
    cout << "Int 2: ";
    cin >> b;
    lcm = LCM(a,b);
    cout << "LCM of " << a << " and " << b << " is " << lcm << endl;
    return 0;
}
