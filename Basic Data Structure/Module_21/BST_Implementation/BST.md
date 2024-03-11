#### Search in BST
```
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
        this->right = NULL;
        this->left = NULL;
    }
};
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }
    queue<Node *> q;
    if (root != NULL)
        q.push(root); // shortcut if(root) q.push(root);
    while (!q.empty())
    {
        // ber kore ano
        Node *f = q.front();
        q.pop();
        // jabotio kaj koro
        int l, r;
        cin >> l >> r;
        Node *left;
        Node *right;
        if (l == -1)
            left = NULL;
        else
            left = new Node(l);
        if (r == -1)
            right = NULL;
        else
            right = new Node(r);
        // connection
        f->left = left;
        f->right = right;
        // children gula ke push kor
        if (f->left != NULL)
            q.push(f->left);
        if (f->right != NULL)
            q.push(f->right);
    }
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
        // cout << f->val << " ";
        // children gula ke line(queue) e dao
        if (f->left != NULL)
            q.push(f->left); // shortcut if(f->left) q.push(f->left)
        if (f->right != NULL)
            q.push(f->right); // if(f->right) q.push(f->right)
    }
}
bool search(Node* root, int x)
{
    if(root == NULL) return false;
    if(root->val == x) return true;

    if(x<root->val) {
        return search(root->left,x);
    }
    else {
        return search(root->right,x);
    } 
    
}
int main()
{
    Node * root = input_tree();
    // levelorder(root);
    if(search(root,100)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}

```
#### Insert in BST
```
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
        this->right = NULL;
        this->left = NULL;
    }
};
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }
    queue<Node *> q;
    if (root != NULL)
        q.push(root); // shortcut if(root) q.push(root);
    while (!q.empty())
    {
        // ber kore ano
        Node *f = q.front();
        q.pop();
        // jabotio kaj koro
        int l, r;
        cin >> l >> r;
        Node *left;
        Node *right;
        if (l == -1)
            left = NULL;
        else
            left = new Node(l);
        if (r == -1)
            right = NULL;
        else
            right = new Node(r);
        // connection
        f->left = left;
        f->right = right;
        // children gula ke push kor
        if (f->left != NULL)
            q.push(f->left);
        if (f->right != NULL)
            q.push(f->right);
    }
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
void insert(Node*& root,int x)
{
    if(root == NULL)
    {
        root = new Node(x);
        return;
    }
    if(x<root->val)
    {
        if(root->left == NULL)
        {
            root->left = new Node(x);
        }else{
            insert(root->left,x);
        }
    }else{
        if(root->right ==  NULL)
        {
            root->right = new Node(x);
        }else{
            insert(root->right,x);
        }
    }
}
int main()
{
    Node * root = input_tree();
    int val;
    cin>>val;
    insert(root,val);
    levelorder(root);
    return 0;
}

```
#### Convart Array to BST
```

```