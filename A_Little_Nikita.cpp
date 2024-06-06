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
        if(x>=y)
        {
            int ex = x-y;
            if(ex%2==0)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }else cout<<"No"<<endl;
    }
    return 0;
}