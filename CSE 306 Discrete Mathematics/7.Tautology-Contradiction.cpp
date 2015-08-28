#include <iostream>
#include <list>

using namespace std;

void find_and_replace(string& source, string const& find, string const& replace)
{
    for(std::string::size_type i = 0; (i = source.find(find, i)) != std::string::npos;)
    {
        source.replace(i, find.length(), replace);
        i += replace.length() - find.length() + 1;
    }
}
void replaceByRules(string& input)
{
    while(input.size() != 1)
    {
        //NOT
        find_and_replace(input, "!1","0");
        find_and_replace(input, "!0","1");
        //AND
        find_and_replace(input, "1&1","1");
        find_and_replace(input, "0&0","0");
        find_and_replace(input, "0&1","0");
        find_and_replace(input, "1&0","0");
        //OR
        find_and_replace(input, "1|1","1");
        find_and_replace(input, "0|0","0");
        find_and_replace(input, "1|0","1");
        find_and_replace(input, "0|1","1");
        //->
        find_and_replace(input, "1>1","1");
        find_and_replace(input, "1>0","0");
        find_and_replace(input, "0>1","1");
        find_and_replace(input, "0>0","1");
        //<>
        find_and_replace(input, "1<>1","1");
        find_and_replace(input, "1<>0","0");
        find_and_replace(input, "0<>1","0");
        find_and_replace(input, "0<>0","1");
        //Brackets
        find_and_replace(input, "(1)","1");
        find_and_replace(input, "(0)","0");
    }
}
void makeLogic(string& input, const string& a, const string& b)
{
    find_and_replace(input, "p",a);
    find_and_replace(input, "q",b);
    replaceByRules(input);
}
void verifyExpression(string& input)
{
    string p0q0, p0q1, p1q0, p1q1;
    p0q0 = p0q1 = p1q0 = p1q1 = input;

    makeLogic(p0q0, "0", "0");
    makeLogic(p0q1, "0", "1");
    makeLogic(p1q0, "1", "0");
    makeLogic(p1q1, "1", "1");

    if(p0q0==p0q1 and p0q1==p1q0 and p1q1=="1")
        cout << input << " is a Tautology" << endl;
    else if(p0q0==p0q1 and p0q1==p1q0 and p1q1=="0")
        cout << input << " is a Contradiction" << endl;
}
int main()
{
    list<string> input;
    input.push_back("(p&q)|(!p)|(!q)");
    input.push_back("(p&q)>p");
    input.push_back("p>(p|q)");
    input.push_back("((p|q)&p)>p");
    input.push_back("p&!p");
    for(int i=0; i<6; i++)
    {
        verifyExpression(input.front());
        input.pop_front();
    }
    return 0;
}
