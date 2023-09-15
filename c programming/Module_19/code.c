#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    if (n % 2 == 0)
    {
        int mid1 = n / 2;
        int mid2 = (n / 2) + 1;
        printf("%d %d", a[mid1-1], a[mid2-1]);
    }
    else
    {
        int k = (n + 1) / 2;
        printf("%d", a[k-1]);
    }

    return 0;
}