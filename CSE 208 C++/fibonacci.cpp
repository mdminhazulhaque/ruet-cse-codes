#include<stdio.h>
int FIBONACCI(int fibx,int n)
{
    int fib=fibx, fib1=fibx,fib2=fibx;
    if(n<=1)
    {
        fib=n;

        return fib;
    }
    fib=FIBONACCI(fib,n-1);
    fib =fib+ FIBONACCI(fib,n-2);
    return fib;
}
int main()
{
    int fib=1,n=0,k,res=0;
    printf("Fibonacci series is : \n");
    for(k=1; k<20; k++)
    {
        res=FIBONACCI(0,k);
        printf(" %d ",res);
    }
}
