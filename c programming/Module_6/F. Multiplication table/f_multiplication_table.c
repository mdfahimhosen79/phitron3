#include <stdio.h>
int main(){
    int n;
    int mul_tab;
    scanf("%d", &n);
    for(int i=1; i<=12; i++){
        mul_tab= n*i;
        printf("%d * %d = %d\n",n,i,mul_tab);
        
    }
     
    return 0;
}