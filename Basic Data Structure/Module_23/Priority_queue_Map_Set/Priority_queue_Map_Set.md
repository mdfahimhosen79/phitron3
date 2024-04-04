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
