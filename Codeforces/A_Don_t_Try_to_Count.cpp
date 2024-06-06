#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    string x,s;
    cin>>x>>s;
    int cnt = 0;
    while(true)
    {
        
        if(x.find(s) != string::npos){
            break;
        }else if(cnt>5)
        {
            break;
        }
        x += x;
        cnt++;
    }
    if(cnt==6)cout<<"-1"<<endl;
    else cout<<cnt<<endl;
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}