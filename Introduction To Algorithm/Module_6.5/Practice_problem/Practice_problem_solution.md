#### Solution of Question 01
```
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adjlist[N];
bool visited[N];

void dfs(int u)
{
    //section 1: actions just after entering node u
    visited[u] = true;
    
    for(int v:adjlist[u])
    {
        //section 2: actons before entering new a neighbor
        if(visited[v] == true)continue;
        
        dfs(v);
        //section 3: actions after exiting a neighbor
        // if(Height[v]+1>Height[u])
        //     Height[u] = Height[v] + 1;
       
    }
    cout<<u<<" ";
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
    dfs(1);
    return 0;
}

```
#### Solution of Question 02
```
#include <bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
const int M = 1e5+5;
int adjmat[N][N];
vector<int> adjlist[M];
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cin>>adjmat[i][j];
        }
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(adjmat[i][j] ==1)
            {
                adjlist[i].push_back(j);
            }
        }
        
    }
    for(int i=1; i<=n; i++)
    {
        cout<<"List "<< i<<" : ";
        for(auto j:adjlist[i])
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

```
#### Solution of Problem 03
```
#include <bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
const int M = 1e5+5;
int adjmat[N][N];
vector<int> adjlist[M];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0; i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adjlist[u].push_back(v);
    }
    for(int i=1; i<=n; i++)
    {
        for(auto j:adjlist[i])
        {
            adjmat[i][j] = 1;
        }
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout<<adjmat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

```
#### Solution of Problem 04
```
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
    cout<<depth[x];
    return 0;
}

```
#### Solution of Problem 05
```
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

```