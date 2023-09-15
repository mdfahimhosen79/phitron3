#### Return_Type + Parameter
```
#include <stdio.h>

int sum(int x, int y)
{
    int z = x + y;
    return z;
}

int main()
{
    int a = sum(10, 20);

    printf("%d", a);

    // printf("%d",sum(10,20));

    return 0;
}

```

```
#include <stdio.h>

int sum(int x, int y);
int main()
{
    int a = sum(30, 20);

    printf("%d", a);

    // printf("%d",sum(10,20));

    return 0;
}

int sum(int x, int y)
{
    int z = x + y;
    return z;
}
```
```
#include <stdio.h>

int sum(int x, int y)
{
    int z = x + y;
    return z;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", sum(a, b));

    return 0;
}
```
#### Return_Type + No Parameter
```
#include <stdio.h>

int sum()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int z = a + b;
    return z;
}

int main()
{
   
    printf("%d",sum());

    return 0;
}


```
#### No Return + Parameter
```
#include <stdio.h>

void sum(int x, int y){

    int s = x + y;
    printf("%d",s);
}

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    sum(x,y);

    return 0;
}

```

#### No Return + No Parameter

```
#include <stdio.h>

void sum(void)
{
    int x, y;
    scanf("%d %d", &x, &y);
    int s = x + y;
    printf("%d", s);
}

int main()
{
    sum();
    return 0;
}

#include <stdio.h>

void sum(void)
{
    int x, y;
    scanf("%d %d", &x, &y);
    int s = x + y;
    printf("%d\n", s);
}

int main()
{
    sum();
    sum();
    return 0;
}


```

#### Built in Fuction

#### Ceil Floor Round
```
#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    scanf("%lf", &x);
  //  int ans = ceil(x);
   // int ans = floor(x);
    int ans = round(x);
    printf("%d", ans);

    return 0;
}


```

#### Square Root
```
#include <stdio.h>
#include <math.h>

int main()
{
    
    int x;
    scanf("%d",&x);
    double ans = sqrt(x);
    printf("%0.2lf", ans);

    return 0;
}
```
#### Power Function a^b pow(a,b)
```
#include <stdio.h>
#include <math.h>

int main()
{

    int a, b;
    scanf("%d %d", &a, &b);
    int ans = pow(a, b);
    printf("%d", ans);

    return 0;
}


```
#### Absolute Function abs() provide positive number
```
#include <stdio.h>
#include <math.h>

int main()
{

    int a, b;
    scanf("%d %d", &a, &b);
    int ans = pow(a, b);
    printf("%d", ans);

    return 0;
}
```
#### Scope in C
```
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Global
int x = 500; //Global Variable

void fun()
{
    int s = 100;
    printf("Fun er s-%p\n", &s);
}

int main()
{
    int s = 100; // scope of this s in the main function 2nd braket
    printf("Main er s- %p\n", &s);
    fun();
    printf("Value of x-%d",x);

    return 0;
}


```
