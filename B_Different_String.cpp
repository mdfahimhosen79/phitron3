#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string r = s;
        for (int i=0; i<r.size()-1; i++)
            {
                swap(r[i], r[i+1]);
            }
        set<char> st;
        for(int i=0; i<s.size(); i++)
        {
            st.insert(s[i]);
        }
        if(s.size() == 1 || st.size() ==1)
        {
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            cout<<r<<endl;
        }
    }
    return 0;
}