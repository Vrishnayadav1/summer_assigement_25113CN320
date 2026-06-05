#include <stdio.h>

int main(){
    int n, n1=0, n2=1, n3;
    n3 = n1+n2;
    printf("enter the value of n");
    scanf("%d",&n);
    if(n ==1){
        printf("%d",n1);

    }
    else if(n==2){
        printf("%d",n2);
    }
    else{
        printf("fibbonaci seires");
        for(int i=1; i<=n; i++){
            printf("%d",n1);
            n2 =n1;
            n1 = n3;
            n3 = n1+n2;
        }
        printf("%d",n2);
    }
    return 0;

}