//nPr
#include <stdio.h>
long fact(int n)
{
    if(n==0)
    return 1;
    else
    return (long)n*fact(n-1);
}
int main ()
{
   int n,r;
   printf("n = ? ");
   scanf("%d",&n);
   printf("\nr = ? ");
   scanf("%d",&r);
   if(r>n)
   printf("\nError! r must be lower or equal to n");
   else
   printf("\nnPr = %ld", fact(n)/fact(n-r));
   return 0;
}
