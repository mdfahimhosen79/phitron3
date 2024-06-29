#### BFS Implementaion
```
#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
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
        // pop a node from the queue & insert 
        // unvisited neighber of that node

        int u = q.front();
        q.pop();
        cout<<"Visitiong Node: "<<u<<endl;
        // section 1: A node is being processed
        for(auto v:adjlist[u])
        {
            // section 2: Child processing
            if(visited[v] == true) continue;
            q.push(v);
            visited[v] = true;
            level[v] = level[u] + 1;
            // section 3: Child processing
        }
        // section 4: same as section 1
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
    for(int i=1; i<=n; i++)
    {
        cout<<"level of "<<i<<": "<<level[i]<<endl;
    }
    return 0;
}

```

#### Number of Connected Components
```
#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
vector<int> adjlist[N];
bool visited[N];


void dfs(int u)
{   
    visited[u] = true;
    for(int v: adjlist[u])
    {
        if(visited[v])continue;
        dfs(v);
    }
}

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        
        for(auto v:adjlist[u])
        {
          
            if(visited[v] == true) continue;
            q.push(v);
            visited[v] = true;
            
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
    int cc = 0;
    for(int i=1; i<=n; i++)
    {
        if(visited[i])continue;
        dfs(i);
        cc++;
    }
    cout<<"Number of Connected Components: "<<cc<<endl;
    return 0;
}

```
#### Cycle Detection
```
#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
vector<int> adjlist[N];
bool visited[N];


bool dfs(int u, int p = -1)
{   
    bool detected = false;
    visited[u] = true;
    for(int v: adjlist[u])
    {
        if(v==p)continue;
        if(visited[v])return true;
        detected = detected | dfs(v,u);
    }
    return detected;
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

    bool isCycle = false;

    for(int i=1; i<=n; i++)
    {
        if(visited[i])continue;
        isCycle = isCycle | dfs(i);
    }

    if(isCycle)cout<<"Cycle detected"<<endl;
    else cout<<"No Cycle"<<endl;
    return 0;
}

```