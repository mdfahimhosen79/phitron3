#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ar[n];
        int m = 0;
        int b = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (ar[i] % 2 == 0)
            {
                m = m + ar[i];
            }
            else
            {
                b = b + ar[i];
            }
        }
        if (m > b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}