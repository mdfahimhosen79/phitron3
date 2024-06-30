#### Shortest Path using BFS
```
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int> adjlist[N];
bool visited[N];
int level[N];
int parent[N];

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    parent[s] = -1;

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
            parent[v] = u;
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
    int s,d;
    cin>>s>>d;
    bfs(s);
    cout<<"Distance: "<<level[d]<<endl;
    // for(int i=1; i<=n; i++)
    // {
    //     cout<<"Parent of "<<i<<": "<<parent[i]<<"\n";
    // }

    vector<int> path;
    int current = d;
    while(current != -1)
    {   
        //cout<<"Current: "<<current<<" Parent: "<<parent[current]<<endl;
        path.push_back(current);
        current = parent[current];
        
    }
    reverse(path.begin(),path.end());
    cout<<"Path: ";
    for(int node:path)
    {
        cout<<node<<" ";
    }
    return 0;
}

// time complexity O(n+m)
```
#### Dijkstra Algorithm
```
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
const int INF = 1e9+9;
vector<pair<int,int>> adjlist[N];
vector<int> dist(N, INF);
vector<bool> visited(N);
void dijkstra(int s)
{
    priority_queue<pair<int,int>, vector<pair<int,int>> , greater<pair<int,int>>> minHeap;
    dist[s] = 0;
    minHeap.push({dist[s],s});

    while(!minHeap.empty())
    {
        int u = minHeap.top().second;
        minHeap.pop();

        visited[u] = true;

        for(pair<int,int> vpair: adjlist[u])
        {
            int v = vpair.first;
            int w = vpair.second;

            if(dist[v] > dist[u] + w)
            {
                dist[v] = dist[u] + w;
                minHeap.push({dist[v],v});
            }
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        adjlist[u].push_back({v,w});
        //adjlist[v].push_back({u,w});
    }
    dijkstra(1);
    for(int i=1; i<=n; i++)
    {
        cout<<"Distance of Node "<<i<<" is: "<<dist[i]<<endl;
    }
    return 0;
}

```