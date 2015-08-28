#include<iostream>
#include<cstdlib>
using namespace std;
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
int main()
{
    int array[20],n;
    for(int i=0; i<20; i++)
        array[i]=rand()%100;
    for(int i=0; i<20; i++)
        for(int j=0; j<20-i; j++)
        {
            if(array[j]>array[j+1])
                swap(array[j],array[j+1]);
        }
    for(int i=0; i<20; i++)
        cout << array[i] << ' ';
    while(cin >> n)
        binarysearch(array,0,19,n);
    return 0;
}
