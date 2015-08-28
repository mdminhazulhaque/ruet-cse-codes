#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
 
using namespace std;
 
int x[8],n;
 
bool place(int k, int i);
void nqueen(int k, int i);
void print();
 
main()
{
    cin>>n;
    nqueen(0,n);
}
 
bool place(int k, int i)
{
    for(int j=0;j<k;j++)
    if(x[j]==i or abs(x[j]-i)==abs(j-k))
        return false;
    return true;
}
void nqueen(int k, int n)
{
    if(k==n)
    print();
 
    for(int j=0;j<n;j++)
    {
        if(place(k,j))
        {
 
           x[k]=j;
          nqueen(k+1,n) ;
        }
 
    }
}
void print()
{
    for(int i=0;i<n;i++)
      cout<<x[i]<<" ";
      cout<<endl;
}