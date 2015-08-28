/* Program for Example 3.7 */

#include<iostream>
#include<iomanip>
#define W setw(10)
#define D (char)30
using namespace std;

float x[] = {3,4,5,6,7,8,9};
float y[] = {2.7,6.4,12.5,21.6,34.3,51.2,72.9};
float d[7]= {0},d1[6]= {0},d2[5]= {0},d3[4]= {0};
int size = sizeof(x)/sizeof(int);

int fact(int i)
{
    return i<=1?1:i*fact(i-1);
}
float del(int i)
{
    if(i==0)
        return d[0];
    else if(i==1)
        return d1[0];
    else if(i==2)
        return d2[0];
    else if(i==3)
        return d3[0];
}
int main()
{
    int i;
    for(i=0; i<size; i++)
        d[i]=y[i+1]-y[i];
    for(i=0; i<size-1; i++)
        d1[i]=d[i+1]-d[i];
    for(i=0; i<size-2; i++)
        d2[i]=d1[i+1]-d1[i];
    for(i=0; i<size-3; i++)
    {
        d3[i]=d2[i+1]-d2[i];
        if(d3[i]<0.0001)
            d3[i]=0;
    }
    cout<<W<<'x'<<W<<'y'<<W<<D<<W<<D<<'2'<<W<<D<<'3'<<W<<D<<'4'<<endl;
    cout << setw(80) << setfill('-') << '-' <<endl<<setfill(' ');
    for(i=0; i<size; i++)
    {
        cout<<W<<x[i]<<W<<y[i];
        if(i<size-1)
            cout<<W<<d[i];
        if(i<size-2)
            cout<<W<<d1[i];
        if(i<size-3)
            cout<<setprecision(2)<<W<<d2[i];
        if(i<size-4)
            cout<<setprecision(3)<<W<<d3[i];
        cout<<endl;
    }
    float h=x[1]-x[0];
    float yout=y[0];
    int inx;
    cout << "Enter x = ";
    cin >> inx;
    float p=(inx-x[0])/h;
    for(i=0;i<3;i++)
    {
        float np = p;
        for(int j=1;j<i+1;j++)
            np *= (p-j);
        yout += np*del(i)/fact(i+1);
    }
    cout << "y(" << inx << ") = " << setprecision(3) << yout << endl;
    return 0;
}
