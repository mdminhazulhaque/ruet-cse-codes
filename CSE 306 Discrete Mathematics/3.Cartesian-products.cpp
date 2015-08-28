#include <iostream>
#define size 4

using namespace std;
int main()
{
    int setA[size] = {1,2,3,4};
    int setB[size] = {5,6,7,8};
    int i;

    /** Print Sets ***/
    cout << "Set A = { ";
    for(i=0; i<size; i++)
        cout << setA[i] << ' ';
    cout << "}" << endl;

    cout << "Set B = { ";
    for(i=0; i<size; i++)
        cout << setB[i] << ' ';
    cout << "}" << endl;

    /*** Calculate Curtesian ***/
    cout << "AxB = { ";
    for (int i=0; i<size; i++)
        for (int j=0; j<size; j++)
        {
            cout << "(" << setA[i] << ",";
            cout << setB[j] <<") ";
        }
    cout << "}";
    return 0;
}
