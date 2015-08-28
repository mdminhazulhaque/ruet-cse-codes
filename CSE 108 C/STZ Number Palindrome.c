#include <stdio.h>
#include <string.h>
#include <stdlib.h>
main ()
{
unsigned long int n1, n2;
int j=0, k;
char ch1[20], ch2[20];
asif:
printf ("Enter a number: ");
scanf ("%ld", &n1);
while (k)
{
itoa(n1, ch1, 10);
strcpy(ch2, ch1);
strrev(ch2);
if(strcmp(ch1, ch2)==0)
{
printf ("Palindrome is %s, found is %ld step.\n",ch1, j);
break;
}
else
{
n2=atoi(ch2);
n1=n1+n2;
j++;
continue;
}
}
j=0;
goto asif;
return 0;
}
