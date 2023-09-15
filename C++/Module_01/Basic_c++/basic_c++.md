#### How to Print in C++
```
#include <iostream>
using namespace std;
int main()
{
    // std::cout << "Hello World";
    // std::cout << "Hello\nWorld";
    // std::cout << "Hello "<<"World";
    // std::cout << "Hello"<<std::endl<<"World";
    int a = 100, b = 200;
    // std::cout << a << b;
    cout << a << " " << b << endl;
    return 0;
}

```
#### How to Take Input in C++
```
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    cout << a << " " << b << endl;

    return 0;
}

```
#### Setprecision in C++
```
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float t;
    cin >> t;
    cout << fixed << setprecision(2) << t;

    return 0;
}

```
#### Switch Case in C++
```
#include <iostream>
using namespace std;

int main()
{
    int v;
    cin >> v;
    switch (v)
    {
    case 1:
        cout << "One" << endl;
        break;
    case 2:
        cout << "Two" << endl;
        break;
    case 3:
        cout << "Three" << endl;
        break;
    case 4:
        cout << "Four" << endl;
        break;
    case 5:
        cout << "Five" << endl;
        break;
    default:
        cout << "Didn't Match" << endl;
    }

    return 0;
}

```
#### Switch case to check Vowel or Consonant
```
#include <iostream>
using namespace std;

int main()
{
    char a;
    cin >> a;

    switch (a)
    {
    case 'a':
        cout << "Vowel" << endl;
        break;
    case 'e':
        cout << "Vowel" << endl;
        break;
    case 'i':
        cout << "Vowel" << endl;
        break;
    case 'o':
        cout << "Vowel" << endl;
        break;
    case 'u':
        cout << "Vowel" << endl;
        break;
    default:
        cout << "Consonant" << endl;
    }

    return 0;
}

```
#### To check Even Or Odd
```
#include <iostream>
using namespace std;

int main()
{
   int a;
   cin>>a;
   switch(a%2) // 0 or 1
   {
        case 0:
            cout<<"Even"<<endl;
            break;
        case 1:
            cout<<"Odd"<<endl;
            break;
   }

    return 0;
}

```
#### Check Minimum and Maximum without built in function in c++
```
#include <iostream>
using namespace std;

int my_min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}
int my_max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int mn = my_min(a, b);
    int mx = my_max(a,b);
    cout << "Minimum: " << mn << endl;
    cout << "Maximum: " << mx << endl;
    return 0;
}

```
#### Minimum and Maximum using built in function in c++
```
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int mn = min(a, b);
    int mx = max(a, b);
    cout << "Minimum: " << mn << endl;
    cout << "Maximum: " << mx << endl;
    return 0;
}

```
#### swap without built in function
```
#include <iostream>
using namespace std;

void my_swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int a, b;
    cin >> a >> b;
    my_swap(&a, &b);
    cout << a << " " << b;

    return 0;
}
```
#### swap() Built-in Function in C++
```
#include <iostream>
using namespace std;

int main()
{
    char s[100];
    cin.getline(s, 100); // enter does not input
    cout << s;
    return 0;
}

```
