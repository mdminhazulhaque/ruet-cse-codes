#include <stdio.h>
int main ()
{
   int n,i,j;
   printf ("Value of n? ");
   scanf ("%d",&n);
   for (i=1; i<=n; i++)
       {
           for (j=n-i; j>0; j--)
               printf (" ");
           for (j=1; j<=i; j++)
               printf ("%d", j);
           for (j=i-1; j>0; j--)
               printf ("%d", j);
           printf ("\n");
       }

return 0;
}
