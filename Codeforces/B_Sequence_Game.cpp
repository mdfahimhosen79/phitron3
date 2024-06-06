#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    vector<int> v2;
    v2.push_back(v[0]);
    for(int i=1; i<n; i++)
    {
        if(v[i]<v[i-1]){
            v2.push_back(1);
            v2.push_back(v[i]);
        }else{
            v2.push_back(v[i]);
        }
    }
    cout<<v2.size()<<endl;
    for(int x:v2)cout<<x<<" ";
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}