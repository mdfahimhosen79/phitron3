#### Practice Porblem 01
#### Question: Take two doubly linked lists as input and check if they are the same or not.
| Sample Input       | Sample Output      | Explanation                              |
|-----------------------|-------------------|------------------------------------------|
| 10 20 30 40 50 -1  | 10 20 30 40 50 -1  | YES - Both lists are identical.          |
| 10 20 30 40 50 -1  | 10 20 30 40 -1    | NO - Lists have different lengths.       |
| 10 20 30 40 -1    | 10 20 30 40 50 -1  | NO - Lists have different lengths.       |
| 10 20 30 40 -1    | 40 30 20 10 -1     | NO - Lists have different elements.      |
| 1 2 3 4 5 -1      | 5 4 1 2 6 -1       | NO - Lists have different elements.      |

```
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
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
    newNode->prev = tail;
    tail = newNode;
}
void insert_at_tail2(Node *&head2, Node *&tail2, int val2)
{
    Node *newNode = new Node(val2);
    if (head2 == NULL)
    {
        head2 = newNode;
        tail2 = newNode;
        return;
    }
    tail2->next = newNode;
    newNode->prev = tail2;
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
void check(Node *head, Node *head2)
{
    bool flag = true;
    while (head != NULL)
    {
        if (head->val != head2->val)
        {
            flag = false;
            break;
        }
        head = head->next;
        head2 = head2->next;
    }
    if(flag == true )
    {
        cout<<"YES";
    }else
    {
        cout<<"NO";
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
    Node *head2 = NULL;
    Node *tail2 = NULL;
    int val2;
    while (true)
    {
        cin >> val2;
        if (val2 == -1)
            break;
        insert_at_tail2(head2, tail2, val2);
    }
    if (size_list(head) != size_list2(head2))
    {
        cout << "NO" << endl;
    }
    else
    {
        check(head,head2);
    }
    return 0;
}
```
#### Practice Problem 02
#### Question: Take a doubly linked list as input and reverse it. After that print the linked list.

| Sample Input      | Sample Output   |
|-------------------|-----------------|
| 10 20 30 -1      | 30 20 10        |
|                   |                 |
| 10 20 30 40 -1   | 40 30 20 10     |

```
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    while (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void print_list(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
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
    print_list(tail);
    return 0;
}

```
#### Practice Problem 03
#### Question: Take a doubly linked list as input and check if it forms any palindrome or not.

| Sample Input                | Sample Output |
|-----------------------------|---------------|
| 10 20 30 20 10 -1           | YES           |
| 10 20 30 30 20 10 -1        | YES           |
| 10 20 30 40 20 10 -1        | NO            |
| 10 20 30 20 40 -1           | NO            |
| 10 20 30 10 10 -1           | NO            |
| 10 20 20 20 10 -1           | YES           |

```
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
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
    newNode->prev = tail;
    tail = newNode;
}
bool palindrome_list(Node *head, Node *tail)
{
    bool flag = true;
    Node *i = head;
    Node *j = tail;
    while (i != j && i->next != j)
    {
        if (i == j)
        {
            flag = true;
        }
        else
        {
            flag = false;
        }
        i = i->next;
        j = j->prev;
    }
    if (i == j)
    {
        flag = true;
    }
    else
    {
        flag = false;
    }
    return flag;
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
    bool flag = palindrome_list(head, tail);
    if(flag == true)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    return 0;
}
```
[Problem link](https://docs.google.com/document/d/1dZ59u1HFrXOFi1Ung7Ah7eg5_xIPhqOIyOzml0v3H50/edit)
#### Practice Problem 04
```
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout<<endl;
}
int list_size(Node *head)
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
void insert_tail(Node *&tail, int val)
{
    Node *newNode = new Node(val);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void insert_position(Node *head, int val, int pos)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i < pos; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->prev = tmp;
    newNode->next->prev = newNode;
}
void print_reverse(Node * tail)
{
    Node * tmp = tail;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->prev;
    }
    cout<<endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int t;
    cin >> t;
    while (t--)
    {
        int pos, val;
        cin >> pos >> val;
        int flag = 1;
        if (pos > list_size(head))
        {
            flag = 0;
        }
        else if (pos == 0)
        {
            insert_head(head, tail, val);
        }
        else if (pos == list_size(head))
        {
            insert_tail(tail, val);
        }
        else
        {
            insert_position(head, val, pos);
        }
        if(flag == 1)
        {
            print_list(head);
            print_reverse(tail);
        }else
        {
            cout<<"Invalid"<<endl;
        }     
    }
    return 0;
}
```
#### Practice Problem 05
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
void insert_tail(Node * &head, Node * &tail, int val)
{   
    Node * newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void print_list(Node * head)
{
    while(head != NULL)
    {
        cout<<head->val<<" ";
        head = head->next;
    }
}
void sort_list(Node * head)
{
    Node * tmp = head;
    for (Node* i = tmp; i->next != NULL; i = i->next)
    {
        for (Node * j = i->next; j != NULL; j = j->next)
        {
            if (i->val > j->val)
            {
                swap(i->val,j->val);

            }
        }
    }
}
int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    int val;
    while (true)
    {
        cin>>val;
        if(val == -1)break;
        insert_tail(head,tail,val);
    }
    sort_list(head);
    print_list(head);
    return 0;
}
```