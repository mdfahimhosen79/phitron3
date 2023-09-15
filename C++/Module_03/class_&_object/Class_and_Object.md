#### Create Class and Object
```
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;
};

int main()
{
    Student Rahim;
    Rahim.roll = 29;
    Rahim.cls = 9;
    Rahim.section = 'A';
    char nm[100] = "Rahim";
    strcpy(Rahim.name, nm);

    Student karim;
    karim.roll = 30;
    karim.cls = 9;
    karim.section = 'A';
    char nm2[100] = "Karim";
    strcpy(karim.name, nm2);

    cout << Rahim.name;

    return 0;
}

```
#### Constructor in C++
```
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;
    Student(int r, int c, char s, char n[100])
    {
        roll = r;
        cls = c;
        section = s;
        strcpy(name, n);
    }
};

int main()
{
    Student Rahim(29, 9, 'A', "Rahim Mia");
    Student karim(55, 9, 'B', "Karim Khan");

    cout << Rahim.name << endl;
    cout << Rahim.roll << endl;
    cout << Rahim.cls << endl;
    cout << Rahim.section << endl;

    cout << karim.name << endl;
    cout << karim.roll << endl;
    cout << karim.cls << endl;
    cout << karim.section << endl;
    return 0;
}

```
#### Return Object from Function
```
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;
    Student(int r, int c, char s, char n[100])
    {
        roll = r;
        cls = c;
        section = s;
        strcpy(name, n);
    }
};

Student fun()
{
    char name[100] = "Rahim Uddin";
    Student rahim(29, 6, 'B', name);
    return rahim;
}
int main()
{
    Student rahim = fun();
    cout << rahim.name << endl;
    cout << rahim.cls << endl;
    cout << rahim.section << endl;
    cout << rahim.roll << endl;

    return 0;
}

```
#### Dynamic Object in C++
```
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;
    Student(int r, int c, char s, char n[100])
    {
        roll = r;
        cls = c;
        section = s;
        strcpy(name, n);
    }
};

int main()
{
    char name[100]="Rahim Uddin";
    Student *rahim = new Student(5,8,'B',name);
    cout<<(*rahim).roll<<endl;

    //short cut upay
    //(*rahim). = rahim-> 
     cout<<rahim->name<<endl;

    //delete an object

    delete rahim;
    cout<<rahim->name<<endl;
    
    return 0;
}

```
#### Quiz
```
#include <bits/stdc++.h>
using namespace std;

class Cadd
{
   public:
   int one;
   Cadd(int n)
   {
        cout<<"A constructore is called"<<endl;
        one = n;
   } 
   Cadd()
   {
        cout<<"A default constructor is called"<<endl;
   }
   ~Cadd()
   {
        cout<<"Destructing: "<<one<<endl;
   }
   int add()
   {
        return(one+one);
   }
};

int main()
{       
    Cadd obj(4);
    Cadd obj2;
    cout<<"The value: "<<obj.one<<endl;
    cout<<"Enter a number ";
    cin>>obj2.one;
    cout<<obj2.add()<<endl;
                               
    return 0;
}


```