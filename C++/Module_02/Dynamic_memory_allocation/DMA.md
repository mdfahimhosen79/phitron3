#### Create Data in Dynamic Memory
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int; // syntax
    *a = 10;
    cout << *a << endl;
    return 0;
}

```
#### Create Dynamic Array
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int[5]; // syntax
    for (int i = 0; i < 5; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

```
#### Increase Size using Dynamic Array
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int[5]; // syntax
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    int *b = new int[7];
    for (int i = 0; i < 5; i++)
    {
        b[i] = a[i];
    }
    b[5] = 60;
    b[6] = 70;
    for (int i = 0; i < 7; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
    // Delete a Array
    delete[] a;
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}

```
#### Return Dynamic Array from Function
```
#include <bits/stdc++.h>
using namespace std;

int *fun()
{
    int *a = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    return a;
}

int main()
{
    int *a = fun();
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}

```
#### Ternary Operator
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 11;
    /* if (x % 2 == 0)
     {
         cout << "even";
     }
     else
     {
         cout << "odd";
     } */

    (x % 2 == 0) ? cout << "Even" : cout << "Odd";

    return 0;
}

```