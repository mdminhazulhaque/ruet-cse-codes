/* Program for Example 3.4 */

#include<iostream>
#include<iomanip>

using namespace std;

float mat(int x[], int y[], int z[])
{
    return x[0]*(y[1]*z[2] - y[2]*z[1])
           + y[0]*(z[1]*x[2] - z[2]*x[1])
           + z[0]*(x[1]*y[2] - x[2]*y[1]);
}

int main()
{
    int x[] = {0, 1, 2};
    int y[] = {1, 6, 17};

    int sumx, sumy, sumx2, sumx3, sumx4, sumxy, sumx2y;
    sumx = sumy = sumx2 = sumx3 = sumx4 = sumxy = sumx2y = 0;

    cout << "x\ty\tx2\t\x3\tx4\txy\tx2y\t" << endl;

    for(int i=0;i<sizeof(x)/sizeof(x[0]);i++)
    {
        cout << x[i] << '\t' << y[i] << '\t' <<
    }

//    int a[] = {3,3,5};
//    int b[] = {3,5,9};
//    int c[] = {5,9,17};
//    int d[] = {24, 40, 74};
//
//    cout << mat(d, b, c) / mat(a, b, c) << endl;
//    cout << mat(a, d, c) / mat(a, b, c) << endl;
//    cout << mat(a, b, d) / mat(a, b, c) << endl;


    return 0;
}
