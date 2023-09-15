#include <stdio.h>

int fun(int *a)
{
    *a = 20;
}

int main()
{
    int a = 10;
    fun(&a);
    printf("%d", a);

    return 0;
}
