#### O(N) Time Complexity
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int s = 0;
    for (int i = 0; i < n; i += 2)
    {
        s += a[i];
    }
    cout << s;
    return 0;
}

```
#### O(sqrt(N)) TIme complexity
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // for (int i = 1; i <= sqrt(n); i++)
    // {
    //     if (n % i == 0)
    //     {
    //         cout << i <<" ";
    //         if (n / i != i)
    //         {
    //             cout << n / i << endl;
    //         }
    //     }
    // }
    for (int i = 1; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i <<" ";
            if (n / i != i)
            {
                cout << n / i << endl;
            }
        }
    }  
    return 0;
}

```
#### O(Nlog(N)) time complexity
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 1; i <=n; i++) //O(Nlog(N))
    {
        int x = i;
        while (x>0) 
        {
           int digit = x%10;
           cout<<digit<<" ";
           x=x/10;
        }
        cout<<endl;
    }
    return 0;
}

```