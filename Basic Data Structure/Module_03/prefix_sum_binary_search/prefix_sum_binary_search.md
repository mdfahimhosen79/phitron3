#### Prefix Sum Array Implemented
[Problem link](https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y)
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long int pre[n];
    pre[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = a[i] + pre[i - 1];
    }
    while (m--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        long long int sum = 0;
        if (l == 0)
        {
            sum = pre[r];
        }
        else
        {
            sum = pre[r] - pre[l - 1];
        }
        cout << sum << endl;
    }
    return 0;
}

```
#### binary search for sorted array
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int x;
    cin>>x;
    bool flag = false;
    int l =0;
    int r=n-1;
    while(l<=r)
    {
        int mid_index = (l+r)/2;
        if(a[mid_index] == x)
        {
            flag = true;
            break;
        }
        else if(a[mid_index]<x)
        {
            l = mid_index + 1;
        }
        else
        {
            r= mid_index - 1;
        }
        
    }
    if (flag == true)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    return 0;
}


```
#### Binary Search for unsorted Array 
[Problem link](https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z)
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    while (m--)
    {
        int x;
        cin >> x;
        bool flag = false;
        int l = 0;
        int r = n - 1;
        while (l <= r)
        {
            int mid_index = (l + r) / 2;
            if (a[mid_index] == x)
            {
                flag = true;
                break;
            }
            else if (a[mid_index] < x)
            {
                l = mid_index + 1;
            }
            else
            {
                r = mid_index - 1;
            }
        }
        if (flag == true)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }
    return 0;
}

```