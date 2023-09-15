#### Qeustion No 1
```
#include <stdio.h>


int main()
{
    int n;
    scanf("%d", &n);
    int k = 1;
    int s = n - 1;
    for (int i = 0; i < (2 * n) - 1; i++)
    {


        if (i < n - 1)
        {
            for (int i = 1; i <= s; i++)
            {
                printf(" ");
            }
            s--;


            for (int i = 1; i <= k; i++)
            {
                printf("%d", i);
            }
            k = k + 2;
            printf("\n");
        }


        else if (i >= n - 1)
        {
            for (int i = 1; i <= s; i++)
            {
                printf(" ");
            }
            s++;


            for (int i = 1; i <= k; i++)
            {
                printf("%d", i);
            }
            k = k - 2;
            printf("\n");
        }
    }


    return 0;
}
```
#### Question No 2
```
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int k = 1;
    int s = n - 1;
    for (int i = 0; i < n; i++)
    {

        for (int i = 1; i <= s; i++)
        {
            printf(" ");
        }
        s--;

        for (int i = 1; i <= k; i++)
        {
            printf("%d", k);
        }
        k++;

        printf("\n");
    }

    return 0;
}
```
#### Question No 3
```
#include <stdio.h>

int count_before_zero(int n)
{
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {

        if (a[i] != 0)
        {
            count++;
        }
        else if (a[i] == 0)
        {
            break;
        }
    }

    return count;
}

int main()
{
    int n;
    scanf("%d", &n);

    int cnt = count_before_zero(n);
    printf("%d", cnt);

    return 0;
}
```