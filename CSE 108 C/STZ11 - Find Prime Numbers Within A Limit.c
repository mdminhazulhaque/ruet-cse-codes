#include <stdio.h>
#include<math.h>
int main()
{
    int i,j,n,h;
    printf("Enter the limit: ");
    scanf("%d",&n);
    printf("The Prime Numbers Within The Limit are:\n");
    for(i=2;i<=n;i++)
                     {
                     h=1;
                     for(j=2;j*j<=i;j++)
                          {
                          if(i%j==0)
                          h=0;
                          }
                     if(h)
                     printf("%d ",i);
                     }
}
