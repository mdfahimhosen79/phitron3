#### Adjacency Matrix Implementation
```
//Directed
#include <bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
int adjmat[N][N];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        int u,v;
        cin>>u>>v;
        adjmat[u][v] = 1;
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


// undirected

#include <bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
int adjmat[N][N];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        int u,v;
        cin>>u>>v;
        adjmat[u][v] = 1;
        adjmat[v][u] = 1;
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

// with Weight
#include <bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
int adjmat[N][N];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        int u,v,x;
        cin>>u>>v>>x;
        adjmat[u][v] = x;
        adjmat[v][u] = x;
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
#### Adajacency list
```
// Directed
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int> adjlist[N];
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
        cout<<"List"<< i<<": ";
        for(auto j:adjlist[i])
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// Undirected 

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int> adjlist[N];
int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=0; i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
    for(int i=1; i<=n; i++)
    {
        cout<<"List"<< i<<": ";
        for(auto j:adjlist[i])
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// With Weight
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<pair<int, int>> adjlist[N];
int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v>>w;
        adjlist[u].push_back({v,w});
        adjlist[v].push_back({u,w});
    }
    for (int i = 1; i <= n; i++)
    {
        cout << "List " << i << ": ";
        for (auto j : adjlist[i])
        {
            cout<<"(" << j.first << ", "<<j.second<<")"<<" ";
        }
        cout << endl;
    }
    return 0;
}
```
#### DFS Implementation
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
    cout<<"visiting Node: "<<u<<endl;
    for(int v:adjlist[u])
    {
        //section 2: actons before entering new a neighbor
        if(visited[v] == true)continue;
        dfs(v);
        //section 3: actions after exiting a neighbor
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
    dfs(1);
    cout<<"visiting array"<<endl;
    for(int i=1; i<=n; i++)
    {
        cout<<"Node "<<i<<" Status: "<<visited[i]<<endl;
    }
    return 0;
}

```
#### Depth and Height of a Tree using DFS
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
    dfs(1);
    for(int i=1; i<=n; i++)
    {
        cout<<"Depth of Node "<<i<<" : "<<depth[i]<<endl;
    }
    cout<<"**********************"<<endl;
    for(int i=1; i<=n; i++)
    {
        cout<<"Height of Node "<<i<<" : "<<Height[i]<<endl;
    }
    return 0;
}
```