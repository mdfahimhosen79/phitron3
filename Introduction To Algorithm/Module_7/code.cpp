#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adjlist[N];
bool visited[N];
int level[N];

int bfs(int s)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    int cnt = 1;

    while(!q.empty())
    {
        
        int u = q.front();
        q.pop();
        for(auto v:adjlist[u])
        {
            if(visited[v] == true) continue;
            q.push(v);
            visited[v] = true;
            level[v] = level[u] + 1;
            cnt++;
        }
        
    }
    return cnt;
}
int main()
{
    vector<int> vt;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        vt.push_back(u);
        vt.push_back(v);
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
    vector<int> v;
    for (int i:vt)
    {
        if (visited[i])
            continue;
        else{
            int n = bfs(i);
            if(n>1)v.push_back(n);
        }
        
        
    }
    sort(v.begin(),v.end());
    for(int x:v)
    {
        cout<<x<<" ";
    }

    return 0;
}
