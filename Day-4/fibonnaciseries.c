#include <stdio.h>
int main(){
    int n, n1=0, n2=1, n3;
    n3 = n1 + n2;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("fibonnaci series\n");
    for(int i=1; i<=n; i++){
        printf("%d",n1);
        n2 = n1;
        n1 = n3;
        n3 = n1 + n2;
    }
    printf("%d\n",n3);
    return 0;
}