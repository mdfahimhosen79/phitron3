#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val)
    {
        this->val = val;
        this->right = NULL;
        this->left = NULL;
    }
};
Node* convert(int a[],int n, int l, int r)
{   
    if(l>r) return NULL;
    int mid = (l+r)/2;
    Node* root = new Node(a[mid]);
    Node* rootleft = convert(a,n,l,mid-1);
    Node* rootright = convert(a,n,mid+1,r);

    root->left = rootleft;
    root->right = rootright;
    return root;
}
void levelorder(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // ber kore ana
        Node *f = q.front();
        q.pop();
        // jabotio ja kaj
        cout << f->val << " ";
        // children gula ke line(queue) e dao
        if (f->left != NULL)
            q.push(f->left); // shortcut if(f->left) q.push(f->left)
        if (f->right != NULL)
            q.push(f->right); // if(f->right) q.push(f->right)
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    Node* root = convert(a,n,0,n-1);
    levelorder(root);
    return 0;
}