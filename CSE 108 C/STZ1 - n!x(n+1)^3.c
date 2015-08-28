//1!*2^3+2!*3^3+.....+ n!*(n+1)^3
#include <stdio.h>
int factorial (int x)
{
   int m, k=1;
   for (m=1; m<=x; m++)
   {
       k=k*m;
   }
   return k;
}
int main ()
{
   int k=1, i, j, n;
   unsigned long long int sum=0;
   printf ("Enter the value of n: ");
   scanf ("%d", &n);
   for (i=1;i<=n; i++)
   {

       sum=sum+(factorial(i)*(i+1)*(i+1)*(i+1));

   }
   printf ("\nThe result is = %lld", sum);
   return 0;
}
