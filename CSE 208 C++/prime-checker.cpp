#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,n;
    bool f=true;
    cout << "Enter a number: ";
    cin >> n;
    for(i=2; i<=sqrt(n); i++)
        if(n%i==0)
        {
            f=false;
            break;
        }
    if(f)
        cout << "Prime" << endl;
    else
        cout << "Not prime" << endl;
    return 0;
}
