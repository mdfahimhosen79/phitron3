#### M. Capital or Small or Digit
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s;
    cin>>s;
    if(s>='0' && s<='9')
    {
        cout<<"IS DIGIT";
    }
    if (s>='a' && s<='z')
    {
        cout<<"ALPHA"<<endl<<"IS SMALL";
    }
    if(s>='A' && s<='Z')
    {
        cout<<"ALPHA"<<endl<<"IS CAPITAL";
    }
    return 0;
}

```
#### Simple Calculator
```
#include <bits/stdc++.h>
using namespace std;
int main()
{   
    long long int x,y;
    cin>>x>>y;
    long long int mul = x*y;
    cout<<x<<" + "<<y<<" = "<<x+y<<endl;
    cout<<x<<" * "<<y<<" = "<<mul<<endl;
    cout<<x<<" - "<<y<<" = "<<x-y;
    return 0;
}

```
#### E. Max
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
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    { 
        mx = max(mx,a[i]); 
    }
    cout<<mx;    
    return 0;
}
```
#### min and max
```
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
    if (a==b && b==c)
    {
        mx = a;
        mn = a;
    }    
    cout<<mn<<" "<<mx;
    return 0;
}


```