#### String Input Output
```

#include<stdio.h>
int main()
{   
    char a[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &a[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("%c", a[i]);
    }
    

    return 0;
}

```
#### String Initialize and Print
```
#include <stdio.h>
int main()
{
    char a[5] = {'F', 'a', 'h', 'i', 'm'};
    for (int i = 0; i < 5; i++)
    {
        printf("%c\n", a[i]);
    }

    return 0;
}

```
#### Super Power of String

```

#include <stdio.h>
int main()
{
    char a[5] = "Fahim";
    for (int i = 0; i < 5; i++)
    {
        printf("%c",a[i]);
    }
    

    return 0;
}

```
#### Super Power of String
```
#include <stdio.h>
int main()
{
    char a[6] = "Fahim\0";
    printf("%s", a);

    return 0;
}

```
#### Size of character
```
#include <stdio.h>
int main()
{
    char a[5];
    int sz = sizeof(a)/sizeof(char);

    printf("%d", sz);

    return 0;
}

```
#### Size of Integer
```
#include <stdio.h>
int main()
{
    int a[5];
    int sz = sizeof(a)/sizeof(int);

    printf("%d", sz);

    return 0;
}

```
#### String Input
```
#include <stdio.h>
int main()
{
    char c[6];
    scanf("%s", c);
    int sz = sizeof(c) / sizeof(char);
    printf("%d\n", sz);
    printf("%s", c);
    return 0;
}

```
#### Ghapla of String
```
input - Fuad Hasan Fahim
output - Fuad

#include <stdio.h>
int main()
{
    char c[17];
    scanf("%s", &c);
    printf("%s", c);
    return 0;
}

```

#### String input with space
```
#include <stdio.h>
int main()
{
    char c[17];
    gets(c);
    printf("%s", c);

    return 0;
}

```
```
#include <stdio.h>
#include <string.h>
int main()
{
    char c[100];
    fgets(c,23, stdin);
    c[10] ='\0';
    printf("%s", c); 

    return 0;
}

```

#### Length of a String
```
#include <stdio.h>

int main()
{
    char a[100];
    scanf("%s", a);
    int count = 0;

    int i=0;
    while (a[i]!=0)
    {
        count++;

        i++;
    }
    

   /* for (int i = 0; a[i]!=0; i++)
    {
        count++;
    }

   */ 
    printf("%d",count);
    
    return 0;
}

```

```
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    scanf("%s", a);
    int st = strlen(a);
    printf("%d", st);

    return 0;
}

```

#### Problem Solving

#### A. Create A New String
```
#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    char t[1000];
    scanf("%s", s);
    scanf("%s", t);

    int sts = strlen(s);
    int stt = strlen(t);

    printf("%d %d\n", sts, stt);

    // printf()
    printf("%s %s", s, t);

    return 0;
}

```
#### B. Let's use Getline

```
#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000000];

    fgets(a, 1000000, stdin);

    for (int i = 0; a[i] != '\\'; i++)
    {

        printf("%c", a[i]);
    }

    return 0;
}

```
#### E - Count
```
#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000000];

    scanf("%s",a);

    int sum = 0;

    for (int i = 0; i < strlen(a); i++)
    {

        
        sum = sum + (a[i]-48);
        
    }
    printf("%d", sum);
    return 0;
}

```

#### M. Replace MinMax
```
#include <stdio.h>
#include <string.h>
int main()
{

    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int min = a[0];

    int max = a[n - 1];

    for (int i = 0; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }

        if (max < a[i])
        {
            max = a[i];
        }
    }
    
    int ind_min;
    int ind_max;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == min)
        {
            ind_min = i;
            break;
        }
         
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == max)
        {
            ind_max = i;
            break;
        }
        
    }
    
    //int ct = ind_min;
    a[ind_min] = max;
    a[ind_max] = min;

    for (int  i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    

    return 0;
}


```
#### F. Way Too Long Words

```
#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        char a[101];
        scanf("%s", &a);
        int st = strlen(a);

        if (st > 10)
        {
            printf("%c%d%c\n", a[0], st - 2, a[st - 1]);
        }
        else
        {
            printf("%s\n", a);
        }
    }

    return 0;
}


```

#### G. Conversion 
```
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100001];
    fgets(a, 100001, stdin);

    char space = ' ';

    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == ',')
        {
            a[i] = space;
        }
        else if (a[i] >= 'a' && a[i] <= 'z')
        {
            a[i] = a[i] - 32;
        }
        else if (a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] = a[i] + 32;
        }
    }

    printf("%s", a);

    return 0;
}


```
#### I. Palindrome
```
#include <stdio.h>
#include <string.h>
int main()
{
    char a[1005];
    scanf("%s", &a);
    int ans = 1;
    int i = 0, j = strlen(a) - 1;
    while (i < j)
    {
        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
        if (a[i] != a[j])
        {
            ans = 0;
            break;
        }
        i++;
        j--;
    }

    if (ans == 1)
    {
        printf("YES");
    }
    else if (ans == 0)
    {
        printf("NO");
    }

    return 0;
}


```

#### D. Strings

```
#include <stdio.h>
#include <string.h>
int main()
{
    char a[11];
    scanf("%s", &a);
    
    char b[11];
    scanf("%s",  &b);

    //int st = strlen(a);
    printf("%d %d\n", strlen(a),strlen(b));
    printf("%s%s\n",a,b);

    int tmp = a[0];
    a[0] = b[0];
    b[0] = tmp;

    printf("%s %s",a,b);


    return 0;
}


```