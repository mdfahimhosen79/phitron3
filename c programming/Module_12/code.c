#include <stdio.h>
#include <string.h>
int main()
{
    char s[1005];
    scanf("%s",&s);

    int vow = 0;

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i]=='e')
        {
            vow++;
        }
        
    }

    printf("%d",vow);
    

    return 0;
}