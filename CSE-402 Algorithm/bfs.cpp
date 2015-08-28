#include<iostream>
#include<cstdio>
#include<cstring>
#include<queue>
#define inf 1000000
 
 
using namespace std;
 
bool adj[100][100];
int n, white=1,gray=2,black=3,color[100],d[100],edge,node[100],source;
 
void bfs();
 
int main()
{
 
    int start,end;
    cin>>n;
    for(int i=1;i<=n;i++)
     color[i]=white,d[i]=inf; // initially  color of all noded is white and distece infinity
     cin>>edge;
     while(edge--)
     cin>>start>>end,adj[start][end]=true,adj[end][start]=true;
     cin>>source;  //starting node
     bfs();
     for(int i=1;i<=n;i++)
     cout<<i<<" "<<d[i]<<endl;   //print the distence of all nodes from starting node
    return 0;
}
 
void bfs()
{
  queue <int> Q;
  d[source]=0;
  Q.push(source);
  color[source]=gray;
  while(!Q.empty())
  {
      int s=Q.front();
      for(int i=0;i<=n;++i)
        {
            if(adj[s][i] and color[i]==white)
             Q.push(i),color[i]=gray,d[i]=d[s]+1;
        }
        Q.pop();
  }
 
}