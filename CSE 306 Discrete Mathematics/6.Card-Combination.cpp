#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
int fact(int n)
{
    if(n==0 or n==1)
        return 1;
    else
        return n*fact(n-1);
}
int nCr(int n,int r)
{

    return fact(n)/fact(r)/fact(n-r);
}
int main()
{
    int i;
    while(true)
    {
        cout << "1| Full Hand" << endl;
        cout << "2|Four of A Kind" << endl;
        cout << "3| Two Pair" << endl;
        cout << "4| Every Suite" << endl;
        cout << "0|Exit" << endl;
        cin >> i;
        switch(i)
        {
        case 1:
            cout << "No# of combination in Full Hand " << 13*12*nCr(4,2)*nCr(4,3) << endl;
            break;
        case 2:
            cout << "No# of combination in Four of A Kind " << 13*12*nCr(4,1) << endl;
            break;
        case 3:
            cout << "No# of combination in Two Pair " << 13*nCr(4,2)*12*nCr(4,2)*11*nCr(4,1) << endl;
            break;
        case 4:
            cout << "No# of combination in Every Suite " << pow(13,4)*4*12/2 << endl;
            break;
        default:
            exit(0);
        }
    }
}
