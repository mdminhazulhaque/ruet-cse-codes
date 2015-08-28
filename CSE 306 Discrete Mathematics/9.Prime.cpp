#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    unsigned long long int number,i;
    bool flag=true;
    cin >> number;

    if(number==2 or number==3 or number==5 or number==7) // if already prime
    {
        cout << "Prime";
        return 0;
    }
    else if(number&0) // if even
    {
        cout << "Not prime";
        return 0;
    }

    for(i=3; i<(unsigned long long)sqrt(number); i+=2)
        if(number%i==0)
        {
            flag=false;
            break;
        }

    if(flag)
        cout << "Prime";
    else
        cout << "Not Prime";

    return 0;
}

/*
7, 23, 79, 1087, 66047, 263167, 16785407, 1073807359, 17180131327, 68720001023, 4398050705407, 70368760954879, 18014398777917439, 18446744082299486207 (OEIS A091514)
*/
