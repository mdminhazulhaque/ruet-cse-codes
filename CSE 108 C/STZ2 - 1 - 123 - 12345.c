//1-123-12345
#include<stdio.h>
int main()
{
    int a,i,j;
    printf("Enter the value of n: ");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
     for(j=0;j<a-i;j++)
     printf("   ");
     for(j=1;j<=2*i+1;j++)
     printf("%3d",j);
     printf("\n");
     }
}
