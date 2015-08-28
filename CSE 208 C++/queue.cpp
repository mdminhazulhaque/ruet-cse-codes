#include<iostream>
#include<cstdlib>
#include<queue>
using namespace std;
int main()
{
    queue<int>q;
    for(int i=0; i<10; i++)
        q.push(rand()%99);
    for(int i=0; i<10; i++)
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}
