#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int mx,mn;
    if (a>b)
    {
        if (a>c)
        {
            mx = a;
        }
        else if (a<c)
        {
            mn = b;
            mx = c;
        }   
        if (b>c)
        {
            mn = c;
        }
        else if (b<c)
        {
            mn = b;
        }
              
    }
    if (a<b)
    {
        if (a>c)
        {
            mx = b;
            mn = c;
        }
        else if (a<c)
        {
            mn = a;
        }
        if (b<c)
        {
            mx = c;
        }
        else if (b>c)
        {
            mx = b;
        }        
    }
    if (a==b)
    {
        if (b>c)
        {
            mx = b;
            mn =c;
        }
        else if (b<c)
        {
            mn = b;
            mx = c;
        }    
    }
    if (b==c)
    {
        if (b>a)
        {
            mx = b;
            mn = a;
        }
        else if (b<a)
        {
            mx = a;
            mn = b;
        }
        
        
    }
    if(a==c)
    {
        if (a>b)
        {
            mx = a;
            mn = b;
        }
        else if (a<b)
        {
            mn = a;
            mx = b;
        }     
    } 
    cout<<mn<<" "<<mx;
    return 0;
}