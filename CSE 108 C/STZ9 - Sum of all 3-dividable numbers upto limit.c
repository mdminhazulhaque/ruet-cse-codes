#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,n,s=0;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
                   {
                   if(i%3==0)
                   s+=i;
                   }
                   printf("%d ", s);
    getch();
}    
