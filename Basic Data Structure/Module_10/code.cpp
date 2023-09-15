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