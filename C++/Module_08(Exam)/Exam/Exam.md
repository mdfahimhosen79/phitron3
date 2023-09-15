#### Find Function
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World Hello World";
    while (s.find("Hello") != -1)
    {
         s.replace(s.find("Hello"),5,"$");
    }
    cout<<s;
    return 0;
}

```
#### Replace It
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        while (a.find(b) != -1)
    {
         a.replace(a.find(b),b.size(),"$");
    }
    cout<<a<<endl;
    } 
    return 0;
}

```