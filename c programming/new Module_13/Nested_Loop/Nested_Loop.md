#### Problem of Printing X
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
#### Sum of  Two Value equal to X
```
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int x;
    scanf("%d", &x);

    int flag = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == x)
            {

                flag = 1;
            }
        }
    }

    if (flag == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}

```

#### Selection Sort

#### Ascending Sort

```
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int k;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                k = a[i];
                a[i] = a[j];
                a[j] = k;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

```

#### Descending Sort
```
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int k;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                k = a[i];
                a[i] = a[j];
                a[j] = k;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

```
