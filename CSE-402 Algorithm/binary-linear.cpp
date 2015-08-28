#include<iostream>
#include<cstdlib>
using namespace std;
void linearsearch(int data[],int n,int element)
{
    int loc=0;
    data[n]=element;
    while(data[loc]!=element)
        loc++;
    if(loc!=n)
        cout << "Found at " << loc+1 << endl;
    else
        cout << "Not found" << endl;
}
void binarysearch(int data[],int beg,int end,int element)
{
    int mid = (beg+end)/2;
    while(beg<=end and data[mid]!=element)
    {
        if(element<data[mid])
            end=mid-1;
        else
            beg=mid+1;
        mid = (beg+end)/2;
    }
    if(data[mid]==element)
        cout << "Found at " << mid+1 << endl;
    else
        cout << "Not found" << endl;
}
int partition(int* input, int p, int r)
{
    int pivot = input[r];

    while ( p < r )
    {
        while ( input[p] < pivot )
            p++;

        while ( input[r] > pivot )
            r--;

        if ( input[p] == input[r] )
            p++;
        else if ( p < r )
        {
            int tmp = input[p];
            input[p] = input[r];
            input[r] = tmp;
        }
    }
    return r;
}
void quicksort(int* input, int p, int r)
{
    if ( p < r )
    {
        int j = partition(input, p, r);
        quicksort(input, p, j-1);
        quicksort(input, j+1, r);
    }
}
int main()
{
    int array[25],n;
    for(int i=0; i<20; i++)
        array[i]=rand()%100;
    for(int i=0; i<20; i++)
        cout << array[i] << ' ';
    while(cin >> n)
        linearsearch(array,20,n);
    return 0;
}

