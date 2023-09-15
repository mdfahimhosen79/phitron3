#include <stdio.h>

int main()
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    long long int mul,sum,sub;
    sum = a + b;
    mul = a * b;
    sub = a - b;
    
    printf("%lld + %lld = %lld\n", a, b, sum);
    printf("%lld * %lld = %lld\n", a, b, mul);
    printf("%lld - %lld = %lld", a, b, sub);
    

    return 0;
}