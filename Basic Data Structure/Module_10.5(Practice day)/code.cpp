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