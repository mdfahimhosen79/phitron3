#### Pointer in C
```
#include <stdio.h>
int main()
{
    int x = 100;
    int *ptr;
    ptr = &x;
    printf("x er address-%p\n", &x);
    printf("ptr er value-%p\n", ptr);
    printf("ptr er address-%p\n", &ptr);
    printf("ptr er Memory-%d\n", sizeof(ptr));

    return 0;
}

```

#### Dereference
```
#include <stdio.h>
int main()
{
    int x = 100;
    int *ptr;
    ptr = &x;
    // x= 200;
    *ptr = 200;
    // x -> *ptr same

    printf("x er value-%d\n",x);
    printf("x er value-%d\n",*ptr);

    return 0;
}

```
```
#include <stdio.h>
int main()
{
    double x = 5.26;
    double *ptr = &x;
     //*ptr = 10.20;
     
     double *ptr2 = ptr;
     *ptr2 = 100.50;

    printf("x er value - %0.2lf\n",x);
    printf("x er value - %0.2lf\n",*ptr);
    printf("x er value - %0.2lf\n",*ptr2);
    printf("ptr er size - %d\n",sizeof(ptr));


    return 0;
}
```
#### Call by Value 
```
#include <stdio.h>

void fun(int x)
{
    printf("fun x er address - %p\n", &x);
    printf("fun er value - %d\n", x);
}

int main()
{
    int x = 100;
    printf("Main x er address - %p\n", &x);
    printf("Main er value - %d\n", x);
    fun(x);

    return 0;
}

```
#### Call By Reference
```
#include <stdio.h>

void fun(int *p)
{   
    // dereference
    *p = 500;
   // printf("p er value - %p\n",p);
   // printf("main er x er value - %d\n",*p);
    
}

int main()
{
    int x = 100;
    //printf("x er address - %p\n",&x);
    fun(&x);
    printf("%d",x);

    return 0;
}
```
#### Array itself is a pointer
```
#include <stdio.h>

int main()
{
    int a[5] ={10,20,3,5,4};
   // printf("0th index er address - %p\n",&a[0]);
   // printf("0th index er address - %p\n",a);

   // printf("0th index er Value - %d\n",a[0]);
   // printf("1st index er Value - %d\n",*(a+1));
   // printf("2nb index er Value - %d\n",*(a+2));
    printf("%d\n",*(a+1));
    printf("%d\n",*(1+a));
    printf("%d\n",a[1]);
    printf("%d\n",1[a]);
    printf("%d\n",2[a]);
    return 0;
}
```
#### Size of Array
```
#include <stdio.h>

int main()
{
    int a[5] = {10, 30, 30, 40, 50};
    int sz = sizeof(a)/sizeof(int);
    printf("%d\n",sz);

    return 0;
}
```
#### Function and Array
```
#include <stdio.h>

void fun(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int a[5] = {10, 30, 30, 40, 50};
    fun(a, 5);
    return 0;
}
```
```
#include <stdio.h>

void fun(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int a[5] = {10, 30, 30, 40, 50};
    fun(a, 5);
    return 0;
}
```
#### Size of String
```
#include <stdio.h>

int main()
{
    char a[6] = "Hello";
    int sz = sizeof(a) / sizeof(char);
    printf("%d", sz);

    return 0;
}

```
#### Function And Array
```
#include <stdio.h>
#include <string.h>

void fun(char *a) // or char a[]
{
    printf("%d", strlen(a));
}

int main()
{
    char a[20] = "Hello";
    fun(a);

    return 0;
}
```
#### Function with Array As Reference
```
#include <stdio.h>

void fun(int ar[], int n)
{
    ar[0] = 500;

    printf("\n");
}

int main()
{
    int ar[5] = {10, 20, 30, 40, 50};
    fun(ar, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}

```
```
#include <stdio.h>

void fun(char *ar)
{
    ar[0] = 'G';
}

int main()
{
    char ar[6] = "Hello";
    fun(ar);
    printf("%s", ar);

    return 0;
}
```
#### Practice problem
#### A. Add
```


```
