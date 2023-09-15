#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s;
    while (t--)
    {
        for (int i = 0; i < 8; i++)
        {
            for (int i = 0; i < 8; i++)
            {
                char ar[8];
                cin >> ar[i];
                if (ar[i] != '.')
                {
                    s = s + ar[i];
                }
            }
        }
        cout << s << endl;
        s ="";
    }
    return 0;
}