#### L. New Array
```
https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/L
```
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    vector<int> v(a,a+n);
    vector<int> v2(b,b+n);
    for(auto y:v2)
    {
        cout<<y<<" ";
    }
    for(auto x:v)
    {
        cout<<x<<" ";
    } 
    return 0;
}

```
#### F. Reversing

[Problem link](https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F)

```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    for (int i = n-1; i >=0; i--)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}

```
#### C. Replacement

[Problem Link](https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C)
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        if(v[i]>0)
        {
            v[i]=1;
        }
        else if(v[i]<0)
        {
            v[i]=2;
        }
    }
    for(auto x:v)
    {
        cout<<x<<" ";
    } 
    return 0;
}

```
#### D. Counting Elements
[Problem link](https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/D)
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for ( int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int cnt =0;
    for (int i = 0; i < n; i++)
    {
        auto it = find(v.begin(),v.end(),v[i]+1);
    if (it == v.end())
    {
        
    }else
    {
        cnt++;
    }
    }
    cout<<cnt;
    return 0;
}

```
#### J. Count Letters
[Problem Link](https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J)
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int> cnt(26, 0);
    for (int i = 0; i < s.size(); i++)
    {
        int val = s[i] - 'a';
        cnt[val]++;
    }
    for (int i = 'a'; i <='z'; i++)
    {   
        if(cnt[i-'a']!=0)
        {
        cout<<char(i)<<" : "<<cnt[i-'a']<<endl;
        } 
    }
    return 0;
}
```
#### additional leter count
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int> cnt(26, 0);
    for (int i = 0; i < s.size(); i++)
    {
        int val = s[i] - 'a';
        cnt[val]++;
    }
    for (int i = 'a'; i <='z'; i++)
    {       
        if(cnt[i-'a']!=0)
        {  
            int t = cnt[i-'a'];
            for (int j = 0; j < t ; j++)
            {
                cout<<char(i);
            }   
        } 
        
    }
    return 0;
}

```
#### Y. Range sum query (TLE)
[Problem link](https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y)
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        for (int j = l; j <= r; j++)
        {
            sum = sum + a[j];
        }
        cout<<sum<<endl;
        sum = 0;
    }
    return 0;
}
```
#### Z. Binary Search (TLE)
[Problem link](https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z)
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < m; i++)
    {
        int t;
        cin >> t;
        auto it = find(v.begin(), v.end(), t);
        if (it == v.end())
        {
            cout << "not found"<<endl;
        }
        else
        {
            cout << "found"<<endl;
        }
    }
    return 0;
}
```