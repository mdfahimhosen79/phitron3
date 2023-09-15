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
