#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Greatest Common Divisor is %d and Lowest Common Multiple is %d",gcd(a,b),lcm(a,b));
}
int gcd(int a,int b)
{
    int c;
    while(1)
    {
  	c=a%b;
  	if(c==0)
    return b;
  	a=b;
  	b=c;
    }
  }
int lcm(int a,int b)
{
    return (a*b)/gcd(a,b);
}
