#### Level Order Traversal of Binary Tree Implementation
```
#include <bits/stdc++.h>
using namespace std;
class Node
{   
    public:
    int val;
    Node* left;
    Node* right;
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
        if(f->left != NULL) q.push(f->left); // shortcut if(f->left) q.push(f->left)
        if(f->right != NULL) q.push(f->right); // if(f->right) q.push(f->right)
    }
}
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
    // connection
    root->left = a;
    root->right = b;
    a->left = c;
    a->right = h;
    c->right = e;
    h->right = i;
    b->right = d;
    d->left = f;
    d->right = g;
    levelorder(root);
    return 0;
}
```
#### Binary Tree Input Implementation
```
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
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
int main()
{
    Node *root = input_tree();
    levelorder(root);
    return 0;
}
```
#### Count Number of Nodes In a Binary Tree
```
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
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
int count(Node *root)
{
    if (root == NULL)
        return 0;
    int l = count(root->left);
    int r = count(root->right);
    return l + r + 1;
}
int main()
{
    Node *root = input_tree();
    cout<<count(root);
    return 0;
}

```
#### Count Number of Leaf Nodes In a Binary Tree
```
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
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
int count_leaf(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    else
    {
        int l = count_leaf(root->left);
        int r = count_leaf(root->right);
        return l + r;
    }
}
int main()
{
    Node *root = input_tree();
    cout << count_leaf(root);
    return 0;
}
```
#### Get The Maximum Height in a Binary Tree
```
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
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
int maxHeight(Node* root)
{
    if(root == NULL) return 0;
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    return max(l,r) + 1;
}
int main()
{
    Node *root = input_tree();
    cout << maxHeight(root);
    return 0;
}

```