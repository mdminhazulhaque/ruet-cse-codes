#include <iostream>
#define size 4
using namespace std;

main ()
{
    int A[size] = {1,2,3,4};
    /*** Print Sets ***/
    cout << "Set A = { ";
    for(int i=0; i<size; i++)
        cout << A[i] << ' ';
    cout << "}" << endl;

    /*** Power Sets ***/
    cout << "Power sets are:" << endl;
    for(int position=0;position<size;position++)
        for (int i=0; i<size; i++)
        {
            cout << "{ ";
            if (position==size-1)
            {
                for (int j=0;j<size;j++)
                    cout << A[j] << ' ';
                cout << "}";
                return 0;
            }
            for (int j=i; j<=(position+i); j++)
            {
                if (j>(size-1))
                {
                    cout << A[j%size] << ' ';
                    continue;
                }
                cout << A[j] << ' ';
            }
            cout << "}" << endl;
        }
    return 0;
}


