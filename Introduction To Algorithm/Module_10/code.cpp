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