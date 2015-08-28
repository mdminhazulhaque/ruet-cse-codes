#include <iostream>
#include <stdlib.h>
using namespace std;
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main ()
{
  int n,i;
  cout << "How many numbers? ";
  cin >> n;
  int values[n];
  for (i=0; i<n; i++)
  cin >> values[i];
  qsort (values, n-1, sizeof(int), compare);
  for (i=0; i<n; i++)
  cout << " " << values[i];
  return 0;
}
