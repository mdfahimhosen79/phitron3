#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int k = 1;
    int s = n - 2;
    int sp = 0;
    int midsp = (n - 1) / 2;

    int os = midsp - 1;
    int os2 = 1;

    for (int i = 1; i <= n; i++)
    {
        if (i <= (n - 1) / 2)
        {
            for (int i = 1; i <= k; i++)
            {

                for (int j = 1; j <= sp; j++)
                {
                    printf(" ");
                }

                

                printf("\\");
                for (int j = 1; j <= s; j++)
                {
                    printf(" ");
                }

                s = s - 2;

                printf("/");
                for (int j = 1; j <= sp; j++)
                {
                    printf(" ");
                }

                sp++;
                
                printf("\n");
            }
        }
        else if (i == (n - 1) / 2 + 1)
        {
            for (int j = 1; j <= midsp; j++)
            {
                printf(" ");
            }
            printf("X");

             for (int j = 1; j <= midsp; j++)
            {
                printf(" ");
            }

            printf("\n");
        }
        else
        {

            for (int i = 1; i <= k; i++)
            {
                for (int j = 1; j <= os; j++)
                {
                    printf(" ");
                }
                
                printf("/");
                for (int j = 1; j <= os2; j++)
                {
                    printf(" ");
                }
                os2 = os2 + 2;

                printf("\\");

                for (int j = 1; j <= os; j++)
                {
                    printf(" ");
                }
                os--;
                printf("\n");
            }
        }
    }

    return 0;
}