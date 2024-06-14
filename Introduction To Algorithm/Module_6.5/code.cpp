#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adjlist[N];
bool visited[N];
int depth[N];
int Height[N];
void dfs(int u)
{
    //section 1: actions just after entering node u
    visited[u] = true;
    //cout<<"visiting Node: "<<u<<endl;
    for(int v:adjlist[u])
    {
        //section 2: actons before entering new a neighbor
        if(visited[v] == true)continue;
        depth[v] = depth[u] + 1;
        dfs(v);
        //section 3: actions after exiting a neighbor
        // if(Height[v]+1>Height[u])
        //     Height[u] = Height[v] + 1;
        Height[u] = max(Height[u], Height[v]+1);
    }
    //section 4: action before exiting node u
}
int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
    int x;
    cin>>x;
    dfs(1);
    cout<<Height[x];
    return 0;
}