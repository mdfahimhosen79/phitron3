#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int cnt[200009] = {0};
    for (int i = 0; i < n; i++)
    {
            cout << (char('a'+cnt[a[i]]));
            cnt[a[i]]++;
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}