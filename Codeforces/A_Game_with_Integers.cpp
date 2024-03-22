#include <bits/stdc++.h>
#define fuad ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
using namespace std;
void solve()
{
    int n;
    cin>>n;
    if(n%3==0)cout<<"Second"<<endl;
    else cout<<"First"<<endl;
}
int main()
{
    fuad
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}