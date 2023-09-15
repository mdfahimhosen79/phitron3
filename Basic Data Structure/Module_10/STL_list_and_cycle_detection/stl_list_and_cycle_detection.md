## Built-in Functions

### Constructor

| Name | Details | Time Complexity |
|------|---------|-----------------|
| `list<type> myList;` | Construct a list with 0 elements. | O(1) |
| `list<type> myList(N);` | Construct a list with N elements (garbage values). | O(N) |
| `list<type> myList(N, V);` | Construct a list with N elements (value will be V). | O(N) |
| `list<type> myList(list2);` | Construct a list by copying another list list2. | O(N) |
| `list<type> myList(A, A+N);` | Construct a list by copying elements from an array A of size N. | O(N) |

### Capacity

| Name | Details | Time Complexity |
|------|---------|-----------------|
| `myList.size();` | Returns the size of the list. | O(1) |
| `myList.max_size();` | Returns the maximum size the list can hold. | O(1) |
| `myList.clear();` | Clears the list elements (does not delete memory). | O(N) |
| `myList.empty();` | Returns true/false if the list is empty. | O(1) |
| `myList.resize();` | Change the size of the list. | O(K) |

### Modifiers

| Name | Details | Time Complexity |
|------|---------|-----------------|
| `myList = myList.assign(list2.begin(), list2.end());` | Assign another list. | O(N) |
| `myList.push_back();` | Add an element to the tail. | O(1) |
| `myList.push_front();` | Add an element to the head. | O(1) |
| `myList.pop_back();` | Delete the tail element. | O(1) |
| `myList.pop_front();` | Delete the head element. | O(1) |
| `myList.insert();` | Insert elements at a specific position. | O(N + K) |
| `myList.erase();` | Delete elements from a specific position. | O(N + K) |
| `replace(myList.begin(), myList.end(), value, replace_value);` | Replace all occurrences of value with replace_value. | O(N) |
| `find(myList.begin(), myList.end(), V);` | Find the value V in the list. | O(N) |

### Operations

| Name | Details | Time Complexity |
|------|---------|-----------------|
| `myList.remove(V);` | Remove the value V from the list. | O(N) |
| `myList.sort();` | Sort the list in ascending order. | O(N log N) |
| `myList.sort(greater<type>());` | Sort the list in descending order. | O(N log N) |
| `myList.unique();` | Delete duplicate values from the list (requires sorting). | O(N) (with sort O(N log N)) |
| `myList.reverse();` | Reverse the list. | O(N) |

### Element Access

| Name | Details | Time Complexity |
|------|---------|-----------------|
| `myList.back();` | Access the tail element. | O(1) |
| `myList.front();` | Access the head element. | O(1) |
| `next(myList.begin(), i);` | Access the ith element. | O(N) |

### Iterators

| Name | Details | Time Complexity |
|------|---------|-----------------|
| `myList.begin();` | Pointer to the first element. | O(1) |
| `myList.end();` | Pointer to the last element. | O(1) |

#### List Constructors
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> myList;
    // list<int> list2 = {1,2,3,4,5};
    // list<int> mylist(10,5);
    // list<int> mylist(list2);
    int a[5] = {1, 2, 3, 4, 5};
    // list<int> mylist(a, a + 5);
    vector<int> v = {10,20,30};
    list<int> mylist(v.begin(),v.end());
    // for (auto it = mylist.begin(); it != mylist.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    for(int val:mylist)
    {
        cout<<val<<" ";
    }
    return 0;
}
```

#### List capacity function
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist = {10,20,30};
    // cout<<mylist.max_size();
    // mylist.clear();
    mylist.resize(2);
    mylist.resize(5,100);
    cout<<mylist.size()<<endl;
    for(int val:mylist)
    {
        cout<<val<<" ";
    }
    return 0;
}
```
#### List Modifiers Functions
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10, 20, 30, 40, 30, 30, 70};
    // list<int> newList = {100, 200, 300};
    // vector<int> v = {60, 70, 80};
    // myList.pop_back();
    // myList.pop_back();
    // myList.pop_front();
    // myList.insert(next(myList.begin(), 3), 100);
    // myList.erase(next(myList.begin(), 2));
    // myList.insert(next(myList.begin(), 3), v.begin(), v.end());
    // myList.erase(next(myList.begin(), 2), next(myList.begin(), 5));
    // replace(myList.begin(), myList.end(), 30, 100);

    // for (int val : myList)
    // {
    //     cout << val << endl;
    // }

    auto it = find(myList.begin(), myList.end(), 60);
    if (it == myList.end())
    {
        cout << "Not found";
    }
    else
    {
        cout << "Found";
    }
    return 0;
}

```
#### List Operation
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist ={20,40,30,10,50,10,10};
    // mylist.remove(10);
    // mylist.sort();
    // mylist.sort(greater<int>());
    // mylist.unique();
    mylist.reverse();
    for(int val: mylist)
    {
        cout<<val<<endl;
    }
    return 0;
}

```
#### List Element Access
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist = {10,20,30,40,50};
    // cout<<mylist.front()<<endl;
    // cout<<mylist.back();
    cout<< *next(mylist.begin(),3);
    return 0;
}

```
#### Reverse Singly Linked List
```
#include <bits/stdc++.h>
using namespace std;
class Node
{   
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void print_recursion(Node * n)
{   
    //base case
    if(n == NULL) return;
    cout<<n->val<<" ";
    print_recursion(n->next);
    
}
void print_reverse(Node * n)
{
    // base case
    if(n==NULL) return;
    print_reverse(n->next);
    cout<<n->val<<" ";
}
void print_list(Node * head)
{
    Node * tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void reverse(Node * &head, Node * current)
{
    if(current->next == NULL)
    {
        head = current;
        return;
    }
    reverse(head,current->next);
    current->next->next = current;
    current->next = NULL;
    
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    reverse(head,head);
    print_list(head);
    return 0;
}
```
#### Reverse Doubly Linked List
```
#include <bits/stdc++.h>
using namespace std;
class Node
{   
    public:
    int val;
    Node* next;
    Node * prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print_normal(Node * head)
{
    Node * tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
}
void print_reverse(Node * tail)
{
    Node * tmp = tail;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->prev;
    }
}
void reverse(Node * head, Node * tail)
{
    Node * i = head;
    Node * j = tail;
    while(i != j && i->next != j)
    {
        swap(i->val,j->val);
        i = i->next;
        j = j->prev;
    }
}
int main()
{
    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);
    Node * c = new Node(40);
    Node * d = new Node(50);
    Node * tail = d;
    // Connection
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    c->next = d;
    d->prev = c;
    reverse(head,tail);
    print_normal(head);

    return 0;
}
```
#### Detect Cycle in Singly Linked List
```
#include <bits/stdc++.h>
using namespace std;
class Node
{   
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
int main()
{
    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);
    Node * c = new Node(40);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = NULL;
    //Cycle Detection
    Node * fast = head;
    Node * slow = head;
    bool flag = false;
    // fast != NULL eita age check korte hobe always
    // while(fast-> != NULL && fast != NULL) eita dile error khabo 
    while (fast != NULL && fast->next != NULL) 
    {
        slow = slow->next;
        fast = fast->next->next;
        if(fast == slow)
        {
            flag = true;
            break;
        }
        
    }
    if(flag == true)
    {
        cout<<"Cycle Dectected";
    }else
    {
        cout<<"No Cycle";
    }
    return 0;
}

```