#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    // cout<<d<<endl;
    string d;
    for(int i=0; i<s1.length(); i++)
    {
        if(s1[i] == s3[i])
        {
            d.push_back(s1[i]);
        }
    }
    
    for (int i = 0; i < s2.length(); i++)
    {
        if(s1[i] != s2[i] && s2[i] == s3[i])
        {
            d.push_back(s2[i]);
        }
    }
        
    
    if(s3.length() == d.length())
    {
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}