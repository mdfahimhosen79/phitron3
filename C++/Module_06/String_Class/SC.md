#### String Constructor
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //string s = "Hello world";
    //string s("hello world");
    //string s("Hello world",4);
    //string a = "Hello world";
    //string s(a,4);
    string s(10,'F');
    cout<<s<<endl;
    return 0;
}

```
#### Sort String using sort() function
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    cout<<s;
    return 0;
}

```
#### Rnage based For Loop in String
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
   /* for (int i = 0; i < s.size(); i++)
    {
        cout<<s[i]<<endl;
    }
    */
   for(char c:s)
   {
    cout<<c<<endl;
   }
    
    return 0;
}

```
#### Reverse word printing using Strignstream
```
#include <bits/stdc++.h>
using namespace std;
void print(string& s)
{
    s= "World";
}
int main()
{   
    string s = "Hello";
    print(s);
    cout<<s;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
void print(stringstream& s)
{   
    string word;
    if (s>>word)
    {
        //cout<<word<<endl; forward way
        print(s);
        cout<<word<<endl;
    }
    
}
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    print(ss);
    return 0;
}

```
#### Function inside the class
```
#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    int marks1;
    int marks2;
    Person(string nm, int ag, int mr1, int mr2)
    {
        name = nm;
        age = ag;
        marks1 = mr1;
        marks2 = mr2;
    }
    void hello()
    {
        cout << name << " " << age << endl;
    }
    int total_marks()
    {
        return marks1 + marks2;
    }
};
int main()
{
    Person rakib("Rakib Hasan", 21, 80, 100);
    rakib.hello();
    int sum = rakib.total_marks();
    cout << "Total Marks: " << sum;

    return 0;
}
```
#### This Keyword in C++
```
#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};
int main()
{
    Person rakib("Rakib Ahsan", 29);
    cout << rakib.name << " " << rakib.age;
    return 0;
}

```
#### Copy Dynamic Object
```
#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};
int main()
{
    Person *rakib = new Person("Rakib Ahmad", 25);
    Person *sakib = new Person("Sakib Al Hasan", 30);
    //rakib->name = sakib->name;
    //rakib->age = sakib->age;
    *rakib = *sakib;
    delete sakib;
    cout << rakib->name << " " << rakib->age;

    return 0;
}

```
#### Namespaces in C++