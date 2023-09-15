#### Create a Node
```
#include <bits/stdc++.h>
using namespace std;
class Node
{   
    public:
    int val;
    Node* next;
};
int main()
{   
    Node a,b;
    a.val = 10;
    b.val = 20;
    a.next = &b;
    b.next = NULL;
    cout<<a.val<<endl;
    // cout<<a.next->val<<endl;
    cout<<(*a.next).val<<endl;
     
    return 0;
}

```
#### Constructor of Node
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
    Node a(10);
    Node b(20);
    a.next = &b;
    cout<<a.val<<endl;
    cout<<b.val<<endl;
    cout<<(*a.next).val<<endl;
    cout<<a.next->val<<endl;
     
    return 0;
}

```
#### Dynamic Node
```
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
int main()
{
    
    Node *head = new Node(10);
    Node *a = new Node(20);
    head->next = a;

    cout<<head->val<<endl;
    cout<<a->val<<endl;
    cout<<head->next->val<<endl;
    cout<<(*(*head).next).val<<endl; // we no longer use this

    return 0;
}
```
#### Printing Singly Linked List
```
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
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
    
    Node *tmp = head;
    while (tmp != 0)
    {
        cout<<tmp->val<<endl;
        tmp = tmp->next;
    }
    tmp = head;
    while (tmp != 0)
    {
        cout<<tmp->val<<endl;
        tmp = tmp->next;
    }
    return 0;
}

```