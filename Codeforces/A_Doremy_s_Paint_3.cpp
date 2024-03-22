#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    set <int> s;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        s.insert(v[i]);
    }
    int cnt = 0;
    if(s.size() == 1)cout<<"Yes"<<endl;
    else if(s.size() > 2)cout<<"No"<<endl;
    else if ( s.size() == 2) {
        for(int i=0; i<n; i++)
        {
            if(v[i] == v[0])cnt++;
        }
        if(n%2==0){
            if(cnt==n/2)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }else{
            if(cnt==n/2 || cnt == n/2 +1)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        }
        
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}