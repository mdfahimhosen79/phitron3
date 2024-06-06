#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int ans = max((y + 1) / 2, (x + 4 * y + 14) / 15);
        cout<<ans<<endl;
    }
    return 0;
}