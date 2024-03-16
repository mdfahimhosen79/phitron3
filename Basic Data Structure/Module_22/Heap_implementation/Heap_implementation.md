#### Heap Implementaion
### Max Heap
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        int cur_indx = v.size() - 1;
        while (cur_indx != 0)
        {
            int parent_idx = (cur_indx - 1) / 2;
            if (v[parent_idx] < v[cur_indx])
            {
                swap(v[parent_idx], v[cur_indx]);
            }
            else
            {
                break;
            }
            cur_indx = parent_idx;
        }
    }
    for (auto x : v)
    {
        cout << x << " ";
    }

    return 0;
}

```
### Min Heap
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        int cur_indx = v.size() - 1;
        while (cur_indx != 0)
        {
            int parent_idx = (cur_indx - 1) / 2;
            if (v[parent_idx] > v[cur_indx])
            {
                swap(v[parent_idx], v[cur_indx]);
            }
            else
            {
                break;
            }
            cur_indx = parent_idx;
        }
    }
    for (auto x : v)
    {
        cout << x << " ";
    }

    return 0;
}

```
### Delete Max Heap
```
#include <bits/stdc++.h>
using namespace std;
void insert_heap(vector<int> &v, int x)
{
    v.push_back(x);
    int cur_indx = v.size() - 1;
    while (cur_indx != 0)
    {
        int parent_idx = (cur_indx - 1) / 2;
        if (v[parent_idx] < v[cur_indx])
        {
            swap(v[parent_idx], v[cur_indx]);
        }
        else
        {
            break;
        }
        cur_indx = parent_idx;
    }
}
void delete_heap(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();
    int cur = 0;
    while (true)
    {
        int left_idx = cur * 2 + 1;
        int right_idx = cur * 2 + 2;
        int t_idx = v.size() - 1;
        if (left_idx <= t_idx && right_idx <= t_idx)
        {
            if (v[left_idx] >= v[right_idx] && v[cur] < v[left_idx])
            {
                swap(v[left_idx], v[cur]);
                cur = left_idx;
            }
            else if (v[right_idx] >= v[left_idx] && v[cur] < v[right_idx])
            {
                swap(v[cur], v[right_idx]);
                cur = right_idx;
            }else{
                break;
            }
        }
        else if (left_idx <= t_idx)
        {
            if (v[left_idx] > v[cur])
            {
                swap(v[cur], v[left_idx]);
                cur = left_idx;
            }else{
                break;
            }
        }
        else if (right_idx <= t_idx)
        {
            if (v[right_idx] > v[cur])
            {
                swap(v[right_idx], v[cur]);
                cur = right_idx;
            }else{
                break;
            }
        }
        else
        {
            break;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insert_heap(v, x);
    }
    delete_heap(v);
    for (auto y : v)
    {
        cout << y << " ";
    }
    return 0;
}

```
#### Delete Min Heap
```
#include <bits/stdc++.h>
using namespace std;
void insert_heap(vector<int> &v, int x)
{
    v.push_back(x);
    int cur_indx = v.size() - 1;
    while (cur_indx != 0)
    {
        int parent_idx = (cur_indx - 1) / 2;
        if (v[parent_idx] > v[cur_indx])
        {
            swap(v[parent_idx], v[cur_indx]);
        }
        else
        {
            break;
        }
        cur_indx = parent_idx;
    }
}
void delete_heap(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();
    int cur = 0;
    while (true)
    {
        int left_idx = cur * 2 + 1;
        int right_idx = cur * 2 + 2;
        int t_idx = v.size() - 1;
        if (left_idx <= t_idx && right_idx <= t_idx)
        {
            if (v[left_idx] <= v[right_idx] && v[cur] > v[left_idx])
            {
                swap(v[left_idx], v[cur]);
                cur = left_idx;
            }
            else if (v[right_idx] <= v[left_idx] && v[cur] > v[right_idx])
            {
                swap(v[cur], v[right_idx]);
                cur = right_idx;
            }else{
                break;
            }
        }
        else if (left_idx <= t_idx)
        {
            if (v[left_idx] < v[cur])
            {
                swap(v[cur], v[left_idx]);
                cur = left_idx;
            }else{
                break;
            }
        }
        else if (right_idx <= t_idx)
        {
            if (v[right_idx] < v[cur])
            {
                swap(v[right_idx], v[cur]);
                cur = right_idx;
            }else{
                break;
            }
        }
        else
        {
            break;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insert_heap(v, x);
    }
    delete_heap(v);
    for (auto y : v)
    {
        cout << y << " ";
    }
    return 0;
}

```