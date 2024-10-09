#### Merge Two sorted Array Implementaion
```
#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int l, int m, int r)
{
    int leftsize = m - l + 1;
    int rightsize = r - m;
    int L[leftsize];
    int R[rightsize];
    int k = 0;
    for (int i = l; i <= m; i++)
    {
        L[k] = a[i];
        k++;
    }
    k = 0;
    for (int i = m + 1; i <= r; i++)
    {
        R[k] = a[i];
        k++;
    }

    int i = 0, j = 0;
    int cur = l;
    while (i < leftsize && j < rightsize) {
        if (L[i] <= R[j]) {
            a[cur] = L[i];
            i++;
        } else {
            a[cur] = R[j];
            j++;
        }
        cur++;
    }
    while (i < leftsize) {
        a[cur] = L[i];
        i++;
        cur++;
    }
    while (j < rightsize) {
        a[cur] = R[j];
        j++;
        cur++;
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    merge(a, 0, 3, n - 1);
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

```
#### How Divide Works In Merge Sort
```
#include <bits/stdc++.h>
using namespace std;

void divide(int a[],int l, int r)
{
    if(l<r)
    {
        int mid = (l+r)/2;
        divide(a,l,mid);
        divide(a,mid+1,r);
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
    divide(a,0,n-1);

    return 0;
}

```
#### Merge Sort Implementation
```
#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int l, int mid, int r)
{
    int leftsize = mid - l+ 1;
    int rightsize = r-mid;
    int L[leftsize];
    int R[rightsize];
    
    int k=0;
    for(int i=l; i<=mid; i++)
    {
        L[k] = a[i];
        k++;
    }
    k = 0;
    for(int i=mid+1; i<=r; i++)
    {
        R[k] = a[i];
        k++;
    }
    int i=0,j=0;
    int cur = l;
    while(i<leftsize && j<rightsize)
    {
        if(L[i]<=R[j])
        {
            a[cur] = L[i];
            i++;
        }else{
            a[cur] = R[j];
            j++;
        }
        cur++;
    }
    while(i<leftsize)
    {
        a[cur] = L[i];
        i++;
        cur++;
    }
    while(j<rightsize)
    {
        a[cur] = R[j];
        j++;
        cur++;
    }
}
void merge_sort(int a[], int l, int r)
{
    if(l<r)
    {
        int mid = (l+r)/2;
        merge_sort(a,l,mid);
        merge_sort(a,mid+1,r);
        merge(a,l,mid,r);
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
    merge_sort(a,0,n-1);
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

```
