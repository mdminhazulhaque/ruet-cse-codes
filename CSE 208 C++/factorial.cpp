#include<iostream>
using namespace std;
int FACT(int init,int n)
{
    static int fact=init;
    if(n==0)
    {
        fact=1;
        return fact;
    }
    FACT(fact,n-1);
    fact*=n;
    return fact;
}
int main()
{
    int res,n,init=0;
    cout<<"Enter any no to find out it's factorial : \n";
    while(cin>>n)
    {
        res=FACT(init,n);
        cout<<"   "<<res<<endl;
    }
}
