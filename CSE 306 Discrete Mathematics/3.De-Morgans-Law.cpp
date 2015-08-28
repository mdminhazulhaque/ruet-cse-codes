#include<iostream>
#include<list>
using namespace std;

bool has(int& value, int *setArray)
{
    for(int i=0; i<5; i++)
        if(setArray[i]==value)
            return true;
    return false;
}
int main()
{
    int setA[] = {1,2,3,5,7};
    int setB[] = {2,4,5,6,8};
    int setU[] = {1,2,3,4,5,6,7,8,9,10};
    int i;

    /** Print Sets ***/
    cout << "Set A = { ";
    for(i=0; i<5; i++)
        cout << setA[i] << ' ';
    cout << "}" << endl;

    cout << "Set B = { ";
    for(i=0; i<5; i++)
        cout << setB[i] << ' ';
    cout << "}" << endl;

    cout << "Set U = { ";
    for(i=0; i<8; i++)
        cout << setU[i] << ' ';
    cout << "}" << endl;

    cout << "-----------------------------" << endl;

    /*** Find A' intersection B' ***/
    int ca=0, cb=0;
    list<int>complement;
    cout << "A' = { ";
    for(i=0; i<8; i++)
        if(!has(setU[i],setA))
        {
            ca++;
            complement.push_back(setU[i]);
            cout << setU[i] << ' ';
        }
    cout << "}" << endl;

    cout << "B' = { ";
    for(i=0; i<8; i++)
        if(!has(setU[i],setB))
        {
            cb++;
            complement.push_back(setU[i]);
            cout << setU[i] << ' ';
        }
    cout << "}" << endl;
    complement.unique();
    complement.sort();

    /*** Find A intersection B ***/
    list<int>intersection;
    cout << "A intersection B = { ";
    for(i=0; i<5; i++)
        if(has(setB[i],setA))
        {
            intersection.push_back(setB[i]);
            cout << setB[i] << ' ';
        }
    cout << "}" << endl;

    cout << "-----------------------------" << endl;

    /*** Find A' union B' ***/
    cout << "A' union B' = { ";
    for(i=0; i<ca+cb; i++)
    {
        cout << complement.front() << ' ';
        complement.pop_front();
    }
    cout << "}" << endl;

    /*** Find (AuB)' ***/
    cout << "(A union B)' = { ";
    for(i=0; i<8; i++)
        if(setU[i] == intersection.front())
            intersection.pop_front();
        else
            cout << setU[i] << ' ';
    cout << '}' << endl;
    return 0;
}
