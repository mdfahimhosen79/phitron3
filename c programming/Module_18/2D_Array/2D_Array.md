#### 2D Array Input and Output
```
#include <stdio.h>
int main()
{
    int a[5][3];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

```
#### Print exact Row
```
#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d%d", &row, &col);
    int a[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int e;
    scanf("%d", &e);
    for (int i = 0; i < col; i++)
    {
        printf("%d ", a[e][i]);
    }

    return 0;
}

```
#### Print exact Column
```
#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d%d", &row, &col);
    int a[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int e;
    scanf("%d", &e);
    for (int i = 0; i < row; i++)
    {
        printf("%d\n", a[i][e]);
    }

    return 0;
}

```
#### Zero or Null Matrix
```
#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int element = row * col;
    int cnt = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] == 0)
            {
                cnt++;
            }
        }
    }
    if (element == cnt)
    {
        printf("Zero Matrix");
    }
    else
    {
        printf("Not Zero Matrix");
    }

    return 0;
}

```
#### Primary Diagonal Matrix using 2D Array
```
#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int flag = 1;

    if (row != col)
    {
        flag = 0;
    }
    int cnt = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] == 0)
            {
                cnt++;
            }

            if (i == j)
            {
                continue;
            }

            if (a[i][j] != 0)
            {
                flag = 0;
            }
        }
    }
    if (cnt == row * col)
    {
        flag = 0;
    }

    if (flag == 1)
    {
        printf("Primary Diagonal Matrix");
    }
    else
    {
        printf("Not Diagonal");
    }

    return 0;
}

```
#### Secondary Diagonal Matrix
```
#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int flag = 1;

    if (row != col)
    {
        flag = 0;
    }
    int cnt = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] == 0)
            {
                cnt++;
            }

            if (i + j == col - 1)
            {
                continue;
            }

            if (a[i][j] != 0)
            {
                flag = 0;
            }
        }
    }
    if (cnt == row * col)
    {
        flag = 0;
    }

    if (flag == 1)
    {
        printf("Secondary Diagonal Matrix");
    }
    else
    {
        printf("Not Diagonal");
    }

    return 0;
}

```
#### Scalar Matrix using 2D Array
```
#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int flag = 1;

    if (row != col)
    {
        flag = 0;
    }
    int cnt = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] == 0)
            {
                cnt++;
            }

            if (i==j)
            {   
                if (a[i][j] != a[0][0])
                {
                    flag = 0;
                }
                
                continue;
            }

            if (a[i][j] != 0)
            {
                flag = 0;
            }
        }
    }
    if (cnt == row * col)
    {
        flag = 0;
    }

    if (flag == 1)
    {
        printf("Scalar Matrix");
    }
    else
    {
        printf("Not Scalar Matrix");
    }

    return 0;
}
```
#### Unit Matrix using 2D Array

```
#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int flag = 1;

    if (row != col)
    {
        flag = 0;
    }
    int cnt = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] == 0)
            {
                cnt++;
            }

            if (i == j)
            {
                if (a[i][j] != 1)
                {
                    flag = 0;
                }

                continue;
            }

            if (a[i][j] != 0)
            {
                flag = 0;
            }
        }
    }
    if (cnt == row * col)
    {
        flag = 0;
    }

    if (flag == 1)
    {
        printf("Unit Matrix");
    }
    else
    {
        printf("Not Unit Matrix");
    }

    return 0;
}

```
#### Secondary Unit Matrix using 2D Array
```
#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int flag = 1;

    if (row != col)
    {
        flag = 0;
    }
    int cnt = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] == 0)
            {
                cnt++;
            }

            if (i + j == col - 1)
            {
                if (a[i][j] != 1)
                {
                    flag = 0;
                }

                continue;
            }

            if (a[i][j] != 0)
            {
                flag = 0;
            }
        }
    }
    if (cnt == row * col)
    {
        flag = 0;
    }

    if (flag == 1)
    {
        printf("Secondary Unit Matrix");
    }
    else
    {
        printf("Not Secondary Unit Matrix");
    }

    return 0;
}

```