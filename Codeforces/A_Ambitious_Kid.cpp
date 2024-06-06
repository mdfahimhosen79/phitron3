#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    int mn=INT_MAX,mn1=INT_MAX,mn2=INT_MAX;
    for(int i=0; i<n; i++)
    {   
        cin>>v[i];
        if(v[i]>=0){
            mn1 = v[i] - 0;
            mn = min(mn,mn1);
        } 
        else if(0>v[i]){
            mn2 = 0 - v[i];
            mn = min(mn,mn2);
        } 
        
    }
    cout<<mn;
    return 0;
}