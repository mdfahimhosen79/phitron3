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