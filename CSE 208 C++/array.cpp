#include<iostream>
#include<cstdlib>
#define size 10
using namespace std;
int array[size], up;
void traverse()
{
    for(int i=0; i<up; i++)
        cout << i+1 << " > " << array[i] <<endl;
}
void insert()
{
    int element, pos, temp;
    cout << "Which element?" << endl;
    cin >> element;
    cout << "Where?" << endl;
    cin >> pos;
    up++;
    array[up] = element;
    for(int i=up; i>=pos; i--)
        swap(array[i-1],array[i]);
}
void remove()
{
    int pos;
    cout << "Where?" << endl;
    cin >> pos;
    pos--;
    up--;
    for(int i=pos; i<=up; i++)
        swap(array[i],array[i+1]);
}
int main()
{
    char choice;
    for(int i=0; i<size; i++)
        array[i] = rand()%100;
    cout << "How many items? ";
    cin >> up;
    while(1)
    {
        cout<< "T|Traverse I|Insert D|Delete E|Exit" << endl;
        cin >> choice;
        switch(choice)
        {
        case 'T':
            traverse();
            break;
        case 'I':
            insert();
            break;
        case 'D':
            remove();
            break;
        case 'E':
            exit(0);
        default:
            cout << "Invalid choice!" << endl;
        }
    }
    return 0;
}
