#include <stdio.h>
int main(){
    int n,rem,rev=0;
    printf("enter the value of n");
    scanf("%d",&n);
    for(; n !=0; n=n/10){
        rem = n%10;
        rev = rev*10 + rem;
    }
    printf("reverse of number is:%d",rev);
    return 0;
}