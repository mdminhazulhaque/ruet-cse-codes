#include<iostream>
#include<cstdio>
using namespace std;

char fx[] = "11x1 -6x2 +1x3";
int constant=6;
int c[3]={0};

float eqn(int x)
{
        return (x<3)?(float)c[x]/constant:0;
}
int main()
{
    sscanf(fx,"%dx%*d %dx%*d %dx%*d",&c[0],&c[1],&c[2]);
    const int L = 15;
    int p;
    float b[L] = {0}, r[L]={0};
    b[0]=1;
    for(p=1;p<L;p++)
    {
        float v=0;
        for(int i=0,j=p-1;i<p;i++,j--)
            v += eqn(i)*b[j];
        b[p]=v;
        r[p]=b[p-1]/b[p];
        if(r[p]-r[p-1]>0.0001)
            cout << "Ratio = " << r[p] << "\tDifference = " << r[p]-r[p-1] << endl;
        if(r[p]-r[p-1]<0.0001)
                break;
    }
    cout << "Root is " << b[p] << endl;
    return 0;
}
