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

         if (st<10)
        {
            printf("%s\n",a);
        }
        if (st>10)
        {
            printf("%c%d%c\n",a[0],st-2,a[st-1]);
        }
        
        
        
    }


    

    return 0;
}
