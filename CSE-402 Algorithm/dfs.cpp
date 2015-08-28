#include<iostream>
#include<cstdio>
#include<cstring>
#include<stack>
#define inf 1000000
#define clear(x,a) memset(x,a,sizeof(x))
 
using namespace std;
 
bool adj[100][100];
int n, white=1,gray=2,black=3,color[100],d[100],edge,node[100],parent[100],time=0,f[100];
void dfs();
void dfs_visit(int a);
 
int main()
{
    int start,end;
    cin>>n;  // number of nodes
    for(int i=1;i<=n;i++)
     color[i]=white,d[i]=inf,f[i]=inf; //initilly color of all nodes are white and strting time d[i] and finishing time f[i] are infinity
     cin>>edge;
     while(edge--)
     cin>>start>>end,adj[start][end]=true;
     dfs();  //dsf is called here and node 1 always starting  node for this program
     for(int i=1;i<=n;i++)
     cout<<i<<" "<<d[i]<<" "<<f[i]<<endl;  
    return 0;
}
 
void dfs()
{
  for(int i=1;i<=n;i++)
   if(color[i]==white)
   dfs_visit(i);
 
}
 
 
void dfs_visit(int a)
{
    color[a]=gray;
    d[a]=++time;
    for(int i=1;i<=n;i++)
     if(adj[a][i] and color[i]==white)
     dfs_visit(i);
     f[a]=++time;
     color[a]=black;
 
}