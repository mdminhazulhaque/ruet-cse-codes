#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    string password;
    cout << "Enter yout password: ";
    cin >> password;
    bool size6to8=false,alphanumeric=false,letteratfirst=false;
    if(password.size() >= 6 and password.size() <= 8)
        size6to8=true;
    if(isdigit(password[0]))
        letteratfirst=true;
    for(int i=0; i<password.size(); i++)
        if(isalnum(password[i]))
        {
            alphanumeric=true;
            break;
        }
    if(size6to8 and alphanumeric and letteratfirst)
        cout << "Password is valid!" << endl << endl;
    else
        cout << "Password is not valid!" << endl << endl;

    if(size6to8)
        cout << "+";
    else
        cout << "-";
    cout << " Size 6-8" << endl;
    if(alphanumeric)
        cout << "+";
    else
        cout << "-";
    cout << " Contains digit/letter" << endl;
    if(letteratfirst)
        cout << "+";
    else
        cout << "-";
    cout << " Has digit at 1st" << endl;
    return 0;
}
