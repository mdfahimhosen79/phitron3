#### Insert Elemnt In Array
```
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int pos, value;
    scanf("%d %d ", &pos, &value);

    for (int i = n; i >= pos + 1; i--)
    {
        ar[i] = ar[i - 1];
    }

    ar[pos] = value;

    for (int i = 0; i <= n; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}

```

#### Remove Element from an Array

```
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int pos;
    scanf("%d", &pos);

    for (int i = pos; i<n-1; i++)
    {
        ar[i] = ar[i + 1];
        
    }

    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}

```
#### Reverse an Array

```
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int i = 0, j = n - 1;

    while (i < j)
    {

        int tmp = ar[i];
        ar[i] = ar[j];
        ar[j] = tmp;

        i++;
        j--;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    

    return 0;
}

```
#### Copy Elements of Two Arrays
```
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int m;
    scanf("%d", &m);
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr[i]);
    }

    int ans[n + m];
    for (int i = 0; i < n; i++)
    {
        ans[i] = ar[i];
    }

    int i = n;
    for (int j = 0; j < m; j++)
    {
        ans[i] = arr[j];
        i++;
    }

    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", ans[i]);
    }

    return 0;
}

```