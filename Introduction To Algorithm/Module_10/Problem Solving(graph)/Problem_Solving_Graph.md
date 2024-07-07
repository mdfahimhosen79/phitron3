### CSES Graph Problem

#### Building Roads

```
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
vector<int> adjlist[N];
bool visited[N];

void dfs(int u)
{
    visited[u] = true;
    for(int v:adjlist[u])
    {
        if(visited[v])continue;
        dfs(v);
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
    vector<int> leader;
    for(int i=1; i<=n; i++)
    {
        if(visited[i])continue;
        dfs(i);
        leader.push_back(i);
    }
    cout<<leader.size()-1<<endl;
    for(int i=1; i<leader.size(); i++)
    {
        cout<<leader[i-1]<<" "<<leader[i]<<endl;
    }
    return 0;
}

```
#### Counting Rooms

```
#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
vector<string> g;
int visited [N][N];
int n,m;
bool isVisited(int i, int j)
{
    return (i>=0 && i<n && j>=0 && j<m);
}
void dfs(int i, int j)
{
    if(!isVisited(i,j))
        return;
    if(visited[i][j])
        return;
    if(g[i][j] == '#')
        return;
    
    visited[i][j] = true;

    dfs(i, j-1);
    dfs(i, j+1);
    dfs(i-1, j);
    dfs(i+1, j);
}
int main()
{
    
    cin>>n>>m;

    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        g.push_back(s);
    }

    int ct = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(g[i][j] =='#')continue;
            if(visited[i][j])continue;
            dfs(i,j);
            ct++;
        }
    }
    cout<<ct;
    return 0;
}

```
#### Message Route

```
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> adjlist[N];
int level[N];
bool visited[N];
int parent[N];

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    parent[s] = -1;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : adjlist[u])
        {
            if (visited[v])
                continue;
            q.push(v);
            visited[v] = true;
            level[v] = level[u] + 1;
            parent[v] = u;
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    set<int> st;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        st.insert(u);
        st.insert(v);
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }

    vector<int> ch;
    for (int y : st)
    {
        ch.push_back(y);
    }
    sort(ch.begin(), ch.end());
    if (ch[0] != 1)
    {
        cout << "IMPOSSIBLE" << endl;
    }
    else
    {
        bfs(1);
        if (!visited[n])
            cout << "IMPOSSIBLE" << endl;
        else
        {
            vector<int> path;
            int current = n;
            while (current != -1)
            {
                path.push_back(current);
                current = parent[current];
            }

            reverse(path.begin(), path.end());
            cout << path.size() << endl;
            for (int x : path)
            {
                cout << x << " ";
            }
        }
    }

    return 0;
}

```
#### Labyrinth

```
#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
typedef pair<int, int> pii;
vector<pii> direc = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
vector<string> adjlist;
int level[N][N];
int visited[N][N];
pii parent[N][N];
int n, m;

bool isValid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}
void bfs(int si, int sj)
{
    queue<pii> q;
    q.push({si, sj});
    visited[si][sj] = true;

    while (!q.empty())
    {
        pii u = q.front();
        int i = u.first;
        int j = u.second;
        q.pop();

        for (auto d : direc)
        {
            int ni = i + d.first;
            int nj = j + d.second;

            if (isValid(ni, nj) && !visited[ni][nj] && adjlist[ni][nj] != '#')
            {
                q.push({ni, nj});
                visited[ni][nj] = true;
                level[ni][nj] = level[i][j] + 1;
                parent[ni][nj] = {i, j};
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    int si, sj, di, dj;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        for (int j = 0; j < m; j++)
        {
            if (x[j] == 'A')
                si = i, sj = j;
            if (x[j] == 'B')
                di = i, dj = j;
        }
        adjlist.push_back(x);
    }
    bfs(si, sj);
    if (level[di][dj] != 0)
    {
        cout << "YES" << endl;
        cout << level[di][dj] << endl;
        vector<pii> path;
        pii curr = {di, dj};

        while (!(curr.first == si && curr.second == sj))
        {
            path.push_back(curr);
            curr = parent[curr.first][curr.second];
        }
        path.push_back({si, sj});
        reverse(path.begin(), path.end());
        for (int i = 1; i < path.size(); i++)
        {
            if (path[i - 1].first == path[i].first)
            {
                if (path[i - 1].second + 1 == path[i].second)
                    cout << "R";
                else
                    cout << "L";
            }
            else
            {
                if (path[i - 1].first + 1 == path[i].first)
                    cout << "D";
                else
                    cout << "U";
            }
        }
    }
    else
        cout << "NO" << endl;

    return 0;
}

```
### SPOJ Problem

#### Minimum knight Moves
```
#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
typedef pair<int, int> pii;
vector<pii> direc = {{1, 2}, {1, -2}, {-1, 2}, {-1, -2}, 
                     {2, 1}, {2, -1}, {-2, 1}, {-2, -1}};

int level[N][N];
int visited[N][N];
int n, m;

bool isValid(int i, int j)
{
    return (i >= 0 && i < 8 && j >= 0 && j < 8);
}
void bfs(int si, int sj)
{

    queue<pii> q;
    q.push({si, sj});
    visited[si][sj] = true;

    while (!q.empty())
    {
        pii u = q.front();
        int i = u.first;
        int j = u.second;
        q.pop();

        for (auto d : direc)
        {
            int ni = i + d.first;
            int nj = j + d.second;

            if (isValid(ni, nj) && !visited[ni][nj])
            {
                q.push({ni, nj});
                visited[ni][nj] = true;
                level[ni][nj] = level[i][j] + 1;
            }
        }
    }
}
int main()
{
    int si, sj, di, dj;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s, t;
        cin >> s >> t;
        
        si = s[0] - 'a';
        sj = s[1] - '1';

        di = t[0] - 'a';
        dj = t[1] - '1';
        
        bfs(si, sj);
        cout << level[di][dj] << endl;
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                level[i][j] = 0;
                visited[i][j] = false;
            }
        }
    }

    return 0;
}

```