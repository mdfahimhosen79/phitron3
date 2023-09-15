#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int m;
    scanf("%d", &m);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &a[i]);
    }

    int cnt[m + 1];
    for (int i = 0; i <= m; i++)
    {

        cnt[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {

        cnt[a[i]]++;
    }

    for (int i = 1; i < m+1; i++)
    {
        printf("%d\n", cnt[i]);
    }

    return 0;
}