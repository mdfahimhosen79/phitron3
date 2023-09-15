#### Duplicate
[Problem link](https://www.hackerrank.com/contests/assignment-01-a-basic-data-structures-a-batch-03/challenges/duplicate-12)
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool flag = false;
    sort(a, a + n);
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            flag = true;
            break;
        }
        else
        {
            flag = false;
        }
    }
    if (flag == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}

```
#### Get Prefix Sum
[Problem link](https://www.hackerrank.com/contests/assignment-01-a-basic-data-structures-a-batch-03/challenges/get-prefix-sum)
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long int pre[n];
    pre[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = a[i] + pre[i - 1];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << pre[i] << " ";
    }
    return 0;
}

```
#### Sorted
[Problem link](https://www.hackerrank.com/contests/assignment-01-a-basic-data-structures-a-batch-03/challenges/sorted-2-2)
```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool flag = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}

```
#### Printing X
[Problem link](https://www.hackerrank.com/contests/assignment-01-a-basic-data-structures-a-batch-03/challenges/printing-x)
```
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int k = 1;
    int s = n - 2;
    int sp = 0;
    int midsp = (n - 1) / 2;

    int os = midsp - 1;
    int os2 = 1;

    for (int i = 1; i <= n; i++)
    {
        if (i <= (n - 1) / 2)
        {
            for (int i = 1; i <= k; i++)
            {

                for (int j = 1; j <= sp; j++)
                {
                    printf(" ");
                }

                

                printf("\\");
                for (int j = 1; j <= s; j++)
                {
                    printf(" ");
                }

                s = s - 2;

                printf("/");
                for (int j = 1; j <= sp; j++)
                {
                    printf(" ");
                }

                sp++;
                
                printf("\n");
            }
        }
        else if (i == (n - 1) / 2 + 1)
        {
            for (int j = 1; j <= midsp; j++)
            {
                printf(" ");
            }
            printf("X");

             for (int j = 1; j <= midsp; j++)
            {
                printf(" ");
            }

            printf("\n");
        }
        else
        {

            for (int i = 1; i <= k; i++)
            {
                for (int j = 1; j <= os; j++)
                {
                    printf(" ");
                }
                
                printf("/");
                for (int j = 1; j <= os2; j++)
                {
                    printf(" ");
                }
                os2 = os2 + 2;

                printf("\\");

                for (int j = 1; j <= os; j++)
                {
                    printf(" ");
                }
                os--;
                printf("\n");
            }
        }
    }

    return 0;
}
```