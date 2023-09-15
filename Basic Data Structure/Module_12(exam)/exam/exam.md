#### Browser History
#### Problem Statement

You are given a doubly linked list of strings. These strings refer to web addresses without any spaces. You will be given Q queries. In each query you will be given some commands. Type of commands are -

visit address - You need to go to that address from where you are in that list and print that address if it is in the list. Otherwise print "Not Available".
next - You need to go to the next address from where you are in that list and print that address if it is in the list. Otherwise print "Not Available".
prev - You need to go to the previous address from where you are in that list and print that address if it is in the list. Otherwise print "Not Available".
Note: You can use Linked List or STL List to solve this problem.

Input Format

First line will contain the values of the doubly linked list, and will terminate with the string "end".
Second line will contain Q.
Next Q lines will contain the commands. It is guranteed that you will get "visit address" command at first which will contain a valid address. It will not contain valid address everytime!
Constraints

1 <= N <= 1000; Here N is the maximum number of nodes of the linked list.
1 <= Q <= 1000;
1 <= |Address| <= 100; Here |Address| is the length of the string address.
Output Format

For each query output as asked.
Sample Input 0

#### facebook google phitron youtube twitter end
#### 12
#### visit phitron
#### prev
#### prev
#### prev
#### prev
#### next
#### visit twitter
#### next
#### next
#### prev
#### visit django
#### prev
### Sample Output 0

#### phitron
#### google
#### facebook
#### Not Available
#### Not Available
#### google
#### twitter
#### Not Available
#### Not Available
#### youtube
#### Not Available
#### phitron
```
#include <bits/stdc++.h>
using namespace std;
class Node
{   
    public:
    string s;
    Node* next;
    Node* prev;
    Node(string s)
    {
        this->s = s;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_tail(Node *&head, Node *&tail, string s)
{
    Node* n = new Node(s);
    if(head == NULL)
    {
        head = n;
        tail = n;
        return;
    }
    tail->next = n;
    n->prev = tail;
    tail = n;
}
void find_list(Node * head,Node * &cur,string com)
{   
    Node * tmp = head;
    while(tmp != NULL)
    {
        if(com == tmp->s)
        {
            cout<<tmp->s<<endl;
            cur = tmp;  
            return;
        }
        tmp = tmp->next;
    }
    cout<<"Not Available"<<endl;
}
void go_command(Node *&cur)
{
    if(cur->prev != NULL)
    {   
        cur = cur->prev;
        cout<<cur->s<<endl;
    }else
    {
        cout<<"Not Available"<<endl;
    }
    
}
void next_command(Node *&cur)
{
    if(cur->next != NULL)
    {
        cur = cur->next;
        cout<<cur->s<<endl;
    }else
    {
        cout<<"Not Available"<<endl;
    }
    
}
int main()
{
    Node* head = NULL;
    Node * tail = NULL;
    string s;
    while (true)
    {
        cin>>s;
        if(s == "end")
        {
            break;
        }
        insert_tail(head,tail,s);
    }
    Node * cur = head;
    int t;
    cin>>t;
    string com;
    while(t--)
    {
        cin>>com;
        if(com == "visit")
        {
            string com2;
            cin>>com2;
            find_list(head,cur,com2);
        }else if(com == "prev"){
            go_command(cur);
        }
        else if (com == "next")
        {
            next_command(cur);
        }
    }
    return 0;
}
```