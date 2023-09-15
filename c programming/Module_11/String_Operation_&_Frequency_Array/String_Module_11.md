#### String Coppy
```
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    char b[100];
    scanf("%s %s", a, b);

    for (int i = 0; i <= strlen(b); i++)
    {
        a[i] = b[i];
    }
    printf("%s", a);

    return 0;
}

```
```
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    char b[100];
    scanf("%s %s", a, b);

    strcpy(a, b);

    printf("%s", a);

    return 0;
}

```
#### Lexicographical comparison

```
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];

    scanf("%s %s", a, b);

    int i = 0;

    while (1)
    {
        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("Same");
            break;
        }
        else if (a[i] == '\0')
        {
            printf("A choto");
            break;
        }
        else if (b[i] == '\0')
        {
            printf("B choto");
        }

        if (a[i] == b[i])
        {
            i++;
        }
        else if (a[i] < b[i])
        {
            printf("A choto");
            break;
        }
        else
        {
            printf("B choto");
            break;
        }
    }

    return 0;
}

```

```
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];

    scanf("%s %s", a, b);

    int v = strcmp(a, b);

    if (v < 0)
    {
        printf("A is smaller");
    }
    else if (v > 0)
    {
        printf("B is smaller");
    }
    else
    {
        printf("Same");
    }

    return 0;
}

```
#### Array Concatenation
```
#include <stdio.h>
#include <string.h>
int main()
{
    char a[200], b[100];

    scanf("%s %s", a, b);

    int k = strlen(a);

    for (int i = 0; i <= strlen(b); i++)
    {
        a[k] = b[i];
        k++;
    }

    printf("%s", a);

    return 0;
}

```

```
#include <stdio.h>
#include <string.h>
int main()
{
    char a[200], b[100];

    scanf("%s %s", a, b);

    strcat(a,b);

    printf("%s %s", a,b);

    return 0;
}

```

```
#include <stdio.h>
#include <string.h>
int main()
{
    char a[200], b[100];

    scanf("%s %s", a, b);

    int k = strlen(a);

    for (int i = 0; i <= 2; i++)
    {
        a[k] = b[i];
        k++;
    }
    a[k] = '\0';

    printf("%s %s", a, b);

    return 0;
}

```
#### Counting Array
```
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int cnt[7] = {0};

    for (int i = 0; i < n; i++)
    {
        int val = a[i];
        cnt[val]++;
    }

    for (int i = 0; i <= 6; i++)
    {
        printf("%d - %d\n", i, cnt[i]);
    }

    return 0;
}

```
#### Counting Array II
```
#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    scanf("%s", s);

    int cnt[26] = {0};

    for (int i = 0; i < strlen(s); i++)
    {
        int value = s[i] - 'a';
        cnt[value]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] != 0)
        {
            printf("%c - %d\n", i + 'a', cnt[i]);
        }
    }

    return 0;
}

```

```
#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    scanf("%s", s);

    int cnt[26] = {0};

    for (int i = 0; i < strlen(s); i++)
    {
        int value = s[i] - 'a';
        cnt[value]++;
    }

    for (int i = 0; i < strlen(s); i++)
    {
        int value = s[i] - 'a';
        if (cnt[value] != 0)
        {
            printf("%c - %d\n", value + 'a', cnt[value]);
        }
        cnt[value] = 0;
    }

    return 0;
}
```
#### J - Count Letters
```
#include <stdio.h>

int main()
{
    int cnt[26] = {0};
    char a;
    while (scanf("%c", &a) != EOF)
    {

        cnt[a - 'a']++;
    }

    for (char i = 'a'; i <= 'z'; i++)
    {
        if (cnt[i - 'a'] > 0)
        {
            printf("%c : %d\n", i, cnt[i - 'a']);
        }
    }

    return 0;
}

```