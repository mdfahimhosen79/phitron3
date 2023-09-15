#include <stdio.h>

int main()
{
    int x = 10;
    //printf("%p\n", &x);
    int *q = &x;
    printf("%p\n", q);
    // Dereference
    printf("%d\n",*q);

    *q = 500;
    printf("%d\n",x);
    

    return 0;
}
