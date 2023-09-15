[Problem Set Link](https://docs.google.com/document/d/1Trg4M7G7TM-Lak4NxbCrHb61dWF-oMnwZ7AT9lx4rlQ/edit)
#### Practice Problem 01
```
#include <bits/stdc++.h>
using namespace std;
class myStack
{
private:
    vector<int> v;
    int sz = 0;
public:
    void push(int val)
    {   
        sz++;
        v.push_back(val);
    }
    void pop()
    {   
        sz--;
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    bool empty()
    {
        return sz == 0;
    }
    int size()
    {
        return sz;
    }
};
int main()
{
    myStack s,t;
    int n2;
    cin>>n2;
    for(int i = 0; i<n2; i++)
    {
        int x;
        cin>>x;
        s.push(x);
    }
    int n;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        int x;
        cin>>x;
        t.push(x);
    }
    
    if(s.size() != s.size())
    {
        cout<<"NO";
    }else
    {
        int flag = 1;
        while (!s.empty())
        {
            if(s.top() != t.top()){
                flag = 0;
            }
            s.pop();
            t.pop();
        }
        if(flag == 1)
        {
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    }
    return 0;
}

```
#### Practice Problem 02
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    queue<int> t;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        t.push(x);
    }
    if (s.size() != t.size())
    {
        cout << "NO";
    }
    else
    {
        int flag = 1;
        while (!s.empty())
        {
            if (s.top() != t.front())
            {
                flag = 0;
            }
            s.pop();
            t.pop();
        }
        if (flag == 1)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    return 0;
}
```
#### Practice Problem 03
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    stack<int> t;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        s.push(x);
    }
    while(!s.empty())
    {
        t.push(s.top());
        s.pop();
    }
    while(!t.empty())
    {
        cout<<t.top()<<" ";
        t.pop();
    }
    return 0;
}

```
#### Practice Problem 04
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    stack<int> s;
    queue<int> t;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    while(!q.empty())
    {
        s.push(q.front());
        q.pop();
    }
    while(!s.empty())
    {
        t.push(s.top());
        s.pop();
    }
    while(!t.empty())
    {
        cout<<t.front()<<" ";
        t.pop();
    }
    return 0;
}

```
