#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i =1; i<=n; i++)
    {
        for(int j= 1; j<=n; j++)
        {
            if(i == 1)
            {
                cout<<j;
            }
            else if(i>1 && i<n)
            {
                if(j>1 && j<n)
                {
                    cout<<" ";
                }
                else if(j==n)
                {
                    cout<<n;
                }
                else
                {
                    cout<<i;
                }
                
            }else
            {
               cout<<i;
            }
        }
        cout<<endl;
    }
    return 0;
}