#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
#include<cstring>
#include<algorithm>
#define cl(x,y) memset(x,y,sizeof(x))
#define inf 2000000
 
using namespace std;
 
struct edge
{
    int start,dest,d;
    edge(int a, int b, int c)
    {
        start=a;
        dest=b;
        d=c;
    }
} ;
 
bool compare(edge a,edge b)
{
    return (bool)(a.d<b.d);
};
 
void MST();
void link(int x,int y);
int find(int x);
void union_making(int x,int y);
 
vector<edge> e;
queue<int>qu;
int rank[505],p[505],parent[505],value[505],adj[505][5005],deg[505];
bool visited[505];
int c,s,q,start,dist,weight;
 
 
 
int main()
{
    int cased=0,T;
    scanf("%d",&T);   // number of testcase
    while(T--)
    {
        scanf("%d%d",&c,&s); //c=number of virtices and s=number of edges
        e.clear();
        cl(deg,0);
        for(int i=0; i<c; i++)
        {
            rank[i]=0;
            p[i]=i;
        }
 
        for(int i=1; i<=s; i++)
        {
            scanf("%d%d%d",&start,&dist,&weight);
            e.push_back(edge(start,dist,weight));
        }
 
        sort(e.begin(),e.end(),compare);
        MST();
 
 
    }
 
return 0;
}
 
 
 
 
 
void MST()
{
    int i=0;
 
    while(i<s)
    {
        if(find(e[i].start)!=find(e[i].dest))
        {
            union_making(e[i].start,e[i].dest);
           cout<<e[i].start<<"  "<<e[i].dest<<endl;  //print the edges of mst
        }
 
        i++;
    }
 
}
void link(int x,int y)
{
    if(rank[x]>rank[y])
        p[y]=x;
    else
        p[x]=y;
    if(rank[x]==rank[y])
        rank[y]=rank[y]+1;
}
int find(int x)
{
    if(x!=p[x])
        p[x]=find(p[x]);
    return p[x];
}
 
void union_making(int x,int y)
{
    link(find(x),find(y));
}