## Vector Built-in Functions

### Constructor

#### Name: `vector<type> v;`
- **Details:** Construct a vector with 0 elements.
- **Time Complexity:** O(1)

#### Name: `vector<type> v(N);`
- **Details:** Construct a vector with N elements, and the value will be garbage.
- **Time Complexity:** O(N)

#### Name: `vector<type> v(N, V);`
- **Details:** Construct a vector with N elements, and the value will be V.
- **Time Complexity:** O(N)

#### Name: `vector<type> v(v2);`
- **Details:** Construct a vector by copying another vector v2.
- **Time Complexity:** O(N)

#### Name: `vector<type> v(A, A+N);`
- **Details:** Construct a vector by copying all elements from an array A of size N.
- **Time Complexity:** O(N)

### Capacity

#### Name: `v.size()`
- **Details:** Returns the size of the vector.
- **Time Complexity:** O(1)

#### Name: `v.max_size()`
- **Details:** Returns the maximum size that the vector can hold.
- **Time Complexity:** O(1)

#### Name: `v.capacity()`
- **Details:** Returns the current available capacity of the vector.
- **Time Complexity:** O(1)

#### Name: `v.clear()`
- **Details:** Clears the vector size. Do not delete the memory, do not only clear the value.
- **Time Complexity:** O(N)

#### Name: `v.empty()`
- **Details:** Returns true/false if the vector is empty or not.
- **Time Complexity:** O(1)

#### Name: `v.resize()`
- **Details:** Change the size of the vector.
- **Time Complexity:** O(K); where K is the difference between the new size and current size.

### Modifiers

#### Name: `v= or v.assign()`
- **Details:** Assign another vector.
- **Time Complexity:** O(N) if sizes are different, O(1) otherwise.

#### Name: `v.push_back()`
- **Details:** Add an element to the end.
- **Time Complexity:** O(1)

#### Name: `v.pop_back()`
- **Details:** Remove the last element.
- **Time Complexity:** O(1)

#### Name: `v.insert()`
- **Details:** Insert elements at a specific position.
- **Time Complexity:** O(N+K); where K is the number of elements to be inserted.

#### Name: `v.erase()`
- **Details:** Delete elements from a specific position.
- **Time Complexity:** O(N+K); where K is the number of elements to be deleted.

#### Name: `replace(v.begin(),v.end(),value,replace_value)`
- **Details:** Replace all occurrences of value with replace_value. Not under a vector.
- **Time Complexity:** O(N)

#### Name: `find(v.begin(),v.end(),V)`
- **Details:** Find the value V. Not under a vector.
- **Time Complexity:** O(N)

### Element Access

#### Name: `v[i]`
- **Details:** Access the ith element.
- **Time Complexity:** O(1)

#### Name: `v.at(i)`
- **Details:** Access the ith element.
- **Time Complexity:** O(1)

#### Name: `v.back()`
- **Details:** Access the last element.
- **Time Complexity:** O(1)

#### Name: `v.front()`
- **Details:** Access the first element.
- **Time Complexity:** O(1)

### Iterators

#### Name: `v.begin()`
- **Details:** Pointer to the first element.
- **Time Complexity:** O(1)

#### Name: `v.end()`
- **Details:** Pointer to the last element.
- **Time Complexity:** O(1)

#### Vector Initialization and Constructors
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //vector<int> v; type 1
    //vector<int> v(5); type 2
    //vector<int> v(5,2); type 3
    // vector<int> v2(5,30); type 4
    // vector<int> v(v2); type 4
    // int a[6] = {1,2,3,4,5,6}; last type 
    // vector<int> v(a,a+6); last type
    vector<int> v= {3,2,10};
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.size()<<endl;
    return 0;
}

```
#### Vector Capacity Functions
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v;
    // cout<<v.max_size()<<endl; type 1
    // cout<<v.capacity()<<endl;
    // v.push_back(10);
    // cout<<v.capacity()<<endl;
    // v.push_back(20);
    // cout<<v.capacity()<<endl;
    // v.push_back(30);
    // cout<<v.capacity()<<endl;
    // v.push_back(40);
    // cout<<v.capacity()<<endl;
    // v.push_back(50);
    // cout<<v.capacity()<<endl; capacity

    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // v.push_back(40);
    // v.push_back(50);
    // v.clear();
    // cout<<v.size()<<endl;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    // cout<<v[4]<<endl; type 2

    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    cout << v.size() << endl;
    v.resize(2);
    v.resize(7,30);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}

```
#### Vector Modifiers Functions - I
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v = {10,20,30};
    // vector<int> x = {1,2,3};
    // x=v; // O(1)
    // for (int i = 0; i < x.size(); i++)
    // {
    //     cout<<x[i]<<" ";
    // }                               type 1

    // vector<int> v = {10,20,30,40};
    // vector<int> x = {1,2,3};
    // x=v; // O(n)
    // for (int i = 0; i < x.size(); i++)
    // {
    //     cout<<x[i]<<" ";
    // }                              type 2

    vector<int> x = {10,20,30,40};
    x.pop_back();
    x.pop_back();
    for (int i = 0; i < x.size(); i++)
    {
        cout<<x[i]<<" ";
    }

    
    return 0;
}

```
#### vector insert
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1,2,3,4,5};
    //v.insert(v.begin()+3,6);
    vector <int> v2 = {7,8,9,10};
    v.insert(v.begin()+4,v2.begin(),v2.end());
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}

```
#### vector erase
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1,2,3,4,5};
    // v.erase(v.begin()+3);
    // v.erase(v.begin()+1,v.begin()+4);
    v.erase(v.begin()+1,v.end()-1);
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}

```
#### vector replace element
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 2, 3, 4, 2, 2, 5, 2};
    replace(v.begin(), v.end() - 1, 2, 100);
    for (auto x : v)
    {
        cout << x << " ";
    }
    return 0;
}

```
#### vector find element
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 2, 3, 4, 2, 2, 5, 2};
    // vector<int> :: iterator it;
    auto it = find(v.begin(),v.end(),6);
    if(it == v.end())
    {
        cout<<"Not Found";
    }
    else
    {
        cout<<"Found";
    }
    return 0;
}

```
#### Vector element access
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5,6};
    cout<<v[v.size()-1];
    cout<<v.back();
    cout<<v.front();
    cout<<v[0];
    return 0;
}

```
#### vector input
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (auto x : v)
    {
        cout << x << " ";
    }
    return 0;
}

```
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int y;
        cin>>y;
        v.push_back(y);
    }
    for (auto x : v)
    {
        cout << x << " ";
    }
    return 0;
}

```
#### vector of string
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<endl;
    }
    return 0;
}

```

```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
    for (auto x:v)
    {
        cout<<x<<endl;
    }
    return 0;
}

```
#### String with space
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        getline(cin,v[i]);
    }
    for (auto x:v)
    {
        cout<<x<<endl;
    }
    return 0;
}

```
