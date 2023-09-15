# String Built-in Functions

## Capacity Functions

- `s.size()`: Returns the size of the string.
- `s.max_size()`: Returns the maximum size that the string can hold.
- `s.capacity()`: Returns the current available capacity of the string.
- `s.clear()`: Clears the string.
- `s.empty()`: Returns true/false if the string is empty.
- `s.resize()`: Changes the size of the string.

## Element Access Functions

- `S[i]`: Accesses the ith index of the string.
- `s.at(i)`: Accesses the ith index of the string with bounds checking.
- `s.back()`: Accesses the last element of the string.
- `s.front()`: Accesses the first element of the string.

## Modifier Functions

- `s += str`: Appends another string to the end of the original string.
- `s.append(str)`: Appends another string to the end of the original string.
- `s.push_back(c)`: Adds a character to the end of the string.
- `s.pop_back()`: Removes the last character of the string.
- `s = str`: Assigns a new value to the string.
- `s.assign(str)`: Assigns a new value to the string.
- `s.erase(pos, len)`: Erases characters from the string, starting at the specified position and erasing the specified length.
- `s.replace(pos, len, str)`: Replaces a portion of the string with another string, starting at the specified position and replacing the specified length.
- `s.insert(pos, str)`: Inserts a portion of the string at a specific position.

## Iterators

- `s.begin()`: Returns an iterator pointing to the first element of the string.
- `s.end()`: Returns an iterator pointing to the position immediately after the last element of the string.

#### String in C++
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1="Hello";
    string s2="hello";
    if (s1 == s2)
    {
        cout<<"Same"<<endl;
    }
    else
    {
        cout<<"Not Same";
    }
    return 0;
}

```
#### String Capacity Functions
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //string s="Hello World";
    //cout<<s.size()<<endl;
    //cout<<s.max_size()<<endl;
   // cout<<s.capacity()<<endl;
   // s="I am very disappointed about my present situation. as you know I am not using the time in proper way.";
   // cout<<s.capacity()<<endl;
   // s.clear();
   // cout<<s.size()<<endl;

    //string s="Hello";
    //s.clear();
    /*if(s.empty() == true)
    {
        cout<<"Empty";
    }
    else
    {
        cout<<"Not Empty";
    }*/

    string s;
    cin>>s;
    //s.resize(5);
    //s.resize(20,'.');
    //cout<<s<<endl;
    s.resize(5);
    s.resize(11,'.');
    cout<<s<<endl;
    return 0;
}

```
#### String Element Access
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    cout<<a[0]<<endl; // 0th index element
    cout<<a.at(0)<<endl; // 0th index element
    cout<<a[a.size()-1]<<endl; //last index element
    cout<<a.back()<<endl; //last index element
    cout<<a.front()<<endl; //1st index element
    return 0;
}

```
#### String Modifiers - I
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a = "Hello";
    string b = "World";
    // a=a+b;
    // a+=b;
    // a.append(b);

    // cout<<b<<endl;
    // a="HelloA";
    //string c = "A";
    //a += c;
    a.push_back('A');
    a.pop_back();
    a.pop_back();
    cout << a << endl;
    return 0;
}

```
#### String Modifiers - II
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //string a = "Hello";
    //a = "Gello";
    //a.assign("Gelo");
    //cout << a << endl;

    string a= "HelloWorld";
    //a.erase(4,3);
    //a.replace(4,0,"On");
    a.insert(5,"Fahim");
    cout<<a<<endl;
    return 0;
}

```
#### String Iterators
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    //string::iterator it; //auto
    // cout<<*s.begin()<<endl;
    // cout<<*(s.end()-1)<<endl;
    for (auto it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}

```
#### String Input with Spaces
```
#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int x;
    cin>>x;
    //cin.ignore();
    getchar();
    string s;
    //cin>>s;
    //cin.getline(s,100); char s[100];
    getline(cin,s);
    cout<<x<<endl;
    cout<<s<<endl;
    return 0;
}

```
#### Stringstream in C++
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss;
    ss<<s;
    string word;
    
    /*while (ss>>word)
    {
        cout<<word<<endl;
    }*/
    int cnt = 0;
    while (ss>>word)
    {
        cnt++;
    }
    cout<<cnt<<endl;
    
    return 0;
}

```