#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int pm = x+x+y+y;
    if(pm<1000) cout<<"NO";
    else cout<<"YES";
    return 0;
}