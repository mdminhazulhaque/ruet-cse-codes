#include<stdio.h>
int main()
{
    int f0=0,f1=1,f,i,n,x;
    printf("How many numbers you want? ");
    scanf("%d",&n);
    printf("The fibonacci numbers are - 1");
    for(i=0;i<n;i++)
    {
        f=f0+f1;
        printf(" %d",f);
        f0=f1;
        f1=f;
    }
    return 0;
}
