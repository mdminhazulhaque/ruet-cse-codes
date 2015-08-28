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

    /*** Intersection ***/
    list<int>setAl;
    cout << "A intersection B = { ";
    for(i=0; i<5; i++)
    {
        setAl.push_back(setA[i]);
        if(has(setB[i],setA))
            cout << setB[i] << ' ';
    }
    cout << "}" << endl;

    /*** Union ***/
    list<int>setUnion;

    for(i=0; i<5; i++)
    {
        setUnion.push_back(setA[i]);
        setUnion.push_back(setB[i]);
    }
    setUnion.unique();
    setUnion.sort();

    cout << "A union B = { ";
    for(i=0; i<8; i++)
    {
        cout << setUnion.front() << ' ';
        setUnion.pop_front();
    }
    cout << "}" << endl;

    /*** Substraction ***/
    for(i=0; i<5; i++)
        if(has(setB[i],setA))
            setAl.remove(setB[i]);

    setAl.sort();
    cout << "A - B = { ";
    for(i=0; i<3; i++)
    {
        cout << setAl.front() << ' ';
        setAl.pop_front();
    }
    cout << "}" << endl;

    /*** Complement ***/
    cout << "A' = { ";
    for(i=0; i<8; i++)
        if(!has(setU[i],setA))
            cout << setU[i] << ' ';
    cout << "}";
    return 0;
}
