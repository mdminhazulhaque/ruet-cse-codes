#include <iostream>
#include <cstring>

using namespace std;

main ()
{
    bool arrayA[100][100];
    bool arrayB[100][100];
    bool visitedA[100], visitedB[100];
    int nodeA, nodeB, i, j, k;
    while ( cin >> nodeA )
    {
        for ( i=0; i<100; i++)
        {
            memset (arrayA[i], false, sizeof(arrayA[i]));
            memset (arrayB[i], false, sizeof(arrayB[i]));
            memset (visitedA, false, sizeof(visitedA));
            memset (visitedB, false, sizeof(visitedB));
        }
        for ( i=1; i<=nodeA; i++)
        {
            for ( j=1; j<=nodeA; j++)
            {
                int x;
                cin >> x;
                arrayA[i][j] = x;
            }
        }

        cin >> nodeB;
        if  (nodeA != nodeB )
        {
            cout << "Not Isomorphic" << endl;
            continue;
        }
        for ( i=1; i<=nodeB; i++)
        {
            for ( j=1; j<=nodeB; j++)
            {
                int x;
                cin >> x;
                arrayB[i][j] = x;
            }
        }

        for (i=1; i<=nodeA; i++)
        {
            int temp = 0;
            for ( j=1; j<=nodeA; j++)
            {
                if ( arrayA[i][j])
                    temp++;
            }
            for (k=1; k<=nodeB; k++)
            {
                int t = 0;
                if (visitedB[k])
                    continue;
                for ( j=1; j<=nodeB; j++)
                {
                    if (arrayB[k][j])
                        t++;
                }
                if (temp == t)
                {
                    visitedA[i] = true;
                    visitedB[k] = true;
                    break;
                }
            }
        }
        bool isomorphic = true;
        for (i=1; i<=nodeA; i++)
        {
            if (!visitedA[i])
                isomorphic = false;
        }
        if (isomorphic)
        {
            for (i=1; i<=nodeB; i++)
            {
                if (!visitedB[i])
                    isomorphic = false;
            }
        }
        if (isomorphic)
            cout << "Isomorphic" << endl;
        else
            cout << "Not Isomorphic" << endl;
    }
}
