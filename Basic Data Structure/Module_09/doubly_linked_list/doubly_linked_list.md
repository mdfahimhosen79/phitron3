#### Doubly Linked List
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
int main()
{
    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);
    Node * tail = b;
    // Connection
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    print_normal(head);
    cout<<endl;
    print_reverse(tail);
    return 0;
}

```
#### Insert at any Position in Doubly Linked List
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
void insert_at_position(Node * head, int pos, int val)
{
    Node * newNode = new Node(val);
    Node * tmp = head;
    for(int i =1; i<pos; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next; // 100->30
    tmp->next = newNode; // 20-> 100
    newNode->prev = tmp; // 100 er prev-> 20
    newNode->next->prev = newNode; // 30 prev-> 100
}
int size_list(Node *head)
{
    int cnt = 0;
    Node * tmp = head;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
int main()
{
    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);
    Node * c = new Node(40);
    Node * tail = c;
    // Connection
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    int pos,val;
    cin>>pos>>val;
    if(pos >= size_list(head))
    {
        cout<<"Invalid Index"<<endl;
    }else
    {
        insert_at_position(head,pos,val);
    }
    print_normal(head);
    cout<<endl;
    print_reverse(tail);
    return 0;
}
```
#### Insert At Head and Tail in Doubly Linked List
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
void insert_at_position(Node * head, int pos, int val)
{
    Node * newNode = new Node(val);
    Node * tmp = head;
    for(int i =1; i<pos; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next; // 100->30
    tmp->next = newNode; // 20-> 100
    newNode->prev = tmp; // 100 er prev-> 20
    newNode->next->prev = newNode; // 30 prev-> 100
}
int size_list(Node *head)
{
    int cnt = 0;
    Node * tmp = head;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void insert_at_head(Node * &head,Node * &tail, int val)
{
    Node * NewNode = new Node(val);
    if(head == NULL)
    {
        head = NewNode;
        tail = NewNode;
        return;
    }
    NewNode->next = head;
    head->prev = NewNode;
    head = NewNode;
}
void insert_at_tail(Node * &head, Node * &tail, int val)
{
    Node * newNode = new Node(val);
    if(tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
int main()
{
    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);
    Node * c = new Node(40);
    Node * tail = c;
    // Connection
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    int pos,val;
    cin>>pos>>val;
    if(pos == 0)
    {
        insert_at_head(head,tail,val);
    }
    else if(pos == size_list(head))
    {
        insert_at_tail(head,tail,val);
    }
    else if(pos > size_list(head))
    {
        cout<<"Invalid Index"<<endl;
    }else
    {
        insert_at_position(head,pos,val);
    }
    print_normal(head);
    cout<<endl;
    print_reverse(tail);
    return 0;
}

```
#### Delete Operation In Doubly Linked List
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
int size_list(Node *head)
{
    int cnt = 0;
    Node * tmp = head;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void delete_at_position(Node * head, int pos)
{
    Node * tmp = head;
    for(int i = 1; i<pos; i++)
    {
        tmp = tmp->next;
    }
    Node * deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;
    delete deleteNode;
}
void delete_tail(Node * &tail)
{
    Node * deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;
    tail->next = NULL;
}
void delete_head(Node * &head)
{
    Node * deleteNode = head;
    head = head->next;
    delete deleteNode;
    head->prev = NULL;
}
int main()
{
    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);
    Node * c = new Node(40);
    Node * tail = c;
    // Connection
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;

    int pos;
    cin>>pos;
    if(pos>= size_list(head))
    {
        cout<<"Invalid"<<endl;
    }else if(pos == 0)
    {
        delete_head(head);
    }else if(pos == size_list(head)-1)
    {
        delete_tail(head);
    }else
    {
        delete_at_position(head,pos);
    }
    
    print_normal(head);
    cout<<endl;
    print_reverse(tail);
    return 0;
}

```
#### Input doubly linked list
```
#include <bits/stdc++.h>
using namespace std;
class Node
{   
    public:
    int val;
    Node* next;
    Node* prev;
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
void insert_at_tail(Node * &head, Node * &tail, int val)
{
    Node * newNode = new Node(val);
    if(tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
int main()
{
    Node * head = NULL;
    Node * tail = NULL;

    int val;
    
    while (true)
    {   
        cin>>val;
        if(val == -1) break;
        insert_at_tail(head,tail,val);
    }
    print_normal(head);
    cout<<endl;
    print_reverse(tail);
    return 0;
}
```
#### Modified Module 9 delete Operation
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
int size_list(Node *head)
{
    int cnt = 0;
    Node * tmp = head;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void delete_at_position(Node * head, int pos)
{
    Node * tmp = head;
    for(int i = 1; i<pos; i++)
    {
        tmp = tmp->next;
    }
    Node * deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;
    delete deleteNode;
}
void delete_tail(Node * &tail,Node * &head)
{
    Node * deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;
    if(tail == NULL)
    {
        head = NULL;
        return;
    }
    tail->next = NULL;
}
void delete_head(Node * &head,Node * &tail)
{
    Node * deleteNode = head;
    head = head->next;
    delete deleteNode;
    if(head == NULL)
    {
        tail = NULL;
        return;
    }
    head->prev = NULL;
}
int main()
{
    Node * head = new Node(10);
    Node * tail = head;
    // Connection
    

    int pos;
    cin>>pos;
    if(pos>= size_list(head))
    {
        cout<<"Invalid"<<endl;
    }else if(pos == 0)
    {
        delete_head(head,tail);
    }else if(pos == size_list(head)-1)
    {
        delete_tail(tail,head);
    }else
    {
        delete_at_position(head,pos);
    }
    
    print_normal(head);
    cout<<endl;
    print_reverse(tail);
    return 0;
}

```