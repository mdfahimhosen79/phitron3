#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int> adjlist[N];
bool visited[N];
int level[N];

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int v: adjlist[u])
        {
            if(visited[v])continue;
            q.push(v);
            visited[v] = true;
            level[v] = level[u] + 1;
        }
    }
}

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        int u,v;
        cin>>u>>v;
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
    bfs(1);
    return 0;
}