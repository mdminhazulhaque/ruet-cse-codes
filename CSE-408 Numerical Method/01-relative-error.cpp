#include <iostream>
using namespace std;
float e, x, y, z, u;
float dx()
{
    return 5*y*y/z/z/z*e;
}
float dy()
{
    return 10*x*y/z/z/z*e;
}
float dz()
{
    return 15*x*y*y/z/z/z/z*e;
}
int main()
{
    cout << "x =? y = ? z = ?" << endl;
    cin >> x >> y >> z;
    cout << "Error = ?" << endl;
    cin >> e;
    u = 5*x*y*y/z/z/z;
    float rate = (dx()+dy()+dz())/u;
    cout << "Relative error = " << rate << endl;
}
