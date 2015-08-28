#include<iostream>
#include<cstdlib>
#include<deque>
using namespace std;
int main()
{
    deque<int>dq;
    for(int i=0; i<10; i++)
    {
        dq.push_back(rand()%99);
        dq.push_front(rand()%99);
    }
    for(int i=0; i<10; i++)
    {
        cout << dq.back() << " ";
        dq.pop_back();
        cout << dq.front() << " ";
        dq.pop_front();
    }
    return 0;
}
