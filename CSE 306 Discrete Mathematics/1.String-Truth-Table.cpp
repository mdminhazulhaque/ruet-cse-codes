#include <iostream>
using namespace std;
int main()
{
    string a,b;
    cout << "Enter A: ";
    cin >> a;
    cout << "Enter B: ";
    cin >> b;

    cout << "A = " << a << endl;
    cout << "B = " << b << endl;

    cout << "A\tB\tAND\tOR" << endl;
    for(int i=0; i<(int)(a.size()+b.size())/2; i++)
    {
        cout <<a[i]<<"\t"<<b[i]<<"\t";
        if(a[i]==b[i])
            cout << "1\t0";
        else
            cout <<  "0\t1";
        cout << endl;
    }
    return 0;
}
