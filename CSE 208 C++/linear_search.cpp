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
int main()
{
    int array[25],n;
    for(int i=0;i<20;i++)
    array[i]=rand()%100;
    for(int i=0;i<20;i++)
    cout << array[i] << ' ';
    while(cin >> n)
    linearsearch(array,20,n);
    return 0;
}
