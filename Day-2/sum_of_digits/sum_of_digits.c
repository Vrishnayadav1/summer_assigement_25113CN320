#include <stdio.h>
int main(){
    int n,rem,sum=0;
    printf("enter the value of n");
    scanf("%d",&n);
    for(; n !=0; n=n/10){
        rem = n%10;
        sum = sum + rem;
    }
    printf("sum of digits is:%d",sum);
    return 0;
}