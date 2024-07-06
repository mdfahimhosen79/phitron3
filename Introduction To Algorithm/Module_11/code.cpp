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