#### 1 Mirror Array
```
#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = m - 1; j >= 0; j--)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

```
#### 2 Sum of a Matrix
```
#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m], b[n][m], c[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}

```
#### D. Print Digits using Recursion
```
#include <stdio.h>
void fun(int n)
{
    if (n == 0)
        return;
    int x = n % 10;
    fun(n / 10);
    printf("%d ", x);
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        fun(n);
        if (n == 0)
        {
            printf("0");
        }

        printf("\n");
    }

    return 0;
}

```
#### 4 Count Vowels

```
#include <stdio.h>
#include <string.h>

int fun(char a[], int i)
{
    if (a[i] == '\0')
        return 0;
    int sum = fun(a, i + 1);
    if (a[i] >= 'A' && a[i] <= 'Z')
    {
        a[i] = a[i] + 32;
    }

    if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
    {
        return sum + 1;
    }
    else
    {
        return sum;
    }
}

int main()
{
    char a[205];
    fgets(a, 205, stdin);
    int sum = fun(a, 0);
    printf("%d", sum);
    return 0;
}

```
#### 5 Factorial
```
#include <stdio.h>

long long int fun(int n)
{
    if (n == 0)
        return 1;
    long long int fac = fun(n - 1);
    return fac * n;
}

int main()
{
    int n;
    scanf("%d", &n);
    long long int ft = fun(n);
    printf("%lld", ft);
    return 0;
}

```
#### 6 K. Max Number
```
#include <stdio.h>
#include <limits.h>

int fun(int a[], int n, int i)
{
    if (i == n)
        return INT_MIN;
    int mx = fun(a, n, i + 1);
    if (a[i] > mx)
    {
        return a[i];
    }
    else
    {
        return mx;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int mx = fun(a, n, 0);
    printf("%d", mx);

    return 0;
}

```