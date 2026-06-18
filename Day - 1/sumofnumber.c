#include <stdio.h>
int main(){
    int n;
    int sum = 0;
    printf("enter the value of n");
    scanf("%d",&n);
    for(int i=0; i<=n; i++){
        sum =sum + i;
    }   
    printf("the of numbers is %d",sum);
} 