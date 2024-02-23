#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
     int val;
     Node * left;
     Node * right;
     Node(int val)
     {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
     }
};
void levelorder(Node* root)
{
    if(root == NULL) return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {   
        // ber kore ana
        Node * f = q.front();
        q.pop();
        // jabotio ja kaj
        cout<<f->val<<" ";
        // children gula ke line(queue) e dao
        if(f->left != NULL) q.push(f->left); 
        if(f->right != NULL) q.push(f->right); 
    }
}
Node* input_tree()
{
    int val;
    cin>>val;
    Node * root;
    if(val == -1) root = NULL; 
    else root = new Node(val);

    queue <Node*> a;
    if(root!=NULL) a.push(root);

    while(!a.empty())
    {
        // 1st step
        Node* p = a.front();
        a.pop();

        // 2nd step
        int l,r;
        cin>>l>>r;
        Node * myleft,*myright;
        if(l != -1) myleft = new Node(l);
        else myleft = NULL;
        if(r==-1) myright = NULL;
        else myright = new Node(r);

        p->left = myleft;
        p->right = myright;
        
        // 3rd step;
        if(p->left != NULL) a.push(p->left);
        if(p->right != NULL) a.push(p->right);
    }
    return root;
}
int main()
{
    Node * root = input_tree();
    levelorder(root);
    return 0;
} 