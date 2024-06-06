#### Priority Queue(max Heap)
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue <int> pq;
    while(true)
    {
        int c;
        cin>>c;
        if(c==0){
            int x;
            cin>>x;
            pq.push(x); // O(logN)
        }else if(c==1)
        {
            pq.pop(); //O(logN)
        }else if(c==2){
            cout<<pq.top()<<endl; // O(1)
        }else{
            break;
        }
    }
    return 0;
}

```
#### Priority Queue(min Heap)
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int, vector<int>, greater<>> pq;
    while (true)
    {
        int c;
        cin >> c;
        if (c == 0)
        {
            int x;
            cin >> x;
            pq.push(x); // O(logN)
        }
        else if (c == 1)
        {
            pq.pop(); //O(logN)
        }
        else if (c == 2)
        {
            cout << pq.top() << endl; // O(1)
        }
        else
        {
            break;
        }
    }
    return 0;
}

```
#### custom compare class priority queue
```
#include<bits/stdc++.h>
using namespace std;
class Student
{
 public:
     string name;
     int roll;
     int marks;
     
     Student(string name,int roll, int marks)
     {
         this->name = name;
         this->roll = roll;
         this->marks = marks;
     }

};
class cmp
{
    public:
        bool operator()(Student a, Student b)
        {
            if(a.marks>b.marks) return true;
            else if(a.marks<b.marks) return false;
            else {
                if(a.roll>b.roll) return true;
                else return false;
            }
        }

};
int main()
{
  int n;
  cin>>n;
  priority_queue<Student, vector<Student>,cmp> pq;
  for(int i=0; i<n; i++){
      string name;
      int roll,marks;
      cin>>name>>roll>>marks;
      Student obj(name,roll,marks);
      pq.push(obj);
  }
  while(!pq.empty())
  {
      cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
      pq.pop();
  }
  return 0;
}
```
#### STL Map
```

#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int> mp;
    mp.insert({"Sakib Al Hasan",75});
    mp.insert({"Tamim",50});
    mp.insert({"Mushfiq",45});
    for(auto it = mp.begin(); it!=mp.end();it++)
        {
            cout<<it->first<<" "<<it->second<<endl;
        }
    return 0;
}
```
```
#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int> mp;
    //mp.insert({"Sakib Al Hasan",75});
    //mp.insert({"Tamim",50});
    //mp.insert({"Mushfiq",45});
    mp["sakib al hasan"] = 75; //O(logN)
    mp["aqib"] = 10;
    mp["tamim"] = 50;
    
    //cout<<mp["Tamim"];
    if(mp.count("aqib"))
    {
        cout<<"ache"<<endl; // O(logN)
    }else 
        {
            cout<<"Nai"<<endl; // O(logN)
        }
    return 0;
}
```
#### word count using Map
```
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string sentence;
    getline(cin, sentence);
    string word;
    stringstream ss(sentence);
    map<string,int> mp;
    while (ss>>word)
        {
            mp[word]++;
        }
    //for(auto it = mp.begin(); it!=mp.end(); it++)
     //   {
       //     cout<<it->first<<" "<<it->second<<endl;
      //  } 
        cout<<mp["cricket"]<<endl;
    return 0;
}
    
```
#### STL Set
```
#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        s.insert(x); // per value O(logN)
    }
   /* for(auto it = s.begin(); it != s.end(); it++)
        {
            cout<<*it<<endl;
        } */
    if(s.count(10)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}

```
#### custom compare class priority queue
```
#include<bits/stdc++.h>
using namespace std;
class Student
{
 public:
     string name;
     int roll;
     int marks;
     
     Student(string name,int roll, int marks)
     {
         this->name = name;
         this->roll = roll;
         this->marks = marks;
     }

};
class cmp
{
    public:
        bool operator()(Student a, Student b)
        {
            if(a.marks>b.marks) return true;
            else if(a.marks<b.marks) return false;
            else {
                if(a.roll>b.roll) return true;
                else return false;
            }
        }

};
int main()
{
  int n;
  cin>>n;
  priority_queue<Student, vector<Student>,cmp> pq;
  for(int i=0; i<n; i++){
      string name;
      int roll,marks;
      cin>>name>>roll>>marks;
      Student obj(name,roll,marks);
      pq.push(obj);
  }
  while(!pq.empty())
  {
      cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
      pq.pop();
  }
  return 0;
}
```
#### STL Map
```

#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int> mp;
    mp.insert({"Sakib Al Hasan",75});
    mp.insert({"Tamim",50});
    mp.insert({"Mushfiq",45});
    for(auto it = mp.begin(); it!=mp.end();it++)
        {
            cout<<it->first<<" "<<it->second<<endl;
        }
    return 0;
}
```
```
#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int> mp;
    //mp.insert({"Sakib Al Hasan",75});
    //mp.insert({"Tamim",50});
    //mp.insert({"Mushfiq",45});
    mp["sakib al hasan"] = 75; //O(logN)
    mp["aqib"] = 10;
    mp["tamim"] = 50;
    
    //cout<<mp["Tamim"];
    if(mp.count("aqib"))
    {
        cout<<"ache"<<endl; // O(logN)
    }else 
        {
            cout<<"Nai"<<endl; // O(logN)
        }
    return 0;
}
```
#### word count using Map
```
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string sentence;
    getline(cin, sentence);
    string word;
    stringstream ss(sentence);
    map<string,int> mp;
    while (ss>>word)
        {
            mp[word]++;
        }
    //for(auto it = mp.begin(); it!=mp.end(); it++)
     //   {
       //     cout<<it->first<<" "<<it->second<<endl;
      //  } 
        cout<<mp["cricket"]<<endl;
    return 0;
}
    
```
#### STL Set
```
#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        s.insert(x); // per value O(logN)
    }
   /* for(auto it = s.begin(); it != s.end(); it++)
        {
            cout<<*it<<endl;
        } */
    if(s.count(10)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}

```
