#include<iostream>
#include<stack>
#include<string>
using namespace std;
class ParenthesisChecker
{
    private:
    stack<char>checker;
    string ps;
    public:
    ParenthesisChecker()
    {
        cout << "Enter the expression: ";
        cin >> ps;
        valid();
    }
    void valid()
    {
        if(ps.length()&1) cout << "Broken!";
        else{
        for(int i=0;i<ps.length();i++)
        {
            if(ps[i]==91)
            checker.push(91);
            else if(ps[i]==93)
            {
                if(checker.top()==91)
                checker.pop();
                else
                checker.push(93);
            }
            else if(ps[i]==40)
            checker.push(40);
            else if(ps[i]==41)
            {
                if(checker.top()==40)
                checker.pop();
                else
                checker.push(41);
            }
        }
        cout << "Valid!";}
    }

};
int main()
{
    ParenthesisChecker myObj;
    return 0;
}
