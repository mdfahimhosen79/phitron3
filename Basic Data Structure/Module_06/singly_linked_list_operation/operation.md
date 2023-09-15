#### Reference of a Pointer
```
#include <bits/stdc++.h>
using namespace std;
void fun(int * &p)
{
    // *p = 20;
    // p = NULL;
    cout<<&p<<endl;
}
int main()
{
    int val = 10;
    int *ptr = &val;
    fun(ptr);
    // cout<<val<<endl;
    cout<<&ptr<<endl;
    return 0;
}

```
#### Insert at Tail
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
    cout << "Your linked list:";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout<<endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: insert at Tail " << endl;
        cout << "Option 2: Print Linked List " << endl;
        cout << "Option 3: Terminate " << endl;
        int opt;
        cin >> opt;
        if (opt == 1)
        {
            cout << "Enter Your Value: ";
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (opt == 2)
        {
            print_linked_list(head);
        }
        else if(opt == 3)
        {
            break;
        }
        
    }

    return 0;
}

```
#### Insert at any Position
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
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        cout<<endl<<"Inserted at Head"<<endl<<endl;
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
    cout<<endl;
    cout << "Your linked list:";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout<<endl<<endl;
}
void insert_at_position(Node *head,int pos,int v)
{
    Node* newnode = new Node(v);
    Node *tmp = head;

    for(int i = 1; i<=pos-1; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
    cout<<endl<<endl<<"Inserted at position:"<<pos<<endl<<endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: insert at Tail " << endl;
        cout << "Option 2: Print Linked List " << endl;
        cout << "Option 3: Insert At Any Position " << endl;
        cout << "Option 4: Terminate " << endl;
        int opt;
        cin >> opt;
        if (opt == 1)
        {
            cout << "Enter Your Value: ";
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (opt == 2)
        {
            print_linked_list(head);
        }
        else if(opt ==3)
        {
            int pos,v;
            cout<<"Enter Your Position: ";
            cin>>pos;
            cout<<"Enter Your Value: ";
            cin>>v;
            insert_at_position(head,pos,v);
        }
        else if(opt == 4)
        {
            break;
        }
        
    }

    return 0;
}
```
#### Insert at Head
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
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        cout << endl
             << "Inserted at Head" << endl
             << endl;
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
    cout << endl;
    cout << "Your linked list:";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl
         << endl;
}
void insert_at_position(Node *head, int pos, int v)
{
    Node *newnode = new Node(v);
    Node *tmp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
    cout << endl
         << endl
         << "Inserted at position:" << pos << endl
         << endl;
}
void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    cout << endl
         << "inserted at head" << endl
         << endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: insert at Tail " << endl;
        cout << "Option 2: Print Linked List " << endl;
        cout << "Option 3: Insert At Any Position " << endl;
        cout << "Option 4: Insert At Head " << endl;
        cout << "Option 5: Terminate " << endl;
        int opt;
        cin >> opt;
        if (opt == 1)
        {
            cout << "Enter Your Value: ";
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (opt == 2)
        {
            print_linked_list(head);
        }
        else if (opt == 3)
        {
            int pos, v;
            cout << "Enter Your Position: ";
            cin >> pos;
            cout << "Enter Your Value: ";
            cin >> v;
            if (opt == 0)
            {
                insert_at_head(head, v);
            }
            else
            {
                insert_at_position(head, pos, v);
            }
        }
        else if (opt == 4)
        {
            int v;
            cout << "Enter Your Value: ";
            cin >> v;
            insert_at_head(head, v);
        }
        else if (opt == 5)
        {
            break;
        }
    }
    return 0;
}
```
#### Delete from Position
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
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        cout << endl
             << "Inserted at Head" << endl
             << endl;
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
    cout << endl;
    cout << "Your linked list: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl
         << endl;
}
void insert_at_position(Node *head, int pos, int v)
{
    Node *newnode = new Node(v);
    Node *tmp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
    cout << endl
         << endl
         << "Inserted at position: " << pos << endl
         << endl;
}
void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    cout << endl
         << "inserted at head" << endl
         << endl;
}
void delete_from_position(Node* head,int pos)
{   
    Node *tmp = head;
    for (int i = 1; i < pos; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: insert at Tail " << endl;
        cout << "Option 2: Print Linked List " << endl;
        cout << "Option 3: Insert At Any Position " << endl;
        cout << "Option 4: Insert At Head " << endl;
        cout << "Option 5: Delete from Position " << endl;
        cout << "Option 6: Terminate " << endl;
        int opt;
        cin >> opt;
        if (opt == 1)
        {
            cout << "Enter Your Value: ";
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (opt == 2)
        {
            print_linked_list(head);
        }
        else if (opt == 3)
        {
            int pos, v;
            cout << "Enter Your Position: ";
            cin >> pos;
            cout << "Enter Your Value: ";
            cin >> v;
            if (opt == 0)
            {
                insert_at_head(head, v);
            }
            else
            {
                insert_at_position(head, pos, v);
            }
        }
        else if (opt == 4)
        {
            int v;
            cout << "Enter Your Value: ";
            cin >> v;
            insert_at_head(head, v);
        }
        else if (opt == 5)
        {
            int pos;
            cout<<"Enter your Position: ";
            cin>>pos;
            delete_from_position(head,pos);
        }
        else if(opt == 6)
        {
            break;
        }
    }
    return 0;
}

```
#### Delete Head
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
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        cout << endl
             << "Inserted at Head" << endl
             << endl;
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
    cout << endl;
    cout << "Your linked list: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl
         << endl;
}
void insert_at_position(Node *head, int pos, int v)
{
    Node *newnode = new Node(v);
    Node *tmp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
    cout << endl
         << endl
         << "Inserted at position: " << pos << endl
         << endl;
}
void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    cout << endl
         << "inserted at head" << endl
         << endl;
}
void delete_from_position(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i < pos; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    cout << endl
         << "Deleted Position" << pos << endl;
}
void delete_head(Node *&head)
{
    Node *tmp = head;
    head = head->next;
    delete tmp;
    cout << "Deleted Head" << endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: insert at Tail " << endl;
        cout << "Option 2: Print Linked List " << endl;
        cout << "Option 3: Insert At Any Position " << endl;
        cout << "Option 4: Insert At Head " << endl;
        cout << "Option 5: Delete from Position " << endl;
        cout << "Option 6: Delete Head " << endl;
        cout << "Option 7: Terminate " << endl;
        int opt;
        cin >> opt;
        if (opt == 1)
        {
            cout << "Enter Your Value: ";
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (opt == 2)
        {
            print_linked_list(head);
        }
        else if (opt == 3)
        {
            int pos, v;
            cout << "Enter Your Position: ";
            cin >> pos;
            cout << "Enter Your Value: ";
            cin >> v;
            if (opt == 0)
            {
                insert_at_head(head, v);
            }
            else
            {
                insert_at_position(head, pos, v);
            }
        }
        else if (opt == 4)
        {
            int v;
            cout << "Enter Your Value: ";
            cin >> v;
            insert_at_head(head, v);
        }
        else if (opt == 5)
        {
            int pos;
            cout << "Enter your Position: ";
            cin >> pos;
            if (pos == 0)
            {
                delete_head(head);
            }
            else
            {
                delete_from_position(head, pos);
            }
        }
        else if (opt == 6)
        {
            delete_head(head);
        }
        else if (opt == 7)
        {
            break;
        }
    }
    return 0;
}

```
#### Error Handle
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
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        cout << endl
             << "Inserted at Head" << endl
             << endl;
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
    cout << endl;
    cout << "Your linked list: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl
         << endl;
}
void insert_at_position(Node *head, int pos, int v)
{
    Node *newnode = new Node(v);
    Node *tmp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << endl
                 << "Invalid Index" << endl
                 << endl;
            return;
        }
    }

    newnode->next = tmp->next;
    tmp->next = newnode;
    cout << endl
         << endl
         << "Inserted at position: " << pos << endl
         << endl;
}
void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    cout << endl
         << "inserted at head" << endl
         << endl;
}
void delete_from_position(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i < pos; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << endl
                 << "Invalid Index" << endl
                 << endl;
            return;
        }
    }
    if (tmp->next == NULL)
    {
        cout << endl
             << "Invalid Index" << endl
             << endl;
        return;
    }

    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    cout << endl
         << "Deleted Position" << pos << endl;
}
void delete_head(Node *&head)
{
    if (head == NULL)
    {
        cout << endl
             << "Head is not available" << endl
             << endl;
        return;
    }
    Node *tmp = head;
    head = head->next;
    delete tmp;
    cout << "Deleted Head" << endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: insert at Tail " << endl;         // done
        cout << "Option 2: Print Linked List " << endl;      // done
        cout << "Option 3: Insert At Any Position " << endl; // done
        cout << "Option 4: Insert At Head " << endl;         // done
        cout << "Option 5: Delete from Position " << endl;   // done
        cout << "Option 6: Delete Head " << endl; // done
        cout << "Option 7: Terminate " << endl;
        int opt;
        cin >> opt;
        if (opt == 1)
        {
            cout << "Enter Your Value: ";
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (opt == 2)
        {
            print_linked_list(head);
        }
        else if (opt == 3)
        {
            int pos, v;
            cout << "Enter Your Position: ";
            cin >> pos;
            cout << "Enter Your Value: ";
            cin >> v;
            if (opt == 0)
            {
                insert_at_head(head, v);
            }
            else
            {
                insert_at_position(head, pos, v);
            }
        }
        else if (opt == 4)
        {
            int v;
            cout << "Enter Your Value: ";
            cin >> v;
            insert_at_head(head, v);
        }
        else if (opt == 5)
        {
            int pos;
            cout << "Enter your Position: ";
            cin >> pos;
            if (pos == 0)
            {
                delete_head(head);
            }
            else
            {
                delete_from_position(head, pos);
            }
        }
        else if (opt == 6)
        {
            delete_head(head);
        }
        else if (opt == 7)
        {
            break;
        }
    }
    return 0;
}

```
#### Take a Linked List as Input
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
    cout << endl;
    cout << "Your linked list: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl
         << endl;
}
int main()
{   
    Node *head = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1) break;
        insert_at_tail(head,val);
    }
    print_linked_list(head);
    return 0;
}

```