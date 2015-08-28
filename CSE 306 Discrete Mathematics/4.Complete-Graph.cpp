#include <iostream>
#include <cstring>

using namespace std;
main ()
{
    bool array[100][100];
    int node, edge;
    while ( cin>> node)
    {
        for (int i=0; i<100; i++)
            memset (array[i], false, sizeof(array[i]));
        bool complete = true;
        for (int i=1; i<=node; i++)
        {
            for ( int j=1; j<=node; j++)
            {
                int x;
                cin >> x;
                array[i][j] = x;
            }
        }
        for (int i=1; i<=node; i++)
        {
            for (int j=1; j<=node; j++)
            {
                if ( i== j)
                    continue;
                if ( !array[i][j] )
                {
                    complete = false;
                }
            }
        }
        if (!complete)
            cout << "It is not a complete graph."<< endl;
        else
            cout << "It is a complete graph" << endl;
        complete = true;
    }
}

