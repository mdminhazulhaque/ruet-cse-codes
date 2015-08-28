#include<iostream>
#define MAX 5
using namespace std;
int G[MAX][MAX]= {{0,0,1,0,1},
    {1,0,0,0,0},
    {0,1,0,1,0},
    {1,0,0,0,0},
    {0,0,0,1,0}
};
int visited[MAX]= {0};
void dfs(int s)
{
    visited[s]=1;
    cout << " > " << s;
    for(int i=0; i<MAX; i++)
        if(G[s][i]==1 and visited[i]==0)
            dfs(i);
}
int main()
{
    int n;
    cout << "Start from which node? ";
    cin >> n;
    cout << "Start";
    dfs(n);
    return 0;
}
