//descending stars
#include <stdio.h>
int main ()
{
   int i, j, n;
   printf ("How many levels? ");
   scanf ("%d", &n);
   for (i=1; i<=n; i++)
       {
           for (j=n+1-i; j>0; j--)
           printf ("*");
           printf ("\n");
       }
}
