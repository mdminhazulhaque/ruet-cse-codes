#include<iostream>
#include<cstdlib>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int>pq;
    for(int i=0;i<10;i++)
        pq.push(rand()%99);
    for(int i=0;i<10;i++)
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    return 0;
}
