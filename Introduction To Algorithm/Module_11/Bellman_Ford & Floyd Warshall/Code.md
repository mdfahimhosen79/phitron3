#### Bellman Ford Algorithm Implementaion

```
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<pair<int,int>> adjlist[N];
const int INF = 1e9+9;
vector<int> d(N,INF);
int n,m;

void bellmanford(int s)
{
    d[s] = 0;
    for(int i=1; i<n; i++)
    {
        //All edges relaxation
        for(int u=1; u<=n; u++)
        {
            for(auto pii:adjlist[u])
            {
                int v = pii.first;
                int w = pii.second;

                if(d[u] != INF && d[v] > d[u] + w)
                    d[v] = d[u] + w;
            }
        }

    }
}
int main()
{
    cin>>n>>m;
    while(m--)
    {
        int u,v,w;
        cin>>u>>v>>w;
        adjlist[u].push_back({v,w});
    }
    bellmanford(1);
    for(int i=1; i<=n; i++)
    {
        cout<<"Distance of "<<i<<" : "<<d[i]<<endl;
    }
    return 0;
}

// Another Way To Implement

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<pair<int, int>> adjlist[N];
const int INF = 1e9 + 9;
vector<int> d(N, INF);
vector<pair<pair<int, int>, int>> list_of_edge;
int n, m;

void bellmanford(int s)
{
    d[s] = 0;
    for (int i = 1; i < n; i++)
    {
        for (auto edge : list_of_edge)
        {
            int u = edge.first.first;
            int v = edge.first.second;
            int w = edge.second;
            if (d[u] != INF && d[v] > d[u] + w)
                d[v] = d[u] + w;
        }
    }
}
int main()
{
    cin >> n >> m;
    while (m--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        // adjlist[u].push_back({v,w});
        list_of_edge.push_back({{u, v}, w});
    }
    bellmanford(1);
    for (int i = 1; i <= n; i++)
    {
        cout << "Distance of " << i << " : " << d[i] << endl;
    }
    return 0;
}
// time complexity O(n,m) here n = node, m = edge
// time complexity also ber O(n^2) or O(n^3) if m = n or m = n^2
```

#### Floyd Warshal Algorithm

```
#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+3;
const int INF = 1e9+9;
int adjmat[N][N];
int n,m;

void print_matrix()
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(adjmat[i][j]==INF)cout<<"X ";
            else cout<<adjmat[i][j]<<" ";
        }
        cout<<endl;
    }
}
void dist_initialize()
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i!=j)
                adjmat[i][j] = INF;
        }
    }
}
int main()
{
    cin>>n>>m;
    dist_initialize();
    for(int i=0; i<m; i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        adjmat[u][v] = w;
        adjmat[v][u] = w;
    }
    
    for(int k=1; k<=n; k++)
    {
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                adjmat[i][j] = min(adjmat[i][j], adjmat[i][k]+adjmat[k][j]);
            }
        }
    }
    print_matrix();
    return 0;
}

```