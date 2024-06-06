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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end(), greater<int>());
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (n % 2 == 0)
            {
                if (i < n / 2)
                {
                    sum += v[i];
                }
                else
                {
                    sum -= v[i];
                }
            }else{
                if (i < (n / 2)+1)
                {
                    sum += v[i];
                }
                else
                {
                    sum -= v[i];
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}