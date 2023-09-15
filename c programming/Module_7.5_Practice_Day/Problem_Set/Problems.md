#### A. Summation
```
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        // printf("%d ",arr[i]);
        sum = sum + arr[i];
    }

    // printf("%d", sum);

    if (sum >= 0)
    {
        printf("%lld", sum);
    }
    else
    {
        long long int absolute = sum * (-1);
        printf("%lld", absolute);
    }

    return 0;
}



```
#### B. Searching
```
#include <stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int arr[n];
  int ans= -1;
  
  for(int i=0; i<n; i++){
     
      scanf("%d",&arr[i]);

    }
    
    int arry;
   scanf("%d",&arry);
    
    for(int i=0; i<n; i++){
     
      if(arry == arr[i]){
        ans=i;
        break;
    }
    
    }
    
    printf("%d",ans);
     
    

    

    return 0;  
}

```

#### C. Replacement
```
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {

        
       if (arr[i]>0)
       {
        arr[i] =1; 
       }
       else if (arr[i]<0)
       {
        arr[i] = 2;
       }
       printf("%d ", arr[i]);
       
    }

    return 0;
}

```

#### D. Positions in array

```
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        // printf("A[0] = %d\n", arr[i]);
        if (arr[i] <= 10)
        {
            printf("A[%d] = %d\n", i, arr[i]);
        }
    }

    return 0;
}

```

#### E. Lowest Number

```
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    int min = arr[0];
    int pos = 1;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] < min)
        {
            min = arr[i];
            pos = i + 1;
        }
    }

    printf("%d %d", min, pos);

    return 0;
}

```

#### F. Reversing

```
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

```