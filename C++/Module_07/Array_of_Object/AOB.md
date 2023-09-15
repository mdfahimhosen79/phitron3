#### Array of Objects
```
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
int main()
{   
    Student a[3];
    for (int i = 0; i < 3; i++)
    {
        getline(cin,a[i].name);
        cin>>a[i].roll>>a[i].marks;
        cin.ignore();
    }
    for (int i = 0; i < 3; i++)
    {
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
    
    return 0;
}

```
#### Get Max or Min Object Depend on Marks
```
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
int main()
{   
    Student a[3];
    for (int i = 0; i < 3; i++)
    {
        getline(cin,a[i].name);
        cin>>a[i].roll>>a[i].marks;
        cin.ignore();
    }
   Student mx;
   mx.marks = INT_MIN;

   for (int i = 0; i < 3; i++)
   {
        if(a[i].marks>mx.marks)
        {
            mx = a[i];
        }
   }
   
   cout<<mx.name<<" "<<mx.roll<<" "<<mx.marks<<endl;

   Student mn;
   mn.marks = INT_MAX;
   for (int i = 0; i < 3; i++)
   {
        if(a[i].marks<mn.marks)
        {
            mn = a[i];
        }
   }
   
   cout<<mn.name<<" "<<mn.roll<<" "<<mn.marks;
    
    return 0;
}

```
#### Sort Array of Objects using Selection Sort
```
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
int main()
{
    Student a[3];
    for (int i = 0; i < 3; i++)
    {
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].marks;
        cin.ignore();
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (a[i].marks > a[j].marks)
            {   
                //Student tmp= a[i];
                //a[i] = a[j];
                //a[j] = tmp;
             swap(a[i].id,a[j].id);
                
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
    
    return 0;
}

```
#### Sort Array of Objects using sort() Function
```
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
bool cmp(Student a, Student b)
{
    if (a.marks > b.marks)
        return true;
    else
        return false;
}
int main()
{
    Student a[3];
    for (int i = 0; i < 3; i++)
    {
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].marks;
        cin.ignore();
    }
    // sort function
    sort(a, a + 3, cmp);
    for (int i = 0; i < 3; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }

    return 0;
}
```
#### Counting Sort
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int frq[26] = {0};
    for (int i = 0; i < n; i++)
    {
        char a;
        cin >> a;
        frq[a - 'a']++;
    }
    for (char i = 'a'; i < 'z'; i++)
    {
        if (frq[i - 'a'] > 0)
        {
            for (int j = 0; j < frq[i - 'a']; j++)
            {
                cout << i;
            }
        }
    }

    return 0;
}

```
#### Custom Sort using Array of Objects and Counting Sort
```
#include <bits/stdc++.h>
using namespace std;
class CustomSort
{
public:
    char c;
    int cnt;
};
bool cmp(CustomSort a, CustomSort b)
{
    if (a.cnt > b.cnt)
        return true;
    else
        return false;
}
int main()
{
    int n;
    cin >> n;
    CustomSort frq[26];
    for (int i = 0; i < 26; i++)
    {
        frq[i].c = (i + 'a');
        frq[i].cnt = 0;
    }
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        frq[c - 'a'].cnt++;
    }
    sort(frq, frq + 26, cmp);
    for (int i = 0; i < 26; i++)
    {
        if (frq[i].cnt > 0)
        {
            for (int j = 0; j < frq[i].cnt; j++)
            {
                cout << frq[i].c;
            }
        }
    }
    return 0;
}

```
