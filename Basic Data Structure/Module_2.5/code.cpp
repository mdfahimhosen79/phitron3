#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < m; i++)
    {
        int t;
        cin >> t;
        auto it = find(v.begin(), v.end(), t);
        if (it == v.end())
        {
            cout << "not found"<<endl;
        }
        else
        {
            cout << "found"<<endl;
        }
    }
    return 0;
}