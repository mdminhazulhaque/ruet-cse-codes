#include <stdio.h>
#include <math.h>
int main ()
{
   int i, j;
   printf ("Enter the number: ");
   scanf ("%d", &j);
   for (i=1; i<=sqrt(j); i++)
       printf ("%d ", i*i);
   return 0;
}
