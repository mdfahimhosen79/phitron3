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