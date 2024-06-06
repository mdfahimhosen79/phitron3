#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a[10][10] =
    {1,1,1,1,1,1,1,1,1,1,
     1,2,2,2,2,2,2,2,2,1,
     1,2,3,3,3,3,3,3,2,1,
     1,2,3,4,4,4,4,3,2,1,
     1,2,3,4,5,5,4,3,2,1,
     1,2,3,4,5,5,4,3,2,1,
     1,2,3,4,4,4,4,3,2,1,
     1,2,3,3,3,3,3,3,2,1,
     1,2,2,2,2,2,2,2,2,1,
     1,1,1,1,1,1,1,1,1,1
    };
    long long int sum = 0;
    char c[10][10];
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++)
        {
            cin>>c[i][j];
            if(c[i][j] == 'X')
            {
                sum += a[i][j];
            }

        }
    }
    cout<<sum<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}