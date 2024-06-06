#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int res1=0;
        int res2=0;
        int cnt1 = 0;
        int cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] == '1')
            {
                cnt1++;
            }else{
                res1+=cnt1>=1;
                cnt1=0;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (ar[i] == '0')
            {
                cnt2++;
            }else{
                res2+=cnt2>=1;
                cnt2=0;
            }
        }
        if(cnt1)res1++;
        if(cnt2)res2++;
        cout << min(res1,res2) << endl;
    }
    return 0;
}