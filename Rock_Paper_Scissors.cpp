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
        char ac[n];
        for(int i=0; i<n; i++)
        {
            cin>>ac[i];
        }
        int cnt = 0;
        for(int i=0; i<n-1; i++)
        {
            if(ac[i] == ac[i+1])
            {
                cnt++;
                i+=1;
            }
        }
        cout<<n-cnt<<endl;
    }
    return 0;
}