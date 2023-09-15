#include <stdio.h>
#include <limits.h>

int main()
{

    int a[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }

    int b = a[0];
    int c = a[1];
    int d = a[2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 1; j < 3; j++)
        {
            if (a[i] > a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", a[i]);
    }

    printf("\n%d\n%d\n%d", b, c, d);

    return 0;
}