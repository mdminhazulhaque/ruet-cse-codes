//descending number pyr+block one
#include <stdio.h>
int main ()
{
   int i, n, a;
   printf ("Enter the value of n = ");
   scanf ("%d", &n);
   for (i=1;i<=n*n;i++)
   {
       if (i%n==1)
       printf ("\n");
       a=(i-1)/n;
       if (i<=(a+1)*n-a)
       printf ("%4d", i);

   }
    return 0;
}
