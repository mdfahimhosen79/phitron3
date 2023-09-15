#### Question: Take a singly linked list as input and print the size of the linked list.

#### Sample Input
#### Sample Output
#### 2 1 5 3 4 8 9 -1
#### 7
#### 5 1 4 5 -1
#### 4
```
#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node * next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }

};
void insert_at_tail(Node *&head, int v)
{   
    int cnt = 0;
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    // tmp ekhon last node e
    tmp->next = newNode;
}
void print_linked_list(Node *head)
{   
    int cnt = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        // cout << tmp->val << " ";
        cnt++;
        tmp = tmp->next;
    }
    cout<<cnt;
}
int main()
{
    Node * head = NULL;
    int val;
    while (true)
    {   
        cin>>val;
        if(val== -1) break;
        insert_at_tail(head,val);
    }
    print_linked_list(head);
    return 0;
}
```
#### Question: Take a singly linked list as input and check if the linked list contains any duplicate value. You can assume that the maximum value will be 100.


#### Sample Input
#### Sample Output
#### 5 4 8 6 2 1 -1
#### NO
#### 2 4 5 6 7 4 -1
#### YES
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
void insert_at_tail(Node *&head, int v)
{
    int cnt = 0;
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    // tmp ekhon last node e
    tmp->next = newNode;
}
void print_linked_list(Node *head)
{   
    int cnt[8] = {0};
    Node *tmp = head;
    while (tmp != NULL)
    {
        // cout << tmp->val << " ";
        if(tmp->val == 1) cnt[1]++;
        if(tmp->val == 2) cnt[2]++;
        if(tmp->val == 3) cnt[3]++;
        if(tmp->val == 4) cnt[4]++;
        if(tmp->val == 5) cnt[5]++;
        if(tmp->val == 6) cnt[6]++;
        if(tmp->val == 7) cnt[7]++;
        if(tmp->val == 8) cnt[8]++;
        tmp = tmp->next;
    }
    int flag = 0;
    for (int i = 1; i <= 8; i++)
    {
        if (cnt[i] ==2)
        {
            flag = 1;
        } 
    }
    if (flag == 1)
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
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, val);
    }
    print_linked_list(head);
    return 0;
}

```
#### Take a singly linked list as input and print the middle element. If there are multiple values in the middle print both.

#### Sample Input
#### 2 4 6 8 10 -1
#### 1 2 3 4 5 6 -1
#### Sample Output
#### 6
#### 3 4
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
void insert(int v,Node * &head, Node * &tail)
{
    Node * newNode = new Node(v);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = newNode;
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
    int v;
    while(true)
    {
        cin>>v;
        if(v==-1) break;
        insert(v,head,tail);
    }
    print(head);
    return 0;
}

```
#### Question: Take a singly linked list as input, then take q queries. In each query you will be given an index and value. You need to insert those values in the given index and print the linked list. If the index is invalid print “Invalid”.



#### Sample Input
#### 10 20 30 -1
#### 7
#### 1 40
#### 5 50
#### 4 50
#### 0 100
#### 7 40
#### 1 110
#### 7 40

#### Sample Output

#### 10 40 20 30
#### Invalid
#### 10 40 20 30 50
#### 100 10 40 20 30 50
#### Invalid
#### 100 110 10 40 20 30 50
#### 100 110 10 40 20 30 50 40
```
#include<bits/stdc++.h>
using namespace std;
class Node
{   
    public:
        int val;
        Node * next;
        Node(int val)
        {
            this->val = val;
            this->next = NULL;
        }
};
void insert(int v, Node * &head, Node* &tail)
{
    Node * newNode = new Node(v);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_node(Node* head)
{   
    
    Node *tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
}
int size_list(Node*head)
{   
    int size = 0;
    Node *tmp = head;
    while(tmp != NULL)
    {
        size++;
        tmp = tmp->next;
    }
    return size;
}
void insert_at_position(int pos, int val,Node* &head)
{   
    Node * newNode = new Node(val);
    Node * tmp = head;
    if(pos == 0)
    {   
        head = newNode;
        head->next = tmp;
        print_node(head);
        return;
    }
    int cnt = 0;
    tmp = head;
    while(tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    
    
    if(pos>cnt) 
    {
        cout<<"invalid";
        return;
    }
    tmp = head;
    for(int i =1; i<pos; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    print_node(head);
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
        insert(val,head,tail);
    }
    int t;
    cin>>t;
    while(t--)
    {
        int pos,val;
        cin>>pos>>val;
        insert_at_position(pos,val,head);
    }
   
    return 0;
}
```





