#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* right;
        Node* left;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
int main()
{
    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);
    Node* f = new Node(70);
    Node* g = new Node(80);
    Node* h = new Node(90);
    Node* i = new Node(100);
      //connection
    //root
    root->left = a;
    root->right = b;
    //a
    a->left = c;
    a->right = h;
    //b
    b->right = d;
    //c
    c->right = e;
    //h
    h->right = i;
    //d
    d->left = f;
    d->right = g;
    

    return 0;
}