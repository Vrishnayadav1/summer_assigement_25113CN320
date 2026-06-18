#include <stdio.h>
int main(){
    int n,rem,digit=0;
    printf("enter the value of n");
    scanf("%d",&n);
    for(;n!=0; n=n/10){
        rem = n%10;
        digit++;
    }
    printf("digits is %d",digit);
}