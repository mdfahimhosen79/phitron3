#### Max Min
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
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
int size_list(Node *head)
{
    int cnt = 0;
    Node *tmp = head;

    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }

    return cnt;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }
    int min = INT_MAX;
    int max = INT_MIN;
    for (Node *i = head; i != NULL; i = i->next)
    {

        if (i->val > max)
        {
            max = i->val;
        }
        if (i->val < min)
        {
            min = i->val;
        }
    }
    if (size_list(head) == 1)
    {
        cout << head->val << " " << head->val;
    }
    
    else
    {
        cout << max << " " << min;
    }
    return 0;
}
```
#### Reverse and Original

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
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }
    print_reverse(head);
    cout<<endl;
    print_recursion(head);
    return 0;
}

```
#### Queries

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

void insert_at_tail(Node *&head,Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail = newNode;
}
void insert_at_head(Node *&head,Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    head = newNode;
    
}
void print_linked_list(Node *head,Node *tail)
{
    Node * tmp = head;
    Node * tmp2 = tail;
    cout<<tmp->val<<" "<<tmp2->val;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int t;
    cin>>t;
    while (t--)
    {   
        int x;
        cin>>x;
        long long int val;
        cin >> val;
       
        if(x == 0)
        {
            insert_at_head(head,tail,val);
        } else
        {
            insert_at_tail(head,tail, val);
        }
        
        print_linked_list(head,tail);
        cout<<endl;
    }
    return 0;
}

```
#### Get Me Mid

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
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
int size_list(Node *head)
{
    int cnt = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void print_head(Node *head)
{
    Node *tmp = head;
    cout<<tmp->val;
}
void print_tail_head(Node * head,Node * tail)
{
    Node * tmp_tail = tail;
    Node * tmp_head = head;
    cout<<tmp_head->val<<" "<<tmp_tail->val;
}

void print(Node * head)
{   
    int cnt = 0;
    Node * tmp = head;
    while (tmp != NULL)
    {
        // cout<<tmp->val<<endl;
        cnt++;
        tmp = tmp->next;
    }
    if (cnt%2!=0)
    {
        int pos = cnt/2;
        Node * tmp = head;
        for (int i = 1; i <= pos; i++)
        {
           tmp = tmp->next;
        }
        cout<<tmp->val;
    }
    else if(cnt%2 == 0)
    {
        int pos1 = (cnt/2)-1;
        int pos2 = cnt/2;
        Node *tmp = head;
        for (int i = 1; i <= pos1; i++)
        {
            tmp = tmp->next;
        }
        Node * tmp2 = head;
        for (int i = 1; i <= pos2; i++)
        {
            tmp2 = tmp2->next;
        }
        cout<<tmp->val<<" "<<tmp2->val;
    }
}


int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }
    for(Node* i = head; i->next != NULL; i= i->next)
    {
        for(Node * j = i->next; j != NULL; j = j->next)
        {
            if(i->val < j->val) swap(i->val,j->val);
        }
    }
    if (size_list(head) == 1)
    {
        print_head(head);
    }else if(size_list(head) == 2)
    {
        print_tail_head(head,tail);
    }
    else{
        print(head);
    }
    return 0;
}
```
#### Same to Same

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
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void insert_at_tail2(Node *&head2, Node *&tail2, int val)
{
    Node * newNode = new Node(val);
    if (head2 == NULL)
    {
        head2 = newNode;
        tail2 = newNode;
        return;
    }
    tail2->next = newNode;
    tail2 = newNode;
}
int size_list(Node *head)
{   
    int cnt = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
int size_list2(Node *head2)
{   
    int cnt = 0;
    Node *tmp = head2;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void compare(Node *head, Node *head2)
{
    int flag = 1;
    Node * tmp_head = head;
    Node * tmp_head2 = head2;
    while (tmp_head != NULL)
    {
        if (tmp_head->val != tmp_head2->val)
        {
            flag = 0;
            break;
            
        }
        tmp_head = tmp_head->next;
        tmp_head2 = tmp_head2->next;
    }
    if(flag == 1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
}

int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val == -1) break;
        insert_at_tail(head,tail,val);
    }
    Node * head2 = NULL;
    Node * tail2 = NULL;
    int val2;
    while(true)
    {
        cin>>val2;
        if(val2== -1) break;
        insert_at_tail2(head2,tail2,val2);
    }
    if (size_list(head) != size_list2(head2))
    {
        cout<<"NO";
    }else
    {
        compare(head,head2);
    }
    return 0;
}

```
