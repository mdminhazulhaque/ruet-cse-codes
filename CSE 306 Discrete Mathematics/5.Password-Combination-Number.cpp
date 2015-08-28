#include<iostream>
#include<cctype>
#include<cmath>
using namespace std;
int main()
{
    string password;
    cout << "Enter yout password: ";
    cin >> password;
    if(password.size() >= 6 and password.size() <= 8)
    {
        if(isdigit(password[0]))
            for(int i=0; i<password.size(); i++)
            {
                if(isalnum(password[i]))
                {
                    cout << "Password is valid!" << endl << endl;
                    break;
                }
            }
    }
    else
        cout << "Password is not valid!" << endl << endl;

    cout << "Password length: " << password.size() << endl;
    cout << "Possible number of passwords: " << dec << 52 * pow(62,password.size()-1) << endl;

    return 0;
}
