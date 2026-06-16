#include <stdio.h>
int main(){
    int n;
    printf("enter the value of n");
    scanf("%d", &n);
    if(n>99 && n<1000){
        printf("three digits number");
    }
    else{
        printf("not three digit number");
    }
    return 0;
}