#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int array[10], i, j;
    for(i=0; i<10; i++)
        array[i] = rand()%99;

    cout << "\nBefore sorting: ";
    for(i=0; i<10; i++)
        cout << array[i] << ' ';

    for(i=0; i<10; i++)
        for(j=0; j<10-i; j++)
            if(array[j] > array[j+1])
                swap(array[j], array[j+1]);

    cout << "\nAfter sorting: ";
    for(i=0; i<10; i++)
        cout << array[i] << ' ';
    return 0;
}
