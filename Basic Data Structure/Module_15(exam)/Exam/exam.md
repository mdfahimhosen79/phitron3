#### Problem 01
```
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
class myStack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    bool empty()
    {
        if (v.size() == 0)
            return true;
        else
            return false;
    }
    int size()
    {
        return v.size();
    }
};
class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }
    void pop()
    {
        sz--;
        Node *del = head;
        head = head->next;
        delete del;
        if (head == NULL)
        {
            tail = NULL;
        }
    }
    int front()
    {
        return head->val;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
    int size()
    {
        return sz;
    }
};
int main()
{
    myStack st;
    myQueue q;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    for(int i = 0; i<m; i++)
    {
        int y;
        cin>>y;
        q.push(y);
    }
    if(st.size() != q.size())
    {
        cout<<"NO";
    }else{
        int flag = 1;
        while(!st.empty())
        {
            if(st.top() != q.front())
            {
                flag = 0;
                break;
            }
            st.pop();
            q.pop();
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
#### Problem 02
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    queue<int> q;
    int n,m;
    cin>>n>>m;
    for(int i = 0; i<n; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    for(int i = 0; i<m; i++)
    {
        int y;
        cin>>y;
        q.push(y);
    }
    if(st.size() != q.size())
    {
        cout<<"NO";
    }else{
        int flag = 1;
        while(!st.empty())
        {
            if(st.top() != q.front())
            {
                flag = 0;
                break;
            }
            st.pop();
            q.pop();
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
#### Special Queries
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> q;
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        if (n == 0)
        {
            string s;
            cin >> s;
            q.push(s);
        }
        else
        {
            if (q.size() != 0)
            {
                if (n == 1)
                {
                    cout << q.front() << endl;
                    q.pop();
                }
            }
            else if (q.size() == 0)
            {
                cout << "Invalid" << endl;
            }
        }
    }

    return 0;
}
```
#### Valid String
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        stack<char> st;
        string s;
        cin >> s;
        for (char c : s)
        {
            if (st.size() == 0)
            {
                st.push(c);
            }
            else
            {
                if (c == 'A' && st.top() == 'B')
                {
                    st.pop();
                }
                else if (c == 'B' && st.top() == 'A')
                {
                    st.pop();
                }
                else
                {
                    st.push(c);
                }
            }
        }
        if (st.size() == 0)
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

```
#### The Magician and The Magic Colors
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        stack<char> st;
        stack<char> cp;
        int n;
        cin >> n;
        char ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (st.empty())
            {
                st.push(ar[i]);
            }
            else if (ar[i] == 'B' && st.top() == 'R')
            {
                st.pop();
                if (!st.empty())
                {
                    if (st.top() == 'P')
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push('P');
                    }
                }
                else
                {
                    st.push('P');
                }
            }
            else if (ar[i] == 'R' && st.top() == 'B')
            {
                st.pop();
                if (!st.empty())
                {
                    if (st.top() == 'P')
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push('P');
                    }
                }
                else
                {
                    st.push('P');
                }
            }
            else if (ar[i] == 'G' && st.top() == 'R')
            {
                st.pop();
                if (!st.empty())
                {
                    if (st.top() == 'Y')
                    {
                        st.pop();
                    }else
                    {
                        st.push('Y');
                    }
                    
                }
                else
                {
                    st.push('Y');
                }
            }
            else if (ar[i] == 'R' && st.top() == 'G')
            {
                st.pop();
                if (!st.empty())
                {
                    if (st.top() == 'Y')
                    {
                        st.pop();
                    }else
                    {
                        st.push('Y');
                    }
                    
                }
                else
                {
                    st.push('Y');
                }
            }

            else if (ar[i] == 'G' && st.top() == 'B')
            {
                st.pop();
                if (!st.empty())
                {
                    if (st.top() == 'C')
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push('C');
                    }
                    
                }
                else
                {
                    st.push('C');
                }
            }
            else if (ar[i] == 'B' && st.top() == 'G')
            {
                st.pop();
                if (!st.empty())
                {
                    if (st.top() == 'C')
                    {
                        st.pop();
                    }else
                    {
                        st.push('C');
                    }
                    
                }
                else
                {
                    st.push('C');
                }
            }
            else if (ar[i] == 'R' && st.top() == 'R')
            {
                st.pop();
            }
            else if (ar[i] == 'B' && st.top() == 'B')
            {
                st.pop();
            }
            else if (ar[i] == 'G' && st.top() == 'G')
            {
                st.pop();
            }

            else
            {

                st.push(ar[i]);
            }
        }
        while (!st.empty())
        {
            cp.push(st.top());
            st.pop();
        }
        while (!cp.empty())
        {
            cout << cp.top();
            cp.pop();
        }
        cout << endl;
    }
    return 0;
}
```