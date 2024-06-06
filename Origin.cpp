#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int sum = 0;
        sum = (n/9)*45;
        int rm = ((n%9)*((n%9)+1))/2;
        sum += rm;
        cout<<sum<<endl;
    }
    return 0;
}