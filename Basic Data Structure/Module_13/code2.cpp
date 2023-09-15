#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
     int sk1=1000,sk2=1000,sk3=1000;
    for(int i =0; i<n; i++){
        int x;
        string s;
        cin>>x>>s;
        if(s=="10" && x<sk1)
        {
            sk1 = x;
        }else if(s=="01" && x<sk2)
        {
            sk2 = x;
        }
        else if(s=="11" && x<sk3){
            sk3 = x;
        }
    }
    if(sk3!=1000)
    {   
        int sum = sk1 + sk2;
        if(sum > sk3)
        {
            cout<<sk3<<endl;
        }
    }else if(sk1 == 1000 || sk2 ==1000)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<sk1+sk2<<endl;
    }
    }
    
    return 0;
}