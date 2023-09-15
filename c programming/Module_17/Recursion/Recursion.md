#### Call Stack
```
#include <stdio.h>

void world()
{
    printf("World\n");
}
void hello()
{
    printf("Hello\n");
    world();
}
int main()
{
    hello();
    printf("End\n");
    return 0;
}
```
#### Print From 1 to 5 Using Recursion
```
#include <stdio.h>

void fun(int i)
{
    if (i == 6)
        return; // Base Case
    printf("%d\n", i);
    fun(i + 1);
}
int main()
{
    fun(1);
    return 0;
}

```
#### print from 5 to 1 using recursion
```
#include <stdio.h>

void fun(int i)
{
    if (i == 0)
        return; // Base Case
    printf("%d\n", i);
    fun(i - 1);
}
int main()
{
    fun(5);
    return 0;
}
```
#### Array Printing using Recursion
```
#include <stdio.h>

void fun(int ar[], int n, int i)
{
    if (i == n)
        return; // Base Case
    printf("%d ", ar[i]);
    fun(ar, n, i + 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    fun(ar, n, 0);

    return 0;
}
```
#### Print from 5 to 1 in Reverse way
```
#include <stdio.h>

void fun(int i)
{
    if (i == 11)
        return;
    fun(i + 1);
    printf("%d\n", i);
}
int main()
{
    fun(1);

    return 0;
}
```
##### Length of a Sting using Recursion
```
#include <stdio.h>

int fun(char a[], int i)
{
    if (a[i] == '\0')
        return 0;
    int l = fun(a, i + 1);
    return l + 1;
}
int main()
{
    char a[6] = "Hello";
    int length = fun(a, 0);
    printf("%d", length);
    return 0;
}

```