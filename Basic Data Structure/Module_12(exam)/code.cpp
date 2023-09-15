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