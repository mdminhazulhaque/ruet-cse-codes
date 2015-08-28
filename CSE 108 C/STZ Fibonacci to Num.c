#include<stdio.h>
int main()
{
    int f0=0,f1=1,f,i,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(1)
        {
            for(i=0;i<n;i++)
                {
                    f=f0+f1;
                    if(f==n)
                    {
                        printf("The input is the Fibonnacci number of %d",i+1);
                        goto end;
                    }
                    if(f<n)
                    {
                        f0=f1;
                        f1=f;
                    }
                    if(f>n)
                    {
                        printf("Not a valid Fibonacci number.");;
                        goto end;
                    }
                }
        }
    end:
    return 0;
}
